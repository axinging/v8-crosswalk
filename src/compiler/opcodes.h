// Copyright 2013 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_COMPILER_OPCODES_H_
#define V8_COMPILER_OPCODES_H_

// Opcodes for control operators.
#define INNER_CONTROL_OP_LIST(V) \
  V(Dead)                        \
  V(Loop)                        \
  V(Branch)                      \
  V(IfTrue)                      \
  V(IfFalse)                     \
  V(Merge)                       \
  V(Return)                      \
  V(Terminate)                   \
  V(Throw)

#define CONTROL_OP_LIST(V) \
  INNER_CONTROL_OP_LIST(V) \
  V(Start)                 \
  V(End)

// Opcodes for common operators.
#define LEAF_OP_LIST(V) \
  V(Int32Constant)      \
  V(Int64Constant)      \
  V(Float32Constant)    \
  V(Float64Constant)    \
  V(ExternalConstant)   \
  V(NumberConstant)     \
  V(HeapConstant)

#define INNER_OP_LIST(V) \
  V(Select)              \
  V(Phi)                 \
  V(EffectPhi)           \
  V(ValueEffect)         \
  V(Finish)              \
  V(FrameState)          \
  V(StateValues)         \
  V(Call)                \
  V(Parameter)           \
  V(Projection)

#define COMMON_OP_LIST(V) \
  LEAF_OP_LIST(V)         \
  INNER_OP_LIST(V)

// Opcodes for JavaScript operators.
#define JS_COMPARE_BINOP_LIST(V) \
  V(JSEqual)                     \
  V(JSNotEqual)                  \
  V(JSStrictEqual)               \
  V(JSStrictNotEqual)            \
  V(JSLessThan)                  \
  V(JSGreaterThan)               \
  V(JSLessThanOrEqual)           \
  V(JSGreaterThanOrEqual)

#define JS_BITWISE_BINOP_LIST(V) \
  V(JSBitwiseOr)                 \
  V(JSBitwiseXor)                \
  V(JSBitwiseAnd)                \
  V(JSShiftLeft)                 \
  V(JSShiftRight)                \
  V(JSShiftRightLogical)

#define JS_ARITH_BINOP_LIST(V) \
  V(JSAdd)                     \
  V(JSSubtract)                \
  V(JSMultiply)                \
  V(JSDivide)                  \
  V(JSModulus)

#define JS_SIMPLE_BINOP_LIST(V) \
  JS_COMPARE_BINOP_LIST(V)      \
  JS_BITWISE_BINOP_LIST(V)      \
  JS_ARITH_BINOP_LIST(V)

#define JS_LOGIC_UNOP_LIST(V) V(JSUnaryNot)

#define JS_CONVERSION_UNOP_LIST(V) \
  V(JSToBoolean)                   \
  V(JSToNumber)                    \
  V(JSToString)                    \
  V(JSToName)                      \
  V(JSToObject)                    \
  V(JSToFloat32x4Obj)              \
  V(JSToInt32x4Obj)                \
  V(JSToFloat64x2Obj)

#define JS_OTHER_UNOP_LIST(V) \
  V(JSTypeOf)

#define JS_SIMPLE_UNOP_LIST(V) \
  JS_LOGIC_UNOP_LIST(V)        \
  JS_CONVERSION_UNOP_LIST(V)   \
  JS_OTHER_UNOP_LIST(V)

#define JS_OBJECT_OP_LIST(V) \
  V(JSCreate)                \
  V(JSLoadProperty)          \
  V(JSLoadNamed)             \
  V(JSStoreProperty)         \
  V(JSStoreNamed)            \
  V(JSDeleteProperty)        \
  V(JSHasProperty)           \
  V(JSInstanceOf)

#define JS_CONTEXT_OP_LIST(V) \
  V(JSLoadContext)            \
  V(JSStoreContext)           \
  V(JSCreateFunctionContext)  \
  V(JSCreateCatchContext)     \
  V(JSCreateWithContext)      \
  V(JSCreateBlockContext)     \
  V(JSCreateModuleContext)    \
  V(JSCreateScriptContext)

#define JS_OTHER_OP_LIST(V) \
  V(JSCallConstruct)        \
  V(JSCallFunction)         \
  V(JSCallRuntime)          \
  V(JSYield)                \
  V(JSDebugger)

#define JS_OP_LIST(V)     \
  JS_SIMPLE_BINOP_LIST(V) \
  JS_SIMPLE_UNOP_LIST(V)  \
  JS_OBJECT_OP_LIST(V)    \
  JS_CONTEXT_OP_LIST(V)   \
  JS_OTHER_OP_LIST(V)

// Opcodes for VirtuaMachine-level operators.
#define SIMPLIFIED_OP_LIST(V) \
  V(AnyToBoolean)             \
  V(BooleanNot)               \
  V(BooleanToNumber)          \
  V(NumberEqual)              \
  V(NumberLessThan)           \
  V(NumberLessThanOrEqual)    \
  V(NumberAdd)                \
  V(NumberSubtract)           \
  V(NumberMultiply)           \
  V(NumberDivide)             \
  V(NumberModulus)            \
  V(NumberToInt32)            \
  V(NumberToUint32)           \
  V(ReferenceEqual)           \
  V(StringEqual)              \
  V(StringLessThan)           \
  V(StringLessThanOrEqual)    \
  V(StringAdd)                \
  V(ChangeTaggedToInt32)      \
  V(ChangeTaggedToUint32)     \
  V(ChangeTaggedToFloat64)    \
  V(ChangeInt32ToTagged)      \
  V(ChangeUint32ToTagged)     \
  V(ChangeFloat64ToTagged)    \
  V(ChangeFloat32x4ToTagged)  \
  V(ChangeTaggedToFloat32x4)  \
  V(ChangeInt32x4ToTagged)    \
  V(ChangeTaggedToInt32x4)    \
  V(ChangeFloat64x2ToTagged)  \
  V(ChangeTaggedToFloat64x2)  \
  V(ChangeBoolToBit)          \
  V(ChangeBitToBool)          \
  V(LoadField)                \
  V(LoadBuffer)               \
  V(LoadElement)              \
  V(StoreField)               \
  V(StoreBuffer)              \
  V(StoreElement)             \
  V(ObjectIsSmi)              \
  V(ObjectIsNonNegativeSmi)

// Opcodes for Machine-level operators.
#define MACHINE_OP_LIST(V)       \
  V(Load)                        \
  V(Store)                       \
  V(Word32And)                   \
  V(Word32Or)                    \
  V(Word32Xor)                   \
  V(Word32Shl)                   \
  V(Word32Shr)                   \
  V(Word32Sar)                   \
  V(Word32Ror)                   \
  V(Word32Equal)                 \
  V(Word64And)                   \
  V(Word64Or)                    \
  V(Word64Xor)                   \
  V(Word64Shl)                   \
  V(Word64Shr)                   \
  V(Word64Sar)                   \
  V(Word64Ror)                   \
  V(Word64Equal)                 \
  V(Int32Add)                    \
  V(Int32AddWithOverflow)        \
  V(Int32Sub)                    \
  V(Int32SubWithOverflow)        \
  V(Int32Mul)                    \
  V(Int32MulHigh)                \
  V(Int32Div)                    \
  V(Int32Mod)                    \
  V(Int32LessThan)               \
  V(Int32LessThanOrEqual)        \
  V(Uint32Div)                   \
  V(Uint32LessThan)              \
  V(Uint32LessThanOrEqual)       \
  V(Uint32Mod)                   \
  V(Uint32MulHigh)               \
  V(Int64Add)                    \
  V(Int64Sub)                    \
  V(Int64Mul)                    \
  V(Int64Div)                    \
  V(Int64Mod)                    \
  V(Int64LessThan)               \
  V(Int64LessThanOrEqual)        \
  V(Uint64Div)                   \
  V(Uint64LessThan)              \
  V(Uint64Mod)                   \
  V(ChangeFloat32ToFloat64)      \
  V(ChangeFloat64ToInt32)        \
  V(ChangeFloat64ToUint32)       \
  V(ChangeInt32ToFloat64)        \
  V(ChangeInt32ToInt64)          \
  V(ChangeUint32ToFloat64)       \
  V(ChangeUint32ToUint64)        \
  V(TruncateFloat64ToFloat32)    \
  V(TruncateFloat64ToInt32)      \
  V(TruncateInt64ToInt32)        \
  V(Float64Add)                  \
  V(Float64Sub)                  \
  V(Float64Mul)                  \
  V(Float64Div)                  \
  V(Float64Mod)                  \
  V(Float64Sqrt)                 \
  V(Float64Equal)                \
  V(Float64LessThan)             \
  V(Float64LessThanOrEqual)      \
  V(Float64Floor)                \
  V(Float64Ceil)                 \
  V(Float64RoundTruncate)        \
  V(Float64RoundTiesAway)        \
  V(LoadStackPointer)            \
  V(CheckedLoad)                 \
  V(CheckedStore)                \
  V(Float32x4Add)                \
  V(Float32x4Mul)                \
  V(Float32x4Sub)                \
  V(Float32x4Div)                \
  V(Float32x4Constructor)        \
  V(Float32x4Check)              \
  V(Float32x4Min)                \
  V(Float32x4Max)                \
  V(Float32x4GetX)               \
  V(Float32x4GetY)               \
  V(Float32x4GetZ)               \
  V(Float32x4GetW)               \
  V(Float32x4GetSignMask)        \
  V(Float32x4Abs)                \
  V(Float32x4Neg)                \
  V(Float32x4Reciprocal)         \
  V(Float32x4ReciprocalSqrt)     \
  V(Float32x4Splat)              \
  V(Float32x4Sqrt)               \
  V(Float32x4Scale)              \
  V(Float32x4WithX)              \
  V(Float32x4WithY)              \
  V(Float32x4WithZ)              \
  V(Float32x4WithW)              \
  V(Float32x4Clamp)              \
  V(Float32x4Swizzle)            \
  V(Float32x4Equal)              \
  V(Float32x4NotEqual)           \
  V(Float32x4GreaterThan)        \
  V(Float32x4GreaterThanOrEqual) \
  V(Float32x4LessThan)           \
  V(Float32x4LessThanOrEqual)    \
  V(Float32x4Select)             \
  V(Float32x4Shuffle)            \
  V(Int32x4Add)                  \
  V(Int32x4And)                  \
  V(Int32x4Mul)                  \
  V(Int32x4Sub)                  \
  V(Int32x4Or)                   \
  V(Int32x4Xor)                  \
  V(Int32x4Constructor)          \
  V(Int32x4Check)                \
  V(Int32x4GetX)                 \
  V(Int32x4GetY)                 \
  V(Int32x4GetZ)                 \
  V(Int32x4GetW)                 \
  V(Int32x4Bool)                 \
  V(Int32x4Select)               \
  V(Int32x4Shuffle)              \
  V(Int32x4GetFlagX)             \
  V(Int32x4GetFlagY)             \
  V(Int32x4GetFlagZ)             \
  V(Int32x4GetFlagW)             \
  V(Int32x4GetSignMask)          \
  V(Int32x4Neg)                  \
  V(Int32x4Not)                  \
  V(Int32x4Splat)                \
  V(Int32x4Swizzle)              \
  V(Int32x4ShiftLeft)            \
  V(Int32x4ShiftRight)           \
  V(Int32x4ShiftRightArithmetic) \
  V(Int32x4BitsToFloat32x4)      \
  V(Int32x4ToFloat32x4)          \
  V(Int32x4Equal)                \
  V(Int32x4GreaterThan)          \
  V(Int32x4LessThan)             \
  V(Float32x4BitsToInt32x4)      \
  V(Float32x4ToInt32x4)          \
  V(Int32x4WithX)                \
  V(Int32x4WithY)                \
  V(Int32x4WithZ)                \
  V(Int32x4WithW)                \
  V(Float64x2Add)                \
  V(Float64x2Mul)                \
  V(Float64x2Sub)                \
  V(Float64x2Div)                \
  V(Float64x2Constructor)        \
  V(Float64x2Check)              \
  V(Float64x2Min)                \
  V(Float64x2Max)                \
  V(Float64x2GetX)               \
  V(Float64x2GetY)               \
  V(Float64x2GetSignMask)        \
  V(Float64x2Abs)                \
  V(Float64x2Neg)                \
  V(Float64x2Sqrt)               \
  V(Float64x2Scale)              \
  V(Float64x2WithX)              \
  V(Float64x2WithY)              \
  V(Float64x2Clamp)

#define VALUE_OP_LIST(V) \
  COMMON_OP_LIST(V)      \
  SIMPLIFIED_OP_LIST(V)  \
  MACHINE_OP_LIST(V)     \
  JS_OP_LIST(V)

// The combination of all operators at all levels and the common operators.
#define ALL_OP_LIST(V) \
  CONTROL_OP_LIST(V)   \
  VALUE_OP_LIST(V)

namespace v8 {
namespace internal {
namespace compiler {

// Declare an enumeration with all the opcodes at all levels so that they
// can be globally, uniquely numbered.
class IrOpcode {
 public:
  enum Value {
#define DECLARE_OPCODE(x) k##x,
    ALL_OP_LIST(DECLARE_OPCODE)
#undef DECLARE_OPCODE
    kLast = -1
#define COUNT_OPCODE(x) +1
            ALL_OP_LIST(COUNT_OPCODE)
#undef COUNT_OPCODE
  };

  // Returns the mnemonic name of an opcode.
  static char const* Mnemonic(Value value);

  static bool IsJsOpcode(Value val) {
    switch (val) {
// TODO(turbofan): make this a range check.
#define RETURN_NAME(x) \
  case k##x:           \
    return true;
      JS_OP_LIST(RETURN_NAME)
#undef RETURN_NAME
      default:
        return false;
    }
  }

  static bool IsControlOpcode(Value val) {
    switch (val) {
// TODO(turbofan): make this a range check.
#define RETURN_NAME(x) \
  case k##x:           \
    return true;
      CONTROL_OP_LIST(RETURN_NAME)
#undef RETURN_NAME
      default:
        return false;
    }
  }

  static bool IsLeafOpcode(Value val) {
    switch (val) {
// TODO(turbofan): make this a table lookup.
#define RETURN_NAME(x) \
  case k##x:           \
    return true;
      LEAF_OP_LIST(RETURN_NAME)
#undef RETURN_NAME
      default:
        return false;
    }
  }

  static bool IsCommonOpcode(Value val) {
    switch (val) {
// TODO(turbofan): make this a table lookup or a range check.
#define RETURN_NAME(x) \
  case k##x:           \
    return true;
      CONTROL_OP_LIST(RETURN_NAME)
      COMMON_OP_LIST(RETURN_NAME)
#undef RETURN_NAME
      default:
        return false;
    }
  }
};

}  // namespace compiler
}  // namespace internal
}  // namespace v8

#endif  // V8_COMPILER_OPCODES_H_
