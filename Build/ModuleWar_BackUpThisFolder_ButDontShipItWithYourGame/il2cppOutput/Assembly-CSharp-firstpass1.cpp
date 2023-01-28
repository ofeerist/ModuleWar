#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef>
struct List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.DateTime[]
struct DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1;
// Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef[]
struct FunctionDefU5BU5D_t21153D26D3E9B98E6D27D25953E4DB8D740099F0;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// Plugins.Math_expression_eval.org.matheval.ExpressionContext
struct ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D;
// Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef
struct FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.floorFunction
struct floorFunction_tF1059EA2AED054A45D9546A01382AB5387E75641;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.intFunction
struct intFunction_tE321B0ECAA669F4296C47DD9C1DCF9E7586B5DA3;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.isblankFunction
struct isblankFunction_tB11BA3C79988AD26F9A5E66D4F69C23DAA1E8AF7;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.isnumberFunction
struct isnumberFunction_t444A2F23D9E2615D3607F6BF38C672AAED5FDB5A;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.leftFunction
struct leftFunction_t57A5A43FF585695F001675F65ADDD7ED10399632;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.lenFunction
struct lenFunction_tBD7694B446ACBE56C954C5A4D93350C27EC473C6;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.lnFunction
struct lnFunction_tCF7AEAA04BFF3614F7C77F04EB9237A2BAE9379B;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.log10Function
struct log10Function_tD4F19626593EE5FA54D161896E1BEEE5065085A8;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.lowerFunction
struct lowerFunction_t50463438FAF250D5A726F9C273BD66E4AFBEAB6C;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.lpadFunction
struct lpadFunction_tE52A41DEF7790953A305C0FB78FB6211083A399C;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.maxFunction
struct maxFunction_t0E9A2021D2313FD946945A1085EEA2F4B13E2520;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.midFunction
struct midFunction_t86178B37794001A2FFA9BD1EFC9BC999CC7E33FF;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.minFunction
struct minFunction_tD8DECFB060E1BF1A095D98F7D2C081B8603CBC87;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.modFunction
struct modFunction_t23F260E4479F215BC85F133467A95E7038B0452F;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.notFunction
struct notFunction_t70C8820E426548FB308E41039E619C63FDE39998;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.orFunction
struct orFunction_t75DFE6A5F29612BC3AB1477264960D01A50BB81A;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.piFunction
struct piFunction_t248C72C737C3FF80F84D1EFF43AE19C9DC8B8167;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.powerFunction
struct powerFunction_t60E05DE18AC0FAEA6A41A4C4E91D60BC613C4219;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.properFunction
struct properFunction_tFED8D6F7BA32E5522B4AAFE24983FF06192006EC;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.radiansFunction
struct radiansFunction_t9E88F3A9BAE274FE6A06018345E11BA38B383D46;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.randFunction
struct randFunction_t9C95A3E6D9FF689702282C8E9A0AA9679943F4FD;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.replaceFunction
struct replaceFunction_t5C1F4BA940C036777737044AFE08ED4FAADF788D;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.reptFunction
struct reptFunction_t1A83549942FB71BF116285D89B62394D16721748;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.reverseFunction
struct reverseFunction_tB505D709107DE0D38DD6EE0CCCBAE448ACBBE8AE;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.rightFunction
struct rightFunction_tFCA60A66C1B7B3ECBECC9314910CD69124BD2CC4;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.roundFunction
struct roundFunction_tF561A7CB6F9800F25DA7C03C37464175712AAA08;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.rpadFunction
struct rpadFunction_t84BC2938FF28DE3E3E39CCFE98989143CFCC7A63;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.searchFunction
struct searchFunction_t6C11AAB37CB0B1FCB70C4240ABED3A7ED2C608F6;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.secFunction
struct secFunction_t9C3706093F3130BE1B15063064C0F957D90CFAE2;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.sinFunction
struct sinFunction_t84CBB275B5FA173ED1D8841C7102214E4E04E731;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.sinhFunction
struct sinhFunction_t172779535AA2ECE6382D57681456DD8DF8FF836F;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.sqrtFunction
struct sqrtFunction_t5978D14FCA2832A8A6C4FAF91B1EA174035BC89D;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.substituteFunction
struct substituteFunction_tD038C139618C3D06CB1EABD2DECCB86B5FDFDCF7;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.sumFunction
struct sumFunction_t24C4A24001C0A57ECB9EB780CC51DEA0A915AC5C;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.tanFunction
struct tanFunction_tA716117DFF8E5DAD5C1F92FF14539F881CC3A84D;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.tanhFunction
struct tanhFunction_tA6F919B74E808916D99254D3F45980368C5D1914;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.textFunction
struct textFunction_tBA331631FAF8410D3640600BC46337D39F649F38;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.todayFunction
struct todayFunction_tB40C0763E33DBBB654867105411CA66196631FDC;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.trimFunction
struct trimFunction_t256CD852D4F089DDE486BAE176FFAE28D28C8326;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.upperFunction
struct upperFunction_tB9FB75E77C60BDEBA636232176065C4BBE2E655A;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.valueFunction
struct valueFunction_tE12BA98196D04F8A369ED89A868EAC0A12B0A035;
// Plugins.Math_expression_eval.org.matheval.Functions.Impl.xorFunction
struct xorFunction_tEBBFD3AC8D1C21B99BC7C3593E6EC3F4EA143DDC;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral002FA734F396A64F8C5046EE2C130075495102FB;
IL2CPP_EXTERN_C String_t* _stringLiteral0509511F12B62E39B9F2DB9A7CCB47930F372A58;
IL2CPP_EXTERN_C String_t* _stringLiteral076BDAA4817EFAF09D4E20A7F06B21FFD16F97AC;
IL2CPP_EXTERN_C String_t* _stringLiteral0953B51C96E84CE0F27B7E34EDA5518C288ACCFC;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7019FD02F046E7D6B83B4875FB843AAC668F3F;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral0C40A291CA9975AA15230BCF5FB7769571AAC49F;
IL2CPP_EXTERN_C String_t* _stringLiteral0CD979583B209CE71603EFC4A398E6A9EFA8D872;
IL2CPP_EXTERN_C String_t* _stringLiteral12CE2A4DA07ABE8B5BF2AE76D5E68472AC900A1D;
IL2CPP_EXTERN_C String_t* _stringLiteral136B540A8630F1606A6B94CE48B975D13A72971C;
IL2CPP_EXTERN_C String_t* _stringLiteral13B1B956E2F73D7942D59A9A0BC6BAC295CC8AB3;
IL2CPP_EXTERN_C String_t* _stringLiteral19C424911F8C3B3EBA7852958205385A83AD847F;
IL2CPP_EXTERN_C String_t* _stringLiteral1A94409FDC67D5A5F00288CC0228D6F553510291;
IL2CPP_EXTERN_C String_t* _stringLiteral1A9B25F4DFE20C0AD18665BC9AF768F47F752B2D;
IL2CPP_EXTERN_C String_t* _stringLiteral1FEEE30ACD8AF48C0493BC7000C458744C94C1BA;
IL2CPP_EXTERN_C String_t* _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
IL2CPP_EXTERN_C String_t* _stringLiteral21235A609CD03958F369B2A11AA494579DBCBE98;
IL2CPP_EXTERN_C String_t* _stringLiteral21E340F099828A89089729B71F1867A9116ED903;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral266A6E70F3BC9E04A2BC6274C2A8820535A50A1E;
IL2CPP_EXTERN_C String_t* _stringLiteral2684E74084B3F2D1796B7F69531DC22C93BF40D6;
IL2CPP_EXTERN_C String_t* _stringLiteral2A103E06568D35BF858F440D893690463B449681;
IL2CPP_EXTERN_C String_t* _stringLiteral32A4C1DE6F6D9EDC5D98B904B0B3D876D65D8AA0;
IL2CPP_EXTERN_C String_t* _stringLiteral32D308F08E201660A1A1B244F9AF831CDBFC2635;
IL2CPP_EXTERN_C String_t* _stringLiteral36E8625283BBFEFA794C39804CE3DD66EB3E6F91;
IL2CPP_EXTERN_C String_t* _stringLiteral37DA9F8ADE23EC273C689548EB4611D6C34D76B7;
IL2CPP_EXTERN_C String_t* _stringLiteral3C4AA5E9A9C38F3EF875F663CD6FDDC8554A3707;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral499284EE1D3CD7FE549A05AE5F4E78D079B96018;
IL2CPP_EXTERN_C String_t* _stringLiteral50A8863477B395531AE591FC12CCA3FC439B5955;
IL2CPP_EXTERN_C String_t* _stringLiteral50F39E434D2F5790A2F8998AC61DFE974815FC8C;
IL2CPP_EXTERN_C String_t* _stringLiteral55DC575EB77F0A4306F83A44BFCC0CAB8F2F011E;
IL2CPP_EXTERN_C String_t* _stringLiteral5C1C348FF1EEBE8D57B7D50687C655E709C2E3B6;
IL2CPP_EXTERN_C String_t* _stringLiteral5ED91F26D3CAE38A5CB5F4A3F915218E4EDD275C;
IL2CPP_EXTERN_C String_t* _stringLiteral5F98A5980639C72FFCA171EA5E7F1AEA771C5D64;
IL2CPP_EXTERN_C String_t* _stringLiteral63FEAE5081ABFB719642D387AE43B7D4DFB3CFEB;
IL2CPP_EXTERN_C String_t* _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteral763CDA637534E4F5C4969BBA9CC80CC5F632539D;
IL2CPP_EXTERN_C String_t* _stringLiteral776837ADD4231179FC45FB2B6EF6516AF53A8491;
IL2CPP_EXTERN_C String_t* _stringLiteral7A382E89779179088D3A5E349B98857C20D4F9B5;
IL2CPP_EXTERN_C String_t* _stringLiteral7B6E1D8E8002AFD3900AD43433DE22515284FFA9;
IL2CPP_EXTERN_C String_t* _stringLiteral80B9862F6FD4673A33E49F33829053D1CC06403D;
IL2CPP_EXTERN_C String_t* _stringLiteral80CF91C89EDD11BF59F8575DD51CCC9B6D2595FB;
IL2CPP_EXTERN_C String_t* _stringLiteral829163CBED8010666514D1FD8E6D26B8FB7A8733;
IL2CPP_EXTERN_C String_t* _stringLiteral86B0E273656BE438487F2D151159007988E0193E;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral8ABB647891A0F462BECD51763141D5CFE510BE63;
IL2CPP_EXTERN_C String_t* _stringLiteral8D6AF22BEAB42B204AD08BE568951640E7D33A65;
IL2CPP_EXTERN_C String_t* _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E;
IL2CPP_EXTERN_C String_t* _stringLiteral92C76723E0230A25352BC874455206F1E7410510;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral96FDDD630F69FFEBB34C3732D3BA2C3CC17A97BA;
IL2CPP_EXTERN_C String_t* _stringLiteral976C1823B99DB12B5A2AE13847CFFFE2F77D4903;
IL2CPP_EXTERN_C String_t* _stringLiteral9CB8920DB1128B58F5DB1857336743297CB545C8;
IL2CPP_EXTERN_C String_t* _stringLiteral9D40F1B51AA0CEAA15B307E54B4E8CBB55AA5F41;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralA24B7E606B330980535EC972B4425839CEB0D82B;
IL2CPP_EXTERN_C String_t* _stringLiteralA602B5D5A12025914129A13B67770AD3592E0B7F;
IL2CPP_EXTERN_C String_t* _stringLiteralA61B111B4AF41B97A8A4ADA7BA4887DAD155760C;
IL2CPP_EXTERN_C String_t* _stringLiteralADDBB2DEAEEECCEFF4E3E4B188E9F97B50EC64B8;
IL2CPP_EXTERN_C String_t* _stringLiteralAF7F6EDE1585B3A89D52469201CDF739F995DB55;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB24C0C3C5E68893774461D9F561B92C9CF402EB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB28450EC0D78500325D3950CEAA3C9C8C3BC6309;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
IL2CPP_EXTERN_C String_t* _stringLiteralC29737350F47E65B64743D7E597D04BC4F44CADC;
IL2CPP_EXTERN_C String_t* _stringLiteralC449882FDA6EDC362005905EC397E976EC6C450A;
IL2CPP_EXTERN_C String_t* _stringLiteralC566C8888ED6F47286ED0C1D468EDE11F98CC7FD;
IL2CPP_EXTERN_C String_t* _stringLiteralC58AAF9CDC78F491B75DA376DC76EC5040765AA6;
IL2CPP_EXTERN_C String_t* _stringLiteralC650AF132C4F5162F85D515A87DD4B73376B14F6;
IL2CPP_EXTERN_C String_t* _stringLiteralD1D9DC032B565EEA2F24B6ABF6BF08B69B5B8159;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralDD98345FBA2332AE17DA6E555ABA035F22F11320;
IL2CPP_EXTERN_C String_t* _stringLiteralDDDB22535A6F50B3C6EB4D5E7099332B7ED8B78A;
IL2CPP_EXTERN_C String_t* _stringLiteralDEA3F5044E13F19207D83873B64CD5C1E5385A9F;
IL2CPP_EXTERN_C String_t* _stringLiteralDEEFE2DA48C3C4F29D567569CAF0C32C979221B7;
IL2CPP_EXTERN_C String_t* _stringLiteralE14A6EEC12FF8B2873075C8BE5ECAEE83B8F49E9;
IL2CPP_EXTERN_C String_t* _stringLiteralE74BB6C7776CDB4379108C0CA92030964C3B7596;
IL2CPP_EXTERN_C String_t* _stringLiteralE7894C5A0DDFAD2880CC0A59586CC78907A5801B;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEDF7261789409A234DE3BB01784C2E64B45B8AE4;
IL2CPP_EXTERN_C String_t* _stringLiteralF9235819BB7F845AC1EA71756A61C2FE1FD7AC13;
IL2CPP_EXTERN_C String_t* _stringLiteralFB3C8855D5271BA6C817B04135DD7C1C4B65452A;
IL2CPP_EXTERN_C String_t* _stringLiteralFF4E65E292D23839E82C2708F932E9296E68DE96;
IL2CPP_EXTERN_C const RuntimeMethod* Afe_Common_DateDif_mECDB0FC17EAECEF0EE59DF418D0C0C8F6CF67BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* modFunction_Mod_m24B7D206D8EF20CF1B2E81A553938AF1CFAC2C4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* valueFunction_Execute_mD4583C1CC4B26ED6404B8143E2AD518043A57099_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* xorFunction_LogicalXor_mAE2756404E7587F7D27A818B9DDFB47183E1323F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef>
struct List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FunctionDefU5BU5D_t21153D26D3E9B98E6D27D25953E4DB8D740099F0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FunctionDefU5BU5D_t21153D26D3E9B98E6D27D25953E4DB8D740099F0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____dictionary_0;
};

// Plugins.Math_expression_eval.org.matheval.Common.Afe_Common
struct Afe_Common_tECE98281C321177EDA4252B320AC3020B43DB5D5  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef
struct FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA  : public RuntimeObject
{
	// System.String Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef::Name
	String_t* ___Name_0;
	// System.Type[] Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef::Args
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___Args_1;
	// System.Type Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef::ReturnType
	Type_t* ___ReturnType_2;
	// System.Int32 Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef::ParamCount
	int32_t ___ParamCount_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.floorFunction
struct floorFunction_tF1059EA2AED054A45D9546A01382AB5387E75641  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.intFunction
struct intFunction_tE321B0ECAA669F4296C47DD9C1DCF9E7586B5DA3  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.isblankFunction
struct isblankFunction_tB11BA3C79988AD26F9A5E66D4F69C23DAA1E8AF7  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.isnumberFunction
struct isnumberFunction_t444A2F23D9E2615D3607F6BF38C672AAED5FDB5A  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.leftFunction
struct leftFunction_t57A5A43FF585695F001675F65ADDD7ED10399632  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.lenFunction
struct lenFunction_tBD7694B446ACBE56C954C5A4D93350C27EC473C6  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.lnFunction
struct lnFunction_tCF7AEAA04BFF3614F7C77F04EB9237A2BAE9379B  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.log10Function
struct log10Function_tD4F19626593EE5FA54D161896E1BEEE5065085A8  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.lowerFunction
struct lowerFunction_t50463438FAF250D5A726F9C273BD66E4AFBEAB6C  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.lpadFunction
struct lpadFunction_tE52A41DEF7790953A305C0FB78FB6211083A399C  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.maxFunction
struct maxFunction_t0E9A2021D2313FD946945A1085EEA2F4B13E2520  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.midFunction
struct midFunction_t86178B37794001A2FFA9BD1EFC9BC999CC7E33FF  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.minFunction
struct minFunction_tD8DECFB060E1BF1A095D98F7D2C081B8603CBC87  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.modFunction
struct modFunction_t23F260E4479F215BC85F133467A95E7038B0452F  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.notFunction
struct notFunction_t70C8820E426548FB308E41039E619C63FDE39998  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.orFunction
struct orFunction_t75DFE6A5F29612BC3AB1477264960D01A50BB81A  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.piFunction
struct piFunction_t248C72C737C3FF80F84D1EFF43AE19C9DC8B8167  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.powerFunction
struct powerFunction_t60E05DE18AC0FAEA6A41A4C4E91D60BC613C4219  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.properFunction
struct properFunction_tFED8D6F7BA32E5522B4AAFE24983FF06192006EC  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.radiansFunction
struct radiansFunction_t9E88F3A9BAE274FE6A06018345E11BA38B383D46  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.randFunction
struct randFunction_t9C95A3E6D9FF689702282C8E9A0AA9679943F4FD  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.replaceFunction
struct replaceFunction_t5C1F4BA940C036777737044AFE08ED4FAADF788D  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.reptFunction
struct reptFunction_t1A83549942FB71BF116285D89B62394D16721748  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.reverseFunction
struct reverseFunction_tB505D709107DE0D38DD6EE0CCCBAE448ACBBE8AE  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.rightFunction
struct rightFunction_tFCA60A66C1B7B3ECBECC9314910CD69124BD2CC4  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.roundFunction
struct roundFunction_tF561A7CB6F9800F25DA7C03C37464175712AAA08  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.rpadFunction
struct rpadFunction_t84BC2938FF28DE3E3E39CCFE98989143CFCC7A63  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.searchFunction
struct searchFunction_t6C11AAB37CB0B1FCB70C4240ABED3A7ED2C608F6  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.secFunction
struct secFunction_t9C3706093F3130BE1B15063064C0F957D90CFAE2  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.sinFunction
struct sinFunction_t84CBB275B5FA173ED1D8841C7102214E4E04E731  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.sinhFunction
struct sinhFunction_t172779535AA2ECE6382D57681456DD8DF8FF836F  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.sqrtFunction
struct sqrtFunction_t5978D14FCA2832A8A6C4FAF91B1EA174035BC89D  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.substituteFunction
struct substituteFunction_tD038C139618C3D06CB1EABD2DECCB86B5FDFDCF7  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.sumFunction
struct sumFunction_t24C4A24001C0A57ECB9EB780CC51DEA0A915AC5C  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.tanFunction
struct tanFunction_tA716117DFF8E5DAD5C1F92FF14539F881CC3A84D  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.tanhFunction
struct tanhFunction_tA6F919B74E808916D99254D3F45980368C5D1914  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.textFunction
struct textFunction_tBA331631FAF8410D3640600BC46337D39F649F38  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.todayFunction
struct todayFunction_tB40C0763E33DBBB654867105411CA66196631FDC  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.trimFunction
struct trimFunction_t256CD852D4F089DDE486BAE176FFAE28D28C8326  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.upperFunction
struct upperFunction_tB9FB75E77C60BDEBA636232176065C4BBE2E655A  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.valueFunction
struct valueFunction_tE12BA98196D04F8A369ED89A868EAC0A12B0A035  : public RuntimeObject
{
};

// Plugins.Math_expression_eval.org.matheval.Functions.Impl.xorFunction
struct xorFunction_tEBBFD3AC8D1C21B99BC7C3593E6EC3F4EA143DDC  : public RuntimeObject
{
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Object>
struct Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Plugins.Math_expression_eval.org.matheval.ExpressionContext
struct ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D  : public RuntimeObject
{
	// System.Int32 Plugins.Math_expression_eval.org.matheval.ExpressionContext::Scale
	int32_t ___Scale_0;
	// System.MidpointRounding Plugins.Math_expression_eval.org.matheval.ExpressionContext::Rd
	int32_t ___Rd_1;
	// System.DateTime Plugins.Math_expression_eval.org.matheval.ExpressionContext::DateSystem
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___DateSystem_2;
	// System.String Plugins.Math_expression_eval.org.matheval.ExpressionContext::DateFormat
	String_t* ___DateFormat_3;
	// System.String Plugins.Math_expression_eval.org.matheval.ExpressionContext::DatetimeFormat
	String_t* ___DatetimeFormat_4;
	// System.String Plugins.Math_expression_eval.org.matheval.ExpressionContext::TimeFormat
	String_t* ___TimeFormat_5;
	// System.Int32[] Plugins.Math_expression_eval.org.matheval.ExpressionContext::Weekends
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Weekends_6;
	// System.DateTime[] Plugins.Math_expression_eval.org.matheval.ExpressionContext::Holidays
	DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* ___Holidays_7;
	// System.Globalization.CultureInfo Plugins.Math_expression_eval.org.matheval.ExpressionContext::WorkingCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___WorkingCulture_8;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef>::.ctor()
inline void List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef::.ctor(System.String,System.Type[],System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85 (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* __this, String_t* ___name0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___args1, Type_t* ___returnType2, int32_t ___paramCount3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef>::Add(T)
inline void List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* __this, FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*, FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Decimal Plugins.Math_expression_eval.org.matheval.Functions.Impl.floorFunction::Floor(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F floorFunction_Floor_mEEFCAD113A0CAB271FD1001861B85FA4032ACC13 (floorFunction_tF1059EA2AED054A45D9546A01382AB5387E75641* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Decimal Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::ToDecimal(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E (RuntimeObject* ___value0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___cultureInfo1, const RuntimeMethod* method) ;
// System.Decimal System.Math::Floor(System.Decimal)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Math_Floor_mC2E0E7994B307ED1B87D34A6AC5FB6E72A89B1B1_inline (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Division_mC679B917681D7B7D7791E0017A6A51AA76C1C72A (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m36AF6C64BC52B8D609218F24BB36A549F93EA452 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.String Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::ToString(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11 (RuntimeObject* ___value0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___cultureInfo1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.Int32 System.Decimal::ToInt32(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Decimal_ToInt32_m683C06E2C4596EC3BD7106B222AAA161D07F423A (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d0, const RuntimeMethod* method) ;
// System.String Plugins.Math_expression_eval.org.matheval.Functions.Impl.leftFunction::Left(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* leftFunction_Left_m71D909D50B0374D2BDBDF88E98EE1F4885DA23E8 (leftFunction_t57A5A43FF585695F001675F65ADDD7ED10399632* __this, String_t* ___stringValue0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Double System.Decimal::ToDouble(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Decimal_ToDouble_mE406587545238A39E46DEB3998E3D08878B1CA9B (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d0, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.String::ToLower(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E (String_t* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture0, const RuntimeMethod* method) ;
// System.String Plugins.Math_expression_eval.org.matheval.Functions.Impl.lpadFunction::LeftPad(System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* lpadFunction_LeftPad_m897D88C76AA5B0B250F21E25837E4B102CC9EF37 (lpadFunction_tE52A41DEF7790953A305C0FB78FB6211083A399C* __this, String_t* ___stringValue0, int32_t ___length1, String_t* ___padString2, const RuntimeMethod* method) ;
// System.Char System.Char::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Char_Parse_mF6DE281178725F2B4A13DF321846C0DD4CB36D23 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method) ;
// System.Boolean Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::IsList(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Afe_Common_IsList_m5B02243ADEF92A08B0E619EABF456231210523FB (RuntimeObject* ___o0, const RuntimeMethod* method) ;
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.maxFunction::MaxList(System.Collections.IEnumerable,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* maxFunction_MaxList_m9755A5D7271AFF3AF92C482CF6011752D4427930 (maxFunction_t0E9A2021D2313FD946945A1085EEA2F4B13E2520* __this, RuntimeObject* ___arg0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) ;
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.maxFunction::Max(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* maxFunction_Max_mF9BA6F9DDB4510F19A66E6A3C168BAF511EF3044 (maxFunction_t0E9A2021D2313FD946945A1085EEA2F4B13E2520* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Values()
inline ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::GetEnumerator()
inline Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504 ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3 (ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504 (*) (ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5 (Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_inline (Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.Boolean System.Decimal::op_GreaterThan(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_op_GreaterThan_m2C5A01FFBCF3858E8EF62C569D993EDC1CBC60FA (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948 (Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.Boolean Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::IsNumber(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Afe_Common_IsNumber_m4E55CE0DE9F1AC1E496F4BC0DE0F39BF50A5AEF0 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.String Plugins.Math_expression_eval.org.matheval.Functions.Impl.midFunction::Mid(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* midFunction_Mid_m329575A3C0CEC804997DA67C6C5B8373F2084CDF (midFunction_t86178B37794001A2FFA9BD1EFC9BC999CC7E33FF* __this, String_t* ___stringValue0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.minFunction::MinList(System.Collections.IEnumerable,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* minFunction_MinList_m6FF658D8B4F88D6E2D98D495993DB559D991C8D9 (minFunction_tD8DECFB060E1BF1A095D98F7D2C081B8603CBC87* __this, RuntimeObject* ___arg0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) ;
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.minFunction::Min(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* minFunction_Min_mB483D9A5A58E78596841DE114EF2490103FB0D88 (minFunction_tD8DECFB060E1BF1A095D98F7D2C081B8603CBC87* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) ;
// System.Boolean System.Decimal::op_LessThan(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_op_LessThan_m97DE1A1C431696A13299452BF9C789F3DD4D19B2 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Decimal Plugins.Math_expression_eval.org.matheval.Functions.Impl.modFunction::Mod(System.Object,System.Object,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F modFunction_Mod_m24B7D206D8EF20CF1B2E81A553938AF1CFAC2C4F (modFunction_t23F260E4479F215BC85F133467A95E7038B0452F* __this, RuntimeObject* ___left0, RuntimeObject* ___right1, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc2, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Subtraction(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Subtraction_m50F5DC718BD003A09A5BC62BAA3DECD0745AD3F1 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Parse_mE3D8860431C87FBE1D7C6EACA665548AFE144F38 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Plugins.Math_expression_eval.org.matheval.Functions.Impl.orFunction::LogicalOr(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool orFunction_LogicalOr_m70771D780101DBB042D011BF5123265CE2BBF2F4 (orFunction_t75DFE6A5F29612BC3AB1477264960D01A50BB81A* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.String Plugins.Math_expression_eval.org.matheval.Functions.Impl.properFunction::ToTitleCase(System.String,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* properFunction_ToTitleCase_m61824CFE18332629080B47F38314C6F2821B8CC1 (properFunction_tFED8D6F7BA32E5522B4AAFE24983FF06192006EC* __this, String_t* ___phrase0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.String System.String::ToUpper(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_mFC5C17C8BFF52540CC7A73E36DFC9617281325D1 (String_t* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_mC089D0AF6A28E017DE6F2F0966D8EBEBFE2DAAF7 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* __this, int32_t ___lo0, int32_t ___mid1, int32_t ___hi2, bool ___isNegative3, uint8_t ___scale4, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String Plugins.Math_expression_eval.org.matheval.Functions.Impl.reverseFunction::Reverse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* reverseFunction_Reverse_mE74B98AA66E4D4F92667A66CBBFBB0C9FA3E6A6A (reverseFunction_tB505D709107DE0D38DD6EE0CCCBAE448ACBBE8AE* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String Plugins.Math_expression_eval.org.matheval.Functions.Impl.rightFunction::Right(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* rightFunction_Right_m0EA391BE54AE7E32A08D57ADCC15DFA05F0C041E (rightFunction_tFCA60A66C1B7B3ECBECC9314910CD69124BD2CC4* __this, String_t* ___stringValue0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Decimal System.Math::Round(System.Decimal,System.Int32,System.MidpointRounding)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Math_Round_mD8F335591E17FDCCA2A12475B79B73E28BA2E3B2_inline (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d0, int32_t ___decimals1, int32_t ___mode2, const RuntimeMethod* method) ;
// System.String Plugins.Math_expression_eval.org.matheval.Functions.Impl.rpadFunction::RightPad(System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* rpadFunction_RightPad_mD0D0B18ED8EE0000A36D687AC3DEF1EA7B90021B (rpadFunction_t84BC2938FF28DE3E3E39CCFE98989143CFCC7A63* __this, String_t* ___stringValue0, int32_t ___length1, String_t* ___padString2, const RuntimeMethod* method) ;
// System.String System.String::PadRight(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadRight_m7C573780177B3246D67D860C2A75AEF5832C7543 (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method) ;
// System.Int32 Plugins.Math_expression_eval.org.matheval.Functions.Impl.searchFunction::searchFunc(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t searchFunction_searchFunc_m7873A7D3380724A29D6C080F4ED678DCB1974963 (searchFunction_t6C11AAB37CB0B1FCB70C4240ABED3A7ED2C608F6* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) ;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB (const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* Thread_get_CurrentCulture_mD011FDBB62CA34E83A1D1916628826ADAC85E7A6 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::set_CurrentCulture(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_CurrentCulture_mF3DAE075752A66909692C46156765EECE6F2BE58 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Decimal Plugins.Math_expression_eval.org.matheval.Functions.Impl.sumFunction::SumList(System.Collections.IEnumerable,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F sumFunction_SumList_m89B1A9C42BB6F476E282F863CAA605289D590566 (sumFunction_t24C4A24001C0A57ECB9EB780CC51DEA0A915AC5C* __this, RuntimeObject* ___arg0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) ;
// System.Decimal Plugins.Math_expression_eval.org.matheval.Functions.Impl.sumFunction::Sum(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F sumFunction_Sum_mDA0F447CED534F03A5C8F840536B26D39411340A (sumFunction_t24C4A24001C0A57ECB9EB780CC51DEA0A915AC5C* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Addition(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Addition_m79AD1C3ED1E6345D50110EA4D20DAE724724B9DA (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Decimal::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Decimal Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::Round(System.Object,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99 (RuntimeObject* ___value0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) ;
// System.Int32 System.Decimal::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66 (String_t* ___input0, String_t* ___pattern1, String_t* ___replacement2, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Implicit_mE5A73A41E53B29C29A49359A2B5D0615A867B7C7 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Decimal::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Decimal_ToString_m2600674D09D44940FA0AAA00A87858E741671F4E (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Today()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Today_mC32D6B4A0EBD6BFBC0E978BEBA48CB4DA5E38FB0 (const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean Plugins.Math_expression_eval.org.matheval.Functions.Impl.xorFunction::LogicalXor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool xorFunction_LogicalXor_mAE2756404E7587F7D27A818B9DDFB47183E1323F (xorFunction_tEBBFD3AC8D1C21B99BC7C3593E6EC3F4EA143DDC* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mCC5DC13CDF7E338DB15699432F28477C7DF52DE1 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Days_m1317F48F8D9849E161D1CDBEB5CA08344EAAC107 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::DateDif(System.DateTime,System.DateTime,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Afe_Common_DateDif_mECDB0FC17EAECEF0EE59DF418D0C0C8F6CF67BCB (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___startDate0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___endDate1, String_t* ___unit2, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddYears(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddYears_mA68B1642A84DA30E21F6279BE5196FC07B578DEE (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddMonths(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddMonths_mF426338945B097998273C1AD421CF809035660AD (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___months0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::Floor(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_Floor_m072DDB5250CDE8063EE0AD7D2D02D25B643A943B (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::Round(System.Decimal,System.Int32,System.MidpointRounding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_Round_m93946599C8A8D50083D6F27D168B756E23A041DF (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d0, int32_t ___decimals1, int32_t ___mode2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.floorFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* floorFunction_GetInfo_m803FD94D76EDC3190250F86746D3A8D56EA3855D (floorFunction_tF1059EA2AED054A45D9546A01382AB5387E75641* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEA3F5044E13F19207D83873B64CD5C1E5385A9F);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//            new FunctionDef(Afe_Common.Const_Floor, new System.Type[]{ typeof(decimal) }, typeof(decimal), 1),
		//            new FunctionDef(Afe_Common.Const_Floor, new System.Type[] { typeof(decimal), typeof(decimal) }, typeof(decimal), 2)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteralDEA3F5044E13F19207D83873B64CD5C1E5385A9F, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = L_10;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_13);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = L_11;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_16);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_17, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_19 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_19, _stringLiteralDEA3F5044E13F19207D83873B64CD5C1E5385A9F, L_14, L_18, 2, NULL);
		NullCheck(L_9);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_9, L_19, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_20 = V_0;
		return L_20;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.floorFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* floorFunction_Execute_m5CAE4A63D7D3B3EACEF69D8A176E24F706912E12 (floorFunction_tF1059EA2AED054A45D9546A01382AB5387E75641* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.Floor(args, dc);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_1 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2;
		L_2 = floorFunction_Floor_mEEFCAD113A0CAB271FD1001861B85FA4032ACC13(__this, L_0, L_1, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3 = L_2;
		RuntimeObject* L_4 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Decimal Plugins.Math_expression_eval.org.matheval.Functions.Impl.floorFunction::Floor(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F floorFunction_Floor_mEEFCAD113A0CAB271FD1001861B85FA4032ACC13 (floorFunction_tF1059EA2AED054A45D9546A01382AB5387E75641* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (args.Count == 1)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA(L_0, Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		// return Math.Floor(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ___args0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_2, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_4 = ___dc1;
		NullCheck(L_4);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = L_4->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_6;
		L_6 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_3, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_7;
		L_7 = Math_Floor_mC2E0E7994B307ED1B87D34A6AC5FB6E72A89B1B1_inline(L_6, NULL);
		return L_7;
	}

IL_0025:
	{
		// return Math.Floor(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture) / Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Two], dc.WorkingCulture)) * Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Two], dc.WorkingCulture);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = ___args0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_8, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_10 = ___dc1;
		NullCheck(L_10);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11 = L_10->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12;
		L_12 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_9, L_11, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13 = ___args0;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_13, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_15 = ___dc1;
		NullCheck(L_15);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_16 = L_15->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_17;
		L_17 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_14, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_18;
		L_18 = Decimal_op_Division_mC679B917681D7B7D7791E0017A6A51AA76C1C72A(L_12, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_19;
		L_19 = Math_Floor_mC2E0E7994B307ED1B87D34A6AC5FB6E72A89B1B1_inline(L_18, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_20 = ___args0;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_20, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_22 = ___dc1;
		NullCheck(L_22);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_23 = L_22->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_24;
		L_24 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_21, L_23, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_25;
		L_25 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_19, L_24, NULL);
		return L_25;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.floorFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void floorFunction__ctor_m0F26823A483D5BBB281072F61931FAB72F7298E1 (floorFunction_tF1059EA2AED054A45D9546A01382AB5387E75641* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.intFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* intFunction_GetInfo_mD5FEDE05927A828CAC4233A69AAC0A6A69F96295 (intFunction_tE321B0ECAA669F4296C47DD9C1DCF9E7586B5DA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Int, new System.Type[]{ typeof(decimal) }, typeof(decimal), 1)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.intFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* intFunction_Execute_m77060120F608F2B251604792925E740D05444E1C (intFunction_tE321B0ECAA669F4296C47DD9C1DCF9E7586B5DA3* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToInt32(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Convert_ToInt32_m36AF6C64BC52B8D609218F24BB36A549F93EA452(L_4, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.intFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void intFunction__ctor_m0F1129784D4C7D302F00BDAEDEED55AB48489FE4 (intFunction_tE321B0ECAA669F4296C47DD9C1DCF9E7586B5DA3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.isblankFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* isblankFunction_GetInfo_mB44AF670F513CA51C077C441CE22F1BE90F58DAA (isblankFunction_tB11BA3C79988AD26F9A5E66D4F69C23DAA1E8AF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19C424911F8C3B3EBA7852958205385A83AD847F);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//            new FunctionDef(Afe_Common.Const_Isblank, new System.Type[]{ typeof(Object) }, typeof(Boolean), 1)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral19C424911F8C3B3EBA7852958205385A83AD847F, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.isblankFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* isblankFunction_Execute_m3B1B520082412FE2DED661C3F570BF13EFCAA8ED (isblankFunction_tB11BA3C79988AD26F9A5E66D4F69C23DAA1E8AF7* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.IsNullOrEmpty(Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		String_t* L_4;
		L_4 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_1, L_3, NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.isblankFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void isblankFunction__ctor_m94C94FB8C98B7E54D3909C30801FCDDFC2054277 (isblankFunction_tB11BA3C79988AD26F9A5E66D4F69C23DAA1E8AF7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.isnumberFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* isnumberFunction_GetInfo_m645CAD3534EFC505D62566D007B9E29976F099C2 (isnumberFunction_t444A2F23D9E2615D3607F6BF38C672AAED5FDB5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C1C348FF1EEBE8D57B7D50687C655E709C2E3B6);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef> { new FunctionDef(Afe_Common.Const_Isnumber, new System.Type[] { typeof(object) }, typeof(Boolean), 1) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral5C1C348FF1EEBE8D57B7D50687C655E709C2E3B6, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.isnumberFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* isnumberFunction_Execute_mB40B3C0F7BAEA857EA9408E9F9055F2A27B746A8 (isnumberFunction_t444A2F23D9E2615D3607F6BF38C672AAED5FDB5A* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B0E273656BE438487F2D151159007988E0193E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Regex rg = new Regex("^-?\\d*(\\.\\d+)+$");
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_0, _stringLiteral86B0E273656BE438487F2D151159007988E0193E, NULL);
		// return rg.IsMatch(Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___args0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_1, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_3 = ___dc1;
		NullCheck(L_3);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4 = L_3->___WorkingCulture_8;
		String_t* L_5;
		L_5 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_2, L_4, NULL);
		NullCheck(L_0);
		bool L_6;
		L_6 = Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49(L_0, L_5, NULL);
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.isnumberFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void isnumberFunction__ctor_mB5BC5F160D163C89DE36B59342367CABBC286417 (isnumberFunction_t444A2F23D9E2615D3607F6BF38C672AAED5FDB5A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.leftFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* leftFunction_GetInfo_m340105344FB9DD6239EBC809AADE0A4E056D5B0D (leftFunction_t57A5A43FF585695F001675F65ADDD7ED10399632* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef> { new FunctionDef(Afe_Common.Const_LEFT, new System.Type[] { typeof(string), typeof(decimal) }, typeof(string), 2) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_11 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_11, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, L_6, L_10, 2, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_11, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_12 = V_0;
		return L_12;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.leftFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* leftFunction_Execute_m0C05DC69DC3CBA2799E42C4269973AF79A7577E7 (leftFunction_t57A5A43FF585695F001675F65ADDD7ED10399632* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.Left(Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture), Decimal.ToInt32(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Two], dc.WorkingCulture)));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		String_t* L_4;
		L_4 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_1, L_3, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___args0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_5, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_7 = ___dc1;
		NullCheck(L_7);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8 = L_7->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9;
		L_9 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_6, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Decimal_ToInt32_m683C06E2C4596EC3BD7106B222AAA161D07F423A(L_9, NULL);
		String_t* L_11;
		L_11 = leftFunction_Left_m71D909D50B0374D2BDBDF88E98EE1F4885DA23E8(__this, L_4, L_10, NULL);
		return L_11;
	}
}
// System.String Plugins.Math_expression_eval.org.matheval.Functions.Impl.leftFunction::Left(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* leftFunction_Left_m71D909D50B0374D2BDBDF88E98EE1F4885DA23E8 (leftFunction_t57A5A43FF585695F001675F65ADDD7ED10399632* __this, String_t* ___stringValue0, int32_t ___count1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	String_t* G_B2_1 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	String_t* G_B4_2 = NULL;
	{
		// if (!string.IsNullOrEmpty(stringValue))
		String_t* L_0 = ___stringValue0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		// return stringValue.Substring(0, count > stringValue.Length ? stringValue.Length : count);
		String_t* L_2 = ___stringValue0;
		int32_t L_3 = ___count1;
		String_t* L_4 = ___stringValue0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		G_B2_0 = 0;
		G_B2_1 = L_2;
		if ((((int32_t)L_3) > ((int32_t)L_5)))
		{
			G_B3_0 = 0;
			G_B3_1 = L_2;
			goto IL_0016;
		}
	}
	{
		int32_t L_6 = ___count1;
		G_B4_0 = L_6;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_001c;
	}

IL_0016:
	{
		String_t* L_7 = ___stringValue0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		G_B4_0 = L_8;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_001c:
	{
		NullCheck(G_B4_2);
		String_t* L_9;
		L_9 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(G_B4_2, G_B4_1, G_B4_0, NULL);
		return L_9;
	}

IL_0022:
	{
		// return string.Empty;
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_10;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.leftFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void leftFunction__ctor_m54321666FD2490FD2E191F6F04F52EA2DEDDC089 (leftFunction_t57A5A43FF585695F001675F65ADDD7ED10399632* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.lenFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* lenFunction_GetInfo_m72F231E924A4EF69D5A88A414C223D0A3C5292A2 (lenFunction_tBD7694B446ACBE56C954C5A4D93350C27EC473C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50F39E434D2F5790A2F8998AC61DFE974815FC8C);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef> { new FunctionDef(Afe_Common.Const_Len, new System.Type[] { typeof(string) }, typeof(decimal), 1) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral50F39E434D2F5790A2F8998AC61DFE974815FC8C, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.lenFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* lenFunction_Execute_mEDB52B1529275F05BB4850DFDCA550D52043B76F (lenFunction_tBD7694B446ACBE56C954C5A4D93350C27EC473C6* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture).Length;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		String_t* L_4;
		L_4 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_1, L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.lenFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lenFunction__ctor_m2BC2385FB96D6AFA1469DD7831DEEB0D26DED05B (lenFunction_tBD7694B446ACBE56C954C5A4D93350C27EC473C6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.lnFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* lnFunction_GetInfo_m291274B150AC195BC10E342106175BBAD9C290F9 (lnFunction_tCF7AEAA04BFF3614F7C77F04EB9237A2BAE9379B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F98A5980639C72FFCA171EA5E7F1AEA771C5D64);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Ln, new System.Type[]{ typeof(decimal) }, typeof(decimal), 1)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral5F98A5980639C72FFCA171EA5E7F1AEA771C5D64, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.lnFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* lnFunction_Execute_m1673B12202F62FD292D8ABA3C93D3A030704D1BC (lnFunction_tCF7AEAA04BFF3614F7C77F04EB9237A2BAE9379B* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Double result = Math.Log(Decimal.ToDouble(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture)));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = Decimal_ToDouble_mE406587545238A39E46DEB3998E3D08878B1CA9B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = log(L_5);
		// return Convert.ToDecimal(result, dc.WorkingCulture);
		double L_7 = L_6;
		RuntimeObject* L_8 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_7);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_9 = ___dc1;
		NullCheck(L_9);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10 = L_9->___WorkingCulture_8;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11;
		L_11 = Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA(L_8, L_10, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12 = L_11;
		RuntimeObject* L_13 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.lnFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lnFunction__ctor_m3406DFDE58766C295FD3E0DC9FC4BF8821D237F0 (lnFunction_tCF7AEAA04BFF3614F7C77F04EB9237A2BAE9379B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.log10Function::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* log10Function_GetInfo_m0B30534C3F28FF44FA6D80BE0F9020A60D5A9AC1 (log10Function_tD4F19626593EE5FA54D161896E1BEEE5065085A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2684E74084B3F2D1796B7F69531DC22C93BF40D6);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Log10, new System.Type[]{ typeof(decimal) }, typeof(decimal), 1)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral2684E74084B3F2D1796B7F69531DC22C93BF40D6, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.log10Function::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* log10Function_Execute_mDD89835F895BCCA12AA02405D6B6B8A30939C9B2 (log10Function_tD4F19626593EE5FA54D161896E1BEEE5065085A8* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Double result = Math.Log10(Decimal.ToDouble(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture)));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = Decimal_ToDouble_mE406587545238A39E46DEB3998E3D08878B1CA9B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = log10(L_5);
		// return Convert.ToDecimal(result, dc.WorkingCulture);
		double L_7 = L_6;
		RuntimeObject* L_8 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_7);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_9 = ___dc1;
		NullCheck(L_9);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10 = L_9->___WorkingCulture_8;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11;
		L_11 = Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA(L_8, L_10, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12 = L_11;
		RuntimeObject* L_13 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.log10Function::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void log10Function__ctor_m3992777B3B68A468A08D32550F5BE3D9D41D1E00 (log10Function_tD4F19626593EE5FA54D161896E1BEEE5065085A8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.lowerFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* lowerFunction_GetInfo_mE5C5EA041AA9ACBB2D94146930D74CB34E83391A (lowerFunction_t50463438FAF250D5A726F9C273BD66E4AFBEAB6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0509511F12B62E39B9F2DB9A7CCB47930F372A58);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef> { new FunctionDef(Afe_Common.Const_Lower, new System.Type[] { typeof(string) }, typeof(string), 1) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral0509511F12B62E39B9F2DB9A7CCB47930F372A58, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.lowerFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* lowerFunction_Execute_m69788D4C36887F4CAA94CBF44F4B6AC66EAB64E5 (lowerFunction_t50463438FAF250D5A726F9C273BD66E4AFBEAB6C* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!string.IsNullOrEmpty(Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture)))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		String_t* L_4;
		L_4 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_1, L_3, NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		// return Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture).ToLower(dc.WorkingCulture);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = ___args0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_6, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_8 = ___dc1;
		NullCheck(L_8);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9 = L_8->___WorkingCulture_8;
		String_t* L_10;
		L_10 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_7, L_9, NULL);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_11 = ___dc1;
		NullCheck(L_11);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_12 = L_11->___WorkingCulture_8;
		NullCheck(L_10);
		String_t* L_13;
		L_13 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_10, L_12, NULL);
		return L_13;
	}

IL_003f:
	{
		// return string.Empty;
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_14;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.lowerFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lowerFunction__ctor_mC2C2FD32B652C6134046A05CC81EADF4CF069469 (lowerFunction_t50463438FAF250D5A726F9C273BD66E4AFBEAB6C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.lpadFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* lpadFunction_GetInfo_mF09CC1CE65F09B848672F419C3D60A60E7095BC4 (lpadFunction_tE52A41DEF7790953A305C0FB78FB6211083A399C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1D9DC032B565EEA2F24B6ABF6BF08B69B5B8159);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{new FunctionDef(Afe_Common.Const_LPAD, new System.Type[]{ typeof(string), typeof(decimal), typeof(string)}, typeof(string), 3)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_8);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_11);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_14 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_14, _stringLiteralD1D9DC032B565EEA2F24B6ABF6BF08B69B5B8159, L_9, L_13, 3, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_14, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_15 = V_0;
		return L_15;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.lpadFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* lpadFunction_Execute_m659ED922B9FF4E625E86EDE2A470CDF22F7AF388 (lpadFunction_tE52A41DEF7790953A305C0FB78FB6211083A399C* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.LeftPad(Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture), Decimal.ToInt32(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Two], dc.WorkingCulture)), Afe_Common.ToString(args[Afe_Common.Const_Key_Three], dc.WorkingCulture));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		String_t* L_4;
		L_4 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_1, L_3, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___args0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_5, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_7 = ___dc1;
		NullCheck(L_7);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8 = L_7->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9;
		L_9 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_6, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Decimal_ToInt32_m683C06E2C4596EC3BD7106B222AAA161D07F423A(L_9, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = ___args0;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_11, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_13 = ___dc1;
		NullCheck(L_13);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14 = L_13->___WorkingCulture_8;
		String_t* L_15;
		L_15 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_12, L_14, NULL);
		String_t* L_16;
		L_16 = lpadFunction_LeftPad_m897D88C76AA5B0B250F21E25837E4B102CC9EF37(__this, L_4, L_10, L_15, NULL);
		return L_16;
	}
}
// System.String Plugins.Math_expression_eval.org.matheval.Functions.Impl.lpadFunction::LeftPad(System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* lpadFunction_LeftPad_m897D88C76AA5B0B250F21E25837E4B102CC9EF37 (lpadFunction_tE52A41DEF7790953A305C0FB78FB6211083A399C* __this, String_t* ___stringValue0, int32_t ___length1, String_t* ___padString2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!string.IsNullOrEmpty(stringValue) && string.IsNullOrEmpty(padString))
		String_t* L_0 = ___stringValue0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___padString2;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// return stringValue;
		String_t* L_4 = ___stringValue0;
		return L_4;
	}

IL_0012:
	{
		// else if (!string.IsNullOrEmpty(padString))
		String_t* L_5 = ___padString2;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		// return stringValue.PadLeft(length, char.Parse(padString));
		String_t* L_7 = ___stringValue0;
		int32_t L_8 = ___length1;
		String_t* L_9 = ___padString2;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		Il2CppChar L_10;
		L_10 = Char_Parse_mF6DE281178725F2B4A13DF321846C0DD4CB36D23(L_9, NULL);
		NullCheck(L_7);
		String_t* L_11;
		L_11 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_7, L_8, L_10, NULL);
		return L_11;
	}

IL_0028:
	{
		// return string.Empty;
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_12;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.lpadFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lpadFunction__ctor_m513C39D343198BD5AC0F6BBC1F53B258E33BC4FB (lpadFunction_tE52A41DEF7790953A305C0FB78FB6211083A399C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.maxFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* maxFunction_GetInfo_m0CEF4D6DBA06A1CC40A90CD2F0317819559E074B (maxFunction_t0E9A2021D2313FD946945A1085EEA2F4B13E2520* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral499284EE1D3CD7FE549A05AE5F4E78D079B96018);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//            new FunctionDef(Afe_Common.Const_Max, new System.Type[]{ typeof(decimal) }, typeof(decimal), -1),
		//            new FunctionDef(Afe_Common.Const_Max, new System.Type[] { typeof(Object)}, typeof(decimal), 1) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral499284EE1D3CD7FE549A05AE5F4E78D079B96018, L_3, L_7, (-1), NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = L_10;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_13);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_16 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_16, _stringLiteral499284EE1D3CD7FE549A05AE5F4E78D079B96018, L_11, L_15, 1, NULL);
		NullCheck(L_9);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_9, L_16, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_17 = V_0;
		return L_17;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.maxFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* maxFunction_Execute_mAD3906AC56B088023E9153A994B024E0A46990CB (maxFunction_t0E9A2021D2313FD946945A1085EEA2F4B13E2520* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (args.Count == 1 && Afe_Common.IsList(args[Afe_Common.Const_Key_One]))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA(L_0, Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0033;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ___args0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_2, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		bool L_4;
		L_4 = Afe_Common_IsList_m5B02243ADEF92A08B0E619EABF456231210523FB(L_3, NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// return this.MaxList((IEnumerable)args[Afe_Common.Const_Key_One], dc);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___args0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_5, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_7 = ___dc1;
		RuntimeObject* L_8;
		L_8 = maxFunction_MaxList_m9755A5D7271AFF3AF92C482CF6011752D4427930(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)), L_7, NULL);
		return L_8;
	}

IL_0033:
	{
		// return this.Max(args, dc);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_9 = ___args0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_10 = ___dc1;
		RuntimeObject* L_11;
		L_11 = maxFunction_Max_mF9BA6F9DDB4510F19A66E6A3C168BAF511EF3044(__this, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.maxFunction::Max(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* maxFunction_Max_mF9BA6F9DDB4510F19A66E6A3C168BAF511EF3044 (maxFunction_t0E9A2021D2313FD946945A1085EEA2F4B13E2520* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		// Object maxEntry = null;
		V_0 = NULL;
		// foreach (Object item in args.Values)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* L_1;
		L_1 = Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC(L_0, Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504 L_2;
		L_2 = ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3(L_1, ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5((&V_1), Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0046_1;
			}

IL_0010_1:
			{
				// foreach (Object item in args.Values)
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_inline((&V_1), Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_RuntimeMethod_var);
				V_2 = L_3;
				// if (maxEntry == null || Afe_Common.ToDecimal(item, dc.WorkingCulture) > (decimal)maxEntry)
				RuntimeObject* L_4 = V_0;
				if (!L_4)
				{
					goto IL_0034_1;
				}
			}
			{
				RuntimeObject* L_5 = V_2;
				ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_6 = ___dc1;
				NullCheck(L_6);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7 = L_6->___WorkingCulture_8;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8;
				L_8 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_5, L_7, NULL);
				RuntimeObject* L_9 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				bool L_10;
				L_10 = Decimal_op_GreaterThan_m2C5A01FFBCF3858E8EF62C569D993EDC1CBC60FA(L_8, ((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_9, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))), NULL);
				if (!L_10)
				{
					goto IL_0046_1;
				}
			}

IL_0034_1:
			{
				// maxEntry = Afe_Common.ToDecimal(item, dc.WorkingCulture);
				RuntimeObject* L_11 = V_2;
				ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_12 = ___dc1;
				NullCheck(L_12);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_13 = L_12->___WorkingCulture_8;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_14;
				L_14 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_11, L_13, NULL);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_15 = L_14;
				RuntimeObject* L_16 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_15);
				V_0 = L_16;
			}

IL_0046_1:
			{
				// foreach (Object item in args.Values)
				bool L_17;
				L_17 = Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948((&V_1), Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_005f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		// return maxEntry;
		RuntimeObject* L_18 = V_0;
		return L_18;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.maxFunction::MaxList(System.Collections.IEnumerable,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* maxFunction_MaxList_m9755A5D7271AFF3AF92C482CF6011752D4427930 (maxFunction_t0E9A2021D2313FD946945A1085EEA2F4B13E2520* __this, RuntimeObject* ___arg0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// Object maxEntry = null;
		V_0 = NULL;
		// foreach (Object item in arg)
		RuntimeObject* L_0 = ___arg0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_3;
					if (!L_3)
					{
						goto IL_0062;
					}
				}
				{
					RuntimeObject* L_4 = V_3;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0062:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_000b_1:
			{
				// foreach (Object item in arg)
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				// if (!Afe_Common.IsNumber(item))
				RuntimeObject* L_7 = V_2;
				bool L_8;
				L_8 = Afe_Common_IsNumber_m4E55CE0DE9F1AC1E496F4BC0DE0F39BF50A5AEF0(L_7, NULL);
				if (!L_8)
				{
					goto IL_0048_1;
				}
			}
			{
				// if (maxEntry == null || Afe_Common.ToDecimal(item, dc.WorkingCulture) > (decimal)maxEntry)
				RuntimeObject* L_9 = V_0;
				if (!L_9)
				{
					goto IL_0036_1;
				}
			}
			{
				RuntimeObject* L_10 = V_2;
				ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_11 = ___dc1;
				NullCheck(L_11);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_12 = L_11->___WorkingCulture_8;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_13;
				L_13 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_10, L_12, NULL);
				RuntimeObject* L_14 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				bool L_15;
				L_15 = Decimal_op_GreaterThan_m2C5A01FFBCF3858E8EF62C569D993EDC1CBC60FA(L_13, ((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_14, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))), NULL);
				if (!L_15)
				{
					goto IL_0048_1;
				}
			}

IL_0036_1:
			{
				// maxEntry = Afe_Common.ToDecimal(item, dc.WorkingCulture);
				RuntimeObject* L_16 = V_2;
				ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_17 = ___dc1;
				NullCheck(L_17);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_18 = L_17->___WorkingCulture_8;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_19;
				L_19 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_16, L_18, NULL);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_20 = L_19;
				RuntimeObject* L_21 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_20);
				V_0 = L_21;
			}

IL_0048_1:
			{
				// foreach (Object item in arg)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_0063;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0063:
	{
		// return maxEntry;
		RuntimeObject* L_24 = V_0;
		return L_24;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.maxFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void maxFunction__ctor_m38B761C2BEA0E0F363AEB5D44844AB890AAAB56A (maxFunction_t0E9A2021D2313FD946945A1085EEA2F4B13E2520* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.midFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* midFunction_GetInfo_m368F3468268176C0811DD8D12F10B5FA4EF6F785 (midFunction_t86178B37794001A2FFA9BD1EFC9BC999CC7E33FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32A4C1DE6F6D9EDC5D98B904B0B3D876D65D8AA0);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef> { new FunctionDef(Afe_Common.Const_MID, new System.Type[] { typeof(string), typeof(decimal), typeof(decimal) }, typeof(string), 3) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_8);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_11);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_14 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_14, _stringLiteral32A4C1DE6F6D9EDC5D98B904B0B3D876D65D8AA0, L_9, L_13, 3, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_14, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_15 = V_0;
		return L_15;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.midFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* midFunction_Execute_mA9D0D4F5F57F313CDEE5D016F803DA4B3D0122EC (midFunction_t86178B37794001A2FFA9BD1EFC9BC999CC7E33FF* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.Mid(
		//     Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture),
		//     Decimal.ToInt32(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Two], dc.WorkingCulture)),
		//     Decimal.ToInt32(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Three], dc.WorkingCulture))
		//     );
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		String_t* L_4;
		L_4 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_1, L_3, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___args0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_5, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_7 = ___dc1;
		NullCheck(L_7);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8 = L_7->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9;
		L_9 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_6, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Decimal_ToInt32_m683C06E2C4596EC3BD7106B222AAA161D07F423A(L_9, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = ___args0;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_11, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_13 = ___dc1;
		NullCheck(L_13);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14 = L_13->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_15;
		L_15 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_12, L_14, NULL);
		int32_t L_16;
		L_16 = Decimal_ToInt32_m683C06E2C4596EC3BD7106B222AAA161D07F423A(L_15, NULL);
		String_t* L_17;
		L_17 = midFunction_Mid_m329575A3C0CEC804997DA67C6C5B8373F2084CDF(__this, L_4, L_10, L_16, NULL);
		return L_17;
	}
}
// System.String Plugins.Math_expression_eval.org.matheval.Functions.Impl.midFunction::Mid(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* midFunction_Mid_m329575A3C0CEC804997DA67C6C5B8373F2084CDF (midFunction_t86178B37794001A2FFA9BD1EFC9BC999CC7E33FF* __this, String_t* ___stringValue0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// if (!string.IsNullOrEmpty(stringValue) && index > 0 && index <= stringValue.Length)
		String_t* L_0 = ___stringValue0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_3 = ___index1;
		String_t* L_4 = ___stringValue0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if ((((int32_t)L_3) > ((int32_t)L_5)))
		{
			goto IL_0039;
		}
	}
	{
		// int len = index + length > stringValue.Length ? stringValue.Length - index + 1 : length;
		int32_t L_6 = ___index1;
		int32_t L_7 = ___length2;
		String_t* L_8 = ___stringValue0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) > ((int32_t)L_9)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_10 = ___length2;
		G_B6_0 = L_10;
		goto IL_002d;
	}

IL_0023:
	{
		String_t* L_11 = ___stringValue0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		int32_t L_13 = ___index1;
		G_B6_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_12, L_13)), 1));
	}

IL_002d:
	{
		V_0 = G_B6_0;
		// return stringValue.Substring(index - 1, len);
		String_t* L_14 = ___stringValue0;
		int32_t L_15 = ___index1;
		int32_t L_16 = V_0;
		NullCheck(L_14);
		String_t* L_17;
		L_17 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_14, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), L_16, NULL);
		return L_17;
	}

IL_0039:
	{
		// return string.Empty;
		String_t* L_18 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_18;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.midFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void midFunction__ctor_mD39BAE6C1E701E5CD679A6AF79B940540700BE48 (midFunction_t86178B37794001A2FFA9BD1EFC9BC999CC7E33FF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.minFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* minFunction_GetInfo_mEB83A4CEA7F119ED1B1C7A15AACB6607B58627A9 (minFunction_tD8DECFB060E1BF1A095D98F7D2C081B8603CBC87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32D308F08E201660A1A1B244F9AF831CDBFC2635);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//            new FunctionDef(Afe_Common.Const_Min, new System.Type[]{ typeof(decimal) }, typeof(decimal), -1),
		//            new FunctionDef(Afe_Common.Const_Min, new System.Type[] { typeof(Object)}, typeof(decimal), 1)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral32D308F08E201660A1A1B244F9AF831CDBFC2635, L_3, L_7, (-1), NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = L_10;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_13);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_16 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_16, _stringLiteral32D308F08E201660A1A1B244F9AF831CDBFC2635, L_11, L_15, 1, NULL);
		NullCheck(L_9);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_9, L_16, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_17 = V_0;
		return L_17;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.minFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* minFunction_Execute_m616360E92040C196D3902CB6D2556EE7880E64DF (minFunction_tD8DECFB060E1BF1A095D98F7D2C081B8603CBC87* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (args.Count == 1 && Afe_Common.IsList(args[Afe_Common.Const_Key_One]))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA(L_0, Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0033;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ___args0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_2, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		bool L_4;
		L_4 = Afe_Common_IsList_m5B02243ADEF92A08B0E619EABF456231210523FB(L_3, NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// return this.MinList((IEnumerable)args[Afe_Common.Const_Key_One], dc);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___args0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_5, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_7 = ___dc1;
		RuntimeObject* L_8;
		L_8 = minFunction_MinList_m6FF658D8B4F88D6E2D98D495993DB559D991C8D9(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)), L_7, NULL);
		return L_8;
	}

IL_0033:
	{
		// return this.Min(args, dc);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_9 = ___args0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_10 = ___dc1;
		RuntimeObject* L_11;
		L_11 = minFunction_Min_mB483D9A5A58E78596841DE114EF2490103FB0D88(__this, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.minFunction::Min(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* minFunction_Min_mB483D9A5A58E78596841DE114EF2490103FB0D88 (minFunction_tD8DECFB060E1BF1A095D98F7D2C081B8603CBC87* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		// Object minEntry = null;
		V_0 = NULL;
		// foreach (Object item in args.Values)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* L_1;
		L_1 = Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC(L_0, Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504 L_2;
		L_2 = ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3(L_1, ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5((&V_1), Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0046_1;
			}

IL_0010_1:
			{
				// foreach (Object item in args.Values)
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_inline((&V_1), Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_RuntimeMethod_var);
				V_2 = L_3;
				// if (minEntry == null || Afe_Common.ToDecimal(item, dc.WorkingCulture) < (decimal)minEntry)
				RuntimeObject* L_4 = V_0;
				if (!L_4)
				{
					goto IL_0034_1;
				}
			}
			{
				RuntimeObject* L_5 = V_2;
				ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_6 = ___dc1;
				NullCheck(L_6);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7 = L_6->___WorkingCulture_8;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8;
				L_8 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_5, L_7, NULL);
				RuntimeObject* L_9 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				bool L_10;
				L_10 = Decimal_op_LessThan_m97DE1A1C431696A13299452BF9C789F3DD4D19B2(L_8, ((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_9, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))), NULL);
				if (!L_10)
				{
					goto IL_0046_1;
				}
			}

IL_0034_1:
			{
				// minEntry = Afe_Common.ToDecimal(item, dc.WorkingCulture);
				RuntimeObject* L_11 = V_2;
				ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_12 = ___dc1;
				NullCheck(L_12);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_13 = L_12->___WorkingCulture_8;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_14;
				L_14 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_11, L_13, NULL);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_15 = L_14;
				RuntimeObject* L_16 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_15);
				V_0 = L_16;
			}

IL_0046_1:
			{
				// foreach (Object item in args.Values)
				bool L_17;
				L_17 = Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948((&V_1), Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_005f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		// return minEntry;
		RuntimeObject* L_18 = V_0;
		return L_18;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.minFunction::MinList(System.Collections.IEnumerable,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* minFunction_MinList_m6FF658D8B4F88D6E2D98D495993DB559D991C8D9 (minFunction_tD8DECFB060E1BF1A095D98F7D2C081B8603CBC87* __this, RuntimeObject* ___arg0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// Object minEntry = null;
		V_0 = NULL;
		// foreach (Object item in arg)
		RuntimeObject* L_0 = ___arg0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_3;
					if (!L_3)
					{
						goto IL_0062;
					}
				}
				{
					RuntimeObject* L_4 = V_3;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0062:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_000b_1:
			{
				// foreach (Object item in arg)
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				// if (!Afe_Common.IsNumber(item))
				RuntimeObject* L_7 = V_2;
				bool L_8;
				L_8 = Afe_Common_IsNumber_m4E55CE0DE9F1AC1E496F4BC0DE0F39BF50A5AEF0(L_7, NULL);
				if (!L_8)
				{
					goto IL_0048_1;
				}
			}
			{
				// if (minEntry == null || Afe_Common.ToDecimal(item, dc.WorkingCulture) < (decimal)minEntry)
				RuntimeObject* L_9 = V_0;
				if (!L_9)
				{
					goto IL_0036_1;
				}
			}
			{
				RuntimeObject* L_10 = V_2;
				ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_11 = ___dc1;
				NullCheck(L_11);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_12 = L_11->___WorkingCulture_8;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_13;
				L_13 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_10, L_12, NULL);
				RuntimeObject* L_14 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				bool L_15;
				L_15 = Decimal_op_LessThan_m97DE1A1C431696A13299452BF9C789F3DD4D19B2(L_13, ((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_14, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))), NULL);
				if (!L_15)
				{
					goto IL_0048_1;
				}
			}

IL_0036_1:
			{
				// minEntry = Afe_Common.ToDecimal(item, dc.WorkingCulture);
				RuntimeObject* L_16 = V_2;
				ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_17 = ___dc1;
				NullCheck(L_17);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_18 = L_17->___WorkingCulture_8;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_19;
				L_19 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_16, L_18, NULL);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_20 = L_19;
				RuntimeObject* L_21 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_20);
				V_0 = L_21;
			}

IL_0048_1:
			{
				// foreach (Object item in arg)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_0063;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0063:
	{
		// return minEntry;
		RuntimeObject* L_24 = V_0;
		return L_24;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.minFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void minFunction__ctor_mD27F4D6D46D558DC9055364EF2EEF64EB7096A3C (minFunction_tD8DECFB060E1BF1A095D98F7D2C081B8603CBC87* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.modFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* modFunction_GetInfo_m6726330585E93D68FA4B76D7D977D73FD9C61CFF (modFunction_t23F260E4479F215BC85F133467A95E7038B0452F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A9B25F4DFE20C0AD18665BC9AF768F47F752B2D);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Mod, new System.Type[]{ typeof(decimal), typeof(decimal) }, typeof(decimal), 2)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_11 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_11, _stringLiteral1A9B25F4DFE20C0AD18665BC9AF768F47F752B2D, L_6, L_10, 2, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_11, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_12 = V_0;
		return L_12;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.modFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* modFunction_Execute_mEB5D43CF0539CE85D09E3E0AD9275CEBF8C28661 (modFunction_t23F260E4479F215BC85F133467A95E7038B0452F* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.Mod(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture), Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Two], dc.WorkingCulture), dc);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_1, L_3, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5 = L_4;
		RuntimeObject* L_6 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_5);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = ___args0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_7, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_9 = ___dc1;
		NullCheck(L_9);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10 = L_9->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11;
		L_11 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_8, L_10, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12 = L_11;
		RuntimeObject* L_13 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_12);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_14 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_15;
		L_15 = modFunction_Mod_m24B7D206D8EF20CF1B2E81A553938AF1CFAC2C4F(__this, L_6, L_13, L_14, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_16 = L_15;
		RuntimeObject* L_17 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_16);
		return L_17;
	}
}
// System.Decimal Plugins.Math_expression_eval.org.matheval.Functions.Impl.modFunction::Mod(System.Object,System.Object,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F modFunction_Mod_m24B7D206D8EF20CF1B2E81A553938AF1CFAC2C4F (modFunction_t23F260E4479F215BC85F133467A95E7038B0452F* __this, RuntimeObject* ___left0, RuntimeObject* ___right1, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (left is decimal leftDecimal && right is decimal rightDecimal)
		RuntimeObject* L_0 = ___left0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_1 = ___left0;
		V_0 = ((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))));
		RuntimeObject* L_2 = ___right1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_3 = ___right1;
		V_1 = ((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_3, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))));
		// decimal quotient = Math.Floor(leftDecimal / rightDecimal);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4 = V_0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_6;
		L_6 = Decimal_op_Division_mC679B917681D7B7D7791E0017A6A51AA76C1C72A(L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_7;
		L_7 = Math_Floor_mC2E0E7994B307ED1B87D34A6AC5FB6E72A89B1B1_inline(L_6, NULL);
		V_2 = L_7;
		// return leftDecimal - (rightDecimal * quotient);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8 = V_0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9 = V_1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_10 = V_2;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11;
		L_11 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_9, L_10, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12;
		L_12 = Decimal_op_Subtraction_m50F5DC718BD003A09A5BC62BAA3DECD0745AD3F1(L_8, L_11, NULL);
		return L_12;
	}

IL_0039:
	{
		// throw new Exception("Remainder operator can be only apply for integer/long");
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B6E1D8E8002AFD3900AD43433DE22515284FFA9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&modFunction_Mod_m24B7D206D8EF20CF1B2E81A553938AF1CFAC2C4F_RuntimeMethod_var)));
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.modFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void modFunction__ctor_m0D77F0B13D1C71330DF3776CD611663BE9807B6C (modFunction_t23F260E4479F215BC85F133467A95E7038B0452F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.notFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* notFunction_GetInfo_m90B0356E18A92DDA1EE321BE7601A0FC2B3C3F4F (notFunction_t70C8820E426548FB308E41039E619C63FDE39998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63FEAE5081ABFB719642D387AE43B7D4DFB3CFEB);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef> { new FunctionDef(Afe_Common.Const_Not, new System.Type[] { typeof(Boolean) }, typeof(Boolean), 1) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral63FEAE5081ABFB719642D387AE43B7D4DFB3CFEB, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.notFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* notFunction_Execute_m9912456C0170016C30E257332A5F64BB2F2B6BC0 (notFunction_t70C8820E426548FB308E41039E619C63FDE39998* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !Boolean.Parse(Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		String_t* L_4;
		L_4 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Boolean_Parse_mE3D8860431C87FBE1D7C6EACA665548AFE144F38(L_4, NULL);
		bool L_6 = ((bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0));
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.notFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void notFunction__ctor_m64E0A6D91BA2098857B9234B927B5439ACCFCEC4 (notFunction_t70C8820E426548FB308E41039E619C63FDE39998* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.orFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* orFunction_GetInfo_m4AE351E7E64F7F3DEB8ABFA0352A23FB0D377DB9 (orFunction_t75DFE6A5F29612BC3AB1477264960D01A50BB81A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEEFE2DA48C3C4F29D567569CAF0C32C979221B7);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef> { new FunctionDef(Afe_Common.Const_Or, new System.Type[] { typeof(Boolean) }, typeof(Boolean), -1) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteralDEEFE2DA48C3C4F29D567569CAF0C32C979221B7, L_3, L_7, (-1), NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.orFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* orFunction_Execute_mA2777595FFF67FBDBBAC38737A374FDF7F6FECB9 (orFunction_t75DFE6A5F29612BC3AB1477264960D01A50BB81A* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.LogicalOr(args);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		bool L_1;
		L_1 = orFunction_LogicalOr_m70771D780101DBB042D011BF5123265CE2BBF2F4(__this, L_0, NULL);
		bool L_2 = L_1;
		RuntimeObject* L_3 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Boolean Plugins.Math_expression_eval.org.matheval.Functions.Impl.orFunction::LogicalOr(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool orFunction_LogicalOr_m70771D780101DBB042D011BF5123265CE2BBF2F4 (orFunction_t75DFE6A5F29612BC3AB1477264960D01A50BB81A* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		// foreach (Object item in args.Values)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* L_1;
		L_1 = Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC(L_0, Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504 L_2;
		L_2 = ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3(L_1, ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5((&V_0), Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002a_1;
			}

IL_000e_1:
			{
				// foreach (Object item in args.Values)
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_inline((&V_0), Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_RuntimeMethod_var);
				V_1 = L_3;
				// if ((item is Boolean) && (Boolean)item)
				RuntimeObject* L_4 = V_1;
				if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
				{
					goto IL_002a_1;
				}
			}
			{
				RuntimeObject* L_5 = V_1;
				if (!((*(bool*)((bool*)(bool*)UnBox(L_5, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
				{
					goto IL_002a_1;
				}
			}
			{
				// return true;
				V_2 = (bool)1;
				goto IL_0045;
			}

IL_002a_1:
			{
				// foreach (Object item in args.Values)
				bool L_6;
				L_6 = Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948((&V_0), Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// return false;
		return (bool)0;
	}

IL_0045:
	{
		// }
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.orFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void orFunction__ctor_m1932A1D22E979B4BADF999B763672BBA4D6B9605 (orFunction_t75DFE6A5F29612BC3AB1477264960D01A50BB81A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.piFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* piFunction_GetInfo_m37573E7C82E93CCDD9D031284425C74AE0634BFA (piFunction_t248C72C737C3FF80F84D1EFF43AE19C9DC8B8167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral763CDA637534E4F5C4969BBA9CC80CC5F632539D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new List<FunctionDef> { new FunctionDef(Afe_Common.Const_Pi, null, typeof(decimal), 0) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = L_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_4 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_4, _stringLiteral763CDA637534E4F5C4969BBA9CC80CC5F632539D, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, L_3, 0, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_4, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		return L_1;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.piFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* piFunction_Execute_mBCCE4CA5594A6FD1FA4EB43B65F9E448BF84C5E7 (piFunction_t248C72C737C3FF80F84D1EFF43AE19C9DC8B8167* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToDecimal(Math.PI, dc.WorkingCulture);
		double L_0 = (3.1415926535897931);
		RuntimeObject* L_1 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_0);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA(L_1, L_3, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5 = L_4;
		RuntimeObject* L_6 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.piFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void piFunction__ctor_m0D7513154C9C47488743515123BC763B51FD6D77 (piFunction_t248C72C737C3FF80F84D1EFF43AE19C9DC8B8167* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.powerFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* powerFunction_GetInfo_m8F9E07206CA20819AA3EAE2E5E6B1768A88C8A6D (powerFunction_t60E05DE18AC0FAEA6A41A4C4E91D60BC613C4219* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FEEE30ACD8AF48C0493BC7000C458744C94C1BA);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Power, new System.Type[]{ typeof(decimal), typeof(decimal) }, typeof(decimal), 2)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_11 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_11, _stringLiteral1FEEE30ACD8AF48C0493BC7000C458744C94C1BA, L_6, L_10, 2, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_11, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_12 = V_0;
		return L_12;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.powerFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* powerFunction_Execute_mAE544D1C5F4F259D88F9D805B6125C3593B3ECCF (powerFunction_t60E05DE18AC0FAEA6A41A4C4E91D60BC613C4219* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Double result = Math.Pow(Decimal.ToDouble(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture)), Decimal.ToDouble(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Two], dc.WorkingCulture)));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = Decimal_ToDouble_mE406587545238A39E46DEB3998E3D08878B1CA9B(L_4, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = ___args0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_6, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_8 = ___dc1;
		NullCheck(L_8);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9 = L_8->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_10;
		L_10 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_7, L_9, NULL);
		double L_11;
		L_11 = Decimal_ToDouble_mE406587545238A39E46DEB3998E3D08878B1CA9B(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_5, L_11, NULL);
		// return Convert.ToDecimal(result, dc.WorkingCulture);
		double L_13 = L_12;
		RuntimeObject* L_14 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_13);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_15 = ___dc1;
		NullCheck(L_15);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_16 = L_15->___WorkingCulture_8;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_17;
		L_17 = Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA(L_14, L_16, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_18 = L_17;
		RuntimeObject* L_19 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_18);
		return L_19;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.powerFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void powerFunction__ctor_mE22DE7FCC6FDC0748DD4A7A0CF061EDFA76D78CF (powerFunction_t60E05DE18AC0FAEA6A41A4C4E91D60BC613C4219* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.properFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* properFunction_GetInfo_mF22C70A006319247C5CCA683E1DD60D79B2CF087 (properFunction_tFED8D6F7BA32E5522B4AAFE24983FF06192006EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ABB647891A0F462BECD51763141D5CFE510BE63);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Proper, new System.Type[]{ typeof(string) }, typeof(string), 1)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral8ABB647891A0F462BECD51763141D5CFE510BE63, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.properFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* properFunction_Execute_mB213156AA1805725081D93DFF87461FCCE7ACBD7 (properFunction_tFED8D6F7BA32E5522B4AAFE24983FF06192006EC* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.ToTitleCase(Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture), dc);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		String_t* L_4;
		L_4 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_1, L_3, NULL);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_5 = ___dc1;
		String_t* L_6;
		L_6 = properFunction_ToTitleCase_m61824CFE18332629080B47F38314C6F2821B8CC1(__this, L_4, L_5, NULL);
		return L_6;
	}
}
// System.String Plugins.Math_expression_eval.org.matheval.Functions.Impl.properFunction::ToTitleCase(System.String,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* properFunction_ToTitleCase_m61824CFE18332629080B47F38314C6F2821B8CC1 (properFunction_tFED8D6F7BA32E5522B4AAFE24983FF06192006EC* __this, String_t* ___phrase0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// string titlePhrase = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		// List<string> forceLower = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_1 = L_1;
		// if (phrase != null && phrase.Length > 0)
		String_t* L_2 = ___phrase0;
		if (!L_2)
		{
			goto IL_00ad;
		}
	}
	{
		String_t* L_3 = ___phrase0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}
	{
		// string[] splitPhrase = phrase.Trim().Split(' ');
		String_t* L_5 = ___phrase0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_5, NULL);
		NullCheck(L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_6, ((int32_t)32), 0, NULL);
		V_2 = L_7;
		// for (int i = 0; i < splitPhrase.Length; i++)
		V_3 = 0;
		goto IL_00a7;
	}

IL_0031:
	{
		// if (!forceLower.Contains(splitPhrase[i].ToLower(dc.WorkingCulture)) || i == 0 || i == (splitPhrase.Length - 1))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_13 = ___dc1;
		NullCheck(L_13);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14 = L_13->___WorkingCulture_8;
		NullCheck(L_12);
		String_t* L_15;
		L_15 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_12, L_14, NULL);
		NullCheck(L_8);
		bool L_16;
		L_16 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_8, L_15, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_17 = V_3;
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_18 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_2;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_19)->max_length)), 1))))))
		{
			goto IL_0089;
		}
	}

IL_0052:
	{
		// titlePhrase += splitPhrase[i].Substring(0, 1).ToUpper(dc.WorkingCulture) + splitPhrase[i].Substring(1).ToLower(dc.WorkingCulture) + " ";
		String_t* L_20 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = V_2;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		String_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		String_t* L_25;
		L_25 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_24, 0, 1, NULL);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_26 = ___dc1;
		NullCheck(L_26);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_27 = L_26->___WorkingCulture_8;
		NullCheck(L_25);
		String_t* L_28;
		L_28 = String_ToUpper_mFC5C17C8BFF52540CC7A73E36DFC9617281325D1(L_25, L_27, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = V_2;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		String_t* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		String_t* L_33;
		L_33 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_32, 1, NULL);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_34 = ___dc1;
		NullCheck(L_34);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_35 = L_34->___WorkingCulture_8;
		NullCheck(L_33);
		String_t* L_36;
		L_36 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_33, L_35, NULL);
		String_t* L_37;
		L_37 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_20, L_28, L_36, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_37;
		goto IL_00a3;
	}

IL_0089:
	{
		// titlePhrase += splitPhrase[i].ToLower(dc.WorkingCulture) + " ";
		String_t* L_38 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = V_2;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		String_t* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_43 = ___dc1;
		NullCheck(L_43);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_44 = L_43->___WorkingCulture_8;
		NullCheck(L_42);
		String_t* L_45;
		L_45 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_42, L_44, NULL);
		String_t* L_46;
		L_46 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_38, L_45, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_46;
	}

IL_00a3:
	{
		// for (int i = 0; i < splitPhrase.Length; i++)
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00a7:
	{
		// for (int i = 0; i < splitPhrase.Length; i++)
		int32_t L_48 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = V_2;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_00ad:
	{
		// return titlePhrase.Trim();
		String_t* L_50 = V_0;
		NullCheck(L_50);
		String_t* L_51;
		L_51 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_50, NULL);
		return L_51;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.properFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void properFunction__ctor_mC949926FD59408F039D7F1D5F2B89DAB562D9D1F (properFunction_tFED8D6F7BA32E5522B4AAFE24983FF06192006EC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.radiansFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* radiansFunction_GetInfo_m539E5B036AE19C184169EB55344F58B001AF59CC (radiansFunction_t9E88F3A9BAE274FE6A06018345E11BA38B383D46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DA9F8ADE23EC273C689548EB4611D6C34D76B7);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef> { new FunctionDef(Afe_Common.Const_Radians, new System.Type[] { typeof(decimal) }, typeof(decimal), 1) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral37DA9F8ADE23EC273C689548EB4611D6C34D76B7, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.radiansFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* radiansFunction_Execute_m19F5A7A9C03EA3FF7F06D409376A0633F79B6098 (radiansFunction_t9E88F3A9BAE274FE6A06018345E11BA38B383D46* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture) * (decimal)(Math.PI / 180d);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_1, L_3, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Decimal__ctor_mC089D0AF6A28E017DE6F2F0966D8EBEBFE2DAAF7((&L_5), ((int32_t)-1660808119), ((int32_t)40636), 0, (bool)0, (uint8_t)((int32_t)16), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_6;
		L_6 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_4, L_5, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_7 = L_6;
		RuntimeObject* L_8 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.radiansFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void radiansFunction__ctor_m756C080232131C520B4936EF6E289FF6A305847E (radiansFunction_t9E88F3A9BAE274FE6A06018345E11BA38B383D46* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.randFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* randFunction_GetInfo_m575BF749BBA513494EC0D4EB57797FBA4155B115 (randFunction_t9C95A3E6D9FF689702282C8E9A0AA9679943F4FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D40F1B51AA0CEAA15B307E54B4E8CBB55AA5F41);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Random, null, typeof(decimal), 0)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = L_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_4 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_4, _stringLiteral9D40F1B51AA0CEAA15B307E54B4E8CBB55AA5F41, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, L_3, 0, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_4, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		return L_1;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.randFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* randFunction_Execute_mBF34CAD29D4D1C754A49117878D6B730B3A2C15A (randFunction_t9C95A3E6D9FF689702282C8E9A0AA9679943F4FD* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToDecimal(new Random().NextDouble(), dc.WorkingCulture);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_0);
		double L_2 = L_1;
		RuntimeObject* L_3 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_2);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_4 = ___dc1;
		NullCheck(L_4);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = L_4->___WorkingCulture_8;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_6;
		L_6 = Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA(L_3, L_5, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_7 = L_6;
		RuntimeObject* L_8 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.randFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void randFunction__ctor_m236E45548B56620242E90D057EBDA53EDE0958DF (randFunction_t9C95A3E6D9FF689702282C8E9A0AA9679943F4FD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.replaceFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* replaceFunction_GetInfo_mDC66A21F81705FCF3A646D5F0008A1249CE64A94 (replaceFunction_t5C1F4BA940C036777737044AFE08ED4FAADF788D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12CE2A4DA07ABE8B5BF2AE76D5E68472AC900A1D);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Replace, new System.Type[]{ typeof(string), typeof(string), typeof(string) }, typeof(string), 3),
		//         new FunctionDef(Afe_Common.Const_Replace, new System.Type[] { typeof(string), typeof(decimal), typeof(decimal), typeof(string) }, typeof(string), 4) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_8);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_11);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_14 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_14, _stringLiteral12CE2A4DA07ABE8B5BF2AE76D5E68472AC900A1D, L_9, L_13, 3, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_14, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_15 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_16 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_17 = L_16;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_19);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_21, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_22);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_23 = L_20;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_24, NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_25);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_26 = L_23;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_27, NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t*)L_28);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_29, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_31 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_31, _stringLiteral12CE2A4DA07ABE8B5BF2AE76D5E68472AC900A1D, L_26, L_30, 4, NULL);
		NullCheck(L_15);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_15, L_31, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_32 = V_0;
		return L_32;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.replaceFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* replaceFunction_Execute_m02526326E3B7A88C8DD804CCA3E408F8B726354C (replaceFunction_t5C1F4BA940C036777737044AFE08ED4FAADF788D* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (args.Count == 3)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA(L_0, Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0051;
		}
	}
	{
		// return Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture).Replace(Afe_Common.ToString(args[Afe_Common.Const_Key_Two], dc.WorkingCulture), Afe_Common.ToString(args[Afe_Common.Const_Key_Three], dc.WorkingCulture));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ___args0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_2, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_4 = ___dc1;
		NullCheck(L_4);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = L_4->___WorkingCulture_8;
		String_t* L_6;
		L_6 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_3, L_5, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = ___args0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_7, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_9 = ___dc1;
		NullCheck(L_9);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10 = L_9->___WorkingCulture_8;
		String_t* L_11;
		L_11 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_8, L_10, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_12 = ___args0;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_12, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_14 = ___dc1;
		NullCheck(L_14);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_15 = L_14->___WorkingCulture_8;
		String_t* L_16;
		L_16 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_13, L_15, NULL);
		NullCheck(L_6);
		String_t* L_17;
		L_17 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_6, L_11, L_16, NULL);
		return L_17;
	}

IL_0051:
	{
		// string text = Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_18 = ___args0;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_18, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_20 = ___dc1;
		NullCheck(L_20);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_21 = L_20->___WorkingCulture_8;
		String_t* L_22;
		L_22 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_19, L_21, NULL);
		// string left = text.Substring(0, Decimal.ToInt32(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Two], dc.WorkingCulture)) - 1);
		String_t* L_23 = L_22;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_24 = ___args0;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_24, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_26 = ___dc1;
		NullCheck(L_26);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_27 = L_26->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_28;
		L_28 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_25, L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = Decimal_ToInt32_m683C06E2C4596EC3BD7106B222AAA161D07F423A(L_28, NULL);
		NullCheck(L_23);
		String_t* L_30;
		L_30 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_23, 0, ((int32_t)il2cpp_codegen_subtract(L_29, 1)), NULL);
		V_0 = L_30;
		// string right = text.Substring(Decimal.ToInt32(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Two], dc.WorkingCulture)) - 1 + Decimal.ToInt32(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Three], dc.WorkingCulture)));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_31 = ___args0;
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_31, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_33 = ___dc1;
		NullCheck(L_33);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_34 = L_33->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_35;
		L_35 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_32, L_34, NULL);
		int32_t L_36;
		L_36 = Decimal_ToInt32_m683C06E2C4596EC3BD7106B222AAA161D07F423A(L_35, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_37 = ___args0;
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_37, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_39 = ___dc1;
		NullCheck(L_39);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_40 = L_39->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_41;
		L_41 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_38, L_40, NULL);
		int32_t L_42;
		L_42 = Decimal_ToInt32_m683C06E2C4596EC3BD7106B222AAA161D07F423A(L_41, NULL);
		NullCheck(L_23);
		String_t* L_43;
		L_43 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_23, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_36, 1)), L_42)), NULL);
		V_1 = L_43;
		// return left + args[Afe_Common.Const_Key_Four].ToString() + right;
		String_t* L_44 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_45 = ___args0;
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_45, _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_46);
		String_t* L_48 = V_1;
		String_t* L_49;
		L_49 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_44, L_47, L_48, NULL);
		return L_49;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.replaceFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void replaceFunction__ctor_m2606D64BBE53DAB28F391C600730F722FAB96B1C (replaceFunction_t5C1F4BA940C036777737044AFE08ED4FAADF788D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.reptFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* reptFunction_GetInfo_m49D0C6AB3372A5587949EE8FC1C4E9B06C2D5E75 (reptFunction_t1A83549942FB71BF116285D89B62394D16721748* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55DC575EB77F0A4306F83A44BFCC0CAB8F2F011E);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//            new FunctionDef("rept", new System.Type[]{ typeof(string), typeof(decimal) }, typeof(string), 2)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_11 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_11, _stringLiteral55DC575EB77F0A4306F83A44BFCC0CAB8F2F011E, L_6, L_10, 2, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_11, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_12 = V_0;
		return L_12;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.reptFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* reptFunction_Execute_m966B443873FC7F3A54230847EF3F572B5CE9955B (reptFunction_t1A83549942FB71BF116285D89B62394D16721748* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string temp = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		// for (int i = 1; i <= Decimal.ToInt32(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Two], dc.WorkingCulture)); i++)
		V_1 = 1;
		goto IL_002b;
	}

IL_000a:
	{
		// temp += Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture);
		String_t* L_1 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ___args0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_2, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_4 = ___dc1;
		NullCheck(L_4);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = L_4->___WorkingCulture_8;
		String_t* L_6;
		L_6 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_3, L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, L_6, NULL);
		V_0 = L_7;
		// for (int i = 1; i <= Decimal.ToInt32(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Two], dc.WorkingCulture)); i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002b:
	{
		// for (int i = 1; i <= Decimal.ToInt32(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Two], dc.WorkingCulture)); i++)
		int32_t L_9 = V_1;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_10 = ___args0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_10, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_12 = ___dc1;
		NullCheck(L_12);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_13 = L_12->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_14;
		L_14 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_11, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = Decimal_ToInt32_m683C06E2C4596EC3BD7106B222AAA161D07F423A(L_14, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_15)))
		{
			goto IL_000a;
		}
	}
	{
		// return temp;
		String_t* L_16 = V_0;
		return L_16;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.reptFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void reptFunction__ctor_m310F3EC77D72766E2E6A132892C5B7F39E8558FE (reptFunction_t1A83549942FB71BF116285D89B62394D16721748* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.reverseFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* reverseFunction_GetInfo_m8E36E3AA6CE488EF39EEC8A28CD48B88AA94590C (reverseFunction_tB505D709107DE0D38DD6EE0CCCBAE448ACBBE8AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50A8863477B395531AE591FC12CCA3FC439B5955);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef> { new FunctionDef(Afe_Common.Const_Reverse, new System.Type[] { typeof(string) }, typeof(string), 1) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral50A8863477B395531AE591FC12CCA3FC439B5955, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.reverseFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* reverseFunction_Execute_mDFEEDA62401A0170A741DE5A4C9529FBA2390DC2 (reverseFunction_tB505D709107DE0D38DD6EE0CCCBAE448ACBBE8AE* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.Reverse(Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		String_t* L_4;
		L_4 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_1, L_3, NULL);
		String_t* L_5;
		L_5 = reverseFunction_Reverse_mE74B98AA66E4D4F92667A66CBBFBB0C9FA3E6A6A(__this, L_4, NULL);
		return L_5;
	}
}
// System.String Plugins.Math_expression_eval.org.matheval.Functions.Impl.reverseFunction::Reverse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* reverseFunction_Reverse_mE74B98AA66E4D4F92667A66CBBFBB0C9FA3E6A6A (reverseFunction_tB505D709107DE0D38DD6EE0CCCBAE448ACBBE8AE* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		// if (str.Length > 0)
		String_t* L_0 = ___str0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		// return str[str.Length - 1] + Reverse(str.Substring(0, str.Length - 1));
		String_t* L_2 = ___str0;
		String_t* L_3 = ___str0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		NullCheck(L_2);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_0), NULL);
		String_t* L_7 = ___str0;
		String_t* L_8 = ___str0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		NullCheck(L_7);
		String_t* L_10;
		L_10 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_7, 0, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), NULL);
		String_t* L_11;
		L_11 = reverseFunction_Reverse_mE74B98AA66E4D4F92667A66CBBFBB0C9FA3E6A6A(__this, L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_6, L_11, NULL);
		return L_12;
	}

IL_003a:
	{
		// return str;
		String_t* L_13 = ___str0;
		return L_13;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.reverseFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void reverseFunction__ctor_mEAEBC0B8F4D1EFA548D801D48394E259D4E373A5 (reverseFunction_tB505D709107DE0D38DD6EE0CCCBAE448ACBBE8AE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.rightFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* rightFunction_GetInfo_mC551BD2A377427C120C5816C2FC5752D800384DF (rightFunction_tFCA60A66C1B7B3ECBECC9314910CD69124BD2CC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef> { new FunctionDef(Afe_Common.Const_RIGHT, new System.Type[] { typeof(string), typeof(decimal) }, typeof(string), 2) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_11 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_11, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, L_6, L_10, 2, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_11, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_12 = V_0;
		return L_12;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.rightFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* rightFunction_Execute_m7EBAA073459C7062D4209D7784C2EE73DD42C43A (rightFunction_tFCA60A66C1B7B3ECBECC9314910CD69124BD2CC4* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.Right(Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture), Decimal.ToInt32(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Two], dc.WorkingCulture)));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		String_t* L_4;
		L_4 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_1, L_3, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___args0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_5, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_7 = ___dc1;
		NullCheck(L_7);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8 = L_7->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9;
		L_9 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_6, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Decimal_ToInt32_m683C06E2C4596EC3BD7106B222AAA161D07F423A(L_9, NULL);
		String_t* L_11;
		L_11 = rightFunction_Right_m0EA391BE54AE7E32A08D57ADCC15DFA05F0C041E(__this, L_4, L_10, NULL);
		return L_11;
	}
}
// System.String Plugins.Math_expression_eval.org.matheval.Functions.Impl.rightFunction::Right(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* rightFunction_Right_m0EA391BE54AE7E32A08D57ADCC15DFA05F0C041E (rightFunction_tFCA60A66C1B7B3ECBECC9314910CD69124BD2CC4* __this, String_t* ___stringValue0, int32_t ___count1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// if (!string.IsNullOrEmpty(stringValue))
		String_t* L_0 = ___stringValue0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_003b;
		}
	}
	{
		// int startIndex = stringValue.Length - count < 0 ? 0 : stringValue.Length - count;
		String_t* L_2 = ___stringValue0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		int32_t L_4 = ___count1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_5 = ___stringValue0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		int32_t L_7 = ___count1;
		G_B4_0 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		goto IL_001e;
	}

IL_001d:
	{
		G_B4_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B4_0;
		// int endIndex = count > stringValue.Length ? stringValue.Length : count;
		int32_t L_8 = ___count1;
		String_t* L_9 = ___stringValue0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if ((((int32_t)L_8) > ((int32_t)L_10)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_11 = ___count1;
		G_B7_0 = L_11;
		goto IL_0031;
	}

IL_002b:
	{
		String_t* L_12 = ___stringValue0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		G_B7_0 = L_13;
	}

IL_0031:
	{
		V_1 = G_B7_0;
		// return stringValue.Substring(startIndex, endIndex);
		String_t* L_14 = ___stringValue0;
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_14);
		String_t* L_17;
		L_17 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_14, L_15, L_16, NULL);
		return L_17;
	}

IL_003b:
	{
		// return string.Empty;
		String_t* L_18 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_18;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.rightFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rightFunction__ctor_m58E2A659AF3252A642FC59762893E9AB8DE828F6 (rightFunction_tFCA60A66C1B7B3ECBECC9314910CD69124BD2CC4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.roundFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* roundFunction_GetInfo_m10C49A66B6DE14A9BB463206F2D9B5A05FD36249 (roundFunction_tF561A7CB6F9800F25DA7C03C37464175712AAA08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral266A6E70F3BC9E04A2BC6274C2A8820535A50A1E);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Round, new System.Type[]{ typeof(decimal), typeof(decimal) }, typeof(decimal), 2)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_11 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_11, _stringLiteral266A6E70F3BC9E04A2BC6274C2A8820535A50A1E, L_6, L_10, 2, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_11, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_12 = V_0;
		return L_12;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.roundFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* roundFunction_Execute_m44193DF31D28166331E98BF6044C37396355CCED (roundFunction_tF561A7CB6F9800F25DA7C03C37464175712AAA08* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int digits = Decimal.ToInt32(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Two], dc.WorkingCulture)) ;// int.Parse(Afe_Common.ToString(args[Afe_Common.Const_Key_Two]));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Decimal_ToInt32_m683C06E2C4596EC3BD7106B222AAA161D07F423A(L_4, NULL);
		V_0 = L_5;
		// return Math.Round(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture), digits, dc.Rd);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = ___args0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_6, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_8 = ___dc1;
		NullCheck(L_8);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9 = L_8->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_10;
		L_10 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_7, L_9, NULL);
		int32_t L_11 = V_0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_12 = ___dc1;
		NullCheck(L_12);
		int32_t L_13 = L_12->___Rd_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_14;
		L_14 = Math_Round_mD8F335591E17FDCCA2A12475B79B73E28BA2E3B2_inline(L_10, L_11, L_13, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_15 = L_14;
		RuntimeObject* L_16 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_15);
		return L_16;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.roundFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void roundFunction__ctor_mCB633026A9A9E9481F03F0CFACA1887538A3C4E2 (roundFunction_tF561A7CB6F9800F25DA7C03C37464175712AAA08* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.rpadFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* rpadFunction_GetInfo_m2635792DC1307A3489AB2A2B9FA778FE79D0CBFE (rpadFunction_t84BC2938FF28DE3E3E39CCFE98989143CFCC7A63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9235819BB7F845AC1EA71756A61C2FE1FD7AC13);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef> { new FunctionDef(Afe_Common.Const_RPAD, new System.Type[] { typeof(string), typeof(decimal), typeof(string) }, typeof(string), 3) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_8);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_11);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_14 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_14, _stringLiteralF9235819BB7F845AC1EA71756A61C2FE1FD7AC13, L_9, L_13, 3, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_14, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_15 = V_0;
		return L_15;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.rpadFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* rpadFunction_Execute_m7A6757F541A8360E1867D109F39CD891FBF75D3A (rpadFunction_t84BC2938FF28DE3E3E39CCFE98989143CFCC7A63* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.RightPad(Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture), Decimal.ToInt32(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_Two], dc.WorkingCulture)), Afe_Common.ToString(args[Afe_Common.Const_Key_Three], dc.WorkingCulture));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		String_t* L_4;
		L_4 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_1, L_3, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___args0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_5, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_7 = ___dc1;
		NullCheck(L_7);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8 = L_7->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9;
		L_9 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_6, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Decimal_ToInt32_m683C06E2C4596EC3BD7106B222AAA161D07F423A(L_9, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = ___args0;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_11, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_13 = ___dc1;
		NullCheck(L_13);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14 = L_13->___WorkingCulture_8;
		String_t* L_15;
		L_15 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_12, L_14, NULL);
		String_t* L_16;
		L_16 = rpadFunction_RightPad_mD0D0B18ED8EE0000A36D687AC3DEF1EA7B90021B(__this, L_4, L_10, L_15, NULL);
		return L_16;
	}
}
// System.String Plugins.Math_expression_eval.org.matheval.Functions.Impl.rpadFunction::RightPad(System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* rpadFunction_RightPad_mD0D0B18ED8EE0000A36D687AC3DEF1EA7B90021B (rpadFunction_t84BC2938FF28DE3E3E39CCFE98989143CFCC7A63* __this, String_t* ___stringValue0, int32_t ___length1, String_t* ___padString2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!string.IsNullOrEmpty(stringValue) && string.IsNullOrEmpty(padString))
		String_t* L_0 = ___stringValue0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___padString2;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// return stringValue;
		String_t* L_4 = ___stringValue0;
		return L_4;
	}

IL_0012:
	{
		// }else if (!string.IsNullOrEmpty(padString))
		String_t* L_5 = ___padString2;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		// return stringValue.PadRight(length, char.Parse(padString));
		String_t* L_7 = ___stringValue0;
		int32_t L_8 = ___length1;
		String_t* L_9 = ___padString2;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		Il2CppChar L_10;
		L_10 = Char_Parse_mF6DE281178725F2B4A13DF321846C0DD4CB36D23(L_9, NULL);
		NullCheck(L_7);
		String_t* L_11;
		L_11 = String_PadRight_m7C573780177B3246D67D860C2A75AEF5832C7543(L_7, L_8, L_10, NULL);
		return L_11;
	}

IL_0028:
	{
		// return string.Empty;
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_12;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.rpadFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rpadFunction__ctor_m136A341F4EE75837BA125851FE48ED82CF8512E0 (rpadFunction_t84BC2938FF28DE3E3E39CCFE98989143CFCC7A63* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.searchFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* searchFunction_GetInfo_m190BC1ACF6A3FD350870E0586DE3AEAF6D63CAA8 (searchFunction_t6C11AAB37CB0B1FCB70C4240ABED3A7ED2C608F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80B9862F6FD4673A33E49F33829053D1CC06403D);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//            new FunctionDef(Afe_Common.Const_Search, new System.Type[]{ typeof(string), typeof(string), typeof(decimal)}, typeof(decimal), 3),
		//            new FunctionDef(Afe_Common.Const_Search, new System.Type[] { typeof(string), typeof(string)}, typeof(decimal), 2)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_8);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_11);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_14 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_14, _stringLiteral80B9862F6FD4673A33E49F33829053D1CC06403D, L_9, L_13, 3, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_14, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_15 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_16 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_17 = L_16;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_19);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_21, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_22);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_23, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_25 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_25, _stringLiteral80B9862F6FD4673A33E49F33829053D1CC06403D, L_20, L_24, 2, NULL);
		NullCheck(L_15);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_15, L_25, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_26 = V_0;
		return L_26;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.searchFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* searchFunction_Execute_m4C322449524FD71879A26787CF43DD8A08BE6D9D (searchFunction_t6C11AAB37CB0B1FCB70C4240ABED3A7ED2C608F6* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// int pos = searchFunc(args, dc);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_1 = ___dc1;
		int32_t L_2;
		L_2 = searchFunction_searchFunc_m7873A7D3380724A29D6C080F4ED678DCB1974963(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// return pos >= 0 ? pos + 1 : pos;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B3_0 = L_4;
		goto IL_0013;
	}

IL_0010:
	{
		int32_t L_5 = V_0;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0013:
	{
		int32_t L_6 = G_B3_0;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
// System.Int32 Plugins.Math_expression_eval.org.matheval.Functions.Impl.searchFunction::searchFunc(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t searchFunction_searchFunc_m7873A7D3380724A29D6C080F4ED678DCB1974963 (searchFunction_t6C11AAB37CB0B1FCB70C4240ABED3A7ED2C608F6* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* V_1 = NULL;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	{
		// var ci = Thread.CurrentThread.CurrentCulture;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0;
		L_0 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_0);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = Thread_get_CurrentCulture_mD011FDBB62CA34E83A1D1916628826ADAC85E7A6(L_0, NULL);
		V_1 = L_1;
		// Thread.CurrentThread.CurrentCulture = dc.WorkingCulture;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2;
		L_2 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_3 = ___dc1;
		NullCheck(L_3);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4 = L_3->___WorkingCulture_8;
		NullCheck(L_2);
		Thread_set_CurrentCulture_mF3DAE075752A66909692C46156765EECE6F2BE58(L_2, L_4, NULL);
		// if (args.Count == 2)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___args0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA(L_5, Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_006e;
		}
	}
	{
		// result = Afe_Common.ToString(args[Afe_Common.Const_Key_Two], dc.WorkingCulture).ToLower(dc.WorkingCulture).IndexOf(Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture).ToLower(dc.WorkingCulture));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = ___args0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_7, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_9 = ___dc1;
		NullCheck(L_9);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10 = L_9->___WorkingCulture_8;
		String_t* L_11;
		L_11 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_8, L_10, NULL);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_12 = ___dc1;
		NullCheck(L_12);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_13 = L_12->___WorkingCulture_8;
		NullCheck(L_11);
		String_t* L_14;
		L_14 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_11, L_13, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_15 = ___args0;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_15, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_17 = ___dc1;
		NullCheck(L_17);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_18 = L_17->___WorkingCulture_8;
		String_t* L_19;
		L_19 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_16, L_18, NULL);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_20 = ___dc1;
		NullCheck(L_20);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_21 = L_20->___WorkingCulture_8;
		NullCheck(L_19);
		String_t* L_22;
		L_22 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_19, L_21, NULL);
		NullCheck(L_14);
		int32_t L_23;
		L_23 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_14, L_22, NULL);
		V_0 = L_23;
		goto IL_00e7;
	}

IL_006e:
	{
		// Decimal paramThree = Convert.ToDecimal(args[Afe_Common.Const_Key_Three], dc.WorkingCulture);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_24 = ___args0;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_24, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_26 = ___dc1;
		NullCheck(L_26);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_27 = L_26->___WorkingCulture_8;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_28;
		L_28 = Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA(L_25, L_27, NULL);
		V_2 = L_28;
		// String paramTwo = Afe_Common.ToString(args[Afe_Common.Const_Key_Two], dc.WorkingCulture);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_29 = ___args0;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_29, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_31 = ___dc1;
		NullCheck(L_31);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_32 = L_31->___WorkingCulture_8;
		String_t* L_33;
		L_33 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_30, L_32, NULL);
		V_3 = L_33;
		// if (Decimal.ToInt32(paramThree) >= paramTwo.Length)
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_34 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = Decimal_ToInt32_m683C06E2C4596EC3BD7106B222AAA161D07F423A(L_34, NULL);
		String_t* L_36 = V_3;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_00ac;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_00ac:
	{
		// result = paramTwo.ToLower(dc.WorkingCulture).IndexOf(
		//     Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture).ToLower(dc.WorkingCulture),
		//     Decimal.ToInt32(paramThree) - 1);
		String_t* L_38 = V_3;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_39 = ___dc1;
		NullCheck(L_39);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_40 = L_39->___WorkingCulture_8;
		NullCheck(L_38);
		String_t* L_41;
		L_41 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_38, L_40, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_42 = ___args0;
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_42, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_44 = ___dc1;
		NullCheck(L_44);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_45 = L_44->___WorkingCulture_8;
		String_t* L_46;
		L_46 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_43, L_45, NULL);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_47 = ___dc1;
		NullCheck(L_47);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_48 = L_47->___WorkingCulture_8;
		NullCheck(L_46);
		String_t* L_49;
		L_49 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_46, L_48, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_50 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		int32_t L_51;
		L_51 = Decimal_ToInt32_m683C06E2C4596EC3BD7106B222AAA161D07F423A(L_50, NULL);
		NullCheck(L_41);
		int32_t L_52;
		L_52 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_41, L_49, ((int32_t)il2cpp_codegen_subtract(L_51, 1)), NULL);
		V_0 = L_52;
	}

IL_00e7:
	{
		// Thread.CurrentThread.CurrentCulture = ci;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_53;
		L_53 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_54 = V_1;
		NullCheck(L_53);
		Thread_set_CurrentCulture_mF3DAE075752A66909692C46156765EECE6F2BE58(L_53, L_54, NULL);
		// return result;
		int32_t L_55 = V_0;
		return L_55;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.searchFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void searchFunction__ctor_m31FE9683F1789EEBCDDF4E6482727B5464FCF31E (searchFunction_t6C11AAB37CB0B1FCB70C4240ABED3A7ED2C608F6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.secFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* secFunction_GetInfo_m292F163F5DD4B44B0880F45D69E5D3CDBD18D67B (secFunction_t9C3706093F3130BE1B15063064C0F957D90CFAE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF7F6EDE1585B3A89D52469201CDF739F995DB55);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef> { new FunctionDef(Afe_Common.Const_Sec, new System.Type[] { typeof(decimal) }, typeof(decimal), 1) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteralAF7F6EDE1585B3A89D52469201CDF739F995DB55, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.secFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* secFunction_Execute_m736FF14B945B6A3DFC6D27C5C05E11C8BA31C1FE (secFunction_t9C3706093F3130BE1B15063064C0F957D90CFAE2* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// double result = 1d / Math.Cos(Decimal.ToDouble(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture)));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = Decimal_ToDouble_mE406587545238A39E46DEB3998E3D08878B1CA9B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = cos(L_5);
		// return Convert.ToDecimal(result, dc.WorkingCulture);
		double L_7 = ((double)((1.0)/L_6));
		RuntimeObject* L_8 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_7);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_9 = ___dc1;
		NullCheck(L_9);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10 = L_9->___WorkingCulture_8;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11;
		L_11 = Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA(L_8, L_10, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12 = L_11;
		RuntimeObject* L_13 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.secFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void secFunction__ctor_mDBDE80D08589D112FED465759DB6E8CF77CD893D (secFunction_t9C3706093F3130BE1B15063064C0F957D90CFAE2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.sinFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* sinFunction_GetInfo_mEECD47735684275B2846EA7C3EA67751BAA3E51C (sinFunction_t84CBB275B5FA173ED1D8841C7102214E4E04E731* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC29737350F47E65B64743D7E597D04BC4F44CADC);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Sin, new System.Type[]{ typeof(decimal) }, typeof(decimal), 1)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteralC29737350F47E65B64743D7E597D04BC4F44CADC, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.sinFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* sinFunction_Execute_mBF7C4BB8C50332CD6390E1DBD7ECA65D611B751B (sinFunction_t84CBB275B5FA173ED1D8841C7102214E4E04E731* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// double result = Math.Sin(Decimal.ToDouble(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture)));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = Decimal_ToDouble_mE406587545238A39E46DEB3998E3D08878B1CA9B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sin(L_5);
		// return Convert.ToDecimal(result, dc.WorkingCulture);
		double L_7 = L_6;
		RuntimeObject* L_8 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_7);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_9 = ___dc1;
		NullCheck(L_9);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10 = L_9->___WorkingCulture_8;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11;
		L_11 = Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA(L_8, L_10, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12 = L_11;
		RuntimeObject* L_13 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.sinFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sinFunction__ctor_mF6614D52312848A160D0A0BAACC1F6C57C3EACD6 (sinFunction_t84CBB275B5FA173ED1D8841C7102214E4E04E731* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.sinhFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* sinhFunction_GetInfo_m4E2E3ACB95DDBAE3ABD06FD4F447049597F00907 (sinhFunction_t172779535AA2ECE6382D57681456DD8DF8FF836F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral002FA734F396A64F8C5046EE2C130075495102FB);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Sinh, new System.Type[]{ typeof(decimal) }, typeof(decimal), 1)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral002FA734F396A64F8C5046EE2C130075495102FB, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.sinhFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* sinhFunction_Execute_m8AFB69D56E0DF79CE567E05E10B4DD48C4D5B4F0 (sinhFunction_t172779535AA2ECE6382D57681456DD8DF8FF836F* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// double result = Math.Sinh(Decimal.ToDouble(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture)));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = Decimal_ToDouble_mE406587545238A39E46DEB3998E3D08878B1CA9B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sinh(L_5);
		// return Convert.ToDecimal(result, dc.WorkingCulture);
		double L_7 = L_6;
		RuntimeObject* L_8 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_7);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_9 = ___dc1;
		NullCheck(L_9);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10 = L_9->___WorkingCulture_8;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11;
		L_11 = Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA(L_8, L_10, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12 = L_11;
		RuntimeObject* L_13 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.sinhFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sinhFunction__ctor_m61E2172C08CFE80F27C95C4B069638CEEC9DE6A4 (sinhFunction_t172779535AA2ECE6382D57681456DD8DF8FF836F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.sqrtFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* sqrtFunction_GetInfo_m21DAE90A2FE6E61BF82022C07C58E949A80D7B5A (sqrtFunction_t5978D14FCA2832A8A6C4FAF91B1EA174035BC89D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDF7261789409A234DE3BB01784C2E64B45B8AE4);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Sqrt, new System.Type[]{ typeof(decimal) }, typeof(decimal), 1)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteralEDF7261789409A234DE3BB01784C2E64B45B8AE4, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.sqrtFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* sqrtFunction_Execute_mA222F19C1C9263730CEA24E345CB629DC38D7ED4 (sqrtFunction_t5978D14FCA2832A8A6C4FAF91B1EA174035BC89D* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// double result = Math.Sqrt(Decimal.ToDouble(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture)));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = Decimal_ToDouble_mE406587545238A39E46DEB3998E3D08878B1CA9B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(L_5);
		// return Convert.ToDecimal(result, dc.WorkingCulture);
		double L_7 = L_6;
		RuntimeObject* L_8 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_7);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_9 = ___dc1;
		NullCheck(L_9);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10 = L_9->___WorkingCulture_8;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11;
		L_11 = Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA(L_8, L_10, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12 = L_11;
		RuntimeObject* L_13 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.sqrtFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqrtFunction__ctor_mA53A111F70C4C846565BA90ACDD5EA6D201355D3 (sqrtFunction_t5978D14FCA2832A8A6C4FAF91B1EA174035BC89D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.substituteFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* substituteFunction_GetInfo_mB9501A17AC1517883BFB07BB939A941BBC9E70E6 (substituteFunction_tD038C139618C3D06CB1EABD2DECCB86B5FDFDCF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC58AAF9CDC78F491B75DA376DC76EC5040765AA6);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Substitute, new System.Type[]{ typeof(string), typeof(string), typeof(string)}, typeof(string), 3) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_8);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_11);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_14 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_14, _stringLiteralC58AAF9CDC78F491B75DA376DC76EC5040765AA6, L_9, L_13, 3, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_14, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_15 = V_0;
		return L_15;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.substituteFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* substituteFunction_Execute_mE431A058E0E18F109D0D6272E21428081712BE43 (substituteFunction_tD038C139618C3D06CB1EABD2DECCB86B5FDFDCF7* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture).Replace(Afe_Common.ToString(args[Afe_Common.Const_Key_Two], dc.WorkingCulture), Afe_Common.ToString(args[Afe_Common.Const_Key_Three], dc.WorkingCulture));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		String_t* L_4;
		L_4 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_1, L_3, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___args0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_5, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_7 = ___dc1;
		NullCheck(L_7);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8 = L_7->___WorkingCulture_8;
		String_t* L_9;
		L_9 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_6, L_8, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_10 = ___args0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_10, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_12 = ___dc1;
		NullCheck(L_12);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_13 = L_12->___WorkingCulture_8;
		String_t* L_14;
		L_14 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_11, L_13, NULL);
		NullCheck(L_4);
		String_t* L_15;
		L_15 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_4, L_9, L_14, NULL);
		return L_15;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.substituteFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void substituteFunction__ctor_m061032E250657B6D8D5838B720AC61EBC440349A (substituteFunction_tD038C139618C3D06CB1EABD2DECCB86B5FDFDCF7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.sumFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* sumFunction_GetInfo_mE369F73EB6FE28A84F5BD90745624C29A7D500E5 (sumFunction_t24C4A24001C0A57ECB9EB780CC51DEA0A915AC5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13B1B956E2F73D7942D59A9A0BC6BAC295CC8AB3);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//            new FunctionDef(Afe_Common.Const_Sum, new System.Type[]{ typeof(decimal) }, typeof(decimal), -1),
		//            new FunctionDef(Afe_Common.Const_Sum, new System.Type[] { typeof(Object) }, typeof(decimal), 1)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral13B1B956E2F73D7942D59A9A0BC6BAC295CC8AB3, L_3, L_7, (-1), NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = L_10;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_13);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_16 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_16, _stringLiteral13B1B956E2F73D7942D59A9A0BC6BAC295CC8AB3, L_11, L_15, 1, NULL);
		NullCheck(L_9);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_9, L_16, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_17 = V_0;
		return L_17;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.sumFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* sumFunction_Execute_mF917022FA9A00AF98E1B304172E6292D68154518 (sumFunction_t24C4A24001C0A57ECB9EB780CC51DEA0A915AC5C* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (args.Count == 1 && Afe_Common.IsList(args[Afe_Common.Const_Key_One]))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA(L_0, Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0038;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ___args0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_2, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		bool L_4;
		L_4 = Afe_Common_IsList_m5B02243ADEF92A08B0E619EABF456231210523FB(L_3, NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// return this.SumList((IEnumerable)args[Afe_Common.Const_Key_One], dc);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___args0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_5, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_7 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8;
		L_8 = sumFunction_SumList_m89B1A9C42BB6F476E282F863CAA605289D590566(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)), L_7, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9 = L_8;
		RuntimeObject* L_10 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}

IL_0038:
	{
		// return this.Sum(args, dc);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = ___args0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_12 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_13;
		L_13 = sumFunction_Sum_mDA0F447CED534F03A5C8F840536B26D39411340A(__this, L_11, L_12, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_14 = L_13;
		RuntimeObject* L_15 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_14);
		return L_15;
	}
}
// System.Decimal Plugins.Math_expression_eval.org.matheval.Functions.Impl.sumFunction::Sum(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F sumFunction_Sum_mDA0F447CED534F03A5C8F840536B26D39411340A (sumFunction_t24C4A24001C0A57ECB9EB780CC51DEA0A915AC5C* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		// decimal sum = 0;
		il2cpp_codegen_initobj((&V_0), sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
		// foreach (Object item in args.Values)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* L_1;
		L_1 = Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC(L_0, Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504 L_2;
		L_2 = ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3(L_1, ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5((&V_1), Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0031_1;
			}

IL_0016_1:
			{
				// foreach (Object item in args.Values)
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_inline((&V_1), Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_RuntimeMethod_var);
				V_2 = L_3;
				// sum += Afe_Common.ToDecimal(item, dc.WorkingCulture);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4 = V_0;
				RuntimeObject* L_5 = V_2;
				ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_6 = ___dc1;
				NullCheck(L_6);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7 = L_6->___WorkingCulture_8;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8;
				L_8 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_5, L_7, NULL);
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9;
				L_9 = Decimal_op_Addition_m79AD1C3ED1E6345D50110EA4D20DAE724724B9DA(L_4, L_8, NULL);
				V_0 = L_9;
			}

IL_0031_1:
			{
				// foreach (Object item in args.Values)
				bool L_10;
				L_10 = Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948((&V_1), Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_004a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		// return sum;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11 = V_0;
		return L_11;
	}
}
// System.Decimal Plugins.Math_expression_eval.org.matheval.Functions.Impl.sumFunction::SumList(System.Collections.IEnumerable,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F sumFunction_SumList_m89B1A9C42BB6F476E282F863CAA605289D590566 (sumFunction_t24C4A24001C0A57ECB9EB780CC51DEA0A915AC5C* __this, RuntimeObject* ___arg0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// decimal sum = 0;
		il2cpp_codegen_initobj((&V_0), sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
		// foreach (Object item in arg)
		RuntimeObject* L_0 = ___arg0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_3;
					if (!L_3)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_4 = V_3;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0033_1;
			}

IL_0011_1:
			{
				// foreach (Object item in arg)
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				// if (Afe_Common.IsNumber(item))
				RuntimeObject* L_7 = V_2;
				bool L_8;
				L_8 = Afe_Common_IsNumber_m4E55CE0DE9F1AC1E496F4BC0DE0F39BF50A5AEF0(L_7, NULL);
				if (!L_8)
				{
					goto IL_0033_1;
				}
			}
			{
				// sum += Afe_Common.ToDecimal(item, dc.WorkingCulture);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9 = V_0;
				RuntimeObject* L_10 = V_2;
				ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_11 = ___dc1;
				NullCheck(L_11);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_12 = L_11->___WorkingCulture_8;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_13;
				L_13 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_10, L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_14;
				L_14 = Decimal_op_Addition_m79AD1C3ED1E6345D50110EA4D20DAE724724B9DA(L_9, L_13, NULL);
				V_0 = L_14;
			}

IL_0033_1:
			{
				// foreach (Object item in arg)
				RuntimeObject* L_15 = V_1;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_004e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// return sum;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_17 = V_0;
		return L_17;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.sumFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sumFunction__ctor_m61F2D7A15FDE65EEB3FB3EC5BB838C0BBC7154EF (sumFunction_t24C4A24001C0A57ECB9EB780CC51DEA0A915AC5C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.tanFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* tanFunction_GetInfo_m3A1607578366050B73EEF83C06B35655AE16E152 (tanFunction_tA716117DFF8E5DAD5C1F92FF14539F881CC3A84D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral136B540A8630F1606A6B94CE48B975D13A72971C);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Tan, new System.Type[]{typeof(decimal)}, typeof(decimal), 1)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral136B540A8630F1606A6B94CE48B975D13A72971C, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.tanFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tanFunction_Execute_mA9C0E2C2645248F9F1BC0E1790C035032087A302 (tanFunction_tA716117DFF8E5DAD5C1F92FF14539F881CC3A84D* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// double result = Math.Tan(Decimal.ToDouble(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture)));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = Decimal_ToDouble_mE406587545238A39E46DEB3998E3D08878B1CA9B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = tan(L_5);
		// return Convert.ToDecimal(result, dc.WorkingCulture);
		double L_7 = L_6;
		RuntimeObject* L_8 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_7);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_9 = ___dc1;
		NullCheck(L_9);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10 = L_9->___WorkingCulture_8;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11;
		L_11 = Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA(L_8, L_10, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12 = L_11;
		RuntimeObject* L_13 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.tanFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tanFunction__ctor_m0B66DEA6642F3677FCF66E60D56D3202484F00C5 (tanFunction_tA716117DFF8E5DAD5C1F92FF14539F881CC3A84D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.tanhFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* tanhFunction_GetInfo_m5D5F8DAF752DC838C5C3D5AE49ACF893F457F16D (tanhFunction_tA6F919B74E808916D99254D3F45980368C5D1914* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB24C0C3C5E68893774461D9F561B92C9CF402EB5);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Tanh, new System.Type[]{ typeof(decimal) }, typeof(decimal), 1)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteralB24C0C3C5E68893774461D9F561B92C9CF402EB5, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.tanhFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tanhFunction_Execute_mBDEC87F9CA7F31D66569019985E47BC0E237162F (tanhFunction_tA6F919B74E808916D99254D3F45980368C5D1914* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// double result = Math.Tanh(Decimal.ToDouble(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture)));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = Decimal_ToDouble_mE406587545238A39E46DEB3998E3D08878B1CA9B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = tanh(L_5);
		// return Convert.ToDecimal(result, dc.WorkingCulture);
		double L_7 = L_6;
		RuntimeObject* L_8 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_7);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_9 = ___dc1;
		NullCheck(L_9);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10 = L_9->___WorkingCulture_8;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11;
		L_11 = Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA(L_8, L_10, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12 = L_11;
		RuntimeObject* L_13 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.tanhFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tanhFunction__ctor_mE9DD1918FEDA4137B2CD78697501B1E19174E6B7 (tanhFunction_tA6F919B74E808916D99254D3F45980368C5D1914* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.textFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* textFunction_GetInfo_m6F581233BE12E0B769E1DDF8415C8DB40566E41F (textFunction_tBA331631FAF8410D3640600BC46337D39F649F38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Text, new System.Type[]{typeof(Object) }, typeof(string), 1),
		//         new FunctionDef(Afe_Common.Const_Text, new System.Type[] { typeof(Object), typeof(string)}, typeof(string), 2)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = L_10;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_13);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = L_11;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_16);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_17, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_19 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_19, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0, L_14, L_18, 2, NULL);
		NullCheck(L_9);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_9, L_19, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_20 = V_0;
		return L_20;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.textFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* textFunction_Execute_m13336803C3DED64776EBD01BC98E4DDF3498B224 (textFunction_tBA331631FAF8410D3640600BC46337D39F649F38* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral076BDAA4817EFAF09D4E20A7F06B21FFD16F97AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0953B51C96E84CE0F27B7E34EDA5518C288ACCFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C40A291CA9975AA15230BCF5FB7769571AAC49F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CD979583B209CE71603EFC4A398E6A9EFA8D872);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A94409FDC67D5A5F00288CC0228D6F553510291);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21E340F099828A89089729B71F1867A9116ED903);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ED91F26D3CAE38A5CB5F4A3F915218E4EDD275C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D6AF22BEAB42B204AD08BE568951640E7D33A65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92C76723E0230A25352BC874455206F1E7410510);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96FDDD630F69FFEBB34C3732D3BA2C3CC17A97BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral976C1823B99DB12B5A2AE13847CFFFE2F77D4903);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CB8920DB1128B58F5DB1857336743297CB545C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA24B7E606B330980535EC972B4425839CEB0D82B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA602B5D5A12025914129A13B67770AD3592E0B7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA61B111B4AF41B97A8A4ADA7BA4887DAD155760C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADDBB2DEAEEECCEFF4E3E4B188E9F97B50EC64B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB28450EC0D78500325D3950CEAA3C9C8C3BC6309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC449882FDA6EDC362005905EC397E976EC6C450A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC566C8888ED6F47286ED0C1D468EDE11F98CC7FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE74BB6C7776CDB4379108C0CA92030964C3B7596);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB3C8855D5271BA6C817B04135DD7C1C4B65452A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF4E65E292D23839E82C2708F932E9296E68DE96);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* V_1 = NULL;
	String_t* V_2 = NULL;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_3;
	memset((&V_3), 0, sizeof(V_3));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_6;
	memset((&V_6), 0, sizeof(V_6));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_7;
	memset((&V_7), 0, sizeof(V_7));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_8;
	memset((&V_8), 0, sizeof(V_8));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_9;
	memset((&V_9), 0, sizeof(V_9));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_10;
	memset((&V_10), 0, sizeof(V_10));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_11;
	memset((&V_11), 0, sizeof(V_11));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_12;
	memset((&V_12), 0, sizeof(V_12));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_13;
	memset((&V_13), 0, sizeof(V_13));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_14;
	memset((&V_14), 0, sizeof(V_14));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_15;
	memset((&V_15), 0, sizeof(V_15));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_16;
	memset((&V_16), 0, sizeof(V_16));
	{
		// if (args.Count == 2)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA(L_0, Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_05f5;
		}
	}
	{
		// string pattern = Afe_Common.ToString(args[Afe_Common.Const_Key_Two], dc.WorkingCulture);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ___args0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_2, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_4 = ___dc1;
		NullCheck(L_4);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = L_4->___WorkingCulture_8;
		String_t* L_6;
		L_6 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_3, L_5, NULL);
		V_0 = L_6;
		// if (args[Afe_Common.Const_Key_One] is decimal)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = ___args0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_7, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))
		{
			goto IL_05f5;
		}
	}
	{
		// var ci = Thread.CurrentThread.CurrentCulture;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_9;
		L_9 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_9);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10;
		L_10 = Thread_get_CurrentCulture_mD011FDBB62CA34E83A1D1916628826ADAC85E7A6(L_9, NULL);
		V_1 = L_10;
		// Thread.CurrentThread.CurrentCulture = dc.WorkingCulture;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_11;
		L_11 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_12 = ___dc1;
		NullCheck(L_12);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_13 = L_12->___WorkingCulture_8;
		NullCheck(L_11);
		Thread_set_CurrentCulture_mF3DAE075752A66909692C46156765EECE6F2BE58(L_11, L_13, NULL);
		// string ret = pattern;
		String_t* L_14 = V_0;
		V_2 = L_14;
		// decimal t = Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_15 = ___args0;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_15, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_17 = ___dc1;
		NullCheck(L_17);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_18 = L_17->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_19;
		L_19 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_16, L_18, NULL);
		V_3 = L_19;
		// if (pattern.ToLower(dc.WorkingCulture).Contains("[hh]"))
		String_t* L_20 = V_0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_21 = ___dc1;
		NullCheck(L_21);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_22 = L_21->___WorkingCulture_8;
		NullCheck(L_20);
		String_t* L_23;
		L_23 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_20, L_22, NULL);
		NullCheck(L_23);
		bool L_24;
		L_24 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_23, _stringLiteral0C40A291CA9975AA15230BCF5FB7769571AAC49F, NULL);
		if (!L_24)
		{
			goto IL_00cd;
		}
	}
	{
		// decimal hh = Afe_Common.Round(t * 24, dc);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_25 = V_3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_26;
		memset((&L_26), 0, sizeof(L_26));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_26), ((int32_t)24), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_27;
		L_27 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_25, L_26, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_28 = L_27;
		RuntimeObject* L_29 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_28);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_30 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_31;
		L_31 = Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99(L_29, L_30, NULL);
		V_4 = L_31;
		// ret = Regex.Replace(ret, "\\[[hH]{2,2}\\]", ((int)hh).ToString(dc.WorkingCulture).PadLeft(2, '0'));
		String_t* L_32 = V_2;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_33 = V_4;
		int32_t L_34;
		L_34 = Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774(L_33, NULL);
		V_5 = L_34;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_35 = ___dc1;
		NullCheck(L_35);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_36 = L_35->___WorkingCulture_8;
		String_t* L_37;
		L_37 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_5), L_36, NULL);
		NullCheck(L_37);
		String_t* L_38;
		L_38 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_37, 2, ((int32_t)48), NULL);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_39;
		L_39 = Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66(L_32, _stringLiteral5ED91F26D3CAE38A5CB5F4A3F915218E4EDD275C, L_38, NULL);
		V_2 = L_39;
		goto IL_01f8;
	}

IL_00cd:
	{
		// else if (pattern.ToLower(dc.WorkingCulture).Contains("hh"))
		String_t* L_40 = V_0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_41 = ___dc1;
		NullCheck(L_41);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_42 = L_41->___WorkingCulture_8;
		NullCheck(L_40);
		String_t* L_43;
		L_43 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_40, L_42, NULL);
		NullCheck(L_43);
		bool L_44;
		L_44 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_43, _stringLiteralA61B111B4AF41B97A8A4ADA7BA4887DAD155760C, NULL);
		if (!L_44)
		{
			goto IL_013e;
		}
	}
	{
		// decimal hh = Afe_Common.Round((t - (int)(t)) * 24, dc);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_45 = V_3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_46 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		int32_t L_47;
		L_47 = Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774(L_46, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_48;
		L_48 = Decimal_op_Implicit_mE5A73A41E53B29C29A49359A2B5D0615A867B7C7(L_47, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_49;
		L_49 = Decimal_op_Subtraction_m50F5DC718BD003A09A5BC62BAA3DECD0745AD3F1(L_45, L_48, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_50;
		memset((&L_50), 0, sizeof(L_50));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_50), ((int32_t)24), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_51;
		L_51 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_49, L_50, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_52 = L_51;
		RuntimeObject* L_53 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_52);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_54 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_55;
		L_55 = Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99(L_53, L_54, NULL);
		V_6 = L_55;
		// ret = Regex.Replace(ret, "[hH]{2,2}", ((int)hh).ToString(dc.WorkingCulture).PadLeft(2, '0'));
		String_t* L_56 = V_2;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_57 = V_6;
		int32_t L_58;
		L_58 = Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774(L_57, NULL);
		V_5 = L_58;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_59 = ___dc1;
		NullCheck(L_59);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_60 = L_59->___WorkingCulture_8;
		String_t* L_61;
		L_61 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_5), L_60, NULL);
		NullCheck(L_61);
		String_t* L_62;
		L_62 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_61, 2, ((int32_t)48), NULL);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_63;
		L_63 = Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66(L_56, _stringLiteralA602B5D5A12025914129A13B67770AD3592E0B7F, L_62, NULL);
		V_2 = L_63;
		goto IL_01f8;
	}

IL_013e:
	{
		// else if (pattern.ToLower(dc.WorkingCulture).Contains("[h]"))
		String_t* L_64 = V_0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_65 = ___dc1;
		NullCheck(L_65);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_66 = L_65->___WorkingCulture_8;
		NullCheck(L_64);
		String_t* L_67;
		L_67 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_64, L_66, NULL);
		NullCheck(L_67);
		bool L_68;
		L_68 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_67, _stringLiteral076BDAA4817EFAF09D4E20A7F06B21FFD16F97AC, NULL);
		if (!L_68)
		{
			goto IL_0194;
		}
	}
	{
		// decimal hh = Afe_Common.Round(t * 24, dc);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_69 = V_3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_70;
		memset((&L_70), 0, sizeof(L_70));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_70), ((int32_t)24), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_71;
		L_71 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_69, L_70, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_72 = L_71;
		RuntimeObject* L_73 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_72);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_74 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_75;
		L_75 = Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99(L_73, L_74, NULL);
		V_7 = L_75;
		// ret = Regex.Replace(ret, "\\[[hH]{1,1}\\]", ((int)hh).ToString(dc.WorkingCulture));
		String_t* L_76 = V_2;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_77 = V_7;
		int32_t L_78;
		L_78 = Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774(L_77, NULL);
		V_5 = L_78;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_79 = ___dc1;
		NullCheck(L_79);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_80 = L_79->___WorkingCulture_8;
		String_t* L_81;
		L_81 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_5), L_80, NULL);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_82;
		L_82 = Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66(L_76, _stringLiteral21E340F099828A89089729B71F1867A9116ED903, L_81, NULL);
		V_2 = L_82;
		goto IL_01f8;
	}

IL_0194:
	{
		// else if (pattern.ToLower(dc.WorkingCulture).Contains("h"))
		String_t* L_83 = V_0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_84 = ___dc1;
		NullCheck(L_84);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_85 = L_84->___WorkingCulture_8;
		NullCheck(L_83);
		String_t* L_86;
		L_86 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_83, L_85, NULL);
		NullCheck(L_86);
		bool L_87;
		L_87 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_86, _stringLiteral0CD979583B209CE71603EFC4A398E6A9EFA8D872, NULL);
		if (!L_87)
		{
			goto IL_01f8;
		}
	}
	{
		// decimal hh = Afe_Common.Round((t - (int)(t)) * 24, dc);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_88 = V_3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_89 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		int32_t L_90;
		L_90 = Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774(L_89, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_91;
		L_91 = Decimal_op_Implicit_mE5A73A41E53B29C29A49359A2B5D0615A867B7C7(L_90, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_92;
		L_92 = Decimal_op_Subtraction_m50F5DC718BD003A09A5BC62BAA3DECD0745AD3F1(L_88, L_91, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_93;
		memset((&L_93), 0, sizeof(L_93));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_93), ((int32_t)24), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_94;
		L_94 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_92, L_93, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_95 = L_94;
		RuntimeObject* L_96 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_95);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_97 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_98;
		L_98 = Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99(L_96, L_97, NULL);
		V_8 = L_98;
		// ret = Regex.Replace(ret, "[hH]{1,1}", ((int)hh).ToString(dc.WorkingCulture));
		String_t* L_99 = V_2;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_100 = V_8;
		int32_t L_101;
		L_101 = Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774(L_100, NULL);
		V_5 = L_101;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_102 = ___dc1;
		NullCheck(L_102);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_103 = L_102->___WorkingCulture_8;
		String_t* L_104;
		L_104 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_5), L_103, NULL);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_105;
		L_105 = Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66(L_99, _stringLiteralB28450EC0D78500325D3950CEAA3C9C8C3BC6309, L_104, NULL);
		V_2 = L_105;
	}

IL_01f8:
	{
		// if (pattern.Contains("[mm]"))
		String_t* L_106 = V_0;
		NullCheck(L_106);
		bool L_107;
		L_107 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_106, _stringLiteralE74BB6C7776CDB4379108C0CA92030964C3B7596, NULL);
		if (!L_107)
		{
			goto IL_025a;
		}
	}
	{
		// decimal hh = Afe_Common.Round(t * 24 * 60, dc);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_108 = V_3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_109;
		memset((&L_109), 0, sizeof(L_109));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_109), ((int32_t)24), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_110;
		L_110 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_108, L_109, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_111;
		memset((&L_111), 0, sizeof(L_111));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_111), ((int32_t)60), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_112;
		L_112 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_110, L_111, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_113 = L_112;
		RuntimeObject* L_114 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_113);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_115 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_116;
		L_116 = Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99(L_114, L_115, NULL);
		V_9 = L_116;
		// ret = Regex.Replace(ret, "\\[[m]{2,2}\\]", ((int)hh).ToString(dc.WorkingCulture).PadLeft(2, '0'));
		String_t* L_117 = V_2;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_118 = V_9;
		int32_t L_119;
		L_119 = Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774(L_118, NULL);
		V_5 = L_119;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_120 = ___dc1;
		NullCheck(L_120);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_121 = L_120->___WorkingCulture_8;
		String_t* L_122;
		L_122 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_5), L_121, NULL);
		NullCheck(L_122);
		String_t* L_123;
		L_123 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_122, 2, ((int32_t)48), NULL);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_124;
		L_124 = Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66(L_117, _stringLiteral92C76723E0230A25352BC874455206F1E7410510, L_123, NULL);
		V_2 = L_124;
		goto IL_03a0;
	}

IL_025a:
	{
		// else if (pattern.Contains("mm"))
		String_t* L_125 = V_0;
		NullCheck(L_125);
		bool L_126;
		L_126 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_125, _stringLiteral1A94409FDC67D5A5F00288CC0228D6F553510291, NULL);
		if (!L_126)
		{
			goto IL_02d8;
		}
	}
	{
		// decimal hh = Afe_Common.Round(((t * 24) - (int)(t * 24)) * 60, dc);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_127 = V_3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_128;
		memset((&L_128), 0, sizeof(L_128));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_128), ((int32_t)24), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_129;
		L_129 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_127, L_128, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_130 = V_3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_131;
		memset((&L_131), 0, sizeof(L_131));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_131), ((int32_t)24), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_132;
		L_132 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_130, L_131, NULL);
		int32_t L_133;
		L_133 = Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774(L_132, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_134;
		L_134 = Decimal_op_Implicit_mE5A73A41E53B29C29A49359A2B5D0615A867B7C7(L_133, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_135;
		L_135 = Decimal_op_Subtraction_m50F5DC718BD003A09A5BC62BAA3DECD0745AD3F1(L_129, L_134, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_136;
		memset((&L_136), 0, sizeof(L_136));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_136), ((int32_t)60), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_137;
		L_137 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_135, L_136, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_138 = L_137;
		RuntimeObject* L_139 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_138);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_140 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_141;
		L_141 = Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99(L_139, L_140, NULL);
		V_10 = L_141;
		// ret = Regex.Replace(ret, "[m]{2,2}", ((int)hh).ToString(dc.WorkingCulture).PadLeft(2, '0'));
		String_t* L_142 = V_2;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_143 = V_10;
		int32_t L_144;
		L_144 = Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774(L_143, NULL);
		V_5 = L_144;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_145 = ___dc1;
		NullCheck(L_145);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_146 = L_145->___WorkingCulture_8;
		String_t* L_147;
		L_147 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_5), L_146, NULL);
		NullCheck(L_147);
		String_t* L_148;
		L_148 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_147, 2, ((int32_t)48), NULL);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_149;
		L_149 = Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66(L_142, _stringLiteral0953B51C96E84CE0F27B7E34EDA5518C288ACCFC, L_148, NULL);
		V_2 = L_149;
		goto IL_03a0;
	}

IL_02d8:
	{
		// else if (pattern.Contains("[m]"))
		String_t* L_150 = V_0;
		NullCheck(L_150);
		bool L_151;
		L_151 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_150, _stringLiteral9CB8920DB1128B58F5DB1857336743297CB545C8, NULL);
		if (!L_151)
		{
			goto IL_032f;
		}
	}
	{
		// decimal hh = Afe_Common.Round(t * 24 * 60, dc);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_152 = V_3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_153;
		memset((&L_153), 0, sizeof(L_153));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_153), ((int32_t)24), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_154;
		L_154 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_152, L_153, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_155;
		memset((&L_155), 0, sizeof(L_155));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_155), ((int32_t)60), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_156;
		L_156 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_154, L_155, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_157 = L_156;
		RuntimeObject* L_158 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_157);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_159 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_160;
		L_160 = Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99(L_158, L_159, NULL);
		V_11 = L_160;
		// ret = Regex.Replace(ret, "\\[[m]{1,1}\\]", ((int)hh).ToString(dc.WorkingCulture));
		String_t* L_161 = V_2;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_162 = V_11;
		int32_t L_163;
		L_163 = Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774(L_162, NULL);
		V_5 = L_163;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_164 = ___dc1;
		NullCheck(L_164);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_165 = L_164->___WorkingCulture_8;
		String_t* L_166;
		L_166 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_5), L_165, NULL);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_167;
		L_167 = Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66(L_161, _stringLiteralC566C8888ED6F47286ED0C1D468EDE11F98CC7FD, L_166, NULL);
		V_2 = L_167;
		goto IL_03a0;
	}

IL_032f:
	{
		// else if (pattern.Contains("m"))
		String_t* L_168 = V_0;
		NullCheck(L_168);
		bool L_169;
		L_169 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_168, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, NULL);
		if (!L_169)
		{
			goto IL_03a0;
		}
	}
	{
		// decimal hh = Afe_Common.Round(((t * 24) - (int)(t * 24)) * 60, dc);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_170 = V_3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_171;
		memset((&L_171), 0, sizeof(L_171));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_171), ((int32_t)24), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_172;
		L_172 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_170, L_171, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_173 = V_3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_174;
		memset((&L_174), 0, sizeof(L_174));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_174), ((int32_t)24), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_175;
		L_175 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_173, L_174, NULL);
		int32_t L_176;
		L_176 = Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774(L_175, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_177;
		L_177 = Decimal_op_Implicit_mE5A73A41E53B29C29A49359A2B5D0615A867B7C7(L_176, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_178;
		L_178 = Decimal_op_Subtraction_m50F5DC718BD003A09A5BC62BAA3DECD0745AD3F1(L_172, L_177, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_179;
		memset((&L_179), 0, sizeof(L_179));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_179), ((int32_t)60), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_180;
		L_180 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_178, L_179, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_181 = L_180;
		RuntimeObject* L_182 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_181);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_183 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_184;
		L_184 = Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99(L_182, L_183, NULL);
		V_12 = L_184;
		// ret = Regex.Replace(ret, "[m]{1,1}", ((int)hh).ToString(dc.WorkingCulture));
		String_t* L_185 = V_2;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_186 = V_12;
		int32_t L_187;
		L_187 = Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774(L_186, NULL);
		V_5 = L_187;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_188 = ___dc1;
		NullCheck(L_188);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_189 = L_188->___WorkingCulture_8;
		String_t* L_190;
		L_190 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_5), L_189, NULL);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_191;
		L_191 = Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66(L_185, _stringLiteral8D6AF22BEAB42B204AD08BE568951640E7D33A65, L_190, NULL);
		V_2 = L_191;
	}

IL_03a0:
	{
		// if (pattern.ToLower(dc.WorkingCulture).Contains("[ss]"))
		String_t* L_192 = V_0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_193 = ___dc1;
		NullCheck(L_193);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_194 = L_193->___WorkingCulture_8;
		NullCheck(L_192);
		String_t* L_195;
		L_195 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_192, L_194, NULL);
		NullCheck(L_195);
		bool L_196;
		L_196 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_195, _stringLiteralADDBB2DEAEEECCEFF4E3E4B188E9F97B50EC64B8, NULL);
		if (!L_196)
		{
			goto IL_0419;
		}
	}
	{
		// decimal hh = Afe_Common.Round(t * 24 * 60 * 60, dc);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_197 = V_3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_198;
		memset((&L_198), 0, sizeof(L_198));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_198), ((int32_t)24), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_199;
		L_199 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_197, L_198, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_200;
		memset((&L_200), 0, sizeof(L_200));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_200), ((int32_t)60), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_201;
		L_201 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_199, L_200, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_202;
		memset((&L_202), 0, sizeof(L_202));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_202), ((int32_t)60), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_203;
		L_203 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_201, L_202, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_204 = L_203;
		RuntimeObject* L_205 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_204);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_206 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_207;
		L_207 = Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99(L_205, L_206, NULL);
		V_13 = L_207;
		// ret = Regex.Replace(ret, "\\[[s]{2,2}\\]", ((int)hh).ToString(dc.WorkingCulture).PadLeft(2, '0'));
		String_t* L_208 = V_2;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_209 = V_13;
		int32_t L_210;
		L_210 = Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774(L_209, NULL);
		V_5 = L_210;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_211 = ___dc1;
		NullCheck(L_211);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_212 = L_211->___WorkingCulture_8;
		String_t* L_213;
		L_213 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_5), L_212, NULL);
		NullCheck(L_213);
		String_t* L_214;
		L_214 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_213, 2, ((int32_t)48), NULL);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_215;
		L_215 = Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66(L_208, _stringLiteralFF4E65E292D23839E82C2708F932E9296E68DE96, L_214, NULL);
		V_2 = L_215;
		goto IL_05c2;
	}

IL_0419:
	{
		// else if (pattern.ToLower(dc.WorkingCulture).Contains("ss"))
		String_t* L_216 = V_0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_217 = ___dc1;
		NullCheck(L_217);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_218 = L_217->___WorkingCulture_8;
		NullCheck(L_216);
		String_t* L_219;
		L_219 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_216, L_218, NULL);
		NullCheck(L_219);
		bool L_220;
		L_220 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_219, _stringLiteralC449882FDA6EDC362005905EC397E976EC6C450A, NULL);
		if (!L_220)
		{
			goto IL_04bd;
		}
	}
	{
		// decimal hh = Afe_Common.Round(
		//     ((t * 24m * 60m) - Decimal.ToInt32((t * 24m * 60m))) * 60m,
		//     dc);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_221 = V_3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_222;
		memset((&L_222), 0, sizeof(L_222));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_222), ((int32_t)24), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_223;
		L_223 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_221, L_222, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_224;
		memset((&L_224), 0, sizeof(L_224));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_224), ((int32_t)60), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_225;
		L_225 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_223, L_224, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_226 = V_3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_227;
		memset((&L_227), 0, sizeof(L_227));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_227), ((int32_t)24), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_228;
		L_228 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_226, L_227, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_229;
		memset((&L_229), 0, sizeof(L_229));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_229), ((int32_t)60), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_230;
		L_230 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_228, L_229, NULL);
		int32_t L_231;
		L_231 = Decimal_ToInt32_m683C06E2C4596EC3BD7106B222AAA161D07F423A(L_230, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_232;
		L_232 = Decimal_op_Implicit_mE5A73A41E53B29C29A49359A2B5D0615A867B7C7(L_231, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_233;
		L_233 = Decimal_op_Subtraction_m50F5DC718BD003A09A5BC62BAA3DECD0745AD3F1(L_225, L_232, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_234;
		memset((&L_234), 0, sizeof(L_234));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_234), ((int32_t)60), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_235;
		L_235 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_233, L_234, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_236 = L_235;
		RuntimeObject* L_237 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_236);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_238 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_239;
		L_239 = Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99(L_237, L_238, NULL);
		V_14 = L_239;
		// ret = Regex.Replace(ret, "[s]{2,2}", (Decimal.ToInt32(hh)).ToString(dc.WorkingCulture).PadLeft(2, '0'));
		String_t* L_240 = V_2;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_241 = V_14;
		int32_t L_242;
		L_242 = Decimal_ToInt32_m683C06E2C4596EC3BD7106B222AAA161D07F423A(L_241, NULL);
		V_5 = L_242;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_243 = ___dc1;
		NullCheck(L_243);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_244 = L_243->___WorkingCulture_8;
		String_t* L_245;
		L_245 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_5), L_244, NULL);
		NullCheck(L_245);
		String_t* L_246;
		L_246 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_245, 2, ((int32_t)48), NULL);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_247;
		L_247 = Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66(L_240, _stringLiteralFB3C8855D5271BA6C817B04135DD7C1C4B65452A, L_246, NULL);
		V_2 = L_247;
		goto IL_05c2;
	}

IL_04bd:
	{
		// else if (pattern.ToLower(dc.WorkingCulture).Contains("[s]"))
		String_t* L_248 = V_0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_249 = ___dc1;
		NullCheck(L_249);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_250 = L_249->___WorkingCulture_8;
		NullCheck(L_248);
		String_t* L_251;
		L_251 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_248, L_250, NULL);
		NullCheck(L_251);
		bool L_252;
		L_252 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_251, _stringLiteral96FDDD630F69FFEBB34C3732D3BA2C3CC17A97BA, NULL);
		if (!L_252)
		{
			goto IL_052e;
		}
	}
	{
		// decimal hh = Afe_Common.Round(t * 24 * 60 * 60, dc);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_253 = V_3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_254;
		memset((&L_254), 0, sizeof(L_254));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_254), ((int32_t)24), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_255;
		L_255 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_253, L_254, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_256;
		memset((&L_256), 0, sizeof(L_256));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_256), ((int32_t)60), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_257;
		L_257 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_255, L_256, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_258;
		memset((&L_258), 0, sizeof(L_258));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_258), ((int32_t)60), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_259;
		L_259 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_257, L_258, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_260 = L_259;
		RuntimeObject* L_261 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_260);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_262 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_263;
		L_263 = Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99(L_261, L_262, NULL);
		V_15 = L_263;
		// ret = Regex.Replace(ret, "\\[[s]{1,1}\\]", ((int)hh).ToString(dc.WorkingCulture));
		String_t* L_264 = V_2;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_265 = V_15;
		int32_t L_266;
		L_266 = Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774(L_265, NULL);
		V_5 = L_266;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_267 = ___dc1;
		NullCheck(L_267);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_268 = L_267->___WorkingCulture_8;
		String_t* L_269;
		L_269 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_5), L_268, NULL);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_270;
		L_270 = Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66(L_264, _stringLiteralA24B7E606B330980535EC972B4425839CEB0D82B, L_269, NULL);
		V_2 = L_270;
		goto IL_05c2;
	}

IL_052e:
	{
		// else if (pattern.ToLower(dc.WorkingCulture).Contains("s"))
		String_t* L_271 = V_0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_272 = ___dc1;
		NullCheck(L_272);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_273 = L_272->___WorkingCulture_8;
		NullCheck(L_271);
		String_t* L_274;
		L_274 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_271, L_273, NULL);
		NullCheck(L_274);
		bool L_275;
		L_275 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_274, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, NULL);
		if (!L_275)
		{
			goto IL_05c2;
		}
	}
	{
		// decimal hh = Afe_Common.Round(
		//     ((t * 24 * 60) - (int)(t * 24 * 60)) * 60,
		//     dc);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_276 = V_3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_277;
		memset((&L_277), 0, sizeof(L_277));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_277), ((int32_t)24), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_278;
		L_278 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_276, L_277, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_279;
		memset((&L_279), 0, sizeof(L_279));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_279), ((int32_t)60), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_280;
		L_280 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_278, L_279, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_281 = V_3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_282;
		memset((&L_282), 0, sizeof(L_282));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_282), ((int32_t)24), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_283;
		L_283 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_281, L_282, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_284;
		memset((&L_284), 0, sizeof(L_284));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_284), ((int32_t)60), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_285;
		L_285 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_283, L_284, NULL);
		int32_t L_286;
		L_286 = Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774(L_285, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_287;
		L_287 = Decimal_op_Implicit_mE5A73A41E53B29C29A49359A2B5D0615A867B7C7(L_286, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_288;
		L_288 = Decimal_op_Subtraction_m50F5DC718BD003A09A5BC62BAA3DECD0745AD3F1(L_280, L_287, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_289;
		memset((&L_289), 0, sizeof(L_289));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_289), ((int32_t)60), /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_290;
		L_290 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_288, L_289, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_291 = L_290;
		RuntimeObject* L_292 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_291);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_293 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_294;
		L_294 = Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99(L_292, L_293, NULL);
		V_16 = L_294;
		// ret = Regex.Replace(ret, @"[sS]{1,1}", ((int)hh).ToString(dc.WorkingCulture));
		String_t* L_295 = V_2;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_296 = V_16;
		int32_t L_297;
		L_297 = Decimal_op_Explicit_m720A027DA5DC47194423A05DD80EB0724DB0A774(L_296, NULL);
		V_5 = L_297;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_298 = ___dc1;
		NullCheck(L_298);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_299 = L_298->___WorkingCulture_8;
		String_t* L_300;
		L_300 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_5), L_299, NULL);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_301;
		L_301 = Regex_Replace_mA40B00220816EB1850F503AAB876812C726D8D66(L_295, _stringLiteral976C1823B99DB12B5A2AE13847CFFFE2F77D4903, L_300, NULL);
		V_2 = L_301;
	}

IL_05c2:
	{
		// if (ret != null && ret.Equals(pattern))
		String_t* L_302 = V_2;
		if (!L_302)
		{
			goto IL_05e8;
		}
	}
	{
		String_t* L_303 = V_2;
		String_t* L_304 = V_0;
		NullCheck(L_303);
		bool L_305;
		L_305 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_303, L_304, NULL);
		if (!L_305)
		{
			goto IL_05e8;
		}
	}
	{
		// Thread.CurrentThread.CurrentCulture = ci;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_306;
		L_306 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_307 = V_1;
		NullCheck(L_306);
		Thread_set_CurrentCulture_mF3DAE075752A66909692C46156765EECE6F2BE58(L_306, L_307, NULL);
		// return t.ToString(pattern, dc.WorkingCulture);
		String_t* L_308 = V_0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_309 = ___dc1;
		NullCheck(L_309);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_310 = L_309->___WorkingCulture_8;
		String_t* L_311;
		L_311 = Decimal_ToString_m2600674D09D44940FA0AAA00A87858E741671F4E((&V_3), L_308, L_310, NULL);
		return L_311;
	}

IL_05e8:
	{
		// Thread.CurrentThread.CurrentCulture = ci;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_312;
		L_312 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_313 = V_1;
		NullCheck(L_312);
		Thread_set_CurrentCulture_mF3DAE075752A66909692C46156765EECE6F2BE58(L_312, L_313, NULL);
		// return ret;
		String_t* L_314 = V_2;
		return L_314;
	}

IL_05f5:
	{
		// return Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_315 = ___args0;
		NullCheck(L_315);
		RuntimeObject* L_316;
		L_316 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_315, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_317 = ___dc1;
		NullCheck(L_317);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_318 = L_317->___WorkingCulture_8;
		String_t* L_319;
		L_319 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_316, L_318, NULL);
		return L_319;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.textFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void textFunction__ctor_m9BC5A208243B8DEB7901A41130DD8915FD2BF69A (textFunction_tBA331631FAF8410D3640600BC46337D39F649F38* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.todayFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* todayFunction_GetInfo_mD2F3F72987B0F2303BFA1400A01723F3568493CE (todayFunction_tB40C0763E33DBBB654867105411CA66196631FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80CF91C89EDD11BF59F8575DD51CCC9B6D2595FB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new List<FunctionDef>{new FunctionDef(Afe_Common.Const_TODAY, null, typeof(DateTime), 0)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = L_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_4 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_4, _stringLiteral80CF91C89EDD11BF59F8575DD51CCC9B6D2595FB, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, L_3, 0, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_4, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		return L_1;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.todayFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* todayFunction_Execute_m2F864F2A8578E31480FF42B6E930857CDC06B3F3 (todayFunction_tB40C0763E33DBBB654867105411CA66196631FDC* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return DateTime.Today;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Today_mC32D6B4A0EBD6BFBC0E978BEBA48CB4DA5E38FB0(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = L_0;
		RuntimeObject* L_2 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.todayFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void todayFunction__ctor_m589E48AC59F180BD2B08336084EDC6AEA4C4F424 (todayFunction_tB40C0763E33DBBB654867105411CA66196631FDC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.trimFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* trimFunction_GetInfo_mEA515C9A598FBB68AF23D9D24AEF6C12B2BBAC06 (trimFunction_t256CD852D4F089DDE486BAE176FFAE28D28C8326* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral829163CBED8010666514D1FD8E6D26B8FB7A8733);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef> { new FunctionDef(Afe_Common.Const_Trim, new System.Type[] { typeof(string) }, typeof(string), 1) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral829163CBED8010666514D1FD8E6D26B8FB7A8733, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.trimFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* trimFunction_Execute_m51551A09C0150D8DC5C678ABF6588DA3A637E23A (trimFunction_t256CD852D4F089DDE486BAE176FFAE28D28C8326* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!string.IsNullOrEmpty(Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture)))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		String_t* L_4;
		L_4 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_1, L_3, NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		// return Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture).Trim();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = ___args0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_6, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_8 = ___dc1;
		NullCheck(L_8);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9 = L_8->___WorkingCulture_8;
		String_t* L_10;
		L_10 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_7, L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_10, NULL);
		return L_11;
	}

IL_0039:
	{
		// return string.Empty;
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_12;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.trimFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trimFunction__ctor_m62B7431F3A39E618A8FA0507DF50BA3C65804D43 (trimFunction_t256CD852D4F089DDE486BAE176FFAE28D28C8326* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.upperFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* upperFunction_GetInfo_m9DACD7A6F66CF78663519412A2417AF0A47D884C (upperFunction_tB9FB75E77C60BDEBA636232176065C4BBE2E655A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral776837ADD4231179FC45FB2B6EF6516AF53A8491);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef> { new FunctionDef(Afe_Common.Const_Upper, new System.Type[] { typeof(string) }, typeof(string), 1) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral776837ADD4231179FC45FB2B6EF6516AF53A8491, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.upperFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* upperFunction_Execute_m534E45281684FD861B420A21E76DDB4F4A92332C (upperFunction_tB9FB75E77C60BDEBA636232176065C4BBE2E655A* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!string.IsNullOrEmpty(Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture)))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc1;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = L_2->___WorkingCulture_8;
		String_t* L_4;
		L_4 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_1, L_3, NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		// return Afe_Common.ToString(args[Afe_Common.Const_Key_One], dc.WorkingCulture).ToUpper(dc.WorkingCulture);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = ___args0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_6, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_8 = ___dc1;
		NullCheck(L_8);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9 = L_8->___WorkingCulture_8;
		String_t* L_10;
		L_10 = Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11(L_7, L_9, NULL);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_11 = ___dc1;
		NullCheck(L_11);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_12 = L_11->___WorkingCulture_8;
		NullCheck(L_10);
		String_t* L_13;
		L_13 = String_ToUpper_mFC5C17C8BFF52540CC7A73E36DFC9617281325D1(L_10, L_12, NULL);
		return L_13;
	}

IL_003f:
	{
		// return string.Empty;
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_14;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.upperFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void upperFunction__ctor_m2D1F3ABD7589D744728F9EFCE3FBFF2FA238A775 (upperFunction_tB9FB75E77C60BDEBA636232176065C4BBE2E655A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.valueFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* valueFunction_GetInfo_mE102A95916209B375B3EBE2C276E499A8F8CF658 (valueFunction_tE12BA98196D04F8A369ED89A868EAC0A12B0A035* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef> { new FunctionDef(Afe_Common.Const_Value, new System.Type[] { typeof(Object) }, typeof(decimal), 1) };
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, L_3, L_7, 1, NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.valueFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* valueFunction_Execute_mD4583C1CC4B26ED6404B8143E2AD518043A57099 (valueFunction_tE12BA98196D04F8A369ED89A868EAC0A12B0A035* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Afe_Common.IsNumber(args[Afe_Common.Const_Key_One]))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		bool L_2;
		L_2 = Afe_Common_IsNumber_m4E55CE0DE9F1AC1E496F4BC0DE0F39BF50A5AEF0(L_1, NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// return Afe_Common.Round(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture), dc);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = ___args0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_3, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_5 = ___dc1;
		NullCheck(L_5);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6 = L_5->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_7;
		L_7 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_4, L_6, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8 = L_7;
		RuntimeObject* L_9 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_8);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_10 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11;
		L_11 = Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99(L_9, L_10, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12 = L_11;
		RuntimeObject* L_13 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}

IL_0039:
	{
		// else if (args[Afe_Common.Const_Key_One] is TimeSpan)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_14 = ___args0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_14, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_15, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var)))
		{
			goto IL_009c;
		}
	}
	{
		// TimeSpan ts = (TimeSpan)args[Afe_Common.Const_Key_One];
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_16 = ___args0;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_16, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		V_0 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_17, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))));
		// return Afe_Common.Round(ts.TotalMilliseconds / 1000 / 60 / 60 / 24, dc);
		double L_18;
		L_18 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&V_0), NULL);
		double L_19 = ((double)(((double)(((double)(((double)(L_18/(1000.0)))/(60.0)))/(60.0)))/(24.0)));
		RuntimeObject* L_20 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_19);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_21 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_22;
		L_22 = Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99(L_20, L_21, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_23 = L_22;
		RuntimeObject* L_24 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_23);
		return L_24;
	}

IL_009c:
	{
		// else if (args[Afe_Common.Const_Key_One] is DateTime)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_25 = ___args0;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_25, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_26, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)))
		{
			goto IL_00fc;
		}
	}
	{
		// DateTime dt = (DateTime)args[Afe_Common.Const_Key_One];
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_27 = ___args0;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_27, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		// long ms = (long)(dt - new DateTime(1970, 1, 1)).TotalMilliseconds;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_29;
		memset((&L_29), 0, sizeof(L_29));
		DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88((&L_29), ((int32_t)1970), 1, 1, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_30;
		L_30 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_28, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)))), L_29, NULL);
		V_1 = L_30;
		double L_31;
		L_31 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&V_1), NULL);
		// return Afe_Common.Round(ms / 1000 / 60 / 60 / 24, dc);
		int64_t L_32 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)(il2cpp_codegen_cast_double_to_int<int64_t>(L_31)/((int64_t)((int32_t)1000))))/((int64_t)((int32_t)60))))/((int64_t)((int32_t)60))))/((int64_t)((int32_t)24))));
		RuntimeObject* L_33 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_32);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_34 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_35;
		L_35 = Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99(L_33, L_34, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_36 = L_35;
		RuntimeObject* L_37 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_36);
		return L_37;
	}

IL_00fc:
	{
	}
	try
	{// begin try (depth: 1)
		// return Afe_Common.Round(Afe_Common.ToDecimal(args[Afe_Common.Const_Key_One], dc.WorkingCulture), dc);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_38 = ___args0;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_38, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_40 = ___dc1;
		NullCheck(L_40);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_41 = L_40->___WorkingCulture_8;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_42;
		L_42 = Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E(L_39, L_41, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_43 = L_42;
		RuntimeObject* L_44 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_43);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_45 = ___dc1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_46;
		L_46 = Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99(L_44, L_45, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_47 = L_46;
		RuntimeObject* L_48 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_47);
		V_2 = L_48;
		goto IL_0147;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0126;
		}
		throw e;
	}

CATCH_0126:
	{// begin catch(System.Exception)
		// catch(Exception e)
		// throw new Exception(string.Format(Afe_Common.MSG_METH_PARAM_INVALID, new string[] { "value" }));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_49;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)));
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)));
		V_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_50;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = V_3;
		String_t* L_52;
		L_52 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD98345FBA2332AE17DA6E555ABA035F22F11320)), L_51, NULL);
		Exception_t* L_53 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_53);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_53, L_52, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&valueFunction_Execute_mD4583C1CC4B26ED6404B8143E2AD518043A57099_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0147:
	{
		// }
		RuntimeObject* L_54 = V_2;
		return L_54;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.valueFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void valueFunction__ctor_m9404DE7EAC955D00295CF10A7F016B90CE0C1EA3 (valueFunction_tE12BA98196D04F8A369ED89A868EAC0A12B0A035* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Plugins.Math_expression_eval.org.matheval.Functions.FunctionDef> Plugins.Math_expression_eval.org.matheval.Functions.Impl.xorFunction::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* xorFunction_GetInfo_mA8F2D86C479B75A10A49F48CD7278768DC64ABAA (xorFunction_tEBBFD3AC8D1C21B99BC7C3593E6EC3F4EA143DDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A382E89779179088D3A5E349B98857C20D4F9B5);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* V_0 = NULL;
	{
		// return new List<FunctionDef>{
		//         new FunctionDef(Afe_Common.Const_Xor, new System.Type[]{ typeof(Boolean) }, typeof(Boolean), -1)};
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_0 = (List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0*)il2cpp_codegen_object_new(List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E(L_0, List_1__ctor_mE2E47E215D96E18C1A23D5AFB7902C60F7DA536E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_1 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA* L_8 = (FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA*)il2cpp_codegen_object_new(FunctionDef_t4D4C6A464794AD0ED3119998A7A44AA98EC68CAA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FunctionDef__ctor_m71EDFE82B553C947AC951C46F4768A52A46C0A85(L_8, _stringLiteral7A382E89779179088D3A5E349B98857C20D4F9B5, L_3, L_7, (-1), NULL);
		NullCheck(L_1);
		List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_inline(L_1, L_8, List_1_Add_m30910BA1FD128501326195316EA63956BBC4D5D7_RuntimeMethod_var);
		List_1_tF04524AEAD7A583984D3A8DB2F5FA9A463A5A5A0* L_9 = V_0;
		return L_9;
	}
}
// System.Object Plugins.Math_expression_eval.org.matheval.Functions.Impl.xorFunction::Execute(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* xorFunction_Execute_mA48C26DBAFDFB6318D2A427BAC8038569FF787DE (xorFunction_tEBBFD3AC8D1C21B99BC7C3593E6EC3F4EA143DDC* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.LogicalXor(args);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		bool L_1;
		L_1 = xorFunction_LogicalXor_mAE2756404E7587F7D27A818B9DDFB47183E1323F(__this, L_0, NULL);
		bool L_2 = L_1;
		RuntimeObject* L_3 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Boolean Plugins.Math_expression_eval.org.matheval.Functions.Impl.xorFunction::LogicalXor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool xorFunction_LogicalXor_mAE2756404E7587F7D27A818B9DDFB47183E1323F (xorFunction_tEBBFD3AC8D1C21B99BC7C3593E6EC3F4EA143DDC* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		// if (args.Count < 2)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___args0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA(L_0, Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		// throw new Exception(string.Format("{0} {1}", "Too few agrument for method", "XOR"));
		String_t* L_2;
		L_2 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral21235A609CD03958F369B2A11AA494579DBCBE98)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36E8625283BBFEFA794C39804CE3DD66EB3E6F91)), NULL);
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&xorFunction_LogicalXor_mAE2756404E7587F7D27A818B9DDFB47183E1323F_RuntimeMethod_var)));
	}

IL_0023:
	{
		// else if (args.Count == 2)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ___args0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA(L_4, Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		// return ((Boolean)args[Afe_Common.Const_Key_One]) ^ ((Boolean)args[Afe_Common.Const_Key_Two]);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = ___args0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_6, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = ___args0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_8, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		return (bool)((int32_t)((int32_t)((*(bool*)((bool*)(bool*)UnBox(L_7, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))))^(int32_t)((*(bool*)((bool*)(bool*)UnBox(L_9, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))))));
	}

IL_004e:
	{
		// int trueCount = 0;
		V_0 = 0;
		// foreach (Object obj in args.Values)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_10 = ___args0;
		NullCheck(L_10);
		ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* L_11;
		L_11 = Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC(L_10, Dictionary_2_get_Values_mA5EC7E179F55A2C9C6E256032344B019965C33AC_RuntimeMethod_var);
		NullCheck(L_11);
		Enumerator_t2723FC8542C894876DF816ED5EE7F7D3B6055504 L_12;
		L_12 = ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3(L_11, ValueCollection_GetEnumerator_m15146A330DAD1E04764AD89D54D578552B7CA5D3_RuntimeMethod_var);
		V_1 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0085:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5((&V_1), Enumerator_Dispose_mDBBE3F4BD59E22E1E32B30B24F589410129253B5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007a_1;
			}

IL_005e_1:
			{
				// foreach (Object obj in args.Values)
				RuntimeObject* L_13;
				L_13 = Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_inline((&V_1), Enumerator_get_Current_m89A3A98C8E0DE22FE73E98885A324D2A1F4A1581_RuntimeMethod_var);
				V_2 = L_13;
				// if (obj is Boolean || (Boolean)obj)
				RuntimeObject* L_14 = V_2;
				if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_14, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
				{
					goto IL_0076_1;
				}
			}
			{
				RuntimeObject* L_15 = V_2;
				if (!((*(bool*)((bool*)(bool*)UnBox(L_15, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
				{
					goto IL_007a_1;
				}
			}

IL_0076_1:
			{
				// trueCount++;
				int32_t L_16 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_007a_1:
			{
				// foreach (Object obj in args.Values)
				bool L_17;
				L_17 = Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948((&V_1), Enumerator_MoveNext_m3CD65CA325F9231AEDC9717FDC8E93CC3D9D4948_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_005e_1;
				}
			}
			{
				goto IL_0093;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0093:
	{
		// return (trueCount > 0 && trueCount % 2 == 1);
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_19 = V_0;
		return (bool)((((int32_t)((int32_t)(L_19%2))) == ((int32_t)1))? 1 : 0);
	}

IL_009e:
	{
		return (bool)0;
	}
}
// System.Void Plugins.Math_expression_eval.org.matheval.Functions.Impl.xorFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xorFunction__ctor_mD1899CE26340CCE68C1F3B43FECE62F3C4D64D39 (xorFunction_tEBBFD3AC8D1C21B99BC7C3593E6EC3F4EA143DDC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::IsAlpha(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Afe_Common_IsAlpha_mBBE1707381B09CE427DC53AEA694E5B6490EE931 (Il2CppChar ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C4AA5E9A9C38F3EF875F663CD6FDDC8554A3707);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Regex rg = new Regex(@"^[a-zA-Z_]+$");
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_0, _stringLiteral3C4AA5E9A9C38F3EF875F663CD6FDDC8554A3707, NULL);
		// return rg.IsMatch(value.ToString());
		String_t* L_1;
		L_1 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&___value0), NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::IsAlphaNumeric(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Afe_Common_IsAlphaNumeric_mDDC2F15DFFB2B0B39E50018346B2FCFE478E1D5E (Il2CppChar ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE14A6EEC12FF8B2873075C8BE5ECAEE83B8F49E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Regex rg = new Regex(@"^[a-zA-Z0-9_]+$");
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_0, _stringLiteralE14A6EEC12FF8B2873075C8BE5ECAEE83B8F49E9, NULL);
		// return rg.IsMatch(value.ToString());
		String_t* L_1;
		L_1 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&___value0), NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::IsNumeric(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Afe_Common_IsNumeric_mEB480E753BADE7705D5B4ADE505BBECC6F8C4DF0 (Il2CppChar ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A7019FD02F046E7D6B83B4875FB843AAC668F3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Regex rg = new Regex(@"^[0-9]+$");
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_0, _stringLiteral0A7019FD02F046E7D6B83B4875FB843AAC668F3F, NULL);
		// return rg.IsMatch(value.ToString());
		String_t* L_1;
		L_1 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&___value0), NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49(L_0, L_1, NULL);
		return L_2;
	}
}
// System.String Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::Right(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Afe_Common_Right_m48A9A4278C079ACB6C14B7CAC1125E6EE2D1039E (String_t* ___stringValue0, int32_t ___count1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!string.IsNullOrEmpty(stringValue))
		String_t* L_0 = ___stringValue0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return stringValue.Substring(stringValue.Length - count, count);
		String_t* L_2 = ___stringValue0;
		String_t* L_3 = ___stringValue0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		int32_t L_5 = ___count1;
		int32_t L_6 = ___count1;
		NullCheck(L_2);
		String_t* L_7;
		L_7 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), L_6, NULL);
		return L_7;
	}

IL_0018:
	{
		// return string.Empty;
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_8;
	}
}
// System.Decimal Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::Round(System.Object,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Afe_Common_Round_m604C26B4A3BF6A05B53957D44611BB9560A79E99 (RuntimeObject* ___value0, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Math.Round(Convert.ToDecimal(value, dc.WorkingCulture), dc.Scale, dc.Rd);
		RuntimeObject* L_0 = ___value0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_1 = ___dc1;
		NullCheck(L_1);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2 = L_1->___WorkingCulture_8;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3;
		L_3 = Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA(L_0, L_2, NULL);
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_4 = ___dc1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Scale_0;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_6 = ___dc1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Rd_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8;
		L_8 = Math_Round_mD8F335591E17FDCCA2A12475B79B73E28BA2E3B2_inline(L_3, L_5, L_7, NULL);
		return L_8;
	}
}
// System.Boolean Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::IsNumber(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Afe_Common_IsNumber_m4E55CE0DE9F1AC1E496F4BC0DE0F39BF50A5AEF0 (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return value is sbyte
		//         || value is byte
		//         || value is short
		//         || value is ushort
		//         || value is int
		//         || value is uint
		//         || value is long
		//         || value is ulong
		//         || value is float
		//         || value is double
		//         || value is decimal;
		RuntimeObject* L_0 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_2 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_3 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_3, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_4 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_5 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_6 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_7 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_8 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_9 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_10 = ___value0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_005a:
	{
		return (bool)1;
	}
}
// System.Decimal Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::ToDecimal(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Afe_Common_ToDecimal_mC4C0543AD2B37CBA16B8C0302C6F1EC6E4386C5E (RuntimeObject* ___value0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___cultureInfo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value is decimal)
		RuntimeObject* L_0 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))
		{
			goto IL_000f;
		}
	}
	{
		// return (decimal)value;
		RuntimeObject* L_1 = ___value0;
		return ((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))));
	}

IL_000f:
	{
		// return Convert.ToDecimal(value, cultureInfo);
		RuntimeObject* L_2 = ___value0;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = ___cultureInfo1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA(L_2, L_3, NULL);
		return L_4;
	}
}
// System.String Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::ToString(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Afe_Common_ToString_m51075D7708D4DD1664F6A8754B75EF9DCAF44D11 (RuntimeObject* ___value0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___cultureInfo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value is string)
		RuntimeObject* L_0 = ___value0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_000f;
		}
	}
	{
		// return (string)value;
		RuntimeObject* L_1 = ___value0;
		return ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
	}

IL_000f:
	{
		// return Convert.ToString(value, cultureInfo);
		RuntimeObject* L_2 = ___value0;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = ___cultureInfo1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Convert_ToString_mCC5DC13CDF7E338DB15699432F28477C7DF52DE1(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::IsList(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Afe_Common_IsList_m5B02243ADEF92A08B0E619EABF456231210523FB (RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (o == null) return false;
		RuntimeObject* L_0 = ___o0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (o == null) return false;
		return (bool)0;
	}

IL_0005:
	{
		// return o is IList &&
		//        o.GetType().IsGenericType &&
		//        o.GetType().GetGenericTypeDefinition().IsAssignableFrom(typeof(List<>));
		RuntimeObject* L_1 = ___o0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)))
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_2 = ___o0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_3);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_5 = ___o0;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_5, NULL);
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_6);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		return L_10;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Decimal Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::RoundManualScale(System.Object,System.Object,Plugins.Math_expression_eval.org.matheval.ExpressionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Afe_Common_RoundManualScale_mBA9C0467AC67A87B700AA776DE6BA39CEB273AE0 (RuntimeObject* ___value0, RuntimeObject* ___digit1, ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* ___dc2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Math.Round((decimal)value, (int)digit, dc.Rd);
		RuntimeObject* L_0 = ___value0;
		RuntimeObject* L_1 = ___digit1;
		ExpressionContext_t65F9D5E769A29F1B537D3501AC500BE22BEA7C5D* L_2 = ___dc2;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Rd_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Math_Round_mD8F335591E17FDCCA2A12475B79B73E28BA2E3B2_inline(((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_0, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))), ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_1, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), L_3, NULL);
		return L_4;
	}
}
// System.Int32 Plugins.Math_expression_eval.org.matheval.Common.Afe_Common::DateDif(System.DateTime,System.DateTime,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Afe_Common_DateDif_mECDB0FC17EAECEF0EE59DF418D0C0C8F6CF67BCB (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___startDate0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___endDate1, String_t* ___unit2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A103E06568D35BF858F440D893690463B449681);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC650AF132C4F5162F85D515A87DD4B73376B14F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7894C5A0DDFAD2880CC0A59586CC78907A5801B);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		// if (unit != null && unit.Equals("d", StringComparison.InvariantCultureIgnoreCase))
		String_t* L_0 = ___unit2;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_1 = ___unit2;
		NullCheck(L_1);
		bool L_2;
		L_2 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_1, _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, 3, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// return (endDate - startDate).Days;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = ___endDate1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = ___startDate0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5;
		L_5 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(L_3, L_4, NULL);
		V_0 = L_5;
		int32_t L_6;
		L_6 = TimeSpan_get_Days_m1317F48F8D9849E161D1CDBEB5CA08344EAAC107((&V_0), NULL);
		return L_6;
	}

IL_0021:
	{
		// else if (unit != null && unit.Equals("m", StringComparison.InvariantCultureIgnoreCase))
		String_t* L_7 = ___unit2;
		if (!L_7)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_8 = ___unit2;
		NullCheck(L_8);
		bool L_9;
		L_9 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_8, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, 3, NULL);
		if (!L_9)
		{
			goto IL_006e;
		}
	}
	{
		// int monthDiff = endDate.Year * 12 + endDate.Month - (startDate.Year * 12 + startDate.Month);
		int32_t L_10;
		L_10 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138((&___endDate1), NULL);
		int32_t L_11;
		L_11 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2((&___endDate1), NULL);
		int32_t L_12;
		L_12 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138((&___startDate0), NULL);
		int32_t L_13;
		L_13 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2((&___startDate0), NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)12))), L_11)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)12))), L_13))));
		// if (endDate.Day < startDate.Day)
		int32_t L_14;
		L_14 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28((&___endDate1), NULL);
		int32_t L_15;
		L_15 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28((&___startDate0), NULL);
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_006c;
		}
	}
	{
		// monthDiff--;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_006c:
	{
		// return monthDiff;
		int32_t L_17 = V_1;
		return L_17;
	}

IL_006e:
	{
		// else if (unit != null && unit.Equals("y", StringComparison.InvariantCultureIgnoreCase))
		String_t* L_18 = ___unit2;
		if (!L_18)
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_19 = ___unit2;
		NullCheck(L_19);
		bool L_20;
		L_20 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_19, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, 3, NULL);
		if (!L_20)
		{
			goto IL_00be;
		}
	}
	{
		// int monthDiff = endDate.Year * 12 + endDate.Month - (startDate.Year * 12 + startDate.Month);
		int32_t L_21;
		L_21 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138((&___endDate1), NULL);
		int32_t L_22;
		L_22 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2((&___endDate1), NULL);
		int32_t L_23;
		L_23 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138((&___startDate0), NULL);
		int32_t L_24;
		L_24 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2((&___startDate0), NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)12))), L_22)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)12))), L_24))));
		// if (endDate.Day < startDate.Day)
		int32_t L_25;
		L_25 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28((&___endDate1), NULL);
		int32_t L_26;
		L_26 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28((&___startDate0), NULL);
		if ((((int32_t)L_25) >= ((int32_t)L_26)))
		{
			goto IL_00b9;
		}
	}
	{
		// monthDiff--;
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
	}

IL_00b9:
	{
		// return monthDiff / 12;
		int32_t L_28 = V_2;
		return ((int32_t)(L_28/((int32_t)12)));
	}

IL_00be:
	{
		// else if (unit != null && unit.Equals("ym", StringComparison.InvariantCultureIgnoreCase))
		String_t* L_29 = ___unit2;
		if (!L_29)
		{
			goto IL_00f6;
		}
	}
	{
		String_t* L_30 = ___unit2;
		NullCheck(L_30);
		bool L_31;
		L_31 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_30, _stringLiteral2A103E06568D35BF858F440D893690463B449681, 3, NULL);
		if (!L_31)
		{
			goto IL_00f6;
		}
	}
	{
		// DateTime stDate = startDate;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_32 = ___startDate0;
		V_3 = L_32;
		// int yearDiff = DateDif(startDate, endDate, "y");
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_33 = ___startDate0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_34 = ___endDate1;
		int32_t L_35;
		L_35 = Afe_Common_DateDif_mECDB0FC17EAECEF0EE59DF418D0C0C8F6CF67BCB(L_33, L_34, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		V_4 = L_35;
		// stDate = stDate.AddYears(yearDiff);
		int32_t L_36 = V_4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_37;
		L_37 = DateTime_AddYears_mA68B1642A84DA30E21F6279BE5196FC07B578DEE((&V_3), L_36, NULL);
		V_3 = L_37;
		// return DateDif(stDate, endDate, "m");
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_38 = V_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_39 = ___endDate1;
		int32_t L_40;
		L_40 = Afe_Common_DateDif_mECDB0FC17EAECEF0EE59DF418D0C0C8F6CF67BCB(L_38, L_39, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, NULL);
		return L_40;
	}

IL_00f6:
	{
		// else if (unit != null && unit.Equals("yd", StringComparison.InvariantCultureIgnoreCase))
		String_t* L_41 = ___unit2;
		if (!L_41)
		{
			goto IL_0131;
		}
	}
	{
		String_t* L_42 = ___unit2;
		NullCheck(L_42);
		bool L_43;
		L_43 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_42, _stringLiteralE7894C5A0DDFAD2880CC0A59586CC78907A5801B, 3, NULL);
		if (!L_43)
		{
			goto IL_0131;
		}
	}
	{
		// DateTime stDate = startDate;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_44 = ___startDate0;
		V_5 = L_44;
		// int yearDiff = DateDif(startDate, endDate, "y");
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_45 = ___startDate0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_46 = ___endDate1;
		int32_t L_47;
		L_47 = Afe_Common_DateDif_mECDB0FC17EAECEF0EE59DF418D0C0C8F6CF67BCB(L_45, L_46, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		V_6 = L_47;
		// stDate = stDate.AddYears(yearDiff);
		int32_t L_48 = V_6;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_49;
		L_49 = DateTime_AddYears_mA68B1642A84DA30E21F6279BE5196FC07B578DEE((&V_5), L_48, NULL);
		V_5 = L_49;
		// return DateDif(stDate, endDate, "d");
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_50 = V_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_51 = ___endDate1;
		int32_t L_52;
		L_52 = Afe_Common_DateDif_mECDB0FC17EAECEF0EE59DF418D0C0C8F6CF67BCB(L_50, L_51, _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, NULL);
		return L_52;
	}

IL_0131:
	{
		// else if (unit != null && unit.Equals("md", StringComparison.InvariantCultureIgnoreCase))
		String_t* L_53 = ___unit2;
		if (!L_53)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_54 = ___unit2;
		NullCheck(L_54);
		bool L_55;
		L_55 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_54, _stringLiteralC650AF132C4F5162F85D515A87DD4B73376B14F6, 3, NULL);
		if (!L_55)
		{
			goto IL_016c;
		}
	}
	{
		// DateTime stDate = startDate;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_56 = ___startDate0;
		V_7 = L_56;
		// int mDiff = DateDif(startDate, endDate, "m");
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_57 = ___startDate0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_58 = ___endDate1;
		int32_t L_59;
		L_59 = Afe_Common_DateDif_mECDB0FC17EAECEF0EE59DF418D0C0C8F6CF67BCB(L_57, L_58, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, NULL);
		V_8 = L_59;
		// stDate = stDate.AddMonths(mDiff);
		int32_t L_60 = V_8;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_61;
		L_61 = DateTime_AddMonths_mF426338945B097998273C1AD421CF809035660AD((&V_7), L_60, NULL);
		V_7 = L_61;
		// return DateDif(stDate, endDate, "d");
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_62 = V_7;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_63 = ___endDate1;
		int32_t L_64;
		L_64 = Afe_Common_DateDif_mECDB0FC17EAECEF0EE59DF418D0C0C8F6CF67BCB(L_62, L_63, _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, NULL);
		return L_64;
	}

IL_016c:
	{
		// throw new Exception("Please set M or D or Y for UNIT param");
		Exception_t* L_65 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_65);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_65, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDDDB22535A6F50B3C6EB4D5E7099332B7ED8B78A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Afe_Common_DateDif_mECDB0FC17EAECEF0EE59DF418D0C0C8F6CF67BCB_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Math_Floor_mC2E0E7994B307ED1B87D34A6AC5FB6E72A89B1B1_inline (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = Decimal_Floor_m072DDB5250CDE8063EE0AD7D2D02D25B643A943B(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Math_Round_mD8F335591E17FDCCA2A12475B79B73E28BA2E3B2_inline (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d0, int32_t ___decimals1, int32_t ___mode2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___d0;
		int32_t L_1 = ___decimals1;
		int32_t L_2 = ___mode2;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3;
		L_3 = Decimal_Round_m93946599C8A8D50083D6F27D168B756E23A041DF(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
