// Generated by llvm2cpp - DO NOT MODIFY!


Function* define_allocObject(Module *mod) {

// Type Definitions
PointerType* PointerTy_0 = PointerType::get(IntegerType::get(mod->getContext(), 8), 0);

std::vector<Type*>FuncTy_1_args;
FuncTy_1_args.push_back(IntegerType::get(mod->getContext(), 32));
FunctionType* FuncTy_1 = FunctionType::get(
 /*Result=*/PointerTy_0,
 /*Params=*/FuncTy_1_args,
 /*isVarArg=*/false);

PointerType* PointerTy_2 = PointerType::get(FuncTy_1, 0);


// Function Declarations

Function* func_malloc = mod->getFunction("malloc");
if (!func_malloc) {
func_malloc = Function::Create(
 /*Type=*/FuncTy_1,
 /*Linkage=*/GlobalValue::ExternalLinkage,
 /*Name=*/"malloc", mod); // (external, no body)
func_malloc->setCallingConv(CallingConv::C);
}
AttributeSet func_malloc_PAL;
{
 SmallVector<AttributeSet, 4> Attrs;
 AttributeSet PAS;
  {
   AttrBuilder B;
   B.addAttribute(Attribute::NoAlias);
   PAS = AttributeSet::get(mod->getContext(), 0U, B);
  }
 
 Attrs.push_back(PAS);
 {
  AttrBuilder B;
  B.addAttribute(Attribute::NoUnwind);
  PAS = AttributeSet::get(mod->getContext(), ~0U, B);
 }

Attrs.push_back(PAS);
func_malloc_PAL = AttributeSet::get(mod->getContext(), Attrs);

}
func_malloc->setAttributes(func_malloc_PAL);

// Global Variable Declarations

// Constant Definitions

// Global Variable Definitions

Function* func_allocObject = mod->getFunction("allocObject");
if (!func_allocObject) {
func_allocObject = Function::Create(
 /*Type=*/FuncTy_1,
 /*Linkage=*/GlobalValue::ExternalLinkage,
 /*Name=*/"allocObject", mod); 
func_allocObject->setCallingConv(CallingConv::C);
}
AttributeSet func_allocObject_PAL;
{
 SmallVector<AttributeSet, 4> Attrs;
 AttributeSet PAS;
  {
   AttrBuilder B;
   B.addAttribute(Attribute::NoAlias);
   PAS = AttributeSet::get(mod->getContext(), 0U, B);
  }
 
 Attrs.push_back(PAS);
 {
  AttrBuilder B;
  B.addAttribute(Attribute::NoUnwind);
  PAS = AttributeSet::get(mod->getContext(), ~0U, B);
 }

Attrs.push_back(PAS);
func_allocObject_PAL = AttributeSet::get(mod->getContext(), Attrs);

}
func_allocObject->setAttributes(func_allocObject_PAL);
Function::arg_iterator args = func_allocObject->arg_begin();
Value* int32_size = args++;
int32_size->setName("size");

BasicBlock* label_3 = BasicBlock::Create(mod->getContext(), "",func_allocObject,0);

// Block  (label_3)
CallInst* ptr_4 = CallInst::Create(func_malloc, int32_size, "", label_3);
ptr_4->setCallingConv(CallingConv::C);
ptr_4->setTailCall(true);
AttributeSet ptr_4_PAL;
{
 SmallVector<AttributeSet, 4> Attrs;
 AttributeSet PAS;
  {
   AttrBuilder B;
   B.addAttribute(Attribute::NoUnwind);
   PAS = AttributeSet::get(mod->getContext(), ~0U, B);
  }
 
 Attrs.push_back(PAS);
 ptr_4_PAL = AttributeSet::get(mod->getContext(), Attrs);
 
}
ptr_4->setAttributes(ptr_4_PAL);

ReturnInst::Create(mod->getContext(), ptr_4, label_3);
return func_allocObject;
}
