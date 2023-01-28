﻿/*
    The MIT License

    Copyright (c) 2021 MathEval.org

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
    THE SOFTWARE.
*/

using System;
using System.Collections.Generic;
using System.Threading;
using Plugins.Math_expression_eval.org.matheval.Common;

namespace Plugins.Math_expression_eval.org.matheval.Functions.Impl
{
    /// <summary>
    /// Returns the location of one text string inside another (case insensitive)
    /// SEARCH("A","ABC") -> 1
    /// SEARCH("A","AEHABC",4) -> 4
    /// </summary>
    public class searchFunction : IFunction
    {
        /// <summary>
        /// Get Information
        /// </summary>
        /// <returns>FunctionDefs</returns>
        public List<FunctionDef> GetInfo()
        {
            return new List<FunctionDef>{
                       new FunctionDef(Afe_Common.Const_Search, new System.Type[]{ typeof(string), typeof(string), typeof(decimal)}, typeof(decimal), 3),
                       new FunctionDef(Afe_Common.Const_Search, new System.Type[] { typeof(string), typeof(string)}, typeof(decimal), 2)};
        }

        /// <summary>
        /// Execute
        /// </summary>
        /// <param name="args">args</param>
        /// <param name="dc">dc</param>
        /// <returns>Value</returns>
        public Object Execute(Dictionary<string, Object> args, ExpressionContext dc)
        {
            int pos = searchFunc(args, dc);
            return pos >= 0 ? pos + 1 : pos;
        }

        /// <summary>
        /// Search Function
        /// </summary>
        /// <param name="args">args</param>
        /// <returns>Index</returns>
        public int searchFunc(Dictionary<string, Object> args, ExpressionContext dc)
        {
            int result;
            // because IndexOf uses the current culture info for string comparison
            var ci = Thread.CurrentThread.CurrentCulture;
            Thread.CurrentThread.CurrentCulture = dc.WorkingCulture;
            if (args.Count == 2)
            {
                result = Afe_Common.ToString(args[Afe_Common.Const_Key_Two], dc.WorkingCulture).ToLower(dc.WorkingCulture).IndexOf(Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture).ToLower(dc.WorkingCulture));
            }
            else
            {
                Decimal paramThree = Convert.ToDecimal(args[Afe_Common.Const_Key_Three], dc.WorkingCulture);
                String paramTwo = Afe_Common.ToString(args[Afe_Common.Const_Key_Two], dc.WorkingCulture);
                if (Decimal.ToInt32(paramThree) >= paramTwo.Length)
                {
                    return -1;
                }
                result = paramTwo.ToLower(dc.WorkingCulture).IndexOf(
                    Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture).ToLower(dc.WorkingCulture),
                    Decimal.ToInt32(paramThree) - 1);
            }

            Thread.CurrentThread.CurrentCulture = ci;
            return result;
        }
    }
}
