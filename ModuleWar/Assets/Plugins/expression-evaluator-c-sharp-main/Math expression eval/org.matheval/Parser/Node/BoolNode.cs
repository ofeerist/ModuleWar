using System;

namespace Plugins.Math_expression_eval.org.matheval.Parser.Node
{
    /// <summary>
    /// Boolnode, used to hold boolean value
    /// </summary>
    public class BoolNode : Node
    {
        /// <summary>
        /// Value
        /// </summary>
        public Boolean Value;

        /// <summary>
        /// Initializes a new instance structure to a specified type Boolean value
        /// </summary>
        /// <param name="value">value</param>
        public BoolNode(Boolean value) : base(typeof(Boolean))
        {
            this.Value = value;
        }
    }
}
