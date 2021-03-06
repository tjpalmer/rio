// Preamble
#define __USE_MINGW_ANSI_STDIO 1
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#ifndef _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#endif

#if _MSC_VER >= 1900 || __STDC_VERSION__ >= 201112L
// Visual Studio 2015 supports enough C99/C11 features for us.
#else
#error "C11 support required or Visual Studio 2015 or later"
#endif

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wvarargs"
#endif

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>
#include <assert.h>

typedef unsigned char uchar;
typedef signed char schar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef long long llong;
typedef unsigned long long ullong;

#ifdef _MSC_VER
#define alignof(x) __alignof(x)
#else
#define alignof(x) __alignof__(x)
#endif

#define va_start_ptr(args, arg) (va_start(*(args), *(arg)))
#define va_copy_ptr(dest, src) (va_copy(*(dest), *(src)))
#define va_end_ptr(args) (va_end(*(args)))

struct Any;
static void va_arg_ptr(va_list *args, struct Any any);


// Foreign preamble
typedef struct _finddata64i32_t FindData;
typedef struct tm tm_t;

// Foreign header files
#include <limits.h>
#include <stdint.h>
#include <errno.h>
#include <io.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Forward declarations
typedef struct Slice_TypeFieldInfo Slice_TypeFieldInfo;
typedef struct TypeInfo TypeInfo;
typedef struct rio_Arena rio_Arena;
typedef struct rio_Slice_Decl rio_Slice_Decl;
typedef struct rio_SrcPos rio_SrcPos;
typedef struct rio_Slice_NoteArg rio_Slice_NoteArg;
typedef struct rio_Note rio_Note;
typedef struct rio_Slice_Note rio_Slice_Note;
typedef struct rio_Slice_ref_Stmt rio_Slice_ref_Stmt;
typedef struct rio_StmtList rio_StmtList;
typedef struct rio_Slice_TypespecName rio_Slice_TypespecName;
typedef struct rio_Slice_ref_Typespec rio_Slice_ref_Typespec;
typedef struct rio_Slice_ref_Decl rio_Slice_ref_Decl;
typedef struct rio_Slice_Member rio_Slice_Member;
typedef struct rio_Slice_EnumItem rio_Slice_EnumItem;
typedef struct rio_Slice_ptr_const_char rio_Slice_ptr_const_char;
typedef struct rio_Slice_ImportItem rio_Slice_ImportItem;
typedef struct rio_Slice_CompoundField rio_Slice_CompoundField;
typedef struct rio_Slice_ElseIf rio_Slice_ElseIf;
typedef struct rio_Slice_SwitchCase rio_Slice_SwitchCase;
typedef struct rio_Map rio_Map;
typedef struct rio_DeclFunc rio_DeclFunc;
typedef struct rio_Member rio_Member;
typedef struct rio_Slice_TypeArg rio_Slice_TypeArg;
typedef struct Any Any;
typedef struct rio_Token rio_Token;
typedef struct rio_CompoundField rio_CompoundField;
typedef struct rio_SwitchCasePattern rio_SwitchCasePattern;
typedef struct rio_Slice_SwitchCasePattern rio_Slice_SwitchCasePattern;
typedef struct rio_SwitchCase rio_SwitchCase;
typedef struct rio_EnumItem rio_EnumItem;
typedef struct rio_NoteArg rio_NoteArg;
typedef union rio_Val rio_Val;
typedef struct rio_Sym rio_Sym;
typedef struct rio_Operand rio_Operand;
typedef struct rio_Label rio_Label;
typedef struct rio_StmtCtx rio_StmtCtx;
typedef struct rio_TypeMetrics rio_TypeMetrics;
typedef struct rio_Slice_TypeField rio_Slice_TypeField;
typedef struct rio_TypeAggregate rio_TypeAggregate;
typedef struct rio_Slice_ref_Type rio_Slice_ref_Type;
typedef struct rio_TypeFunc rio_TypeFunc;
typedef struct rio_Type rio_Type;
typedef struct TypeFieldInfo TypeFieldInfo;
typedef struct rio_TypespecFunc rio_TypespecFunc;
typedef struct rio_Typespec rio_Typespec;
typedef struct rio_TypespecName rio_TypespecName;
typedef struct rio_TypeArg rio_TypeArg;
typedef struct rio_ImportItem rio_ImportItem;
typedef struct rio_Aggregate rio_Aggregate;
typedef struct rio_SymRef rio_SymRef;
typedef struct rio_Slice_SymRef rio_Slice_SymRef;
typedef struct rio_DeclEnum rio_DeclEnum;
typedef struct rio_DeclTypedef rio_DeclTypedef;
typedef struct rio_DeclVar rio_DeclVar;
typedef struct rio_DeclImport rio_DeclImport;
typedef struct rio_Decl rio_Decl;
typedef struct rio_ExprIntLit rio_ExprIntLit;
typedef struct rio_ExprFloatLit rio_ExprFloatLit;
typedef struct rio_ExprStrLit rio_ExprStrLit;
typedef struct rio_ExprOffsetofField rio_ExprOffsetofField;
typedef struct rio_ExprCompound rio_ExprCompound;
typedef struct rio_ExprCast rio_ExprCast;
typedef struct rio_ExprModify rio_ExprModify;
typedef struct rio_ExprUnary rio_ExprUnary;
typedef struct rio_ExprBinary rio_ExprBinary;
typedef struct rio_ExprTernary rio_ExprTernary;
typedef struct rio_ExprCall rio_ExprCall;
typedef struct rio_ExprIndex rio_ExprIndex;
typedef struct rio_ExprField rio_ExprField;
typedef struct rio_Expr rio_Expr;
typedef struct rio_ElseIf rio_ElseIf;
typedef struct rio_StmtWhile rio_StmtWhile;
typedef struct rio_StmtAssign rio_StmtAssign;
typedef struct rio_StmtFor rio_StmtFor;
typedef struct rio_StmtForEach rio_StmtForEach;
typedef struct rio_StmtIf rio_StmtIf;
typedef struct rio_StmtInit rio_StmtInit;
typedef struct rio_StmtSwitch rio_StmtSwitch;
typedef struct rio_Stmt rio_Stmt;
typedef struct rio_BufHdr rio_BufHdr;
typedef struct rio_Intern rio_Intern;
typedef struct rio_MapClosure rio_MapClosure;
typedef struct rio_TypeMap rio_TypeMap;
typedef struct rio_Package rio_Package;
typedef struct rio_TypeField rio_TypeField;
typedef struct rio_DirListIter rio_DirListIter;
typedef struct rio_Flag rio_Flag;
typedef struct rio_CachedArrayType rio_CachedArrayType;
typedef struct rio_CachedFuncType rio_CachedFuncType;

// Sorted declarations
int main(int argc, char const ((*(*argv))));

typedef int Result_Kind;

#define Result_Ok ((Result_Kind)(0))

#define Result_Err ((Result_Kind)((Result_Ok) + (1)))

typedef int Err;

typedef void Item;

typedef int Try_Kind;

#define Try_Ok ((Try_Kind)(0))

#define Try_Err ((Try_Kind)((Try_Ok) + (1)))

extern char const ((*RIOOS));

extern char const ((*RIOARCH));

typedef ullong typeid;

typedef int TypeKind;

#define TypeKind_None ((TypeKind)(0))

#define TypeKind_Void ((TypeKind)((TypeKind_None) + (1)))

#define TypeKind_Bool ((TypeKind)((TypeKind_Void) + (1)))

#define TypeKind_Char ((TypeKind)((TypeKind_Bool) + (1)))

#define TypeKind_UChar ((TypeKind)((TypeKind_Char) + (1)))

#define TypeKind_SChar ((TypeKind)((TypeKind_UChar) + (1)))

#define TypeKind_Short ((TypeKind)((TypeKind_SChar) + (1)))

#define TypeKind_UShort ((TypeKind)((TypeKind_Short) + (1)))

#define TypeKind_Int ((TypeKind)((TypeKind_UShort) + (1)))

#define TypeKind_UInt ((TypeKind)((TypeKind_Int) + (1)))

#define TypeKind_Long ((TypeKind)((TypeKind_UInt) + (1)))

#define TypeKind_ULong ((TypeKind)((TypeKind_Long) + (1)))

#define TypeKind_LLong ((TypeKind)((TypeKind_ULong) + (1)))

#define TypeKind_ULLong ((TypeKind)((TypeKind_LLong) + (1)))

#define TypeKind_Float ((TypeKind)((TypeKind_ULLong) + (1)))

#define TypeKind_Double ((TypeKind)((TypeKind_Float) + (1)))

#define TypeKind_Const ((TypeKind)((TypeKind_Double) + (1)))

#define TypeKind_Ptr ((TypeKind)((TypeKind_Const) + (1)))

#define TypeKind_Ref ((TypeKind)((TypeKind_Ptr) + (1)))

#define TypeKind_Array ((TypeKind)((TypeKind_Ref) + (1)))

#define TypeKind_Struct ((TypeKind)((TypeKind_Array) + (1)))

#define TypeKind_Union ((TypeKind)((TypeKind_Struct) + (1)))

#define TypeKind_Func ((TypeKind)((TypeKind_Union) + (1)))


struct Slice_TypeFieldInfo {
  TypeFieldInfo (*items);
  size_t length;
};

struct TypeInfo {
  TypeKind kind;
  int size;
  int align;
  char const ((*name));
  int count;
  typeid base;
  Slice_TypeFieldInfo fields;
};

TypeKind typeid_kind(typeid type);

int typeid_index(typeid type);

size_t typeid_size(typeid type);

TypeInfo const ((*get_typeinfo(typeid type)));

#define UCHAR_MIN ((uchar)(0))

#define USHORT_MIN ((ushort)(0))

#define UINT_MIN ((uint)(0))

#define ULLONG_MIN ((ullong)(0))

#define UINT8_MIN (UCHAR_MIN)

#define UINT16_MIN (USHORT_MIN)

#define UINT32_MIN (UINT_MIN)

#define UINT64_MIN (ULLONG_MIN)

#define ULONG_MIN ((ulong)(INT32_MIN))

#define USIZE_MIN (UINT64_MIN)

#define UINTPTR_MIN (UINT64_MIN)

typedef int rio_Typespec_Kind;

#define rio_Typespec_None ((rio_Typespec_Kind)(0))

#define rio_Typespec_Const ((rio_Typespec_Kind)((rio_Typespec_None) + (1)))

#define rio_Typespec_Ptr ((rio_Typespec_Kind)((rio_Typespec_Const) + (1)))

#define rio_Typespec_Ref ((rio_Typespec_Kind)((rio_Typespec_Ptr) + (1)))

#define rio_Typespec_Name ((rio_Typespec_Kind)((rio_Typespec_Ref) + (1)))

#define rio_Typespec_Func ((rio_Typespec_Kind)((rio_Typespec_Name) + (1)))

#define rio_Typespec_Array ((rio_Typespec_Kind)((rio_Typespec_Func) + (1)))

typedef int rio_Member_Kind;

#define rio_Member_None ((rio_Member_Kind)(0))

#define rio_Member_Field ((rio_Member_Kind)((rio_Member_None) + (1)))

#define rio_Member_Subaggregate ((rio_Member_Kind)((rio_Member_Field) + (1)))

typedef int rio_AggregateKind;

#define rio_AggregateKind_None ((rio_AggregateKind)(0))

#define rio_AggregateKind_Struct ((rio_AggregateKind)((rio_AggregateKind_None) + (1)))

#define rio_AggregateKind_Union ((rio_AggregateKind)((rio_AggregateKind_Struct) + (1)))

typedef int rio_SymRef_Kind;

#define rio_SymRef_Expr ((rio_SymRef_Kind)(0))

#define rio_SymRef_Type ((rio_SymRef_Kind)((rio_SymRef_Expr) + (1)))

typedef int rio_Decl_Kind;

#define rio_Decl_None ((rio_Decl_Kind)(0))

#define rio_Decl_Note ((rio_Decl_Kind)((rio_Decl_None) + (1)))

#define rio_Decl_Enum ((rio_Decl_Kind)((rio_Decl_Note) + (1)))

#define rio_Decl_Struct ((rio_Decl_Kind)((rio_Decl_Enum) + (1)))

#define rio_Decl_Union ((rio_Decl_Kind)((rio_Decl_Struct) + (1)))

#define rio_Decl_Func ((rio_Decl_Kind)((rio_Decl_Union) + (1)))

#define rio_Decl_Typedef ((rio_Decl_Kind)((rio_Decl_Func) + (1)))

#define rio_Decl_Var ((rio_Decl_Kind)((rio_Decl_Typedef) + (1)))

#define rio_Decl_Const ((rio_Decl_Kind)((rio_Decl_Var) + (1)))

#define rio_Decl_Import ((rio_Decl_Kind)((rio_Decl_Const) + (1)))

typedef int rio_CompoundField_Kind;

#define rio_CompoundField_Default ((rio_CompoundField_Kind)(0))

#define rio_CompoundField_Name ((rio_CompoundField_Kind)((rio_CompoundField_Default) + (1)))

#define rio_CompoundField_Index ((rio_CompoundField_Kind)((rio_CompoundField_Name) + (1)))

typedef int rio_Expr_Kind;

#define rio_Expr_None ((rio_Expr_Kind)(0))

#define rio_Expr_Int ((rio_Expr_Kind)((rio_Expr_None) + (1)))

#define rio_Expr_Float ((rio_Expr_Kind)((rio_Expr_Int) + (1)))

#define rio_Expr_Str ((rio_Expr_Kind)((rio_Expr_Float) + (1)))

#define rio_Expr_Name ((rio_Expr_Kind)((rio_Expr_Str) + (1)))

#define rio_Expr_AlignofExpr ((rio_Expr_Kind)((rio_Expr_Name) + (1)))

#define rio_Expr_SizeofExpr ((rio_Expr_Kind)((rio_Expr_AlignofExpr) + (1)))

#define rio_Expr_TypeofExpr ((rio_Expr_Kind)((rio_Expr_SizeofExpr) + (1)))

#define rio_Expr_Paren ((rio_Expr_Kind)((rio_Expr_TypeofExpr) + (1)))

#define rio_Expr_AlignofType ((rio_Expr_Kind)((rio_Expr_Paren) + (1)))

#define rio_Expr_SizeofType ((rio_Expr_Kind)((rio_Expr_AlignofType) + (1)))

#define rio_Expr_TypeofType ((rio_Expr_Kind)((rio_Expr_SizeofType) + (1)))

#define rio_Expr_Offsetof ((rio_Expr_Kind)((rio_Expr_TypeofType) + (1)))

#define rio_Expr_Compound ((rio_Expr_Kind)((rio_Expr_Offsetof) + (1)))

#define rio_Expr_Cast ((rio_Expr_Kind)((rio_Expr_Compound) + (1)))

#define rio_Expr_Modify ((rio_Expr_Kind)((rio_Expr_Cast) + (1)))

#define rio_Expr_Unary ((rio_Expr_Kind)((rio_Expr_Modify) + (1)))

#define rio_Expr_Binary ((rio_Expr_Kind)((rio_Expr_Unary) + (1)))

#define rio_Expr_Ternary ((rio_Expr_Kind)((rio_Expr_Binary) + (1)))

#define rio_Expr_Call ((rio_Expr_Kind)((rio_Expr_Ternary) + (1)))

#define rio_Expr_Index ((rio_Expr_Kind)((rio_Expr_Call) + (1)))

#define rio_Expr_Field ((rio_Expr_Kind)((rio_Expr_Index) + (1)))

typedef int rio_ExprCompound_Kind;

#define rio_ExprCompound_List ((rio_ExprCompound_Kind)(0))

#define rio_ExprCompound_Struct ((rio_ExprCompound_Kind)((rio_ExprCompound_List) + (1)))

#define rio_ExprCompound_Tuple ((rio_ExprCompound_Kind)((rio_ExprCompound_Struct) + (1)))

typedef int rio_Stmt_Kind;

#define rio_Stmt_None ((rio_Stmt_Kind)(0))

#define rio_Stmt_Break ((rio_Stmt_Kind)((rio_Stmt_None) + (1)))

#define rio_Stmt_Continue ((rio_Stmt_Kind)((rio_Stmt_Break) + (1)))

#define rio_Stmt_DoWhile ((rio_Stmt_Kind)((rio_Stmt_Continue) + (1)))

#define rio_Stmt_While ((rio_Stmt_Kind)((rio_Stmt_DoWhile) + (1)))

#define rio_Stmt_Expr ((rio_Stmt_Kind)((rio_Stmt_While) + (1)))

#define rio_Stmt_Return ((rio_Stmt_Kind)((rio_Stmt_Expr) + (1)))

#define rio_Stmt_Goto ((rio_Stmt_Kind)((rio_Stmt_Return) + (1)))

#define rio_Stmt_Label ((rio_Stmt_Kind)((rio_Stmt_Goto) + (1)))

#define rio_Stmt_Assign ((rio_Stmt_Kind)((rio_Stmt_Label) + (1)))

#define rio_Stmt_Block ((rio_Stmt_Kind)((rio_Stmt_Assign) + (1)))

#define rio_Stmt_For ((rio_Stmt_Kind)((rio_Stmt_Block) + (1)))

#define rio_Stmt_ForEach ((rio_Stmt_Kind)((rio_Stmt_For) + (1)))

#define rio_Stmt_If ((rio_Stmt_Kind)((rio_Stmt_ForEach) + (1)))

#define rio_Stmt_Init ((rio_Stmt_Kind)((rio_Stmt_If) + (1)))

#define rio_Stmt_Note ((rio_Stmt_Kind)((rio_Stmt_Init) + (1)))

#define rio_Stmt_Switch ((rio_Stmt_Kind)((rio_Stmt_Note) + (1)))

#define rio_Stmt_Close ((rio_Stmt_Kind)((rio_Stmt_Switch) + (1)))

struct rio_Arena {
  char (*ptr);
  char (*end);
  char (*(*blocks));
};

extern rio_Arena rio_ast_arena;

void (*rio_ast_alloc(size_t size));

void (*rio_ast_dup_sized(void const ((*src)), size_t size));




struct rio_Slice_Decl {
  rio_Decl (*items);
  size_t length;
};

void rio_ast_dup_type_params(rio_Decl (*d), rio_Slice_Decl params);


struct rio_SrcPos {
  char const ((*name));
  int line;
};

struct rio_Slice_NoteArg {
  rio_NoteArg (*items);
  size_t length;
};

struct rio_Note {
  rio_SrcPos pos;
  char const ((*name));
  rio_Slice_NoteArg args;
};

rio_Note rio_new_note(rio_SrcPos pos, char const ((*name)), rio_Slice_NoteArg args);

struct rio_Slice_Note {
  rio_Note (*items);
  size_t length;
};

rio_Slice_Note rio_new_notes(rio_Slice_Note notes);

struct rio_Slice_ref_Stmt {
  rio_Stmt (*(*items));
  size_t length;
};

struct rio_StmtList {
  rio_SrcPos pos;
  rio_Slice_ref_Stmt stmts;
};

rio_StmtList rio_new_stmt_list(rio_SrcPos pos, rio_Slice_ref_Stmt stmts);

rio_Typespec (*rio_new_typespec(rio_Typespec_Kind kind, rio_SrcPos pos));

rio_Typespec (*rio_new_typespec_name1(rio_SrcPos pos, char const ((*name))));

struct rio_Slice_TypespecName {
  rio_TypespecName (*items);
  size_t length;
};

rio_Typespec (*rio_new_typespec_name(rio_SrcPos pos, rio_Slice_TypespecName names));

rio_Typespec (*rio_new_typespec_ptr(rio_SrcPos pos, rio_Typespec (*base), bool is_owned));

rio_Typespec (*rio_new_typespec_ref(rio_SrcPos pos, rio_Typespec (*base), bool is_owned));

rio_Typespec (*rio_new_typespec_const(rio_SrcPos pos, rio_Typespec (*base)));

rio_Typespec (*rio_new_typespec_array(rio_SrcPos pos, rio_Typespec (*elem), rio_Expr (*size)));

struct rio_Slice_ref_Typespec {
  rio_Typespec (*(*items));
  size_t length;
};

rio_Typespec (*rio_new_typespec_func(rio_SrcPos pos, rio_Slice_ref_Typespec args, rio_Typespec (*ret), bool has_varargs));

struct rio_Slice_ref_Decl {
  rio_Decl (*(*items));
  size_t length;
};

rio_Slice_ref_Decl (*rio_new_decls(rio_Slice_ref_Decl decls));

rio_Decl (*rio_new_decl(rio_Decl_Kind kind, rio_SrcPos pos, char const ((*name))));

rio_Note (*rio_get_decl_note(rio_Decl (*decl), char const ((*name))));

rio_Note (*rio_get_note(rio_Slice_Note (*notes), char const ((*name))));

struct rio_Slice_Member {
  rio_Member (*items);
  size_t length;
};

rio_Aggregate (*rio_get_subunion(rio_Slice_Member items));

bool rio_is_decl_foreign(rio_Decl (*decl));

struct rio_Slice_EnumItem {
  rio_EnumItem (*items);
  size_t length;
};

rio_Decl (*rio_new_decl_enum(rio_SrcPos pos, char const ((*name)), rio_Typespec (*type), rio_Slice_EnumItem items));

rio_Aggregate (*rio_new_aggregate(rio_SrcPos pos, rio_AggregateKind kind, rio_Slice_Member members));

rio_Decl (*rio_new_decl_aggregate(rio_SrcPos pos, rio_Decl_Kind kind, char const ((*name)), rio_Slice_Decl params, rio_Aggregate (*aggregate)));

rio_Decl (*rio_new_decl_var(rio_SrcPos pos, char const ((*name)), rio_Typespec (*type), rio_Expr (*expr)));

rio_Decl (*rio_new_decl_func(rio_SrcPos pos, char const ((*name)), rio_Slice_Decl type_params, rio_Slice_Member params, rio_Typespec (*ret_type), bool has_varargs, rio_StmtList block));

void rio_init_func(rio_DeclFunc (*func), rio_Slice_Member params, rio_Typespec (*ret_type), bool has_varargs, rio_StmtList block);

rio_Decl (*rio_new_decl_const(rio_SrcPos pos, char const ((*name)), rio_Typespec (*type), rio_Expr (*expr)));

rio_Decl (*rio_new_decl_typedef(rio_SrcPos pos, char const ((*name)), rio_Typespec (*val)));

rio_Decl (*rio_new_decl_note(rio_SrcPos pos, rio_Note note));

struct rio_Slice_ptr_const_char {
  char const ((*(*items)));
  size_t length;
};

struct rio_Slice_ImportItem {
  rio_ImportItem (*items);
  size_t length;
};

rio_Decl (*rio_new_decl_import(rio_SrcPos pos, char const ((*rename_name)), bool is_relative, rio_Slice_ptr_const_char names, bool import_all, rio_Slice_ImportItem items));

rio_Expr (*rio_new_expr(rio_Expr_Kind kind, rio_SrcPos pos));

rio_Expr (*rio_new_expr_paren(rio_SrcPos pos, rio_Expr (*expr)));

rio_Expr (*rio_new_expr_sizeof_expr(rio_SrcPos pos, rio_Expr (*expr)));

rio_Expr (*rio_new_expr_sizeof_type(rio_SrcPos pos, rio_Typespec (*type)));

rio_Expr (*rio_new_expr_typeof_expr(rio_SrcPos pos, rio_Expr (*expr)));

rio_Expr (*rio_new_expr_typeof_type(rio_SrcPos pos, rio_Typespec (*type)));

rio_Expr (*rio_new_expr_alignof_expr(rio_SrcPos pos, rio_Expr (*expr)));

rio_Expr (*rio_new_expr_alignof_type(rio_SrcPos pos, rio_Typespec (*type)));

rio_Expr (*rio_new_expr_offsetof(rio_SrcPos pos, rio_Typespec (*type), char const ((*name))));

typedef int rio_TokenKind;

rio_Expr (*rio_new_expr_modify(rio_SrcPos pos, rio_TokenKind op, bool post, rio_Expr (*expr)));

typedef int rio_TokenMod;

typedef int rio_TokenSuffix;

rio_Expr (*rio_new_expr_int(rio_SrcPos pos, ullong val, rio_TokenMod mod, rio_TokenSuffix suffix));

rio_Expr (*rio_new_expr_float(rio_SrcPos pos, char const ((*start)), char const ((*end)), double val, rio_TokenSuffix suffix));

rio_Expr (*rio_new_expr_str(rio_SrcPos pos, char const ((*val)), rio_TokenMod mod));

rio_Expr (*rio_new_expr_name(rio_SrcPos pos, char const ((*name))));

struct rio_Slice_CompoundField {
  rio_CompoundField (*items);
  size_t length;
};

rio_Expr (*rio_new_expr_compound(rio_SrcPos pos, rio_ExprCompound_Kind kind, rio_Typespec (*type), rio_Slice_CompoundField fields));

rio_Expr (*rio_new_expr_cast(rio_SrcPos pos, rio_Typespec (*type), rio_Expr (*expr)));

rio_Expr (*rio_new_expr_call(rio_SrcPos pos, rio_Expr (*expr), rio_Slice_CompoundField args));

rio_Expr (*rio_new_expr_index(rio_SrcPos pos, rio_Expr (*expr), rio_Expr (*index)));

rio_Expr (*rio_new_expr_field(rio_SrcPos pos, rio_Expr (*expr), char const ((*name))));

rio_Expr (*rio_new_expr_unary(rio_SrcPos pos, rio_TokenKind op, rio_Expr (*expr)));

rio_Expr (*rio_new_expr_binary(rio_SrcPos pos, rio_TokenKind op, rio_Expr (*left), rio_Expr (*right)));

rio_Expr (*rio_new_expr_ternary(rio_SrcPos pos, rio_Expr (*cond), rio_Expr (*then_expr), rio_Expr (*else_expr)));

rio_Note (*rio_get_stmt_note(rio_Stmt (*stmt), char const ((*name))));

rio_Stmt (*rio_new_stmt(rio_Stmt_Kind kind, rio_SrcPos pos));

rio_Stmt (*rio_new_stmt_label(rio_SrcPos pos, char const ((*label))));

rio_Stmt (*rio_new_stmt_goto(rio_SrcPos pos, char const ((*label))));

rio_Stmt (*rio_new_stmt_note(rio_SrcPos pos, rio_Note note));

rio_Stmt (*rio_new_stmt_return(rio_SrcPos pos, rio_Expr (*expr)));

rio_Stmt (*rio_new_stmt_break(rio_SrcPos pos));

rio_Stmt (*rio_new_stmt_continue(rio_SrcPos pos));

rio_Stmt (*rio_new_stmt_block(rio_SrcPos pos, rio_StmtList block));

rio_Stmt (*rio_new_stmt_close(rio_SrcPos pos, rio_Stmt_Kind tag));

struct rio_Slice_ElseIf {
  rio_ElseIf (*items);
  size_t length;
};

rio_Stmt (*rio_new_stmt_if(rio_SrcPos pos, rio_Stmt (*init), rio_Expr (*cond), rio_StmtList then_block, rio_Slice_ElseIf elseifs, rio_StmtList else_block));

rio_Stmt (*rio_new_stmt_while(rio_SrcPos pos, rio_Expr (*cond), rio_StmtList block));

rio_Stmt (*rio_new_stmt_do_while(rio_SrcPos pos, rio_Expr (*cond), rio_StmtList block));

rio_Stmt (*rio_new_stmt_for_each(rio_SrcPos pos, bool get_ref, rio_Expr (*expr), rio_Slice_Member params, rio_StmtList block));

rio_Stmt (*rio_new_stmt_for(rio_SrcPos pos, rio_Stmt (*init), rio_Expr (*cond), rio_Stmt (*next), rio_StmtList block));

struct rio_Slice_SwitchCase {
  rio_SwitchCase (*items);
  size_t length;
};

rio_Stmt (*rio_new_stmt_switch(rio_SrcPos pos, rio_Expr (*expr), rio_Slice_SwitchCase cases));

rio_Stmt (*rio_new_stmt_assign(rio_SrcPos pos, rio_TokenKind op, rio_Expr (*left), rio_Expr (*right)));

rio_Stmt (*rio_new_stmt_init(rio_SrcPos pos, char const ((*name)), bool is_mut, rio_Typespec (*type), rio_Expr (*expr)));

rio_Stmt (*rio_new_stmt_expr(rio_SrcPos pos, rio_Expr (*expr)));

size_t rio_min(size_t x, size_t y);

size_t rio_max(size_t x, size_t y);

size_t rio_clamp_max(size_t x, size_t max);

size_t rio_clamp_min(size_t x, size_t min);

size_t rio_is_pow2(size_t x);

uintptr_t rio_align_down(uintptr_t n, size_t a);

uintptr_t rio_align_up(uintptr_t n, size_t a);

void (*rio_align_down_ptr(void (*p), size_t a));

void (*rio_align_up_ptr(void (*p), size_t a));

bool rio_starts_with(char const ((*string)), char const ((*start)));

void rio_fatal(char const ((*fmt)), ...);

void (*rio_xcalloc(size_t num_elems, size_t elem_size));

void (*rio_xrealloc(void (*ptr), size_t num_bytes));

void (*rio_xmalloc(size_t num_bytes));

void (*rio_memdup(void (*src), size_t size));

char (*rio_strf(char const ((*fmt)), ...));

char (*rio_read_file(char const ((*path))));

bool rio_write_file(char const ((*path)), char const ((*buf)), size_t len);

rio_BufHdr (*rio_buf__hdr(void (*b)));

size_t rio_buf_len(void (*b));

size_t rio_buf_cap(void const ((*b)));

void (*rio_buf_end(void (*b), size_t elem_size));

size_t rio_buf_sizeof(void (*b), size_t elem_size);

void rio_buf_free(void (*(*b)));

void rio_buf_fit(void (*(*b)), size_t new_len, size_t elem_size);

void rio_buf_push(void (*(*b)), void (*elem), size_t elem_size);


void rio_buf_unshift(void (*(*b)), void (*elem), size_t elem_size);

void (*rio_buf__grow(void const ((*buf)), size_t new_len, size_t elem_size));

void rio_buf_printf(char (*(*buf)), char const ((*fmt)), ...);

extern rio_Arena rio_allocator;

#define rio_ARENA_ALIGNMENT (8)

#define rio_ARENA_BLOCK_SIZE ((1024) * (1024))

void rio_arena_grow(rio_Arena (*arena), size_t min_size);

void (*rio_arena_alloc(rio_Arena (*arena), size_t size));

void rio_arena_free(rio_Arena (*arena));

uint64_t rio_hash_uint64(uint64_t x);

uint64_t rio_hash_ptr(void const ((*ptr)));

uint64_t rio_hash_mix(uint64_t x, uint64_t y);

uint64_t rio_hash_bytes(void const ((*ptr)), size_t len);

uint64_t rio_map_get_uint64_from_uint64(rio_Map (*map), uint64_t key);

void rio_map_grow(rio_Map (*map), size_t new_cap);

void rio_map_put_uint64_from_uint64(rio_Map (*map), uint64_t key, uint64_t val);

void (*rio_map_get(rio_Map (*map), void const ((*key))));

void rio_map_put(rio_Map (*map), void const ((*key)), void (*val));

void (*rio_map_get_from_uint64(rio_Map (*map), uint64_t key));

void rio_map_put_from_uint64(rio_Map (*map), uint64_t key, void (*val));

uint64_t rio_map_get_uint64(rio_Map (*map), void (*key));

void rio_map_put_uint64(rio_Map (*map), void (*key), uint64_t val);

extern rio_Arena rio_intern_arena;

struct rio_Map {
  uint64_t (*keys);
  uint64_t (*vals);
  size_t len;
  size_t cap;
};

extern rio_Map rio_interns;

char const ((*rio_str_intern_range(char const ((*start)), char const ((*end)))));

char const ((*rio_str_intern(char const ((*str)))));

bool rio_str_islower(char const ((*str)));

typedef void (*(*rio_MapClosureCall)(void *, Any));

rio_Aggregate (*rio_dupe_aggregate(rio_Aggregate (*aggregate), rio_MapClosure (*map)));

rio_StmtList rio_dupe_block(rio_StmtList block, rio_MapClosure (*map));

rio_Expr (*rio_dupe_expr(rio_Expr (*expr), rio_MapClosure (*map)));

rio_Slice_CompoundField rio_dupe_fields(rio_Slice_CompoundField fields, rio_MapClosure (*map));

struct rio_DeclFunc {
  rio_Slice_Member params;
  rio_Typespec (*ret_type);
  bool has_varargs;
  rio_StmtList block;
};

rio_DeclFunc rio_dupe_function(rio_DeclFunc func, bool shallow, rio_MapClosure (*map));

void rio_dupe_function_fields(rio_DeclFunc (*dupe), bool shallow, rio_MapClosure (*map));

struct rio_Member {
  rio_Member_Kind kind;
  rio_SrcPos pos;
  rio_Slice_ptr_const_char kind_names;
  union {
    // void;
    struct {
      char const ((*name));
      rio_Typespec (*type);
    };
    rio_Aggregate (*subaggregate);
  };
};

rio_Member rio_dupe_func_param(rio_Member param, rio_MapClosure (*map));

rio_Stmt (*rio_dupe_stmt(rio_Stmt (*stmt), rio_MapClosure (*map)));

struct rio_Slice_TypeArg {
  rio_TypeArg (*items);
  size_t length;
};

rio_Slice_TypeArg rio_dupe_type_args(rio_Slice_TypeArg type_args, rio_MapClosure (*map));

rio_Typespec (*rio_dupe_typespec(rio_Typespec (*type), rio_MapClosure (*map)));

bool rio_find_generic(rio_Typespec (*type));

char (*rio_get_typespec_sym_name(rio_Typespec (*type)));

struct Any {
  void (*ptr);
  typeid type;
};

void (*rio_map_type_args(rio_TypeMap (*self), Any item));

void rio_put_typespec_sym_name(char (*(*buf)), rio_Typespec (*type));

extern char (*rio_gen_buf);

extern int rio_gen_indent;

extern rio_SrcPos rio_gen_pos;

extern char const ((*(*rio_gen_headers_buf)));

extern char (*rio_gen_preamble_str);

extern char (*rio_gen_postamble_str);

void rio_genln(void);

bool rio_is_incomplete_array_typespec(rio_Typespec (*typespec));

extern char (rio_char_to_escape[256]);

void rio_gen_char(char c);

void rio_gen_str(char const ((*str)), bool multiline);

void rio_gen_sync_pos(rio_SrcPos pos);

char const ((*rio_cdecl_paren(char const ((*str)), char c)));

char const ((*rio_cdecl_name(rio_Type (*type))));

char (*rio_type_to_cdecl(rio_Type (*type), char const ((*str))));

char const ((*rio_gen_expr_str(rio_Expr (*expr))));

extern rio_Map rio_gen_name_map;

char const ((*rio_get_gen_name_or_default(void const ((*ptr)), char const ((*default_name)))));

char const ((*rio_get_gen_name(void const ((*ptr)))));

char (*rio_typespec_to_cdecl(rio_Typespec (*typespec), char const ((*str))));

void rio_gen_func_decl(rio_Decl (*decl));

bool rio_gen_reachable(rio_Sym (*sym));

void rio_gen_forward_decls(void);

void rio_gen_aggregate_item(rio_Member (*item));

void rio_gen_aggregate_items(rio_Aggregate (*aggregate));

void rio_gen_aggregate(rio_Decl (*decl));

void rio_gen_paren_expr(rio_Expr (*expr));

void rio_gen_expr_fields(rio_Slice_CompoundField fields);

void rio_gen_expr_compound(rio_Expr (*expr));

typedef int rio_CompilerTypeKind;

#define rio_CompilerTypeKind_None ((rio_CompilerTypeKind)(0))

#define rio_CompilerTypeKind_Incomplete ((rio_CompilerTypeKind)((rio_CompilerTypeKind_None) + (1)))

#define rio_CompilerTypeKind_Completing ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Incomplete) + (1)))

#define rio_CompilerTypeKind_Void ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Completing) + (1)))

#define rio_CompilerTypeKind_Bool ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Void) + (1)))

#define rio_CompilerTypeKind_Char ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Bool) + (1)))

#define rio_CompilerTypeKind_SChar ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Char) + (1)))

#define rio_CompilerTypeKind_UChar ((rio_CompilerTypeKind)((rio_CompilerTypeKind_SChar) + (1)))

#define rio_CompilerTypeKind_Short ((rio_CompilerTypeKind)((rio_CompilerTypeKind_UChar) + (1)))

#define rio_CompilerTypeKind_UShort ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Short) + (1)))

#define rio_CompilerTypeKind_Int ((rio_CompilerTypeKind)((rio_CompilerTypeKind_UShort) + (1)))

#define rio_CompilerTypeKind_UInt ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Int) + (1)))

#define rio_CompilerTypeKind_Long ((rio_CompilerTypeKind)((rio_CompilerTypeKind_UInt) + (1)))

#define rio_CompilerTypeKind_ULong ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Long) + (1)))

#define rio_CompilerTypeKind_LLong ((rio_CompilerTypeKind)((rio_CompilerTypeKind_ULong) + (1)))

#define rio_CompilerTypeKind_ULLong ((rio_CompilerTypeKind)((rio_CompilerTypeKind_LLong) + (1)))

#define rio_CompilerTypeKind_Enum ((rio_CompilerTypeKind)((rio_CompilerTypeKind_ULLong) + (1)))

#define rio_CompilerTypeKind_Float ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Enum) + (1)))

#define rio_CompilerTypeKind_Double ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Float) + (1)))

#define rio_CompilerTypeKind_Ptr ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Double) + (1)))

#define rio_CompilerTypeKind_Ref ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Ptr) + (1)))

#define rio_CompilerTypeKind_Func ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Ref) + (1)))

#define rio_CompilerTypeKind_Array ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Func) + (1)))

#define rio_CompilerTypeKind_Struct ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Array) + (1)))

#define rio_CompilerTypeKind_Union ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Struct) + (1)))

#define rio_CompilerTypeKind_Const ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Union) + (1)))

#define rio_CompilerTypeKind_Num ((rio_CompilerTypeKind)((rio_CompilerTypeKind_Const) + (1)))

extern char const ((*(rio_typeid_kind_names[(rio_CompilerTypeKind_Num)])));

char const ((*rio_typeid_kind_name(rio_Type (*type))));

bool rio_is_excluded_typeinfo(rio_Type (*type));

void rio_gen_typeid(rio_Type (*type));

void rio_gen_expr(rio_Expr (*expr));

void rio_gen_stmt_block(rio_StmtList block);

void rio_gen_simple_stmt(rio_Stmt (*stmt));

bool rio_is_char_lit(rio_Expr (*expr));

void rio_gen_stmt(rio_Stmt (*stmt));

void rio_gen_decl(rio_Sym (*sym));

void rio_gen_sorted_decls(void);

void rio_gen_defs(void);

extern rio_Map rio_gen_foreign_headers_map;

extern char const ((*(*rio_gen_foreign_headers_buf)));

void rio_add_foreign_header(char const ((*name)));

extern char const ((*(*rio_gen_foreign_sources_buf)));

void rio_add_foreign_source(char const ((*name)));

void rio_gen_include(char const ((*path)));

void rio_gen_foreign_headers(void);

void rio_gen_foreign_sources(void);

extern char const ((*(*rio_gen_sources_buf)));

void rio_put_include_path(char (path[MAX_PATH]), rio_Package (*package), char const ((*filename)));

extern char (*rio_gen_preamble_buf);

extern char (*rio_gen_postamble_buf);

void rio_preprocess_package(rio_Package (*package));

void rio_preprocess_packages(void);

void rio_gen_typeinfo_header(char const ((*kind)), rio_Type (*type));

void rio_gen_typeinfo_fields(rio_Type (*type));

void rio_gen_typeinfo_case(char (*(*buf)), char const ((*item_name)), char const ((*type_name)));

void rio_gen_typeinfo(rio_Type (*type));

void rio_gen_typeinfos(void);

void rio_gen_package_external_names(void);

void rio_gen_preamble(void);

void rio_gen_postamble(void);

void rio_gen_all(void);

extern char const ((*rio_typedef_keyword));

extern char const ((*rio_enum_keyword));

extern char const ((*rio_struct_keyword));

extern char const ((*rio_union_keyword));

extern char const ((*rio_let_keyword));

extern char const ((*rio_mut_keyword));

extern char const ((*rio_own_keyword));

extern char const ((*rio_const_keyword));

extern char const ((*rio_def_keyword));

extern char const ((*rio_sizeof_keyword));

extern char const ((*rio_alignof_keyword));

extern char const ((*rio_typeof_keyword));

extern char const ((*rio_offsetof_keyword));

extern char const ((*rio_break_keyword));

extern char const ((*rio_continue_keyword));

extern char const ((*rio_return_keyword));

extern char const ((*rio_if_keyword));

extern char const ((*rio_else_keyword));

extern char const ((*rio_while_keyword));

extern char const ((*rio_do_keyword));

extern char const ((*rio_for_keyword));

extern char const ((*rio_switch_keyword));

extern char const ((*rio_case_keyword));

extern char const ((*rio_default_keyword));

extern char const ((*rio_import_keyword));

extern char const ((*rio_goto_keyword));

extern char const ((*rio_first_keyword));

extern char const ((*rio_last_keyword));

extern char const ((*(*rio_keywords)));

extern char const ((*rio_as_name));

extern char const ((*rio_always_name));

extern char const ((*rio_foreign_name));

extern char const ((*rio_unscoped_name));

extern char const ((*rio_complete_name));

extern char const ((*rio_assert_name));

extern char const ((*rio_declare_note_name));

extern char const ((*rio_static_assert_name));

extern char const ((*rio_void_name));

char const ((*rio_init_keyword(char const ((*keyword)))));

extern bool rio_keywords_inited;

void rio_init_keywords(void);

bool rio_is_keyword_name(char const ((*name)));

#define rio_TokenKind_Eof ((rio_TokenKind)(0))

#define rio_TokenKind_Colon ((rio_TokenKind)((rio_TokenKind_Eof) + (1)))

#define rio_TokenKind_Arrow ((rio_TokenKind)((rio_TokenKind_Colon) + (1)))

#define rio_TokenKind_Spear ((rio_TokenKind)((rio_TokenKind_Arrow) + (1)))

#define rio_TokenKind_Lparen ((rio_TokenKind)((rio_TokenKind_Spear) + (1)))

#define rio_TokenKind_Rparen ((rio_TokenKind)((rio_TokenKind_Lparen) + (1)))

#define rio_TokenKind_Lbrace ((rio_TokenKind)((rio_TokenKind_Rparen) + (1)))

#define rio_TokenKind_Rbrace ((rio_TokenKind)((rio_TokenKind_Lbrace) + (1)))

#define rio_TokenKind_Lbracket ((rio_TokenKind)((rio_TokenKind_Rbrace) + (1)))

#define rio_TokenKind_Rbracket ((rio_TokenKind)((rio_TokenKind_Lbracket) + (1)))

#define rio_TokenKind_Comma ((rio_TokenKind)((rio_TokenKind_Rbracket) + (1)))

#define rio_TokenKind_Dot ((rio_TokenKind)((rio_TokenKind_Comma) + (1)))

#define rio_TokenKind_At ((rio_TokenKind)((rio_TokenKind_Dot) + (1)))

#define rio_TokenKind_Pound ((rio_TokenKind)((rio_TokenKind_At) + (1)))

#define rio_TokenKind_Ellipsis ((rio_TokenKind)((rio_TokenKind_Pound) + (1)))

#define rio_TokenKind_Question ((rio_TokenKind)((rio_TokenKind_Ellipsis) + (1)))

#define rio_TokenKind_Semicolon ((rio_TokenKind)((rio_TokenKind_Question) + (1)))

#define rio_TokenKind_Keyword ((rio_TokenKind)((rio_TokenKind_Semicolon) + (1)))

#define rio_TokenKind_Int ((rio_TokenKind)((rio_TokenKind_Keyword) + (1)))

#define rio_TokenKind_Float ((rio_TokenKind)((rio_TokenKind_Int) + (1)))

#define rio_TokenKind_Str ((rio_TokenKind)((rio_TokenKind_Float) + (1)))

#define rio_TokenKind_Name ((rio_TokenKind)((rio_TokenKind_Str) + (1)))

#define rio_TokenKind_Neg ((rio_TokenKind)((rio_TokenKind_Name) + (1)))

#define rio_TokenKind_Not ((rio_TokenKind)((rio_TokenKind_Neg) + (1)))

#define rio_TokenKind_FirstMul ((rio_TokenKind)((rio_TokenKind_Not) + (1)))

#define rio_TokenKind_Mul ((rio_TokenKind)((rio_TokenKind_FirstMul) + (1)))

#define rio_TokenKind_Div ((rio_TokenKind)((rio_TokenKind_Mul) + (1)))

#define rio_TokenKind_Mod ((rio_TokenKind)((rio_TokenKind_Div) + (1)))

#define rio_TokenKind_And ((rio_TokenKind)((rio_TokenKind_Mod) + (1)))

#define rio_TokenKind_Lshift ((rio_TokenKind)((rio_TokenKind_And) + (1)))

#define rio_TokenKind_Rshift ((rio_TokenKind)((rio_TokenKind_Lshift) + (1)))

#define rio_TokenKind_LastMul ((rio_TokenKind)((rio_TokenKind_Rshift) + (1)))

#define rio_TokenKind_FirstAdd ((rio_TokenKind)((rio_TokenKind_LastMul) + (1)))

#define rio_TokenKind_Add ((rio_TokenKind)((rio_TokenKind_FirstAdd) + (1)))

#define rio_TokenKind_Sub ((rio_TokenKind)((rio_TokenKind_Add) + (1)))

#define rio_TokenKind_Xor ((rio_TokenKind)((rio_TokenKind_Sub) + (1)))

#define rio_TokenKind_Or ((rio_TokenKind)((rio_TokenKind_Xor) + (1)))

#define rio_TokenKind_LastAdd ((rio_TokenKind)((rio_TokenKind_Or) + (1)))

#define rio_TokenKind_FirstCmp ((rio_TokenKind)((rio_TokenKind_LastAdd) + (1)))

#define rio_TokenKind_Eq ((rio_TokenKind)((rio_TokenKind_FirstCmp) + (1)))

#define rio_TokenKind_NotEq ((rio_TokenKind)((rio_TokenKind_Eq) + (1)))

#define rio_TokenKind_Lt ((rio_TokenKind)((rio_TokenKind_NotEq) + (1)))

#define rio_TokenKind_Gt ((rio_TokenKind)((rio_TokenKind_Lt) + (1)))

#define rio_TokenKind_LtEq ((rio_TokenKind)((rio_TokenKind_Gt) + (1)))

#define rio_TokenKind_GtEq ((rio_TokenKind)((rio_TokenKind_LtEq) + (1)))

#define rio_TokenKind_LastCmp ((rio_TokenKind)((rio_TokenKind_GtEq) + (1)))

#define rio_TokenKind_AndAnd ((rio_TokenKind)((rio_TokenKind_LastCmp) + (1)))

#define rio_TokenKind_OrOr ((rio_TokenKind)((rio_TokenKind_AndAnd) + (1)))

#define rio_TokenKind_FirstAssign ((rio_TokenKind)((rio_TokenKind_OrOr) + (1)))

#define rio_TokenKind_Assign ((rio_TokenKind)((rio_TokenKind_FirstAssign) + (1)))

#define rio_TokenKind_AddAssign ((rio_TokenKind)((rio_TokenKind_Assign) + (1)))

#define rio_TokenKind_SubAssign ((rio_TokenKind)((rio_TokenKind_AddAssign) + (1)))

#define rio_TokenKind_OrAssign ((rio_TokenKind)((rio_TokenKind_SubAssign) + (1)))

#define rio_TokenKind_AndAssign ((rio_TokenKind)((rio_TokenKind_OrAssign) + (1)))

#define rio_TokenKind_XorAssign ((rio_TokenKind)((rio_TokenKind_AndAssign) + (1)))

#define rio_TokenKind_LshiftAssign ((rio_TokenKind)((rio_TokenKind_XorAssign) + (1)))

#define rio_TokenKind_RshiftAssign ((rio_TokenKind)((rio_TokenKind_LshiftAssign) + (1)))

#define rio_TokenKind_MulAssign ((rio_TokenKind)((rio_TokenKind_RshiftAssign) + (1)))

#define rio_TokenKind_DivAssign ((rio_TokenKind)((rio_TokenKind_MulAssign) + (1)))

#define rio_TokenKind_ModAssign ((rio_TokenKind)((rio_TokenKind_DivAssign) + (1)))

#define rio_TokenKind_LastAssign ((rio_TokenKind)((rio_TokenKind_ModAssign) + (1)))

#define rio_TokenKind_Inc ((rio_TokenKind)((rio_TokenKind_LastAssign) + (1)))

#define rio_TokenKind_Dec ((rio_TokenKind)((rio_TokenKind_Inc) + (1)))

#define rio_TokenKind_Num ((rio_TokenKind)((rio_TokenKind_Dec) + (1)))

#define rio_TokenMod_None ((rio_TokenMod)(0))

#define rio_TokenMod_Hex ((rio_TokenMod)((rio_TokenMod_None) + (1)))

#define rio_TokenMod_Bin ((rio_TokenMod)((rio_TokenMod_Hex) + (1)))

#define rio_TokenMod_Oct ((rio_TokenMod)((rio_TokenMod_Bin) + (1)))

#define rio_TokenMod_Char ((rio_TokenMod)((rio_TokenMod_Oct) + (1)))

#define rio_TokenMod_Multiline ((rio_TokenMod)((rio_TokenMod_Char) + (1)))

#define rio_TokenSuffix_None ((rio_TokenSuffix)(0))

#define rio_TokenSuffix_D ((rio_TokenSuffix)((rio_TokenSuffix_None) + (1)))

#define rio_TokenSuffix_U ((rio_TokenSuffix)((rio_TokenSuffix_D) + (1)))

#define rio_TokenSuffix_L ((rio_TokenSuffix)((rio_TokenSuffix_U) + (1)))

#define rio_TokenSuffix_UL ((rio_TokenSuffix)((rio_TokenSuffix_L) + (1)))

#define rio_TokenSuffix_LL ((rio_TokenSuffix)((rio_TokenSuffix_UL) + (1)))

#define rio_TokenSuffix_ULL ((rio_TokenSuffix)((rio_TokenSuffix_LL) + (1)))

extern char const ((*(rio_token_suffix_names[7])));

extern char const ((*(rio_token_kind_names[63])));

char const ((*rio_token_kind_name(rio_TokenKind kind)));

extern rio_TokenKind (rio_assign_token_to_binary_token[(rio_TokenKind_Num)]);

extern rio_SrcPos rio_pos_builtin;

struct rio_Token {
  rio_TokenKind kind;
  rio_TokenMod mod;
  rio_TokenSuffix suffix;
  rio_SrcPos pos;
  char const ((*start));
  char const ((*end));
  union {
    ullong int_val;
    double float_val;
    char const ((*str_val));
    char const ((*name));
  };
};

extern rio_Token rio_token;

extern char const ((*rio_stream));

extern char const ((*rio_line_start));

void rio_vnotice(char const ((*level)), rio_SrcPos pos, char const ((*fmt)), va_list args);

void rio_warning(rio_SrcPos pos, char const ((*fmt)), ...);

void rio_verror(rio_SrcPos pos, char const ((*fmt)), va_list args);

void rio_error(rio_SrcPos pos, char const ((*fmt)), ...);

void rio_fatal_error(rio_SrcPos pos, char const ((*fmt)), ...);

char const ((*rio_token_info(void)));

extern uint8_t (rio_char_to_digit[256]);

void rio_scan_int(void);

void rio_scan_float(void);

extern char (rio_escape_to_char[256]);

int rio_scan_hex_escape(void);

void rio_scan_char(void);

void rio_scan_str(void);

void rio_next_token(void);

void rio_init_stream(char const ((*name)), char const ((*buf)));

bool rio_is_token(rio_TokenKind kind);

bool rio_is_token_eof(void);

bool rio_is_token_name(char const ((*name)));

bool rio_is_keyword(char const ((*name)));

bool rio_match_keyword(char const ((*name)));

bool rio_expect_close_angle(void);

bool rio_match_token(rio_TokenKind kind);

bool rio_expect_token(rio_TokenKind kind);

extern bool rio_flag_verbose;

extern bool rio_flag_lazy;

extern bool rio_flag_nosourcemap;

extern bool rio_flag_notypeinfo;

extern bool rio_flag_fullgen;

void rio_path_normalize(char (*path));

void rio_path_copy(char (path[MAX_PATH]), char const ((*src)));

void rio_path_join(char (path[MAX_PATH]), char const ((*src)));

char (*rio_path_file(char (path[MAX_PATH])));

char (*rio_path_ext(char (path[MAX_PATH])));

bool rio_dir_excluded(rio_DirListIter (*iter));

bool rio_dir_list_subdir(rio_DirListIter (*iter));

char const ((*(*rio_dir_list_buf(char const ((*filespec))))));

typedef int rio_Flag_Kind;

#define rio_Flag_Bool ((rio_Flag_Kind)(0))

#define rio_Flag_Enum ((rio_Flag_Kind)((rio_Flag_Bool) + (1)))

#define rio_Flag_Str ((rio_Flag_Kind)((rio_Flag_Enum) + (1)))

extern rio_Flag (*rio_flag_defs);

void rio_add_flag_bool(char const ((*name)), bool (*ptr), char const ((*help)));

void rio_add_flag_str(char const ((*name)), char const ((*(*ptr))), char const ((*arg_name)), char const ((*help)));

void rio_add_flag_enum(char const ((*name)), int (*ptr), char const ((*help)), char const ((*(*options))), int num_options);

rio_Flag (*rio_get_flag_def(char const ((*name))));

void rio_print_flags_usage(void);

char const ((*rio_parse_flags(int (*argc_ptr), char const ((*(*(*argv_ptr)))))));

void rio_path_absolute(char (path[MAX_PATH]));

void rio_dir_list_free(rio_DirListIter (*iter));

void rio_dir__update(rio_DirListIter (*iter), bool done, FindData (*fileinfo));

void rio_dir_list_next(rio_DirListIter (*iter));

void rio_dir_list(rio_DirListIter (*iter), char const ((*path)));

rio_Typespec (*rio_parse_type_func_param(void));

rio_Typespec (*rio_parse_type_func(void));

rio_Slice_TypeArg rio_parse_type_args(void);

rio_Typespec (*rio_parse_type_base(void));

rio_Typespec (*rio_parse_type(void));

struct rio_CompoundField {
  rio_CompoundField_Kind kind;
  rio_SrcPos pos;
  rio_Expr (*expr);
  union {
    // void;
    char const ((*name));
    rio_Expr (*index);
  };
};

rio_CompoundField rio_parse_expr_struct_field(bool is_tuple);

char const ((*rio_find_expr_name(rio_SrcPos pos, rio_Expr (*expr))));

rio_Expr (*rio_parse_expr_struct(rio_Typespec (*type)));

rio_Expr (*rio_parse_expr_tuple(rio_Typespec (*type)));

rio_CompoundField rio_parse_expr_list_item(void);

rio_Expr (*rio_parse_expr_list(rio_Typespec (*type)));

rio_Expr (*rio_parse_expr_operand(void));

rio_Expr (*rio_parse_expr_base(void));

bool rio_is_unary_op(void);

rio_Expr (*rio_parse_expr_unary(void));

bool rio_is_mul_op(void);

rio_Expr (*rio_parse_expr_as(void));

rio_Expr (*rio_parse_expr_mul(void));

bool rio_is_add_op(void);

rio_Expr (*rio_parse_expr_add(void));

bool rio_is_cmp_op(void);

rio_Expr (*rio_parse_expr_cmp(void));

rio_Expr (*rio_parse_expr_and(void));

rio_Expr (*rio_parse_expr_or(void));

rio_Expr (*rio_parse_expr_ternary(void));

rio_Expr (*rio_parse_expr(void));

rio_Expr (*rio_parse_paren_expr(void));

rio_StmtList rio_parse_stmt_block(void);

rio_Stmt (*rio_parse_stmt_if(rio_SrcPos pos));

rio_Stmt (*rio_parse_stmt_while(rio_SrcPos pos));

rio_Stmt (*rio_parse_stmt_do_while(rio_SrcPos pos));

bool rio_is_assign_op(void);

rio_Stmt (*rio_parse_let_stmt(rio_SrcPos pos));

rio_Stmt (*rio_parse_simple_stmt(void));

rio_Stmt (*rio_parse_stmt_for_each(rio_SrcPos pos, bool get_ref, rio_Expr (*expr)));

rio_Stmt (*rio_parse_stmt_for(rio_SrcPos pos));

struct rio_SwitchCasePattern {
  bool is_default;
  rio_Expr (*start);
  rio_Expr (*end);
};

rio_SwitchCasePattern rio_parse_switch_case_pattern(void);

struct rio_Slice_SwitchCasePattern {
  rio_SwitchCasePattern (*items);
  size_t length;
};

struct rio_SwitchCase {
  rio_Slice_SwitchCasePattern patterns;
  rio_StmtList block;
};

rio_SwitchCase rio_parse_stmt_switch_case(void);

rio_Stmt (*rio_parse_stmt_switch(rio_SrcPos pos));

rio_Stmt (*rio_parse_stmt(void));

char const ((*rio_parse_name(void)));

struct rio_EnumItem {
  rio_SrcPos pos;
  char const ((*name));
  rio_Expr (*init);
};

rio_EnumItem rio_parse_decl_enum_item(void);

rio_Decl (*rio_parse_decl_enum(rio_SrcPos pos));

rio_Member rio_parse_decl_aggregate_item(void);

extern char const ((*(rio_enum_tag_names[1])));

extern bool rio_enum_tag_name_interned;

rio_Aggregate (*rio_parse_aggregate(rio_AggregateKind kind, char const ((*name)), rio_Slice_Note (*notes)));

extern char const ((*(rio_empty_names[1])));

rio_Member (*rio_parse_switch_union(void));

void rio_build_enum_union_decl(rio_Aggregate (*enum_union), char const ((*decl_name)));

rio_Slice_Decl rio_parse_type_params(void);

rio_Decl (*rio_parse_decl_aggregate(rio_SrcPos pos, rio_Decl_Kind kind, rio_Slice_Note (*notes)));

rio_Decl (*rio_parse_decl_var(rio_SrcPos pos));

rio_Decl (*rio_parse_decl_const(rio_SrcPos pos));

rio_Decl (*rio_parse_decl_typedef(rio_SrcPos pos));

rio_Member rio_parse_decl_func_param(bool optional_types);

rio_Slice_Member rio_parse_decl_func_params(bool (*has_varargs), bool optional_types);

rio_Decl (*rio_parse_decl_func(rio_SrcPos pos));

struct rio_NoteArg {
  rio_SrcPos pos;
  char const ((*name));
  rio_Expr (*expr);
};

rio_NoteArg rio_parse_note_arg(void);

rio_Note rio_parse_note(void);

rio_Slice_Note rio_parse_notes(void);

rio_Decl (*rio_parse_decl_note(rio_SrcPos pos));

rio_Decl (*rio_parse_decl_import(rio_SrcPos pos));

rio_Decl (*rio_parse_decl_opt(rio_Slice_Note (*notes)));

rio_Decl (*rio_parse_decl(void));

rio_Slice_ref_Decl (*rio_parse_decls(void));

typedef int rio_SymState;

#define rio_SymState_Unresolved ((rio_SymState)(0))

#define rio_SymState_Resolving ((rio_SymState)((rio_SymState_Unresolved) + (1)))

#define rio_SymState_Resolved ((rio_SymState)((rio_SymState_Resolving) + (1)))

typedef int rio_Sym_Kind;

#define rio_Sym_None ((rio_Sym_Kind)(0))

#define rio_Sym_Const ((rio_Sym_Kind)((rio_Sym_None) + (1)))

#define rio_Sym_Func ((rio_Sym_Kind)((rio_Sym_Const) + (1)))

#define rio_Sym_Type ((rio_Sym_Kind)((rio_Sym_Func) + (1)))

#define rio_Sym_Var ((rio_Sym_Kind)((rio_Sym_Type) + (1)))

#define rio_Sym_Package ((rio_Sym_Kind)((rio_Sym_Var) + (1)))

#define rio_MAX_LOCAL_SYMS (1024)

extern rio_Package (*rio_current_package);

extern rio_Package (*rio_builtin_package);

extern rio_Map rio_package_map;

extern rio_Package (*(*rio_package_list));

typedef uint8_t rio_ReachablePhase;

#define rio_ReachablePhase_None ((rio_ReachablePhase)(0))

#define rio_ReachablePhase_Natural ((rio_ReachablePhase)((rio_ReachablePhase_None) + (1)))

#define rio_ReachablePhase_Forced ((rio_ReachablePhase)((rio_ReachablePhase_Natural) + (1)))

extern rio_ReachablePhase rio_reachable_phase;

rio_Sym (*rio_get_package_sym(rio_Package (*package), char const ((*name))));

void rio_add_package(rio_Package (*package));

rio_Package (*rio_enter_package(rio_Package (*new_package)));

void rio_leave_package(rio_Package (*old_package));

extern rio_Sym (*(*rio_reachable_syms));

extern rio_Sym (*(*rio_sorted_syms));

union rio_Val {
  bool b;
  char c;
  uchar uc;
  schar sc;
  short s;
  ushort us;
  int i;
  uint u;
  long l;
  ulong ul;
  llong ll;
  ullong ull;
  uintptr_t p;
};

struct rio_Sym {
  rio_Sym_Kind kind;
  char const ((*name));
  rio_Package (*home_package);
  rio_SymState state;
  rio_ReachablePhase reachable;
  rio_Decl (*decl);
  char const ((*external_name));
  union {
    // void;
    struct {
      rio_Type (*type);
      rio_Val val;
    };
    rio_Package (*package);
  };
};

extern rio_Sym (rio_local_syms[rio_MAX_LOCAL_SYMS]);

extern rio_Sym (*rio_local_syms_end);

bool rio_is_local_sym(rio_Sym (*sym));

rio_Sym (*rio_sym_new(rio_Sym_Kind kind, char const ((*name)), rio_Decl (*decl)));

void rio_process_decl_notes(rio_Decl (*decl), rio_Sym (*sym));

rio_Sym (*rio_sym_decl(rio_Decl (*decl)));

rio_Sym (*rio_sym_get_local(char const ((*name))));

rio_Sym (*rio_sym_get(char const ((*name))));

bool rio_sym_push_var(char const ((*name)), rio_Type (*type));

bool rio_sym_push_local(rio_Sym_Kind kind, char const ((*name)), rio_Type (*type), rio_Decl (*decl));

rio_Sym (*rio_sym_enter(void));

void rio_sym_leave(rio_Sym (*sym));

void rio_sym_global_put(char const ((*name)), rio_Sym (*sym));

rio_Sym (*rio_sym_global_type(char const ((*name)), rio_Type (*type)));

void rio_sym_track_ref_type(rio_Sym (*sym), rio_Typespec (*type));

char const ((*rio_build_scoped_name(char const ((*space)), char const ((*name)))));

rio_Sym (*rio_sym_global_decl(rio_Decl (*decl), char const ((*scope))));

void rio_put_type_name(char (*(*buf)), rio_Type (*type));

char (*rio_get_type_name(rio_Type (*type)));

struct rio_Operand {
  rio_Type (*type);
  rio_Type (*type_orig);
  bool is_lvalue;
  bool is_const;
  bool is_type;
  rio_Val val;
};

extern rio_Operand rio_operand_null;

rio_Operand rio_operand_rvalue(rio_Type (*type));

rio_Operand rio_operand_lvalue(rio_Type (*type));

rio_Operand rio_operand_const(rio_Type (*type), rio_Val val);

rio_Type (*rio_type_decay(rio_Type (*type)));

rio_Operand rio_operand_decay(rio_Operand operand);

rio_Operand rio_operand_type(rio_Type (*type));

bool rio_is_convertible(rio_Operand (*operand), rio_Type (*dest));

bool rio_is_castable(rio_Operand (*operand), rio_Type (*dest));

bool rio_convert_operand(rio_Operand (*operand), rio_Type (*type));

bool rio_is_null_ptr(rio_Operand operand);

void rio_promote_operand(rio_Operand (*operand));

void rio_unify_arithmetic_operands(rio_Operand (*left), rio_Operand (*right));

extern rio_Map rio_resolved_val_map;

rio_Val rio_get_resolved_val(void (*ptr));

void rio_set_resolved_val(void (*ptr), rio_Val val);

extern rio_Map rio_resolved_type_map;

rio_Type (*rio_get_resolved_type(void (*ptr)));

void rio_set_resolved_type(void (*ptr), rio_Type (*type));

extern rio_Map rio_resolved_type_orig_map;

rio_Type (*rio_get_resolved_type_orig(void (*ptr)));

void rio_set_resolved_type_orig(void (*ptr), rio_Type (*type));

extern rio_Map rio_resolved_sym_map;

rio_Sym (*rio_get_resolved_sym(void const ((*ptr))));

void rio_set_resolved_sym(void const ((*ptr)), rio_Sym (*sym));

extern rio_Map rio_resolved_expected_type_map;

rio_Type (*rio_get_resolved_expected_type(rio_Expr (*expr)));

void rio_set_resolved_expected_type(rio_Expr (*expr), rio_Type (*type));

rio_Operand rio_resolve_expr(rio_Expr (*expr));

rio_Operand rio_resolve_expr_rvalue(rio_Expr (*expr));

rio_Operand rio_resolve_expected_expr_rvalue(rio_Expr (*expr), rio_Type (*expected_type));

rio_Sym (*rio_get_nested_type_sym(rio_Sym (*scope_sym), size_t num_names, rio_TypespecName (*names)));

rio_Sym (*rio_resolve_specialized_decl(rio_SrcPos pos, rio_Sym (*sym), rio_Slice_TypeArg type_args, bool shallow));

rio_Type (*rio_resolve_typespec(rio_Typespec (*typespec)));

void rio_push_type_params(rio_Decl (*decl));

rio_Type (*rio_complete_aggregate(rio_Type (*type), rio_Aggregate (*aggregate)));

void rio_complete_type(rio_Type (*type));

rio_Type (*rio_resolve_typed_init(rio_SrcPos pos, rio_Type (*type), rio_Expr (*expr)));

rio_Type (*rio_resolve_init(rio_SrcPos pos, rio_Typespec (*typespec), rio_Expr (*expr), bool is_mut));

rio_Type (*rio_resolve_decl_var(rio_Decl (*decl)));

rio_Type (*rio_resolve_decl_const(rio_Decl (*decl), rio_Val (*val)));

rio_Type (*rio_resolve_decl_func(rio_Decl (*decl)));

#define rio_MAX_LABELS (256)

struct rio_Label {
  char const ((*name));
  rio_SrcPos pos;
  bool referenced;
  bool defined;
};

extern rio_Label (rio_labels[rio_MAX_LABELS]);

extern rio_Label (*rio_labels_end);

rio_Label (*rio_get_label(rio_SrcPos pos, char const ((*name))));

void rio_reference_label(rio_SrcPos pos, char const ((*name)));

void rio_define_label(rio_SrcPos pos, char const ((*name)));

void rio_resolve_labels(void);

bool rio_is_cond_operand(rio_Operand operand);

void rio_resolve_cond_expr(rio_Expr (*expr));

struct rio_StmtCtx {
  bool is_break_legal;
  bool is_continue_legal;
};

bool rio_resolve_stmt_block(rio_StmtList block, rio_Type (*ret_type), rio_StmtCtx ctx);

void rio_resolve_stmt_assign(rio_Stmt (*stmt));

void rio_resolve_stmt_init(rio_Stmt (*stmt));

void rio_resolve_static_assert(rio_Note note);

bool rio_resolve_stmt(rio_Stmt (*stmt), rio_Type (*ret_type), rio_StmtCtx ctx);

void rio_resolve_for_each(rio_Stmt (*stmt), rio_Type (*ret_type), rio_StmtCtx ctx);

rio_Type (*rio_resolve_item_type(rio_SrcPos pos, rio_Operand operand));

rio_Type (*rio_resolve_length_type(rio_SrcPos pos, rio_Operand operand));

rio_Type (*rio_resolve_for_each_type(rio_SrcPos pos, rio_Type (*type), bool had_ref));

void rio_resolve_func_body(rio_Sym (*sym));

void rio_resolve_sym(rio_Sym (*sym));

void rio_finalize_sym(rio_Sym (*sym));

rio_Sym (*rio_resolve_name(char const ((*name))));

rio_Package (*rio_try_resolve_package(rio_Expr (*expr)));

rio_DeclEnum (*rio_get_type_enum_decl(rio_Type (*type)));

rio_Operand rio_resolve_enum_item_or_const_expr(rio_DeclEnum (*enum_decl), rio_Expr (*expr));

rio_Operand rio_resolve_enum_item(rio_DeclEnum (*enum_decl), rio_Expr (*expr), char const ((*name)));

rio_Operand rio_resolve_expr_field(rio_Expr (*expr));

rio_Operand rio_resolve_expr_aggregate_field(rio_SrcPos pos, rio_Operand operand, char const ((*name)));

llong rio_eval_unary_op_ll(rio_TokenKind op, llong val);

ullong rio_eval_unary_op_ull(rio_TokenKind op, ullong val);

llong rio_eval_binary_op_ll(rio_TokenKind op, llong left, llong right);

ullong rio_eval_binary_op_ull(rio_TokenKind op, ullong left, ullong right);

rio_Val rio_eval_unary_op(rio_TokenKind op, rio_Type (*type), rio_Val val);

rio_Val rio_eval_binary_op(rio_TokenKind op, rio_Type (*type), rio_Val left, rio_Val right);

rio_Operand rio_resolve_name_operand(rio_SrcPos pos, char const ((*name)));

rio_Operand rio_resolve_expr_name(rio_Expr (*expr));

rio_Operand rio_resolve_unary_op(rio_TokenKind op, rio_Operand operand);

rio_Operand rio_resolve_expr_unary(rio_Expr (*expr));

rio_Operand rio_resolve_binary_op(rio_TokenKind op, rio_Operand left, rio_Operand right);

rio_Operand rio_resolve_binary_arithmetic_op(rio_TokenKind op, rio_Operand left, rio_Operand right);

rio_Operand rio_resolve_expr_binary_op(rio_TokenKind op, char const ((*op_name)), rio_SrcPos pos, rio_Operand left, rio_Operand right);

rio_Operand rio_resolve_expr_binary(rio_Expr (*expr));

void rio_resolve_struct_fields(rio_Slice_CompoundField fields, rio_Type (*type));

rio_Operand rio_resolve_expr_compound(rio_Expr (*expr), rio_Type (*expected_type));

rio_Operand rio_resolve_expr_call(rio_Expr (*expr));

rio_Operand rio_resolve_expr_ternary(rio_Expr (*expr), rio_Type (*expected_type));

rio_Operand rio_resolve_expr_index(rio_Expr (*expr));

rio_Operand rio_resolve_expr_cast(rio_Expr (*expr));

rio_Operand rio_resolve_expr_int(rio_Expr (*expr));

rio_Operand rio_resolve_expr_modify(rio_Expr (*expr));

rio_Operand rio_resolve_expected_expr(rio_Expr (*expr), rio_Type (*expected_type));

rio_Operand rio_resolve_const_expr(rio_Expr (*expr));

extern rio_Map rio_decl_note_names;

void rio_init_builtin_syms(void);

void rio_add_package_decls(rio_Package (*package));

bool rio_is_package_dir(char const ((*search_path)), char const ((*package_path)));

bool rio_copy_package_full_path(char (dest[MAX_PATH]), char const ((*package_path)));

rio_Package (*rio_import_package(char const ((*package_path))));

void rio_import_all_package_symbols(rio_Package (*package));

void rio_import_package_symbols(rio_Decl (*decl), rio_Package (*package));

void rio_process_package_imports(rio_Package (*package));

bool rio_parse_package(rio_Package (*package));

bool rio_compile_package(rio_Package (*package));

void rio_resolve_package_syms(rio_Package (*package));

void rio_finalize_reachable_syms(void);

#define rio_MAX_SEARCH_PATHS ((int)(256))

extern char const ((*(rio_static_package_search_paths[rio_MAX_SEARCH_PATHS])));

extern char const ((*(*rio_package_search_paths)));

extern int rio_num_package_search_paths;

void rio_add_package_search_path(char const ((*path)));

void rio_add_package_search_path_range(char const ((*start)), char const ((*end)));

void rio_init_package_search_paths(void);

void rio_init_compiler(void);

void rio_parse_env_vars(void);

int rio_rio_main(int argc, char const ((*(*argv))), void (*gen_all)(void), char const ((*extension)));

typedef int rio_Os;

#define rio_Os_Win32 ((rio_Os)(0))

#define rio_Os_Linux ((rio_Os)((rio_Os_Win32) + (1)))

#define rio_Os_OsX ((rio_Os)((rio_Os_Linux) + (1)))

#define rio_Os_Num ((rio_Os)((rio_Os_OsX) + (1)))

extern char const ((*(rio_os_names[(rio_Os_Num)])));

typedef int rio_Arch;

#define rio_Arch_X64 ((rio_Arch)(0))

#define rio_Arch_X86 ((rio_Arch)((rio_Arch_X64) + (1)))

#define rio_Arch_Num ((rio_Arch)((rio_Arch_X86) + (1)))

extern char const ((*(rio_arch_names[(rio_Arch_Num)])));

extern rio_Os rio_target_os;

extern rio_Arch rio_target_arch;

rio_Os rio_get_os(char const ((*name)));

rio_Arch rio_get_arch(char const ((*name)));

struct rio_TypeMetrics {
  size_t size;
  size_t align;
  bool sign;
  ullong max;
};

void rio_init_default_type_metrics(rio_TypeMetrics (metrics[(rio_CompilerTypeKind_Num)]));

extern rio_TypeMetrics (rio_win32_x86_metrics[(rio_CompilerTypeKind_Num)]);

extern rio_TypeMetrics (rio_win32_x64_metrics[(rio_CompilerTypeKind_Num)]);

extern rio_TypeMetrics (rio_ilp32_metrics[(rio_CompilerTypeKind_Num)]);

extern rio_TypeMetrics (rio_lp64_metrics[(rio_CompilerTypeKind_Num)]);

void rio_init_target(void);

bool rio_is_excluded_target_filename(char const ((*name)));

extern rio_TypeMetrics (*rio_type_metrics);

struct rio_Slice_TypeField {
  rio_TypeField (*items);
  size_t length;
};

struct rio_TypeAggregate {
  rio_Slice_TypeField fields;
};

struct rio_Slice_ref_Type {
  rio_Type (*(*items));
  size_t length;
};

struct rio_TypeFunc {
  rio_Slice_ref_Type params;
  bool has_varargs;
  rio_Type (*ret);
};

struct rio_Type {
  rio_CompilerTypeKind kind;
  size_t size;
  size_t align;
  rio_Sym (*sym);
  rio_Type (*base);
  int typeid;
  bool nonmodifiable;
  union {
    size_t num_elems;
    rio_TypeAggregate aggregate;
    rio_TypeFunc function;
  };
};

extern rio_Type (*rio_type_void);

extern rio_Type (*rio_type_bool);

extern rio_Type (*rio_type_char);

extern rio_Type (*rio_type_uchar);

extern rio_Type (*rio_type_schar);

extern rio_Type (*rio_type_short);

extern rio_Type (*rio_type_ushort);

extern rio_Type (*rio_type_int);

extern rio_Type (*rio_type_uint);

extern rio_Type (*rio_type_long);

extern rio_Type (*rio_type_ulong);

extern rio_Type (*rio_type_llong);

extern rio_Type (*rio_type_ullong);

extern rio_Type (*rio_type_float);

extern rio_Type (*rio_type_double);

extern int rio_next_typeid;

extern rio_Type (*rio_type_uintptr);

extern rio_Type (*rio_type_usize);

extern rio_Type (*rio_type_ssize);

extern rio_Map rio_typeid_map;

rio_Type (*rio_get_type_from_typeid(int typeid));

void rio_register_typeid(rio_Type (*type));

rio_Type (*rio_type_alloc(TypeKind kind));

bool rio_is_generic_type(rio_Type (*type));

bool rio_is_ptr_type(rio_Type (*type));

bool rio_is_ptr_star_type(rio_Type (*type));

bool rio_is_ref_type(rio_Type (*type));

bool rio_is_func_type(rio_Type (*type));

bool rio_is_ptr_like_type(rio_Type (*type));

bool rio_is_const_type(rio_Type (*type));

bool rio_is_array_type(rio_Type (*type));

bool rio_is_incomplete_array_type(rio_Type (*type));

bool rio_is_integer_type(rio_Type (*type));

bool rio_is_floating_type(rio_Type (*type));

bool rio_is_arithmetic_type(rio_Type (*type));

bool rio_is_scalar_type(rio_Type (*type));

bool rio_is_aggregate_type(rio_Type (*type));

bool rio_is_signed_type(rio_Type (*type));

extern char const ((*(rio_type_names[(rio_CompilerTypeKind_Num)])));

extern int (rio_type_ranks[(rio_CompilerTypeKind_Num)]);

int rio_type_rank(rio_Type (*type));

rio_Type (*rio_unsigned_type(rio_Type (*type)));

size_t rio_type_sizeof(rio_Type (*type));

size_t rio_type_alignof(rio_Type (*type));

extern rio_Map rio_cached_ptr_types;

extern rio_Map rio_cached_ref_types;

rio_Type (*rio_type_ptr_any(rio_CompilerTypeKind kind, rio_Type (*base)));

rio_Type (*rio_type_ptr(rio_Type (*base)));

rio_Type (*rio_type_ref(rio_Type (*base)));

extern rio_Map rio_cached_const_types;

rio_Type (*rio_type_const(rio_Type (*base)));

rio_Type (*rio_deref_type(rio_Type (*type)));

rio_Type (*rio_unqualify_type(rio_Type (*type)));

extern rio_Map rio_cached_array_types;

rio_Type (*rio_type_array(rio_Type (*base), size_t num_elems));

extern rio_Map rio_cached_func_types;

rio_Type (*rio_type_func(rio_Type (*(*params)), size_t num_params, rio_Type (*ret), bool has_varargs));

bool rio_has_duplicate_fields(rio_Type (*type));

void rio_add_type_fields(rio_TypeField (*(*fields)), rio_Type (*type), size_t offset);

void rio_type_complete_struct(rio_Type (*type), rio_TypeField (*fields), size_t num_fields);

void rio_type_complete_union(rio_Type (*type), rio_TypeField (*fields), size_t num_fields);

rio_Type (*rio_type_incomplete(rio_Sym (*sym)));

rio_Type (*rio_type_enum(rio_Sym (*sym), rio_Type (*base)));

void rio_init_builtin_type(rio_Type (*type));

void rio_init_builtin_types(void);

int rio_aggregate_item_field_index(rio_Type (*type), char const ((*name)));

rio_Type (*rio_aggregate_item_field_type_from_index(rio_Type (*type), int index));

rio_Type (*rio_aggregate_item_field_type_from_name(rio_Type (*type), char const ((*name))));




struct TypeFieldInfo {
  char const ((*name));
  typeid type;
  int offset;
};

struct rio_TypespecFunc {
  rio_Slice_ref_Typespec args;
  bool has_varargs;
  rio_Typespec (*ret);
};

struct rio_Typespec {
  rio_Typespec_Kind kind;
  rio_SrcPos pos;
  rio_Typespec (*base);
  bool is_owned;
  bool is_mut;
  union {
    // void;
    struct {
      rio_Slice_TypespecName names;
      rio_Decl (*decl);
    };
    rio_TypespecFunc function;
    rio_Expr (*num_elems);
  };
};

struct rio_TypespecName {
  char const ((*name));
  rio_Slice_TypeArg type_args;
};

struct rio_TypeArg {
  rio_SrcPos pos;
  rio_Typespec (*val);
};

struct rio_ImportItem {
  char const ((*name));
  char const ((*rename));
};

struct rio_Aggregate {
  rio_SrcPos pos;
  rio_AggregateKind kind;
  rio_Slice_Member members;
  rio_Decl (*union_enum_decl);
};

struct rio_SymRef {
  rio_SymRef_Kind kind;
  union {
    rio_Expr (*expr);
    rio_Typespec (*type);
  };
};

struct rio_Slice_SymRef {
  rio_SymRef (*items);
  size_t length;
};

struct rio_DeclEnum {
  rio_Typespec (*type);
  rio_Slice_EnumItem items;
  char const ((*scope));
  rio_Decl (*kind_aggregate_decl);
};

struct rio_DeclTypedef {
  rio_Typespec (*constraint);
  rio_Typespec (*val);
};

struct rio_DeclVar {
  rio_Typespec (*type);
  rio_Expr (*expr);
};

struct rio_DeclImport {
  bool is_relative;
  rio_Slice_ptr_const_char names;
  bool import_all;
  rio_Slice_ImportItem items;
};

struct rio_Decl {
  rio_Decl_Kind kind;
  rio_SrcPos pos;
  char const ((*name));
  rio_Slice_Note notes;
  bool is_generic;
  bool is_incomplete;
  rio_Slice_Decl type_params;
  rio_Slice_SymRef refs;
  rio_Decl (*generic_base);
  rio_Slice_TypeArg type_args;
  bool shallow;
  union {
    // void;
    rio_Note note;
    rio_DeclEnum enum_decl;
    rio_Aggregate (*aggregate);
    rio_DeclFunc function;
    rio_DeclTypedef typedef_decl;
    rio_DeclVar var_decl;
    rio_DeclVar const_decl;
    rio_DeclImport import_decl;
  };
};

struct rio_ExprIntLit {
  ullong val;
  rio_TokenMod mod;
  rio_TokenSuffix suffix;
};

struct rio_ExprFloatLit {
  char const ((*start));
  char const ((*end));
  double val;
  rio_TokenSuffix suffix;
};

struct rio_ExprStrLit {
  char const ((*val));
  rio_TokenMod mod;
};

struct rio_ExprOffsetofField {
  rio_Typespec (*type);
  char const ((*name));
};

struct rio_ExprCompound {
  rio_ExprCompound_Kind kind;
  rio_Typespec (*type);
  rio_Slice_CompoundField fields;
  union {
    rio_Expr (*length);
    // void;
  };
};

struct rio_ExprCast {
  rio_Typespec (*type);
  rio_Expr (*expr);
};

struct rio_ExprModify {
  rio_TokenKind op;
  bool post;
  rio_Expr (*expr);
};

struct rio_ExprUnary {
  rio_TokenKind op;
  rio_Expr (*expr);
};

struct rio_ExprBinary {
  rio_TokenKind op;
  rio_Expr (*left);
  rio_Expr (*right);
};

struct rio_ExprTernary {
  rio_Expr (*cond);
  rio_Expr (*then_expr);
  rio_Expr (*else_expr);
};

struct rio_ExprCall {
  rio_Expr (*expr);
  bool prefixed;
  rio_Slice_CompoundField args;
};

struct rio_ExprIndex {
  rio_Expr (*expr);
  rio_Expr (*index);
};

struct rio_ExprField {
  rio_Expr (*expr);
  char const ((*name));
  rio_Slice_TypeArg type_args;
};

struct rio_Expr {
  rio_Expr_Kind kind;
  rio_SrcPos pos;
  union {
    // void;
    rio_ExprIntLit int_lit;
    rio_ExprFloatLit float_lit;
    rio_ExprStrLit str_lit;
    struct {
      char const ((*name));
      rio_Slice_TypeArg type_args;
      rio_Decl (*decl);
    };
    rio_Expr (*arg);
    rio_Typespec (*type_arg);
    rio_ExprOffsetofField offsetof_field;
    rio_ExprCompound compound;
    rio_ExprCast cast;
    rio_ExprModify modify;
    rio_ExprUnary unary;
    rio_ExprBinary binary;
    rio_ExprTernary ternary;
    rio_ExprCall call;
    rio_ExprIndex index;
    rio_ExprField field;
  };
};

struct rio_ElseIf {
  rio_Expr (*cond);
  rio_StmtList block;
};

struct rio_StmtWhile {
  rio_Expr (*cond);
  rio_StmtList block;
};

struct rio_StmtAssign {
  rio_TokenKind op;
  rio_Expr (*left);
  rio_Expr (*right);
};

struct rio_StmtFor {
  rio_Stmt (*init);
  rio_Expr (*cond);
  rio_Stmt (*next);
  rio_StmtList block;
};

struct rio_StmtForEach {
  rio_Expr (*expr);
  bool get_ref;
  rio_DeclFunc func;
  rio_Type (*length_type);
};

struct rio_StmtIf {
  rio_Stmt (*init);
  rio_Expr (*cond);
  rio_StmtList then_block;
  rio_Slice_ElseIf elseifs;
  rio_StmtList else_block;
};

struct rio_StmtInit {
  char const ((*name));
  bool is_mut;
  rio_Typespec (*type);
  rio_Expr (*expr);
};

struct rio_StmtSwitch {
  rio_Expr (*expr);
  rio_Slice_SwitchCase cases;
};

struct rio_Stmt {
  rio_Stmt_Kind kind;
  rio_Slice_Note notes;
  rio_SrcPos pos;
  union {
    // void;
    rio_StmtWhile while_stmt;
    rio_Expr (*expr);
    char const ((*label));
    rio_StmtAssign assign;
    rio_StmtList block;
    rio_StmtFor for_stmt;
    rio_StmtForEach for_each;
    rio_StmtIf if_stmt;
    rio_StmtInit init;
    rio_Note note;
    rio_StmtSwitch switch_stmt;
    rio_Stmt_Kind tag;
  };
};

rio_Slice_Decl rio_ast_dup_slice_Decl(rio_Slice_Decl const (src));

rio_Slice_NoteArg rio_ast_dup_slice_NoteArg(rio_Slice_NoteArg const (src));

rio_Slice_Note rio_ast_dup_slice_Note(rio_Slice_Note const (src));

rio_Slice_ref_Stmt rio_ast_dup_slice_ref_Stmt(rio_Slice_ref_Stmt const (src));

rio_Slice_TypespecName rio_ast_dup_slice_TypespecName(rio_Slice_TypespecName const (src));

rio_Slice_ref_Typespec rio_ast_dup_slice_ref_Typespec(rio_Slice_ref_Typespec const (src));

rio_Slice_ref_Decl rio_ast_dup_slice_ref_Decl(rio_Slice_ref_Decl const (src));

rio_Slice_EnumItem rio_ast_dup_slice_EnumItem(rio_Slice_EnumItem const (src));

rio_Slice_Member rio_ast_dup_slice_Member(rio_Slice_Member const (src));

rio_Slice_ptr_const_char rio_ast_dup_slice_ptr_const_char(rio_Slice_ptr_const_char const (src));

rio_Slice_ImportItem rio_ast_dup_slice_ImportItem(rio_Slice_ImportItem const (src));

rio_Slice_CompoundField rio_ast_dup_slice_CompoundField(rio_Slice_CompoundField const (src));

rio_Slice_ElseIf rio_ast_dup_slice_ElseIf(rio_Slice_ElseIf const (src));

rio_Slice_SwitchCase rio_ast_dup_slice_SwitchCase(rio_Slice_SwitchCase const (src));

struct rio_BufHdr {
  size_t len;
  size_t cap;
  char (buf[1]);
};

struct rio_Intern {
  size_t len;
  rio_Intern (*next);
  char (str[1]);
};

struct rio_MapClosure {
  void (*self);
  rio_MapClosureCall call;
};

struct rio_TypeMap {
  rio_Slice_TypeArg type_args;
  rio_Slice_Decl type_params;
};

rio_Aggregate (*rio_ast_dup_Aggregate(rio_Aggregate const ((*src))));

rio_Expr (*rio_ast_dup_Expr(rio_Expr const ((*src))));

rio_Stmt (*rio_ast_dup_Stmt(rio_Stmt const ((*src))));

rio_Slice_SwitchCasePattern rio_ast_dup_slice_SwitchCasePattern(rio_Slice_SwitchCasePattern const (src));

rio_Slice_TypeArg rio_ast_dup_slice_TypeArg(rio_Slice_TypeArg const (src));

rio_Typespec (*rio_ast_dup_Typespec(rio_Typespec const ((*src))));

struct rio_Package {
  char const ((*path));
  char (full_path[MAX_PATH]);
  rio_Slice_ref_Decl decls;
  rio_Map syms_map;
  rio_Sym (*(*syms));
  char const ((*external_name));
  bool always_reachable;
};

void rio_buf_push2_ptr_const_char(char const ((*(*(*buf)))), char const ((*(*item))));

struct rio_TypeField {
  char const ((*name));
  rio_Type (*type);
  size_t offset;
};

struct rio_DirListIter {
  bool valid;
  bool error;
  char (base[MAX_PATH]);
  char (name[MAX_PATH]);
  size_t size;
  bool is_dir;
  void (*handle);
};

struct rio_Flag {
  rio_Flag_Kind kind;
  char const ((*name));
  char const ((*help));
  rio_Slice_ptr_const_char options;
  char const ((*arg_name));
  union {
    bool (*b);
    int (*i);
    char const ((*(*s)));
  };
};

void rio_ast_unshift_CompoundField(rio_Slice_CompoundField (*nodes), rio_CompoundField node);

struct rio_CachedArrayType {
  rio_Type (*type);
  rio_CachedArrayType (*next);
};

struct rio_CachedFuncType {
  rio_Type (*type);
  rio_CachedFuncType (*next);
};

// Typeinfo
#define TYPEID0(index, kind) ((ullong)(index) | ((ullong)(kind) << 24))
#define TYPEID(index, kind, ...) ((ullong)(index) | ((ullong)sizeof(__VA_ARGS__) << 32) | ((ullong)(kind) << 24))

int num_typeinfos;
const TypeInfo **typeinfos;

// Definitions
int main(int argc, char const ((*(*argv)))) {
  return rio_rio_main(argc, argv, rio_gen_all, "c");
}

char const ((*RIOOS)) = "win32";
char const ((*RIOARCH)) = "x64";
TypeKind typeid_kind(typeid type) {
  return (((type) >> (24))) & (0xff);
}

int typeid_index(typeid type) {
  return (type) & (0xffffff);
}

size_t typeid_size(typeid type) {
  return (type) >> (32);
}

TypeInfo const ((*get_typeinfo(typeid type))) {
  int index = typeid_index(type);
  if ((typeinfos) && ((index) < (num_typeinfos))) {
    return typeinfos[index];
  } else {
    return NULL;
  }
}

rio_Arena rio_ast_arena;
void (*rio_ast_alloc(size_t size)) {
  assert((size) != (0));
  void (*ptr) = rio_arena_alloc(&(rio_ast_arena), size);
  memset(ptr, 0, size);
  return ptr;
}

void (*rio_ast_dup_sized(void const ((*src)), size_t size)) {
  if ((size) == (0)) {
    return NULL;
  }
  void (*ptr) = rio_arena_alloc(&(rio_ast_arena), size);
  memcpy(ptr, src, size);
  return ptr;
}

void rio_ast_dup_type_params(rio_Decl (*d), rio_Slice_Decl params) {
  if (params.length) {
    d->type_params = rio_ast_dup_slice_Decl(params);
    rio_buf_free((void (**))(&(params.items)));
  }
}

rio_Note rio_new_note(rio_SrcPos pos, char const ((*name)), rio_Slice_NoteArg args) {
  return (rio_Note){.args = rio_ast_dup_slice_NoteArg(args), .name = name, .pos = pos};
}

rio_Slice_Note rio_new_notes(rio_Slice_Note notes) {
  return rio_ast_dup_slice_Note(notes);
}

rio_StmtList rio_new_stmt_list(rio_SrcPos pos, rio_Slice_ref_Stmt stmts) {
  return (rio_StmtList){pos, rio_ast_dup_slice_ref_Stmt(stmts)};
}

rio_Typespec (*rio_new_typespec(rio_Typespec_Kind kind, rio_SrcPos pos)) {
  rio_Typespec (*t) = rio_ast_alloc(sizeof(rio_Typespec));
  t->kind = kind;
  t->pos = pos;
  return t;
}

rio_Typespec (*rio_new_typespec_name1(rio_SrcPos pos, char const ((*name)))) {
  return rio_new_typespec_name(pos, (rio_Slice_TypespecName){&((rio_TypespecName){.name = name}), 1});
}

rio_Typespec (*rio_new_typespec_name(rio_SrcPos pos, rio_Slice_TypespecName names)) {
  rio_Typespec (*t) = rio_new_typespec((rio_Typespec_Name), pos);
  t->names = rio_ast_dup_slice_TypespecName(names);
  return t;
}

rio_Typespec (*rio_new_typespec_ptr(rio_SrcPos pos, rio_Typespec (*base), bool is_owned)) {
  rio_Typespec (*t) = rio_new_typespec((rio_Typespec_Ptr), pos);
  t->base = base;
  t->is_owned = is_owned;
  return t;
}

rio_Typespec (*rio_new_typespec_ref(rio_SrcPos pos, rio_Typespec (*base), bool is_owned)) {
  rio_Typespec (*t) = rio_new_typespec((rio_Typespec_Ref), pos);
  t->base = base;
  t->is_owned = is_owned;
  return t;
}

rio_Typespec (*rio_new_typespec_const(rio_SrcPos pos, rio_Typespec (*base))) {
  rio_Typespec (*t) = rio_new_typespec((rio_Typespec_Const), pos);
  t->base = base;
  return t;
}

rio_Typespec (*rio_new_typespec_array(rio_SrcPos pos, rio_Typespec (*elem), rio_Expr (*size))) {
  rio_Typespec (*t) = rio_new_typespec((rio_Typespec_Array), pos);
  t->base = elem;
  t->num_elems = size;
  return t;
}

rio_Typespec (*rio_new_typespec_func(rio_SrcPos pos, rio_Slice_ref_Typespec args, rio_Typespec (*ret), bool has_varargs)) {
  rio_Typespec (*t) = rio_new_typespec((rio_Typespec_Func), pos);
  t->function.args = rio_ast_dup_slice_ref_Typespec(args);
  t->function.ret = ret;
  t->function.has_varargs = has_varargs;
  return t;
}

rio_Slice_ref_Decl (*rio_new_decls(rio_Slice_ref_Decl decls)) {
  rio_Slice_ref_Decl (*d) = rio_ast_alloc(sizeof(rio_Slice_ref_Decl));
  *(d) = rio_ast_dup_slice_ref_Decl(decls);
  return d;
}

rio_Decl (*rio_new_decl(rio_Decl_Kind kind, rio_SrcPos pos, char const ((*name)))) {
  rio_Decl (*d) = rio_ast_alloc(sizeof(rio_Decl));
  d->kind = kind;
  d->pos = pos;
  d->name = name;
  return d;
}

rio_Note (*rio_get_decl_note(rio_Decl (*decl), char const ((*name)))) {
  return rio_get_note(&(decl->notes), name);
}

rio_Note (*rio_get_note(rio_Slice_Note (*notes), char const ((*name)))) {
  {
    rio_Slice_Note (*items__) = notes;
    for (size_t i__ = 0; i__ < items__->length; ++i__) {
      rio_Note (*note) = &items__->items[i__];
      if ((note->name) == (name)) {
        return note;
      }
    }
  }
  return NULL;
}

rio_Aggregate (*rio_get_subunion(rio_Slice_Member items)) {
  rio_Aggregate (*result) = {0};
  {
    rio_Slice_Member items__ = items;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Member (*item) = &items__.items[i__];
      if ((item->kind) == ((rio_Member_Subaggregate))) {
        if ((item->subaggregate->kind) == ((rio_AggregateKind_Union))) {
          if (result) {
            rio_fatal_error(item->subaggregate->pos, "Multiple unions in struct");
            return NULL;
          }
          result = item->subaggregate;
        }
      }
    }
  }
  return result;
}

bool rio_is_decl_foreign(rio_Decl (*decl)) {
  return (rio_get_decl_note(decl, rio_foreign_name)) != (NULL);
}

rio_Decl (*rio_new_decl_enum(rio_SrcPos pos, char const ((*name)), rio_Typespec (*type), rio_Slice_EnumItem items)) {
  rio_Decl (*d) = rio_new_decl((rio_Decl_Enum), pos, name);
  d->enum_decl.type = type;
  d->enum_decl.items = rio_ast_dup_slice_EnumItem(items);
  return d;
}

rio_Aggregate (*rio_new_aggregate(rio_SrcPos pos, rio_AggregateKind kind, rio_Slice_Member members)) {
  rio_Aggregate (*aggregate) = rio_ast_alloc(sizeof(rio_Aggregate));
  aggregate->pos = pos;
  aggregate->kind = kind;
  aggregate->members = rio_ast_dup_slice_Member(members);
  if (members.length) {
    rio_buf_free((void (**))(&(members.items)));
  }
  return aggregate;
}

rio_Decl (*rio_new_decl_aggregate(rio_SrcPos pos, rio_Decl_Kind kind, char const ((*name)), rio_Slice_Decl params, rio_Aggregate (*aggregate))) {
  assert(((kind) == ((rio_Decl_Struct))) || ((kind) == ((rio_Decl_Union))));
  rio_Decl (*d) = rio_new_decl(kind, pos, name);
  rio_ast_dup_type_params(d, params);
  d->aggregate = aggregate;
  return d;
}

rio_Decl (*rio_new_decl_var(rio_SrcPos pos, char const ((*name)), rio_Typespec (*type), rio_Expr (*expr))) {
  rio_Decl (*d) = rio_new_decl((rio_Decl_Var), pos, name);
  d->var_decl.type = type;
  d->var_decl.expr = expr;
  return d;
}

rio_Decl (*rio_new_decl_func(rio_SrcPos pos, char const ((*name)), rio_Slice_Decl type_params, rio_Slice_Member params, rio_Typespec (*ret_type), bool has_varargs, rio_StmtList block)) {
  rio_Decl (*d) = rio_new_decl((rio_Decl_Func), pos, name);
  rio_ast_dup_type_params(d, type_params);
  rio_init_func(&(d->function), params, ret_type, has_varargs, block);
  return d;
}

void rio_init_func(rio_DeclFunc (*func), rio_Slice_Member params, rio_Typespec (*ret_type), bool has_varargs, rio_StmtList block) {
  func->params = rio_ast_dup_slice_Member(params);
  func->ret_type = ret_type;
  func->has_varargs = has_varargs;
  func->block = block;
}

rio_Decl (*rio_new_decl_const(rio_SrcPos pos, char const ((*name)), rio_Typespec (*type), rio_Expr (*expr))) {
  rio_Decl (*d) = rio_new_decl((rio_Decl_Const), pos, name);
  d->const_decl.type = type;
  d->const_decl.expr = expr;
  return d;
}

rio_Decl (*rio_new_decl_typedef(rio_SrcPos pos, char const ((*name)), rio_Typespec (*val))) {
  rio_Decl (*d) = rio_new_decl((rio_Decl_Typedef), pos, name);
  d->typedef_decl.val = val;
  return d;
}

rio_Decl (*rio_new_decl_note(rio_SrcPos pos, rio_Note note)) {
  rio_Decl (*d) = rio_new_decl((rio_Decl_Note), pos, NULL);
  d->note = note;
  return d;
}

rio_Decl (*rio_new_decl_import(rio_SrcPos pos, char const ((*rename_name)), bool is_relative, rio_Slice_ptr_const_char names, bool import_all, rio_Slice_ImportItem items)) {
  rio_Decl (*d) = rio_new_decl((rio_Decl_Import), pos, NULL);
  d->name = rename_name;
  d->import_decl.is_relative = is_relative;
  d->import_decl.names = rio_ast_dup_slice_ptr_const_char(names);
  d->import_decl.import_all = import_all;
  d->import_decl.items = rio_ast_dup_slice_ImportItem(items);
  return d;
}

rio_Expr (*rio_new_expr(rio_Expr_Kind kind, rio_SrcPos pos)) {
  rio_Expr (*e) = rio_ast_alloc(sizeof(rio_Expr));
  e->kind = kind;
  e->pos = pos;
  return e;
}

rio_Expr (*rio_new_expr_paren(rio_SrcPos pos, rio_Expr (*expr))) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_Paren), pos);
  e->arg = expr;
  return e;
}

rio_Expr (*rio_new_expr_sizeof_expr(rio_SrcPos pos, rio_Expr (*expr))) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_SizeofExpr), pos);
  e->arg = expr;
  return e;
}

rio_Expr (*rio_new_expr_sizeof_type(rio_SrcPos pos, rio_Typespec (*type))) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_SizeofType), pos);
  e->type_arg = type;
  return e;
}

rio_Expr (*rio_new_expr_typeof_expr(rio_SrcPos pos, rio_Expr (*expr))) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_TypeofExpr), pos);
  e->arg = expr;
  return e;
}

rio_Expr (*rio_new_expr_typeof_type(rio_SrcPos pos, rio_Typespec (*type))) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_TypeofType), pos);
  e->type_arg = type;
  return e;
}

rio_Expr (*rio_new_expr_alignof_expr(rio_SrcPos pos, rio_Expr (*expr))) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_AlignofExpr), pos);
  e->arg = expr;
  return e;
}

rio_Expr (*rio_new_expr_alignof_type(rio_SrcPos pos, rio_Typespec (*type))) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_AlignofType), pos);
  e->type_arg = type;
  return e;
}

rio_Expr (*rio_new_expr_offsetof(rio_SrcPos pos, rio_Typespec (*type), char const ((*name)))) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_Offsetof), pos);
  e->offsetof_field.type = type;
  e->offsetof_field.name = name;
  return e;
}

rio_Expr (*rio_new_expr_modify(rio_SrcPos pos, rio_TokenKind op, bool post, rio_Expr (*expr))) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_Modify), pos);
  e->modify.op = op;
  e->modify.post = post;
  e->modify.expr = expr;
  return e;
}

rio_Expr (*rio_new_expr_int(rio_SrcPos pos, ullong val, rio_TokenMod mod, rio_TokenSuffix suffix)) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_Int), pos);
  e->int_lit.val = val;
  e->int_lit.mod = mod;
  e->int_lit.suffix = suffix;
  return e;
}

rio_Expr (*rio_new_expr_float(rio_SrcPos pos, char const ((*start)), char const ((*end)), double val, rio_TokenSuffix suffix)) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_Float), pos);
  e->float_lit.start = start;
  e->float_lit.end = end;
  e->float_lit.val = val;
  e->float_lit.suffix = suffix;
  return e;
}

rio_Expr (*rio_new_expr_str(rio_SrcPos pos, char const ((*val)), rio_TokenMod mod)) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_Str), pos);
  e->str_lit.val = val;
  e->str_lit.mod = mod;
  return e;
}

rio_Expr (*rio_new_expr_name(rio_SrcPos pos, char const ((*name)))) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_Name), pos);
  e->name = name;
  return e;
}

rio_Expr (*rio_new_expr_compound(rio_SrcPos pos, rio_ExprCompound_Kind kind, rio_Typespec (*type), rio_Slice_CompoundField fields)) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_Compound), pos);
  e->compound.kind = kind;
  e->compound.type = type;
  e->compound.fields = rio_ast_dup_slice_CompoundField(fields);
  return e;
}

rio_Expr (*rio_new_expr_cast(rio_SrcPos pos, rio_Typespec (*type), rio_Expr (*expr))) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_Cast), pos);
  e->cast.type = type;
  e->cast.expr = expr;
  return e;
}

rio_Expr (*rio_new_expr_call(rio_SrcPos pos, rio_Expr (*expr), rio_Slice_CompoundField args)) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_Call), pos);
  e->call.expr = expr;
  e->call.args = rio_ast_dup_slice_CompoundField(args);
  return e;
}

rio_Expr (*rio_new_expr_index(rio_SrcPos pos, rio_Expr (*expr), rio_Expr (*index))) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_Index), pos);
  e->index.expr = expr;
  e->index.index = index;
  return e;
}

rio_Expr (*rio_new_expr_field(rio_SrcPos pos, rio_Expr (*expr), char const ((*name)))) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_Field), pos);
  e->field.expr = expr;
  e->field.name = name;
  return e;
}

rio_Expr (*rio_new_expr_unary(rio_SrcPos pos, rio_TokenKind op, rio_Expr (*expr))) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_Unary), pos);
  e->unary.op = op;
  e->unary.expr = expr;
  return e;
}

rio_Expr (*rio_new_expr_binary(rio_SrcPos pos, rio_TokenKind op, rio_Expr (*left), rio_Expr (*right))) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_Binary), pos);
  e->binary.op = op;
  e->binary.left = left;
  e->binary.right = right;
  return e;
}

rio_Expr (*rio_new_expr_ternary(rio_SrcPos pos, rio_Expr (*cond), rio_Expr (*then_expr), rio_Expr (*else_expr))) {
  rio_Expr (*e) = rio_new_expr((rio_Expr_Ternary), pos);
  e->ternary.cond = cond;
  e->ternary.then_expr = then_expr;
  e->ternary.else_expr = else_expr;
  return e;
}

rio_Note (*rio_get_stmt_note(rio_Stmt (*stmt), char const ((*name)))) {
  {
    rio_Slice_Note items__ = stmt->notes;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Note (*note) = &items__.items[i__];
      if ((note->name) == (name)) {
        return note;
      }
    }
  }
  return NULL;
}

rio_Stmt (*rio_new_stmt(rio_Stmt_Kind kind, rio_SrcPos pos)) {
  rio_Stmt (*s) = rio_ast_alloc(sizeof(rio_Stmt));
  s->kind = kind;
  s->pos = pos;
  return s;
}

rio_Stmt (*rio_new_stmt_label(rio_SrcPos pos, char const ((*label)))) {
  rio_Stmt (*s) = rio_new_stmt((rio_Stmt_Label), pos);
  s->label = label;
  return s;
}

rio_Stmt (*rio_new_stmt_goto(rio_SrcPos pos, char const ((*label)))) {
  rio_Stmt (*s) = rio_new_stmt((rio_Stmt_Goto), pos);
  s->label = label;
  return s;
}

rio_Stmt (*rio_new_stmt_note(rio_SrcPos pos, rio_Note note)) {
  rio_Stmt (*s) = rio_new_stmt((rio_Stmt_Note), pos);
  s->note = note;
  return s;
}

rio_Stmt (*rio_new_stmt_return(rio_SrcPos pos, rio_Expr (*expr))) {
  rio_Stmt (*s) = rio_new_stmt((rio_Stmt_Return), pos);
  s->expr = expr;
  return s;
}

rio_Stmt (*rio_new_stmt_break(rio_SrcPos pos)) {
  return rio_new_stmt((rio_Stmt_Break), pos);
}

rio_Stmt (*rio_new_stmt_continue(rio_SrcPos pos)) {
  return rio_new_stmt((rio_Stmt_Continue), pos);
}

rio_Stmt (*rio_new_stmt_block(rio_SrcPos pos, rio_StmtList block)) {
  rio_Stmt (*s) = rio_new_stmt((rio_Stmt_Block), pos);
  s->block = block;
  return s;
}

rio_Stmt (*rio_new_stmt_close(rio_SrcPos pos, rio_Stmt_Kind tag)) {
  rio_Stmt (*s) = rio_new_stmt((rio_Stmt_Close), pos);
  s->tag = tag;
  return s;
}

rio_Stmt (*rio_new_stmt_if(rio_SrcPos pos, rio_Stmt (*init), rio_Expr (*cond), rio_StmtList then_block, rio_Slice_ElseIf elseifs, rio_StmtList else_block)) {
  rio_Stmt (*s) = rio_new_stmt((rio_Stmt_If), pos);
  s->if_stmt.init = init;
  s->if_stmt.cond = cond;
  s->if_stmt.then_block = then_block;
  s->if_stmt.elseifs = rio_ast_dup_slice_ElseIf(elseifs);
  s->if_stmt.else_block = else_block;
  return s;
}

rio_Stmt (*rio_new_stmt_while(rio_SrcPos pos, rio_Expr (*cond), rio_StmtList block)) {
  rio_Stmt (*s) = rio_new_stmt((rio_Stmt_While), pos);
  s->while_stmt.cond = cond;
  s->while_stmt.block = block;
  return s;
}

rio_Stmt (*rio_new_stmt_do_while(rio_SrcPos pos, rio_Expr (*cond), rio_StmtList block)) {
  rio_Stmt (*s) = rio_new_stmt((rio_Stmt_DoWhile), pos);
  s->while_stmt.cond = cond;
  s->while_stmt.block = block;
  return s;
}

rio_Stmt (*rio_new_stmt_for_each(rio_SrcPos pos, bool get_ref, rio_Expr (*expr), rio_Slice_Member params, rio_StmtList block)) {
  rio_Stmt (*s) = rio_new_stmt((rio_Stmt_ForEach), pos);
  s->for_each.expr = expr;
  s->for_each.get_ref = get_ref;
  rio_init_func(&(s->for_each.func), params, NULL, false, block);
  return s;
}

rio_Stmt (*rio_new_stmt_for(rio_SrcPos pos, rio_Stmt (*init), rio_Expr (*cond), rio_Stmt (*next), rio_StmtList block)) {
  rio_Stmt (*s) = rio_new_stmt((rio_Stmt_For), pos);
  s->for_stmt.init = init;
  s->for_stmt.cond = cond;
  s->for_stmt.next = next;
  s->for_stmt.block = block;
  return s;
}

rio_Stmt (*rio_new_stmt_switch(rio_SrcPos pos, rio_Expr (*expr), rio_Slice_SwitchCase cases)) {
  rio_Stmt (*s) = rio_new_stmt((rio_Stmt_Switch), pos);
  s->switch_stmt.expr = expr;
  s->switch_stmt.cases = rio_ast_dup_slice_SwitchCase(cases);
  return s;
}

rio_Stmt (*rio_new_stmt_assign(rio_SrcPos pos, rio_TokenKind op, rio_Expr (*left), rio_Expr (*right))) {
  rio_Stmt (*s) = rio_new_stmt((rio_Stmt_Assign), pos);
  s->assign.op = op;
  s->assign.left = left;
  s->assign.right = right;
  return s;
}

rio_Stmt (*rio_new_stmt_init(rio_SrcPos pos, char const ((*name)), bool is_mut, rio_Typespec (*type), rio_Expr (*expr))) {
  rio_Stmt (*s) = rio_new_stmt((rio_Stmt_Init), pos);
  s->init.name = name;
  s->init.is_mut = is_mut;
  s->init.type = type;
  s->init.expr = expr;
  return s;
}

rio_Stmt (*rio_new_stmt_expr(rio_SrcPos pos, rio_Expr (*expr))) {
  rio_Stmt (*s) = rio_new_stmt((rio_Stmt_Expr), pos);
  s->expr = expr;
  return s;
}

size_t rio_min(size_t x, size_t y) {
  return ((x) <= (y) ? x : y);
}

size_t rio_max(size_t x, size_t y) {
  return ((x) >= (y) ? x : y);
}

size_t rio_clamp_max(size_t x, size_t max) {
  return rio_min(x, max);
}

size_t rio_clamp_min(size_t x, size_t min) {
  return rio_max(x, min);
}

size_t rio_is_pow2(size_t x) {
  return ((x) != (0)) && (((x) & (((x) - (1)))) == (0));
}

uintptr_t rio_align_down(uintptr_t n, size_t a) {
  return (n) & (~(((a) - (1))));
}

uintptr_t rio_align_up(uintptr_t n, size_t a) {
  return rio_align_down(((n) + (a)) - (1), a);
}

void (*rio_align_down_ptr(void (*p), size_t a)) {
  return (void *)(rio_align_down((uintptr_t)(p), a));
}

void (*rio_align_up_ptr(void (*p), size_t a)) {
  return (void *)(rio_align_up((uintptr_t)(p), a));
}

bool rio_starts_with(char const ((*string)), char const ((*start))) {
  return !(strncmp(string, start, strlen(start)));
}

void rio_fatal(char const ((*fmt)), ...) {
  va_list args = {0};
  va_start_ptr(&(args), &(fmt));
  printf("FATAL: ");
  vprintf(fmt, args);
  printf("\n");
  va_end_ptr(&(args));
  exit(1);
}

void (*rio_xcalloc(size_t num_elems, size_t elem_size)) {
  void (*ptr) = calloc(num_elems, elem_size);
  if (!(ptr)) {
    perror("xcalloc failed");
    exit(1);
  }
  return ptr;
}

void (*rio_xrealloc(void (*ptr), size_t num_bytes)) {
  ptr = realloc(ptr, num_bytes);
  if (!(ptr)) {
    perror("xrealloc failed");
    exit(1);
  }
  return ptr;
}

void (*rio_xmalloc(size_t num_bytes)) {
  void (*ptr) = malloc(num_bytes);
  if (!(ptr)) {
    perror("xmalloc failed");
    exit(1);
  }
  return ptr;
}

void (*rio_memdup(void (*src), size_t size)) {
  void (*dest) = rio_xmalloc(size);
  memcpy(dest, src, size);
  return dest;
}

char (*rio_strf(char const ((*fmt)), ...)) {
  va_list args = {0};
  va_start_ptr(&(args), &(fmt));
  int n = (1) + (vsnprintf(NULL, 0, fmt, args));
  va_end_ptr(&(args));
  char (*str) = rio_xmalloc(n);
  va_start_ptr(&(args), &(fmt));
  vsnprintf(str, n, fmt, args);
  va_end_ptr(&(args));
  return str;
}

char (*rio_read_file(char const ((*path)))) {
  FILE (*file) = fopen(path, "rb");
  if (!(file)) {
    return NULL;
  }
  fseek(file, 0, SEEK_END);
  long len = ftell(file);
  fseek(file, 0, SEEK_SET);
  char (*buf) = rio_xmalloc((len) + (1));
  if ((len) && ((fread(buf, len, 1, file)) != (1))) {
    fclose(file);
    free(buf);
    return NULL;
  }
  fclose(file);
  buf[len] = 0;
  return buf;
}

bool rio_write_file(char const ((*path)), char const ((*buf)), size_t len) {
  FILE (*file) = fopen(path, "w");
  if (!(file)) {
    return false;
  }
  ullong n = fwrite(buf, len, 1, file);
  fclose(file);
  return (n) == (1);
}

rio_BufHdr (*rio_buf__hdr(void (*b))) {
  return (rio_BufHdr *)((((char *)(b)) - (offsetof(rio_BufHdr, buf))));
}

size_t rio_buf_len(void (*b)) {
  return (b ? rio_buf__hdr(b)->len : 0);
}

size_t rio_buf_cap(void const ((*b))) {
  return (b ? rio_buf__hdr((void *)(b))->cap : 0);
}

void (*rio_buf_end(void (*b), size_t elem_size)) {
  return ((char *)(b)) + ((elem_size) * (rio_buf_len(b)));
}

size_t rio_buf_sizeof(void (*b), size_t elem_size) {
  return (b ? (rio_buf_len(b)) * (elem_size) : 0);
}

void rio_buf_free(void (*(*b))) {
  if (b) {
    free(rio_buf__hdr(*(b)));
    *(b) = NULL;
  }
}

void rio_buf_fit(void (*(*b)), size_t new_len, size_t elem_size) {
  if ((new_len) > (rio_buf_cap(*(b)))) {
    *(b) = rio_buf__grow(*(b), new_len, elem_size);
  }
}

void rio_buf_push(void (*(*b)), void (*elem), size_t elem_size) {
  rio_buf_fit(b, (1) + (rio_buf_len(*(b))), elem_size);
  memcpy(((char *)(*(b))) + ((elem_size) * ((rio_buf__hdr(*(b))->len)++)), elem, elem_size);
}

void rio_buf_unshift(void (*(*b)), void (*elem), size_t elem_size) {
  rio_buf_fit(b, (1) + (rio_buf_len(*(b))), elem_size);
  memmove(((char *)(*(b))) + (elem_size), *(b), (elem_size) * ((rio_buf__hdr(*(b))->len)++));
  memcpy(*(b), elem, elem_size);
}

void (*rio_buf__grow(void const ((*buf)), size_t new_len, size_t elem_size)) {
  assert((rio_buf_cap(buf)) <= ((((SIZE_MAX) - (1))) / (2)));
  ullong new_cap = rio_clamp_min((2) * (rio_buf_cap(buf)), rio_max(new_len, 16));
  assert((new_len) <= (new_cap));
  assert((new_cap) <= ((((SIZE_MAX) - (offsetof(rio_BufHdr, buf)))) / (elem_size)));
  ullong new_size = (offsetof(rio_BufHdr, buf)) + ((new_cap) * (elem_size));
  rio_BufHdr (*new_hdr) = {0};
  if (buf) {
    new_hdr = rio_xrealloc(rio_buf__hdr((void *)(buf)), new_size);
  } else {
    new_hdr = rio_xmalloc(new_size);
    new_hdr->len = 0;
  }
  new_hdr->cap = new_cap;
  return new_hdr->buf;
}

void rio_buf_printf(char (*(*buf)), char const ((*fmt)), ...) {
  va_list args = {0};
  va_start_ptr(&(args), &(fmt));
  ullong cap = (rio_buf_cap(*(buf))) - (rio_buf_len(*(buf)));
  int n = (1) + (vsnprintf(rio_buf_end(*(buf), 1), cap, fmt, args));
  va_end_ptr(&(args));
  if ((n) > (cap)) {
    rio_buf_fit((void (**))(buf), (n) + (rio_buf_len(*(buf))), 1);
    va_start_ptr(&(args), &(fmt));
    ullong new_cap = (rio_buf_cap(*(buf))) - (rio_buf_len(*(buf)));
    n = (1) + (vsnprintf(rio_buf_end(*(buf), 1), new_cap, fmt, args));
    assert((n) <= (new_cap));
    va_end_ptr(&(args));
  }
  rio_buf__hdr(*(buf))->len += (n) - (1);
}

rio_Arena rio_allocator;
void rio_arena_grow(rio_Arena (*arena), size_t min_size) {
  ullong size = rio_align_up(rio_clamp_min(min_size, rio_ARENA_BLOCK_SIZE), rio_ARENA_ALIGNMENT);
  arena->ptr = rio_xmalloc(size);
  assert((arena->ptr) == (rio_align_down_ptr(arena->ptr, rio_ARENA_ALIGNMENT)));
  arena->end = (arena->ptr) + (size);
  rio_buf_push((void (**))(&(arena->blocks)), &(arena->ptr), sizeof(arena->ptr));
}

void (*rio_arena_alloc(rio_Arena (*arena), size_t size)) {
  if ((size) > ((size_t)(((arena->end) - (arena->ptr))))) {
    rio_arena_grow(arena, size);
    assert((size) <= ((size_t)(((arena->end) - (arena->ptr)))));
  }
  char (*ptr) = arena->ptr;
  arena->ptr = rio_align_up_ptr((arena->ptr) + (size), rio_ARENA_ALIGNMENT);
  assert((arena->ptr) <= (arena->end));
  assert((ptr) == (rio_align_down_ptr(ptr, rio_ARENA_ALIGNMENT)));
  return ptr;
}

void rio_arena_free(rio_Arena (*arena)) {
  void (*end) = rio_buf_end(arena->blocks, sizeof(arena->ptr));
  for (char (*(*it)) = arena->blocks; (it) != (end); (it)++) {
    free(*(it));
  }
  rio_buf_free((void (**))(&(arena->blocks)));
}

uint64_t rio_hash_uint64(uint64_t x) {
  x *= 0xff51afd7ed558ccd;
  x ^= (x) >> (32);
  return x;
}

uint64_t rio_hash_ptr(void const ((*ptr))) {
  return rio_hash_uint64((uintptr_t)(ptr));
}

uint64_t rio_hash_mix(uint64_t x, uint64_t y) {
  x ^= y;
  x *= 0xff51afd7ed558ccd;
  x ^= (x) >> (32);
  return x;
}

uint64_t rio_hash_bytes(void const ((*ptr)), size_t len) {
  uint64_t x = 0xcbf29ce484222325;
  char const ((*buf)) = (char const (*))(ptr);
  for (size_t i = 0; (i) < (len); (i)++) {
    x ^= buf[i];
    x *= 0x100000001b3;
    x ^= (x) >> (32);
  }
  return x;
}

uint64_t rio_map_get_uint64_from_uint64(rio_Map (*map), uint64_t key) {
  if ((map->len) == (0)) {
    return 0;
  }
  assert(rio_is_pow2(map->cap));
  ullong i = (size_t)(rio_hash_uint64(key));
  assert((map->len) < (map->cap));
  for (;;) {
    i &= (map->cap) - (1);
    if ((map->keys[i]) == (key)) {
      return map->vals[i];
    } else if (!(map->keys[i])) {
      return 0;
    }
    (i)++;
  }
  return 0;
}

void rio_map_grow(rio_Map (*map), size_t new_cap) {
  new_cap = rio_clamp_min(new_cap, 16);
  rio_Map new_map = {.keys = rio_xcalloc(new_cap, sizeof(uint64_t)), .vals = rio_xmalloc((new_cap) * (sizeof(uint64_t))), .cap = new_cap};
  for (size_t i = 0; (i) < (map->cap); (i)++) {
    if (map->keys[i]) {
      rio_map_put_uint64_from_uint64(&(new_map), map->keys[i], map->vals[i]);
    }
  }
  free((void *)(map->keys));
  free(map->vals);
  *(map) = new_map;
}

void rio_map_put_uint64_from_uint64(rio_Map (*map), uint64_t key, uint64_t val) {
  assert(key);
  if (!(val)) {
    return;
  }
  if (((2) * (map->len)) >= (map->cap)) {
    rio_map_grow(map, (2) * (map->cap));
  }
  assert(((2) * (map->len)) < (map->cap));
  assert(rio_is_pow2(map->cap));
  ullong i = (size_t)(rio_hash_uint64(key));
  for (;;) {
    i &= (map->cap) - (1);
    if (!(map->keys[i])) {
      (map->len)++;
      map->keys[i] = key;
      map->vals[i] = val;
      return;
    } else if ((map->keys[i]) == (key)) {
      map->vals[i] = val;
      return;
    }
    (i)++;
  }
}

void (*rio_map_get(rio_Map (*map), void const ((*key)))) {
  return (void *)((uintptr_t)(rio_map_get_uint64_from_uint64(map, (uint64_t)((uintptr_t)(key)))));
}

void rio_map_put(rio_Map (*map), void const ((*key)), void (*val)) {
  rio_map_put_uint64_from_uint64(map, (uint64_t)((uintptr_t)(key)), (uint64_t)((uintptr_t)(val)));
}

void (*rio_map_get_from_uint64(rio_Map (*map), uint64_t key)) {
  return (void *)((uintptr_t)(rio_map_get_uint64_from_uint64(map, key)));
}

void rio_map_put_from_uint64(rio_Map (*map), uint64_t key, void (*val)) {
  rio_map_put_uint64_from_uint64(map, key, (uint64_t)((uintptr_t)(val)));
}

uint64_t rio_map_get_uint64(rio_Map (*map), void (*key)) {
  return rio_map_get_uint64_from_uint64(map, (uint64_t)((uintptr_t)(key)));
}

void rio_map_put_uint64(rio_Map (*map), void (*key), uint64_t val) {
  rio_map_put_uint64_from_uint64(map, (uint64_t)((uintptr_t)(key)), val);
}

rio_Arena rio_intern_arena;
rio_Map rio_interns;
char const ((*rio_str_intern_range(char const ((*start)), char const ((*end))))) {
  size_t len = (end) - (start);
  ullong hash = rio_hash_bytes(start, len);
  uint64_t key = (hash ? hash : 1);
  rio_Intern (*intern) = rio_map_get_from_uint64(&(rio_interns), key);
  for (rio_Intern (*it) = intern; it; it = it->next) {
    if (((it->len) == (len)) && ((strncmp(it->str, start, len)) == (0))) {
      return it->str;
    }
  }
  rio_Intern (*new_intern) = rio_arena_alloc(&(rio_intern_arena), ((offsetof(rio_Intern, str)) + (len)) + (1));
  new_intern->len = len;
  new_intern->next = intern;
  memcpy(new_intern->str, start, len);
  new_intern->str[len] = 0;
  rio_map_put_from_uint64(&(rio_interns), key, new_intern);
  return new_intern->str;
}

char const ((*rio_str_intern(char const ((*str))))) {
  return rio_str_intern_range(str, (str) + (strlen(str)));
}

bool rio_str_islower(char const ((*str))) {
  while (*(str)) {
    if ((isalpha(*(str))) && (!(islower(*(str))))) {
      return false;
    }
    (str)++;
  }
  return true;
}

rio_Aggregate (*rio_dupe_aggregate(rio_Aggregate (*aggregate), rio_MapClosure (*map))) {
  rio_Aggregate (*dupe) = map->call(map->self, (Any){aggregate, TYPEID(57, TypeKind_Struct, rio_Aggregate)});
  if (dupe) {
    return dupe;
  }
  dupe = rio_ast_dup_Aggregate(aggregate);
  dupe->members = rio_ast_dup_slice_Member(dupe->members);
  {
    rio_Slice_Member items__ = dupe->members;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Member (*member) = &items__.items[i__];
      map->call(map->self, (Any){member, TYPEID(52, TypeKind_Struct, rio_Member)});
      switch (member->kind) {
      case rio_Member_Field: {
        member->type = rio_dupe_typespec(member->type, map);
        break;
      }
      case rio_Member_Subaggregate: {
        member->subaggregate = rio_dupe_aggregate(member->subaggregate, map);
        break;
      }
      default:
        assert("@complete switch failed to handle case" && 0);
        break;
      }
    }
  }
  return dupe;
}

rio_StmtList rio_dupe_block(rio_StmtList block, rio_MapClosure (*map)) {
  rio_StmtList (*dupe) = &(block);
  dupe->stmts = rio_ast_dup_slice_ref_Stmt(dupe->stmts);
  {
    rio_Slice_ref_Stmt items__ = dupe->stmts;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Stmt (*(*stmt)) = &items__.items[i__];
      *(stmt) = rio_dupe_stmt(*(stmt), map);
    }
  }
  return *(dupe);
}

rio_Expr (*rio_dupe_expr(rio_Expr (*expr), rio_MapClosure (*map))) {
  if (!(expr)) {
    return NULL;
  }
  rio_Expr (*dupe) = rio_ast_dup_Expr(expr);
  switch (dupe->kind) {
  case rio_Expr_AlignofExpr:
  case rio_Expr_SizeofExpr:
  case rio_Expr_TypeofExpr:
  case rio_Expr_Paren: {
    dupe->arg = rio_dupe_expr(dupe->arg, map);
    break;
  }
  case rio_Expr_AlignofType:
  case rio_Expr_SizeofType:
  case rio_Expr_TypeofType: {
    dupe->type_arg = rio_dupe_typespec(dupe->type_arg, map);
    break;
  }
  case rio_Expr_Binary: {
    dupe->binary.left = rio_dupe_expr(dupe->binary.left, map);
    dupe->binary.right = rio_dupe_expr(dupe->binary.right, map);
    break;
  }
  case rio_Expr_Call: {
    rio_ExprCall (*call) = &(dupe->call);
    call->expr = rio_dupe_expr(call->expr, map);
    call->args = rio_dupe_fields(call->args, map);
    break;
  }
  case rio_Expr_Cast: {
    dupe->cast.type = rio_dupe_typespec(dupe->cast.type, map);
    dupe->cast.expr = rio_dupe_expr(dupe->cast.expr, map);
    break;
  }
  case rio_Expr_Compound: {
    rio_ExprCompound (*compound) = &(dupe->compound);
    compound->type = rio_dupe_typespec(compound->type, map);
    compound->fields = rio_dupe_fields(compound->fields, map);
    break;
  }
  case rio_Expr_Field: {
    dupe->field.expr = rio_dupe_expr(dupe->field.expr, map);
    break;
  }
  case rio_Expr_Float:
  case rio_Expr_Int:
  case rio_Expr_Str: {
    break;
  }
  case rio_Expr_Index: {
    dupe->index.expr = rio_dupe_expr(dupe->index.expr, map);
    dupe->index.index = rio_dupe_expr(dupe->index.index, map);
    break;
  }
  case rio_Expr_Modify: {
    dupe->modify.expr = rio_dupe_expr(dupe->modify.expr, map);
    break;
  }
  case rio_Expr_Name: {
    dupe->type_args = rio_dupe_type_args(dupe->type_args, map);
    break;
  }
  case rio_Expr_Offsetof: {
    rio_ExprOffsetofField (*offsetof_field) = &(dupe->offsetof_field);
    offsetof_field->type = rio_dupe_typespec(offsetof_field->type, map);
    break;
  }
  case rio_Expr_Unary: {
    dupe->unary.expr = rio_dupe_expr(dupe->unary.expr, map);
    break;
  }
  default: {
    printf("Unhandled: %d\n", dupe->kind);
    assert(false);
    return NULL;
    break;
  }
  }
  return dupe;
}

rio_Slice_CompoundField rio_dupe_fields(rio_Slice_CompoundField fields, rio_MapClosure (*map)) {
  rio_Slice_CompoundField dupe = rio_ast_dup_slice_CompoundField(fields);
  {
    rio_Slice_CompoundField items__ = dupe;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_CompoundField (*field) = &items__.items[i__];
      field->expr = rio_dupe_expr(field->expr, map);
      switch (field->kind) {
      case rio_CompoundField_Index: {
        field->index = rio_dupe_expr(field->index, map);
        break;
      }
      case rio_CompoundField_Default:
      case rio_CompoundField_Name: {
        break;
      }
      default:
        assert("@complete switch failed to handle case" && 0);
        break;
      }
    }
  }
  return dupe;
}

rio_DeclFunc rio_dupe_function(rio_DeclFunc func, bool shallow, rio_MapClosure (*map)) {
  rio_dupe_function_fields(&(func), shallow, map);
  return func;
}

void rio_dupe_function_fields(rio_DeclFunc (*dupe), bool shallow, rio_MapClosure (*map)) {
  dupe->params = rio_ast_dup_slice_Member(dupe->params);
  {
    rio_Slice_Member items__ = dupe->params;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Member (*param) = &items__.items[i__];
      *(param) = rio_dupe_func_param(*(param), map);
    }
  }
  dupe->ret_type = rio_dupe_typespec(dupe->ret_type, map);
  if (!(shallow)) {
    dupe->block = rio_dupe_block(dupe->block, map);
  }
}

rio_Member rio_dupe_func_param(rio_Member param, rio_MapClosure (*map)) {
  rio_Member (*dupe) = &(param);
  dupe->type = rio_dupe_typespec(dupe->type, map);
  return *(dupe);
}

rio_Stmt (*rio_dupe_stmt(rio_Stmt (*stmt), rio_MapClosure (*map))) {
  if (!(stmt)) {
    return NULL;
  }
  rio_Stmt (*dupe) = rio_ast_dup_Stmt(stmt);
  switch (dupe->kind) {
  case rio_Stmt_Assign: {
    rio_StmtAssign (*assign) = &(stmt->assign);
    assign->left = rio_dupe_expr(assign->left, map);
    assign->right = rio_dupe_expr(assign->right, map);
    break;
  }
  case rio_Stmt_Block: {
    dupe->block = rio_dupe_block(dupe->block, map);
    break;
  }
  case rio_Stmt_Break:
  case rio_Stmt_Close:
  case rio_Stmt_Continue:
  case rio_Stmt_Goto:
  case rio_Stmt_Label:
  case rio_Stmt_Note: {
    break;
  }
  case rio_Stmt_DoWhile:
  case rio_Stmt_While: {
    rio_StmtWhile (*while_stmt) = &(dupe->while_stmt);
    while_stmt->cond = rio_dupe_expr(while_stmt->cond, map);
    while_stmt->block = rio_dupe_block(while_stmt->block, map);
    break;
  }
  case rio_Stmt_Expr:
  case rio_Stmt_Return: {
    dupe->expr = rio_dupe_expr(dupe->expr, map);
    break;
  }
  case rio_Stmt_For: {
    rio_StmtFor (*for_stmt) = &(dupe->for_stmt);
    for_stmt->init = rio_dupe_stmt(for_stmt->init, map);
    for_stmt->cond = rio_dupe_expr(for_stmt->cond, map);
    for_stmt->next = rio_dupe_stmt(for_stmt->next, map);
    for_stmt->block = rio_dupe_block(for_stmt->block, map);
    break;
  }
  case rio_Stmt_ForEach: {
    rio_StmtForEach (*for_each) = &(dupe->for_each);
    for_each->expr = rio_dupe_expr(for_each->expr, map);
    rio_dupe_function_fields(&(for_each->func), false, map);
    break;
  }
  case rio_Stmt_If: {
    rio_StmtIf (*if_stmt) = &(dupe->if_stmt);
    if_stmt->init = rio_dupe_stmt(if_stmt->init, map);
    if_stmt->cond = rio_dupe_expr(if_stmt->cond, map);
    if_stmt->then_block = rio_dupe_block(if_stmt->then_block, map);
    if_stmt->elseifs = rio_ast_dup_slice_ElseIf(if_stmt->elseifs);
    {
      rio_Slice_ElseIf items__ = if_stmt->elseifs;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_ElseIf (*elseif) = &items__.items[i__];
        elseif->cond = rio_dupe_expr(elseif->cond, map);
        elseif->block = rio_dupe_block(elseif->block, map);
      }
    }
    if_stmt->else_block = rio_dupe_block(if_stmt->else_block, map);
    break;
  }
  case rio_Stmt_Init: {
    rio_StmtInit (*init) = &(dupe->init);
    init->type = rio_dupe_typespec(init->type, map);
    init->expr = rio_dupe_expr(init->expr, map);
    break;
  }
  case rio_Stmt_Switch: {
    rio_StmtSwitch (*switch_stmt) = &(dupe->switch_stmt);
    switch_stmt->expr = rio_dupe_expr(switch_stmt->expr, map);
    switch_stmt->cases = rio_ast_dup_slice_SwitchCase(switch_stmt->cases);
    {
      rio_Slice_SwitchCase items__ = switch_stmt->cases;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_SwitchCase (*case_) = &items__.items[i__];
        case_->patterns = rio_ast_dup_slice_SwitchCasePattern(case_->patterns);
        {
          rio_Slice_SwitchCasePattern items__ = case_->patterns;
          for (size_t i__ = 0; i__ < items__.length; ++i__) {
            rio_SwitchCasePattern (*pattern) = &items__.items[i__];
            pattern->start = rio_dupe_expr(pattern->start, map);
            pattern->end = rio_dupe_expr(pattern->end, map);
          }
        }
        case_->block = rio_dupe_block(case_->block, map);
      }
    }
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  return dupe;
}

rio_Slice_TypeArg rio_dupe_type_args(rio_Slice_TypeArg type_args, rio_MapClosure (*map)) {
  if (type_args.length) {
    type_args = rio_ast_dup_slice_TypeArg(type_args);
    {
      rio_Slice_TypeArg items__ = type_args;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_TypeArg (*type_arg) = &items__.items[i__];
        type_arg->val = rio_dupe_typespec(type_arg->val, map);
      }
    }
  }
  return type_args;
}

rio_Typespec (*rio_dupe_typespec(rio_Typespec (*type), rio_MapClosure (*map))) {
  if (!(type)) {
    return NULL;
  }
  rio_Typespec (*dupe) = (rio_Typespec *)(map->call(map->self, (Any){type, TYPEID(47, TypeKind_Struct, rio_Typespec)}));
  if (dupe) {
    return dupe;
  }
  dupe = rio_ast_dup_Typespec(type);
  switch (type->kind) {
  case rio_Typespec_Array:
  case rio_Typespec_Const:
  case rio_Typespec_None:
  case rio_Typespec_Ptr:
  case rio_Typespec_Ref: {
    dupe->base = rio_dupe_typespec(type->base, map);
    break;
  }
  case rio_Typespec_Func: {
    rio_fatal_error(type->pos, "Function types not yet supported in generics\n");
    break;
  }
  case rio_Typespec_Name: {
    dupe->names = rio_ast_dup_slice_TypespecName(dupe->names);
    {
      rio_Slice_TypespecName items__ = dupe->names;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_TypespecName (*type_name) = &items__.items[i__];
        type_name->type_args = rio_dupe_type_args(type_name->type_args, map);
      }
    }
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  return dupe;
}

bool rio_find_generic(rio_Typespec (*type)) {
  if (!(type)) {
    return false;
  }
  switch (type->kind) {
  case rio_Typespec_Array:
  case rio_Typespec_Const:
  case rio_Typespec_Ptr:
  case rio_Typespec_Ref: {
    return rio_find_generic(type->base);
    break;
  }
  case rio_Typespec_Func: {
    {
      rio_Slice_ref_Typespec items__ = type->function.args;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_Typespec (*arg) = items__.items[i__];
        if (rio_find_generic(arg)) {
          return true;
        }
      }
    }
    return rio_find_generic(type->function.ret);
    break;
  }
  case rio_Typespec_Name: {
    if ((type->decl) && (type->decl->is_generic)) {
      return true;
    }
    {
      rio_Slice_TypespecName items__ = type->names;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_TypespecName (*type_name) = &items__.items[i__];
        {
          rio_Slice_TypeArg items__ = type_name->type_args;
          for (size_t i__ = 0; i__ < items__.length; ++i__) {
            rio_TypeArg (*type_arg) = &items__.items[i__];
            if (rio_find_generic(type_arg->val)) {
              return true;
            }
          }
        }
      }
    }
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  return false;
}

char (*rio_get_typespec_sym_name(rio_Typespec (*type))) {
  char (*buf) = {0};
  rio_put_typespec_sym_name(&(buf), type);
  return buf;
}

void (*rio_map_type_args(rio_TypeMap (*self), Any item)) {
  switch (item.type) {
  case TYPEID(57, TypeKind_Struct, rio_Aggregate): {
    return NULL;
    break;
  }
  case TYPEID(47, TypeKind_Struct, rio_Typespec): {
    rio_Typespec (*type) = item.ptr;
    switch (type->kind) {
    case (rio_Typespec_Name): {
      rio_Decl (*decl) = type->decl;
      rio_Slice_Decl params = self->type_params;
      {
        rio_Slice_Decl items__ = params;
        for (size_t i__ = 0; i__ < items__.length; ++i__) {
          rio_Decl (*param) = &items__.items[i__];
          size_t i = i__;
          if ((decl) == (param)) {
            rio_TypeArg (*arg) = &(self->type_args.items[i]);
            return arg->val;
          }
        }
      }
      return NULL;
      break;
    }
    default: {
      return NULL;
      break;
    }
    }
    break;
  }
  default: {
    return item.ptr;
    break;
  }
  }
}

void rio_put_typespec_sym_name(char (*(*buf)), rio_Typespec (*type)) {
  switch (type->kind) {
  case rio_Typespec_Name: {
    {
      rio_Slice_TypespecName items__ = type->names;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_TypespecName (*name) = &items__.items[i__];
        size_t i = i__;
        if (i) {
          rio_buf_printf(buf, "_");
        }
        rio_buf_printf(buf, "%s", name->name);
        {
          rio_Slice_TypeArg items__ = name->type_args;
          for (size_t i__ = 0; i__ < items__.length; ++i__) {
            rio_TypeArg (*type_arg) = &items__.items[i__];
            rio_buf_printf(buf, "_");
            rio_put_typespec_sym_name(buf, type_arg->val);
          }
        }
      }
    }
    break;
  }
  case rio_Typespec_Const: {
    rio_buf_printf(buf, "const_");
    rio_put_typespec_sym_name(buf, type->base);
    break;
  }
  case rio_Typespec_Ptr: {
    rio_buf_printf(buf, "ptr_");
    rio_put_typespec_sym_name(buf, type->base);
    break;
  }
  case rio_Typespec_Ref: {
    rio_buf_printf(buf, "ref_");
    rio_put_typespec_sym_name(buf, type->base);
    break;
  }
  case rio_Typespec_Array: {
    rio_buf_printf(buf, "array_");
    rio_put_typespec_sym_name(buf, type->base);
    break;
  }
  case rio_Typespec_Func: {
    rio_TypespecFunc (*function) = &(type->function);
    rio_buf_printf(buf, "do_");
    {
      rio_Slice_ref_Typespec items__ = type->function.args;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_Typespec (*arg) = items__.items[i__];
        size_t i = i__;
        if (i) {
          rio_buf_printf(buf, "_");
        }
        rio_put_typespec_sym_name(buf, arg);
      }
    }
    if (type->function.has_varargs) {
      rio_buf_printf(buf, "_etc");
    }
    if (type->function.ret) {
      rio_buf_printf(buf, "_to_");
      rio_put_typespec_sym_name(buf, type->function.ret);
    }
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
}

char (*rio_gen_buf) = NULL;
int rio_gen_indent;
rio_SrcPos rio_gen_pos;
char const ((*(*rio_gen_headers_buf)));
char (*rio_gen_preamble_str) = 
  "// Preamble\n"
  "#define __USE_MINGW_ANSI_STDIO 1\n"
  "#ifndef _CRT_SECURE_NO_WARNINGS\n"
  "#define _CRT_SECURE_NO_WARNINGS\n"
  "#endif\n"
  "#ifndef _CRT_NONSTDC_NO_DEPRECATE\n"
  "#define _CRT_NONSTDC_NO_DEPRECATE\n"
  "#endif\n"
  "\n"
  "#if _MSC_VER >= 1900 || __STDC_VERSION__ >= 201112L\n"
  "// Visual Studio 2015 supports enough C99/C11 features for us.\n"
  "#else\n"
  "#error \"C11 support required or Visual Studio 2015 or later\"\n"
  "#endif\n"
  "\n"
  "#ifdef __GNUC__\n"
  "#pragma GCC diagnostic push\n"
  "#pragma GCC diagnostic ignored \"-Wvarargs\"\n"
  "#endif\n"
  "\n"
  "#include <stdbool.h>\n"
  "#include <stdint.h>\n"
  "#include <stddef.h>\n"
  "#include <stdarg.h>\n"
  "#include <assert.h>\n"
  "\n"
  "typedef unsigned char uchar;\n"
  "typedef signed char schar;\n"
  "typedef unsigned short ushort;\n"
  "typedef unsigned int uint;\n"
  "typedef unsigned long ulong;\n"
  "typedef long long llong;\n"
  "typedef unsigned long long ullong;\n"
  "\n"
  "#ifdef _MSC_VER\n"
  "#define alignof(x) __alignof(x)\n"
  "#else\n"
  "#define alignof(x) __alignof__(x)\n"
  "#endif\n"
  "\n"
  "#define va_start_ptr(args, arg) (va_start(*(args), *(arg)))\n"
  "#define va_copy_ptr(dest, src) (va_copy(*(dest), *(src)))\n"
  "#define va_end_ptr(args) (va_end(*(args)))\n"
  "\n"
  "struct Any;\n"
  "static void va_arg_ptr(va_list *args, struct Any any);\n";
char (*rio_gen_postamble_str) = 
  "\n"
  "static void va_arg_ptr(va_list *args, Any any) {\n"
  "  switch (typeid_kind(any.type)) {\n"
  "  case TypeKind_Bool:\n"
  "    *(bool *)any.ptr = (bool)va_arg(*args, int);\n"
  "    break;\n"
  "  case TypeKind_Char:\n"
  "    *(char *)any.ptr = (char)va_arg(*args, int);\n"
  "    break;\n"
  "  case TypeKind_UChar:\n"
  "    *(uchar *)any.ptr = (uchar)va_arg(*args, int);\n"
  "    break;\n"
  "  case TypeKind_SChar:\n"
  "    *(schar *)any.ptr = (schar)va_arg(*args, int);\n"
  "    break;\n"
  "  case TypeKind_Short:\n"
  "    *(short *)any.ptr = (short)va_arg(*args, int);\n"
  "    break;\n"
  "  case TypeKind_UShort:\n"
  "    *(ushort *)any.ptr = (ushort)va_arg(*args, int);\n"
  "    break;\n"
  "  case TypeKind_Int:\n"
  "    *(int *)any.ptr = va_arg(*args, int);\n"
  "    break;\n"
  "  case TypeKind_UInt:\n"
  "    *(uint *)any.ptr = va_arg(*args, uint);\n"
  "    break;\n"
  "  case TypeKind_Long:\n"
  "    *(long *)any.ptr = va_arg(*args, long);\n"
  "    break;\n"
  "  case TypeKind_ULong:\n"
  "    *(ulong *)any.ptr = va_arg(*args, ulong);\n"
  "    break;\n"
  "  case TypeKind_LLong:\n"
  "    *(llong *)any.ptr = va_arg(*args, llong);\n"
  "    break;\n"
  "  case TypeKind_ULLong:\n"
  "    *(ullong *)any.ptr = va_arg(*args, ullong);\n"
  "    break;\n"
  "  case TypeKind_Float:\n"
  "    *(float *)any.ptr = (float)va_arg(*args, double);\n"
  "    break;\n"
  "  case TypeKind_Double:\n"
  "    *(double *)any.ptr = va_arg(*args, double);\n"
  "    break;\n"
  "  case TypeKind_Func:\n"
  "  case TypeKind_Ptr:\n"
  "  case TypeKind_Ref:\n"
  "    *(void **)any.ptr = va_arg(*args, void *);\n"
  "    break;\n"
  "  default:\n"
  "    assert(0 && \"argument type not supported\");\n"
  "    break;\n"
  "  }\n"
  "}\n"
  "\n"
  "#ifdef __GNUC__\n"
  "#pragma GCC diagnostic pop\n"
  "#endif\n";
void rio_genln(void) {
  rio_buf_printf(&(rio_gen_buf), "\n"
  "%.*s", (rio_gen_indent) * (2), "                                  ");
  (rio_gen_pos.line)++;
}

bool rio_is_incomplete_array_typespec(rio_Typespec (*typespec)) {
  return ((typespec->kind) == ((rio_Typespec_Array))) && (!(typespec->num_elems));
}

char (rio_char_to_escape[256]) = {['\0'] = '0', ['\n'] = 'n', ['\r'] = 'r', ['\t'] = 't', ['\v'] = 'v', ['\b'] = 'b', ['\a'] = 'a', ['\\'] = '\\', ['\"'] = '\"', ['\''] = '\''};
void rio_gen_char(char c) {
  if (rio_char_to_escape[(uchar)(c)]) {
    rio_buf_printf(&(rio_gen_buf), "\'\\%c\'", rio_char_to_escape[(uchar)(c)]);
  } else if (isprint(c)) {
    rio_buf_printf(&(rio_gen_buf), "\'%c\'", c);
  } else {
    rio_buf_printf(&(rio_gen_buf), "\'\\x%X\'", (uchar)(c));
  }
}

void rio_gen_str(char const ((*str)), bool multiline) {
  if (multiline) {
    (rio_gen_indent)++;
    rio_genln();
  }
  rio_buf_printf(&(rio_gen_buf), "\"");
  while (*(str)) {
    char const ((*start)) = str;
    while (((*(str)) && (isprint(*(str)))) && (!(rio_char_to_escape[(uchar)(*(str))]))) {
      (str)++;
    }
    if ((start) != (str)) {
      rio_buf_printf(&(rio_gen_buf), "%.*s", (str) - (start), start);
    }
    if (*(str)) {
      if (rio_char_to_escape[(uchar)(*(str))]) {
        rio_buf_printf(&(rio_gen_buf), "\\%c", rio_char_to_escape[(uchar)(*(str))]);
        if (((str[0]) == ('\n')) && (str[1])) {
          rio_buf_printf(&(rio_gen_buf), "\"");
          rio_genln();
          rio_buf_printf(&(rio_gen_buf), "\"");
        }
      } else {
        assert(!(isprint(*(str))));
        rio_buf_printf(&(rio_gen_buf), "\\x%X", (uchar)(*(str)));
      }
      (str)++;
    }
  }
  rio_buf_printf(&(rio_gen_buf), "\"");
  if (multiline) {
    (rio_gen_indent)--;
  }
}

void rio_gen_sync_pos(rio_SrcPos pos) {
  if (rio_flag_nosourcemap) {
    return;
  }
  if (((rio_gen_pos.line) != (pos.line)) || ((rio_gen_pos.name) != (pos.name))) {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "#line %d", pos.line);
    if ((rio_gen_pos.name) != (pos.name)) {
      rio_buf_printf(&(rio_gen_buf), " ");
      rio_gen_str(pos.name, false);
    }
    rio_gen_pos = pos;
  }
}

char const ((*rio_cdecl_paren(char const ((*str)), char c))) {
  return ((c) && ((c) != ('[')) ? (char const (*))(rio_strf("(%s)", str)) : str);
}

char const ((*rio_cdecl_name(rio_Type (*type)))) {
  char const ((*type_name)) = rio_type_names[type->kind];
  if (type_name) {
    return type_name;
  } else {
    assert(type->sym);
    return rio_get_gen_name(type->sym);
  }
}

char (*rio_type_to_cdecl(rio_Type (*type), char const ((*str)))) {
  switch (type->kind) {
  case rio_CompilerTypeKind_Ptr:
  case rio_CompilerTypeKind_Ref: {
    return rio_type_to_cdecl(type->base, rio_cdecl_paren(rio_strf("*%s", str), *(str)));
    break;
  }
  case rio_CompilerTypeKind_Const: {
    return rio_type_to_cdecl(type->base, rio_strf("const %s", rio_cdecl_paren(str, *(str))));
    break;
  }
  case rio_CompilerTypeKind_Array: {
    if ((type->num_elems) == (0)) {
      return rio_type_to_cdecl(type->base, rio_cdecl_paren(rio_strf("%s[]", str), *(str)));
    } else {
      return rio_type_to_cdecl(type->base, rio_cdecl_paren(rio_strf("%s[%zu]", str, type->num_elems), *(str)));
    }
    break;
  }
  case rio_CompilerTypeKind_Func: {
    char (*result) = {0};
    rio_buf_printf(&(result), "(*%s)(", str);
    if ((type->function.params.length) == (0)) {
      rio_buf_printf(&(result), "void");
    } else {
      for (size_t i = 0; (i) < (type->function.params.length); (i)++) {
        rio_buf_printf(&(result), "%s%s", ((i) == (0) ? "" : ", "), rio_type_to_cdecl(type->function.params.items[i], ""));
      }
    }
    if (type->function.has_varargs) {
      rio_buf_printf(&(result), ", ...");
    }
    rio_buf_printf(&(result), ")");
    return rio_type_to_cdecl(type->function.ret, result);
    break;
  }
  default: {
    return rio_strf("%s%s%s", rio_cdecl_name(type), (*(str) ? " " : ""), str);
    break;
  }
  }
}

char const ((*rio_gen_expr_str(rio_Expr (*expr)))) {
  char (*temp) = rio_gen_buf;
  rio_gen_buf = NULL;
  rio_gen_expr(expr);
  char (*result) = rio_gen_buf;
  rio_gen_buf = temp;
  return result;
}

rio_Map rio_gen_name_map;
char const ((*rio_get_gen_name_or_default(void const ((*ptr)), char const ((*default_name))))) {
  char const ((*name)) = rio_map_get(&(rio_gen_name_map), ptr);
  if (!(name)) {
    rio_Sym (*sym) = rio_get_resolved_sym(ptr);
    if (sym) {
      if (sym->external_name) {
        name = sym->external_name;
      } else if (sym->home_package->external_name) {
        char const ((*external_name)) = sym->home_package->external_name;
        name = rio_strf("%s%s", external_name, sym->name);
      } else {
        name = sym->name;
      }
    } else {
      assert(default_name);
      name = default_name;
    }
    rio_map_put(&(rio_gen_name_map), ptr, (void *)(name));
  }
  return name;
}

char const ((*rio_get_gen_name(void const ((*ptr))))) {
  return rio_get_gen_name_or_default(ptr, "ERROR");
}

char (*rio_typespec_to_cdecl(rio_Typespec (*typespec), char const ((*str)))) {
  if (!(typespec)) {
    return rio_strf("void%s%s", (*(str) ? " " : ""), str);
  }
  switch (typespec->kind) {
  case rio_Typespec_Name: {
    return rio_strf("%s%s%s", rio_get_gen_name(typespec), (*(str) ? " " : ""), str);
    break;
  }
  case rio_Typespec_Ptr:
  case rio_Typespec_Ref: {
    return rio_typespec_to_cdecl(typespec->base, rio_cdecl_paren(rio_strf("*%s", str), *(str)));
    break;
  }
  case rio_Typespec_Const: {
    return rio_typespec_to_cdecl(typespec->base, rio_strf("const %s", rio_cdecl_paren(str, *(str))));
    break;
  }
  case rio_Typespec_Array: {
    if ((typespec->num_elems) == (0)) {
      return rio_typespec_to_cdecl(typespec->base, rio_cdecl_paren(rio_strf("%s[]", str), *(str)));
    } else {
      return rio_typespec_to_cdecl(typespec->base, rio_cdecl_paren(rio_strf("%s[%s]", str, rio_gen_expr_str(typespec->num_elems)), *(str)));
    }
    break;
  }
  case rio_Typespec_Func: {
    char (*result) = NULL;
    rio_buf_printf(&(result), "(*%s)(", str);
    if ((typespec->function.args.length) == (0)) {
      rio_buf_printf(&(result), "void");
    } else {
      {
        rio_Slice_ref_Typespec items__ = typespec->function.args;
        for (size_t i__ = 0; i__ < items__.length; ++i__) {
          rio_Typespec (*arg) = items__.items[i__];
          size_t i = i__;
          rio_buf_printf(&(result), "%s%s", ((i) == (0) ? "" : ", "), rio_typespec_to_cdecl(arg, ""));
        }
      }
    }
    if (typespec->function.has_varargs) {
      rio_buf_printf(&(result), ", ...");
    }
    rio_buf_printf(&(result), ")");
    return rio_typespec_to_cdecl(typespec->function.ret, result);
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  return NULL;
}

void rio_gen_func_decl(rio_Decl (*decl)) {
  assert((decl->kind) == ((rio_Decl_Func)));
  char (*result) = NULL;
  rio_buf_printf(&(result), "%s(", rio_get_gen_name(decl));
  if ((decl->function.params.length) == (0)) {
    rio_buf_printf(&(result), "void");
  } else {
    {
      rio_Slice_Member items__ = decl->function.params;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_Member param = items__.items[i__];
        size_t i = i__;
        if ((i) != (0)) {
          rio_buf_printf(&(result), ", ");
        }
        rio_buf_printf(&(result), "%s", rio_typespec_to_cdecl(param.type, param.name));
      }
    }
  }
  if (decl->function.has_varargs) {
    rio_buf_printf(&(result), ", ...");
  }
  rio_buf_printf(&(result), ")");
  rio_gen_sync_pos(decl->pos);
  if (decl->function.ret_type) {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "%s", rio_typespec_to_cdecl(decl->function.ret_type, result));
  } else {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "void %s", result);
  }
}

bool rio_gen_reachable(rio_Sym (*sym)) {
  return (rio_flag_fullgen) || ((sym->reachable) == ((rio_ReachablePhase_Natural)));
}

void rio_gen_forward_decls(void) {
  for (rio_Sym (*(*it)) = rio_sorted_syms; (it) != (rio_buf_end(rio_sorted_syms, sizeof(*(rio_sorted_syms)))); (it)++) {
    rio_Sym (*sym) = *(it);
    rio_Decl (*decl) = sym->decl;
    if ((!(decl)) || (!(rio_gen_reachable(sym)))) {
      continue;
    }
    if (rio_is_decl_foreign(decl)) {
      continue;
    }
    if (decl->is_generic) {
      continue;
    }
    switch (decl->kind) {
    case rio_Decl_Struct:
    case rio_Decl_Union: {
      char const ((*name)) = rio_get_gen_name(sym);
      rio_genln();
      rio_buf_printf(&(rio_gen_buf), "typedef %s %s %s;", ((decl->aggregate->kind) == ((rio_AggregateKind_Struct)) ? "struct" : "union"), name, name);
      break;
    }
    default: {
      break;
    }
    }
  }
}

void rio_gen_aggregate_item(rio_Member (*item)) {
  if ((item->kind) == ((rio_Member_Field))) {
    rio_gen_sync_pos(item->pos);
    char (*prefix) = "";
    if ((item->type->kind) == ((rio_Typespec_Name))) {
      char const ((*gen_name)) = rio_get_gen_name(item->type);
      if ((gen_name) == (rio_void_name)) {
        prefix = "// ";
      }
    }
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "%s%s;", prefix, rio_typespec_to_cdecl(item->type, item->name));
  } else if ((item->kind) == ((rio_Member_Subaggregate))) {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "%s {", ((item->subaggregate->kind) == ((rio_AggregateKind_Struct)) ? "struct" : "union"));
    rio_gen_aggregate_items(item->subaggregate);
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "};");
  } else {
    assert("@complete if/elseif chain failed to handle case" && 0);
  }
}

void rio_gen_aggregate_items(rio_Aggregate (*aggregate)) {
  (rio_gen_indent)++;
  {
    rio_Slice_Member items__ = aggregate->members;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Member (*member) = &items__.items[i__];
      rio_gen_aggregate_item(member);
    }
  }
  (rio_gen_indent)--;
}

void rio_gen_aggregate(rio_Decl (*decl)) {
  assert(((decl->kind) == ((rio_Decl_Struct))) || ((decl->kind) == ((rio_Decl_Union))));
  if ((decl->is_incomplete) || (decl->is_generic)) {
    return;
  }
  rio_genln();
  rio_buf_printf(&(rio_gen_buf), "%s %s {", ((decl->aggregate->kind) == ((rio_AggregateKind_Struct)) ? "struct" : "union"), rio_get_gen_name(decl));
  rio_gen_aggregate_items(decl->aggregate);
  rio_genln();
  rio_buf_printf(&(rio_gen_buf), "};");
}

void rio_gen_paren_expr(rio_Expr (*expr)) {
  rio_buf_printf(&(rio_gen_buf), "(");
  rio_gen_expr(expr);
  rio_buf_printf(&(rio_gen_buf), ")");
}

void rio_gen_expr_fields(rio_Slice_CompoundField fields) {
  rio_buf_printf(&(rio_gen_buf), "{");
  {
    rio_Slice_CompoundField items__ = fields;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_CompoundField field = items__.items[i__];
      size_t i = i__;
      if (i) {
        rio_buf_printf(&(rio_gen_buf), ", ");
      }
      if ((field.kind) == ((rio_CompoundField_Name))) {
        rio_buf_printf(&(rio_gen_buf), ".%s = ", field.name);
      } else if ((field.kind) == ((rio_CompoundField_Index))) {
        rio_buf_printf(&(rio_gen_buf), "[");
        rio_gen_expr(field.index);
        rio_buf_printf(&(rio_gen_buf), "] = ");
      }
      rio_gen_expr(field.expr);
    }
  }
  if ((fields.length) == (0)) {
    rio_buf_printf(&(rio_gen_buf), "0");
  }
  rio_buf_printf(&(rio_gen_buf), "}");
}

void rio_gen_expr_compound(rio_Expr (*expr)) {
  rio_Type (*expected_type) = rio_get_resolved_expected_type(expr);
  if ((expected_type) && (!(rio_is_ptr_type(expected_type)))) {
  } else if (expr->compound.type) {
    rio_buf_printf(&(rio_gen_buf), "(%s)", rio_typespec_to_cdecl(expr->compound.type, ""));
  } else {
    rio_buf_printf(&(rio_gen_buf), "(%s)", rio_type_to_cdecl(rio_get_resolved_type(expr), ""));
  }
  rio_gen_expr_fields(expr->compound.fields);
}

char const ((*(rio_typeid_kind_names[(rio_CompilerTypeKind_Num)]))) = {[(rio_CompilerTypeKind_None)] = "TypeKind_None", [(rio_CompilerTypeKind_Void)] = "TypeKind_Void", [(rio_CompilerTypeKind_Bool)] = "TypeKind_Bool", [(rio_CompilerTypeKind_Char)] = "TypeKind_Char", [(rio_CompilerTypeKind_UChar)] = "TypeKind_UChar", [(rio_CompilerTypeKind_SChar)] = "TypeKind_SChar", [(rio_CompilerTypeKind_Short)] = "TypeKind_Short", [(rio_CompilerTypeKind_UShort)] = "TypeKind_UShort", [(rio_CompilerTypeKind_Int)] = "TypeKind_Int", [(rio_CompilerTypeKind_UInt)] = "TypeKind_UInt", [(rio_CompilerTypeKind_Long)] = "TypeKind_Long", [(rio_CompilerTypeKind_ULong)] = "TypeKind_ULong", [(rio_CompilerTypeKind_LLong)] = "TypeKind_LLong", [(rio_CompilerTypeKind_ULLong)] = "TypeKind_ULLong", [(rio_CompilerTypeKind_Float)] = "TypeKind_Float", [(rio_CompilerTypeKind_Double)] = "TypeKind_Double", [(rio_CompilerTypeKind_Const)] = "TypeKind_Const", [(rio_CompilerTypeKind_Ptr)] = "TypeKind_Ptr", [(rio_CompilerTypeKind_Ref)] = "TypeKind_Ref", [(rio_CompilerTypeKind_Array)] = "TypeKind_Array", [(rio_CompilerTypeKind_Struct)] = "TypeKind_Struct", [(rio_CompilerTypeKind_Union)] = "TypeKind_Union", [(rio_CompilerTypeKind_Func)] = "TypeKind_Func"};
char const ((*rio_typeid_kind_name(rio_Type (*type)))) {
  if ((type->kind) < ((rio_CompilerTypeKind_Num))) {
    char const ((*name)) = rio_typeid_kind_names[type->kind];
    if (name) {
      return name;
    }
  }
  return "TypeKind_None";
}

bool rio_is_excluded_typeinfo(rio_Type (*type)) {
  while ((((type->kind) == ((rio_CompilerTypeKind_Array))) || ((type->kind) == ((rio_CompilerTypeKind_Const)))) || (rio_is_ptr_type(type))) {
    type = type->base;
  }
  if (type->sym) {
    return !(rio_gen_reachable(type->sym));
  } else {
    return (!(type->sym)) && ((((type->kind) == ((rio_CompilerTypeKind_Struct))) || ((type->kind) == ((rio_CompilerTypeKind_Union)))));
  }
}

void rio_gen_typeid(rio_Type (*type)) {
  if (((type->size) == (0)) || (rio_is_excluded_typeinfo(type))) {
    rio_buf_printf(&(rio_gen_buf), "TYPEID0(%d, %s)", type->typeid, rio_typeid_kind_name(type));
  } else {
    rio_buf_printf(&(rio_gen_buf), "TYPEID(%d, %s, %s)", type->typeid, rio_typeid_kind_name(type), rio_type_to_cdecl(type, ""));
  }
}

void rio_gen_expr(rio_Expr (*expr)) {
  switch (expr->kind) {
  case rio_Expr_Paren: {
    rio_buf_printf(&(rio_gen_buf), "(");
    rio_gen_expr(expr->arg);
    rio_buf_printf(&(rio_gen_buf), ")");
    break;
  }
  case rio_Expr_Int: {
    char const ((*suffix_name)) = rio_token_suffix_names[expr->int_lit.suffix];
    switch (expr->int_lit.mod) {
    case rio_TokenMod_Bin:
    case rio_TokenMod_Hex: {
      rio_buf_printf(&(rio_gen_buf), "0x%llx%s", expr->int_lit.val, suffix_name);
      break;
    }
    case rio_TokenMod_Oct: {
      rio_buf_printf(&(rio_gen_buf), "0%llo%s", expr->int_lit.val, suffix_name);
      break;
    }
    case rio_TokenMod_Char: {
      rio_gen_char((char)(expr->int_lit.val));
      break;
    }
    default: {
      rio_buf_printf(&(rio_gen_buf), "%llu%s", expr->int_lit.val, suffix_name);
      break;
    }
    }
    break;
  }
  case rio_Expr_Float: {
    int is_double = (expr->float_lit.suffix) == ((rio_TokenSuffix_D));
    size_t len = (expr->float_lit.end) - (expr->float_lit.start);
    rio_buf_printf(&(rio_gen_buf), "%.*s%s", (is_double ? (len) - (1) : len), expr->float_lit.start, (is_double ? "" : "f"));
    break;
  }
  case rio_Expr_Str: {
    rio_gen_str(expr->str_lit.val, (expr->str_lit.mod) == ((rio_TokenMod_Multiline)));
    break;
  }
  case rio_Expr_Name: {
    rio_buf_printf(&(rio_gen_buf), "%s", rio_get_gen_name_or_default(expr, expr->name));
    break;
  }
  case rio_Expr_Cast: {
    rio_buf_printf(&(rio_gen_buf), "(%s)(", rio_typespec_to_cdecl(expr->cast.type, ""));
    rio_gen_expr(expr->cast.expr);
    rio_buf_printf(&(rio_gen_buf), ")");
    break;
  }
  case rio_Expr_Call: {
    rio_Sym (*sym) = rio_get_resolved_sym(expr->call.expr);
    if ((sym) && ((sym->kind) == ((rio_Sym_Type)))) {
      rio_buf_printf(&(rio_gen_buf), "(%s)", rio_get_gen_name(sym));
      rio_gen_expr_fields(expr->call.args);
      return;
    } else {
      rio_gen_expr(expr->call.expr);
    }
    rio_buf_printf(&(rio_gen_buf), "(");
    {
      rio_Slice_CompoundField items__ = expr->call.args;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_CompoundField (*arg) = &items__.items[i__];
        size_t i = i__;
        if (i) {
          rio_buf_printf(&(rio_gen_buf), ", ");
        }
        rio_gen_expr(arg->expr);
      }
    }
    rio_buf_printf(&(rio_gen_buf), ")");
    break;
  }
  case rio_Expr_Index: {
    rio_Type (*type) = rio_unqualify_type(rio_get_resolved_type(expr->index.expr));
    bool is_agg = rio_is_aggregate_type(rio_deref_type(type));
    rio_gen_expr(expr->index.expr);
    if (is_agg) {
      rio_buf_printf(&(rio_gen_buf), "%sitems", (rio_is_ptr_type(type) ? "->" : "."));
    }
    rio_buf_printf(&(rio_gen_buf), "[");
    rio_gen_expr(expr->index.index);
    rio_buf_printf(&(rio_gen_buf), "]");
    break;
  }
  case rio_Expr_Field: {
    rio_Sym (*sym) = rio_get_resolved_sym(expr);
    if (sym) {
      rio_buf_printf(&(rio_gen_buf), "(%s)", rio_get_gen_name(sym));
    } else {
      rio_gen_expr(expr->field.expr);
      rio_Type (*type) = rio_unqualify_type(rio_get_resolved_type(expr->field.expr));
      rio_buf_printf(&(rio_gen_buf), "%s%s", (rio_is_ptr_type(type) ? "->" : "."), expr->field.name);
    }
    break;
  }
  case rio_Expr_Compound: {
    rio_gen_expr_compound(expr);
    break;
  }
  case rio_Expr_Unary: {
    rio_buf_printf(&(rio_gen_buf), "%s(", rio_token_kind_name(expr->unary.op));
    rio_gen_expr(expr->unary.expr);
    rio_buf_printf(&(rio_gen_buf), ")");
    break;
  }
  case rio_Expr_Binary: {
    rio_buf_printf(&(rio_gen_buf), "(");
    rio_gen_expr(expr->binary.left);
    rio_buf_printf(&(rio_gen_buf), ") %s (", rio_token_kind_name(expr->binary.op));
    rio_gen_expr(expr->binary.right);
    rio_buf_printf(&(rio_gen_buf), ")");
    break;
  }
  case rio_Expr_Ternary: {
    rio_buf_printf(&(rio_gen_buf), "(");
    rio_gen_expr(expr->ternary.cond);
    rio_buf_printf(&(rio_gen_buf), " ? ");
    rio_gen_expr(expr->ternary.then_expr);
    rio_buf_printf(&(rio_gen_buf), " : ");
    rio_gen_expr(expr->ternary.else_expr);
    rio_buf_printf(&(rio_gen_buf), ")");
    break;
  }
  case rio_Expr_SizeofExpr: {
    rio_buf_printf(&(rio_gen_buf), "sizeof(");
    rio_gen_expr(expr->arg);
    rio_buf_printf(&(rio_gen_buf), ")");
    break;
  }
  case rio_Expr_SizeofType: {
    rio_buf_printf(&(rio_gen_buf), "sizeof(%s)", rio_typespec_to_cdecl(expr->type_arg, ""));
    break;
  }
  case rio_Expr_AlignofExpr: {
    rio_buf_printf(&(rio_gen_buf), "alignof(%s)", rio_type_to_cdecl(rio_get_resolved_type(expr->arg), ""));
    break;
  }
  case rio_Expr_AlignofType: {
    rio_buf_printf(&(rio_gen_buf), "alignof(%s)", rio_typespec_to_cdecl(expr->type_arg, ""));
    break;
  }
  case rio_Expr_TypeofExpr: {
    rio_Type (*type) = rio_get_resolved_type(expr->arg);
    assert(type->typeid);
    rio_gen_typeid(type);
    break;
  }
  case rio_Expr_TypeofType: {
    rio_Type (*type) = rio_get_resolved_type(expr->type_arg);
    assert(type->typeid);
    rio_gen_typeid(type);
    break;
  }
  case rio_Expr_Offsetof: {
    rio_buf_printf(&(rio_gen_buf), "offsetof(%s, %s)", rio_typespec_to_cdecl(expr->offsetof_field.type, ""), expr->offsetof_field.name);
    break;
  }
  case rio_Expr_Modify: {
    if (!(expr->modify.post)) {
      rio_buf_printf(&(rio_gen_buf), "%s", rio_token_kind_name(expr->modify.op));
    }
    rio_gen_paren_expr(expr->modify.expr);
    if (expr->modify.post) {
      rio_buf_printf(&(rio_gen_buf), "%s", rio_token_kind_name(expr->modify.op));
    }
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
}

void rio_gen_stmt_block(rio_StmtList block) {
  rio_buf_printf(&(rio_gen_buf), "{");
  (rio_gen_indent)++;
  {
    rio_Slice_ref_Stmt items__ = block.stmts;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Stmt (*stmt) = items__.items[i__];
      rio_gen_stmt(stmt);
    }
  }
  (rio_gen_indent)--;
  rio_genln();
  rio_buf_printf(&(rio_gen_buf), "}");
}

void rio_gen_simple_stmt(rio_Stmt (*stmt)) {
  switch (stmt->kind) {
  case rio_Stmt_Expr: {
    rio_gen_expr(stmt->expr);
    break;
  }
  case rio_Stmt_Init: {
    if (stmt->init.type) {
      rio_Typespec (*init_typespec) = stmt->init.type;
      if (rio_is_incomplete_array_typespec(stmt->init.type)) {
        rio_Expr (*size) = rio_new_expr_int(init_typespec->pos, rio_get_resolved_type(stmt->init.expr)->num_elems, 0, 0);
        init_typespec = rio_new_typespec_array(init_typespec->pos, init_typespec->base, size);
      }
      rio_buf_printf(&(rio_gen_buf), "%s = ", rio_typespec_to_cdecl(stmt->init.type, stmt->init.name));
      if (stmt->init.expr) {
        rio_gen_expr(stmt->init.expr);
      } else {
        rio_buf_printf(&(rio_gen_buf), "{0}");
      }
    } else {
      rio_buf_printf(&(rio_gen_buf), "%s = ", rio_type_to_cdecl(rio_unqualify_type(rio_get_resolved_type(stmt->init.expr)), stmt->init.name));
      rio_gen_expr(stmt->init.expr);
    }
    break;
  }
  case rio_Stmt_Assign: {
    rio_gen_expr(stmt->assign.left);
    rio_buf_printf(&(rio_gen_buf), " %s ", rio_token_kind_name(stmt->assign.op));
    rio_gen_expr(stmt->assign.right);
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
}

bool rio_is_char_lit(rio_Expr (*expr)) {
  return ((expr->kind) == ((rio_Expr_Int))) && ((expr->int_lit.mod) == ((rio_TokenMod_Char)));
}

void rio_gen_stmt(rio_Stmt (*stmt)) {
  rio_gen_sync_pos(stmt->pos);
  switch (stmt->kind) {
  case rio_Stmt_Return: {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "return");
    if (stmt->expr) {
      rio_buf_printf(&(rio_gen_buf), " ");
      rio_gen_expr(stmt->expr);
    }
    rio_buf_printf(&(rio_gen_buf), ";");
    break;
  }
  case rio_Stmt_Break: {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "break;");
    break;
  }
  case rio_Stmt_Continue: {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "continue;");
    break;
  }
  case rio_Stmt_Block: {
    if (stmt->block.stmts.length) {
      rio_genln();
      rio_gen_stmt_block(stmt->block);
    }
    break;
  }
  case rio_Stmt_Close: {
    break;
  }
  case rio_Stmt_Note: {
    if ((stmt->note.name) == (rio_assert_name)) {
      rio_genln();
      rio_buf_printf(&(rio_gen_buf), "assert(");
      assert((stmt->note.args.length) == (1));
      rio_gen_expr(stmt->note.args.items[0].expr);
      rio_buf_printf(&(rio_gen_buf), ");");
    }
    break;
  }
  case rio_Stmt_If: {
    if (stmt->if_stmt.init) {
      rio_genln();
      rio_buf_printf(&(rio_gen_buf), "{");
      (rio_gen_indent)++;
      rio_gen_stmt(stmt->if_stmt.init);
    }
    rio_gen_sync_pos(stmt->pos);
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "if (");
    if (stmt->if_stmt.cond) {
      rio_gen_expr(stmt->if_stmt.cond);
    } else {
      rio_buf_printf(&(rio_gen_buf), "%s", stmt->if_stmt.init->init.name);
    }
    rio_buf_printf(&(rio_gen_buf), ") ");
    rio_gen_stmt_block(stmt->if_stmt.then_block);
    {
      rio_Slice_ElseIf items__ = stmt->if_stmt.elseifs;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_ElseIf elseif = items__.items[i__];
        rio_buf_printf(&(rio_gen_buf), " else if (");
        rio_gen_expr(elseif.cond);
        rio_buf_printf(&(rio_gen_buf), ") ");
        rio_gen_stmt_block(elseif.block);
      }
    }
    if (stmt->if_stmt.else_block.stmts.length) {
      rio_buf_printf(&(rio_gen_buf), " else ");
      rio_gen_stmt_block(stmt->if_stmt.else_block);
    } else {
      rio_Note (*complete_note) = rio_get_stmt_note(stmt, rio_complete_name);
      if (complete_note) {
        rio_buf_printf(&(rio_gen_buf), " else {");
        (rio_gen_indent)++;
        rio_gen_sync_pos(complete_note->pos);
        rio_genln();
        rio_buf_printf(&(rio_gen_buf), "assert(\"@complete if/elseif chain failed to handle case\" && 0);");
        (rio_gen_indent)--;
        rio_genln();
        rio_buf_printf(&(rio_gen_buf), "}");
      }
    }
    if (stmt->if_stmt.init) {
      (rio_gen_indent)--;
      rio_genln();
      rio_buf_printf(&(rio_gen_buf), "}");
    }
    break;
  }
  case rio_Stmt_While: {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "while (");
    rio_gen_expr(stmt->while_stmt.cond);
    rio_buf_printf(&(rio_gen_buf), ") ");
    rio_gen_stmt_block(stmt->while_stmt.block);
    break;
  }
  case rio_Stmt_DoWhile: {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "do ");
    rio_gen_stmt_block(stmt->while_stmt.block);
    rio_buf_printf(&(rio_gen_buf), " while (");
    rio_gen_expr(stmt->while_stmt.cond);
    rio_buf_printf(&(rio_gen_buf), ");");
    break;
  }
  case rio_Stmt_ForEach: {
    rio_Expr (*expr) = stmt->for_each.expr;
    rio_DeclFunc (*func) = &(stmt->for_each.func);
    rio_Member (*item) = {0};
    if (func->params.length) {
      item = &(func->params.items[0]);
    }
    char (*index) = "i__";
    rio_StmtList (*block) = &(func->block);
    rio_Type (*items_type) = rio_get_resolved_type_orig(expr);
    int is_array = (items_type->kind) == ((rio_CompilerTypeKind_Array));
    int is_ptr = (!(is_array)) && (rio_is_ptr_type(rio_get_resolved_type(expr)));
    size_t array_length = (is_array ? items_type->num_elems : 0);
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "{");
    ++(rio_gen_indent);
    char (*items) = "items__";
    rio_gen_stmt(&((rio_Stmt){(rio_Stmt_Init), .init = {.expr = expr, .name = items}, .pos = expr->pos}));
    rio_genln();
    char (*access) = (is_ptr ? "->" : ".");
    char (*length_decl) = ((stmt->for_each.length_type) == (rio_type_usize) ? "size_t" : rio_type_to_cdecl(stmt->for_each.length_type, ""));
    rio_buf_printf(&(rio_gen_buf), "for (%s %s = 0; %s < ", length_decl, index, index);
    if (is_array) {
      rio_buf_printf(&(rio_gen_buf), "%zu", array_length);
    } else {
      rio_buf_printf(&(rio_gen_buf), "%s%slength", items, access);
    }
    rio_buf_printf(&(rio_gen_buf), "; ++%s) {", index);
    ++(rio_gen_indent);
    if (item) {
      rio_genln();
      rio_buf_printf(&(rio_gen_buf), "%s = %s%s%s%s[%s];", rio_type_to_cdecl(rio_get_resolved_type(item), item->name), (stmt->for_each.get_ref ? "&" : ""), items, (is_array ? "" : access), (is_array ? "" : "items"), index);
    }
    if ((func->params.length) > (1)) {
      rio_genln();
      rio_buf_printf(&(rio_gen_buf), "%s %s = %s;", length_decl, func->params.items[1].name, index);
    }
    {
      rio_Slice_ref_Stmt items__ = block->stmts;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_Stmt (*stmt) = items__.items[i__];
        rio_gen_stmt(stmt);
      }
    }
    --(rio_gen_indent);
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "}");
    --(rio_gen_indent);
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "}");
    break;
  }
  case rio_Stmt_For: {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "for (");
    if (stmt->for_stmt.init) {
      rio_gen_simple_stmt(stmt->for_stmt.init);
    }
    rio_buf_printf(&(rio_gen_buf), ";");
    if (stmt->for_stmt.cond) {
      rio_buf_printf(&(rio_gen_buf), " ");
      rio_gen_expr(stmt->for_stmt.cond);
    }
    rio_buf_printf(&(rio_gen_buf), ";");
    if (stmt->for_stmt.next) {
      rio_buf_printf(&(rio_gen_buf), " ");
      rio_gen_simple_stmt(stmt->for_stmt.next);
    }
    rio_buf_printf(&(rio_gen_buf), ") ");
    rio_gen_stmt_block(stmt->for_stmt.block);
    break;
  }
  case rio_Stmt_Switch: {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "switch (");
    rio_gen_expr(stmt->switch_stmt.expr);
    rio_buf_printf(&(rio_gen_buf), ") {");
    bool has_default = false;
    {
      rio_Slice_SwitchCase items__ = stmt->switch_stmt.cases;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_SwitchCase switch_case = items__.items[i__];
        {
          rio_Slice_SwitchCasePattern items__ = switch_case.patterns;
          for (size_t i__ = 0; i__ < items__.length; ++i__) {
            rio_SwitchCasePattern pattern = items__.items[i__];
            if (pattern.is_default) {
              has_default = true;
              rio_genln();
              rio_buf_printf(&(rio_gen_buf), "default:");
            } else if (pattern.end) {
              rio_Val start_val = rio_get_resolved_val(pattern.start);
              rio_Val end_val = rio_get_resolved_val(pattern.end);
              if ((rio_is_char_lit(pattern.start)) && (rio_is_char_lit(pattern.end))) {
                rio_genln();
                for (int c = (int)(start_val.ll); (c) <= ((int)(end_val.ll)); (c)++) {
                  rio_buf_printf(&(rio_gen_buf), "case ");
                  rio_gen_char(c);
                  rio_buf_printf(&(rio_gen_buf), ": ");
                }
              } else {
                rio_genln();
                rio_buf_printf(&(rio_gen_buf), "// ");
                rio_gen_expr(pattern.start);
                rio_buf_printf(&(rio_gen_buf), "...");
                rio_gen_expr(pattern.end);
                rio_genln();
                for (llong ll = start_val.ll; (ll) <= (end_val.ll); (ll)++) {
                  rio_buf_printf(&(rio_gen_buf), "case %lld: ", ll);
                }
              }
            } else {
              rio_genln();
              rio_buf_printf(&(rio_gen_buf), "case ");
              rio_gen_expr(pattern.start);
              rio_buf_printf(&(rio_gen_buf), ":");
            }
          }
        }
        rio_buf_printf(&(rio_gen_buf), " ");
        rio_buf_printf(&(rio_gen_buf), "{");
        (rio_gen_indent)++;
        rio_StmtList (*block) = &(switch_case.block);
        if ((block->stmts.length) == (1)) {
          rio_Stmt (*first) = block->stmts.items[0];
          if ((first->kind) == ((rio_Stmt_Block))) {
            block = &(first->block);
          }
        }
        {
          rio_Slice_ref_Stmt items__ = block->stmts;
          for (size_t i__ = 0; i__ < items__.length; ++i__) {
            rio_Stmt (*stmt) = items__.items[i__];
            rio_gen_stmt(stmt);
          }
        }
        rio_genln();
        rio_buf_printf(&(rio_gen_buf), "break;");
        (rio_gen_indent)--;
        rio_genln();
        rio_buf_printf(&(rio_gen_buf), "}");
      }
    }
    if (!(has_default)) {
      rio_Note (*note) = rio_get_stmt_note(stmt, rio_complete_name);
      if (note) {
        rio_genln();
        rio_buf_printf(&(rio_gen_buf), "default:");
        (rio_gen_indent)++;
        rio_genln();
        rio_buf_printf(&(rio_gen_buf), "assert(\"@complete switch failed to handle case\" && 0);");
        rio_genln();
        rio_buf_printf(&(rio_gen_buf), "break;");
        (rio_gen_indent)--;
      }
    }
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "}");
    break;
  }
  case rio_Stmt_Label: {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "%s: ;", stmt->label);
    break;
  }
  case rio_Stmt_Goto: {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "goto %s;", stmt->label);
    break;
  }
  default: {
    rio_genln();
    rio_gen_simple_stmt(stmt);
    rio_buf_printf(&(rio_gen_buf), ";");
    break;
  }
  }
}

void rio_gen_decl(rio_Sym (*sym)) {
  rio_Decl (*decl) = sym->decl;
  if ((!(decl)) || (rio_is_decl_foreign(decl))) {
    return;
  }
  rio_gen_sync_pos(decl->pos);
  switch (decl->kind) {
  case rio_Decl_Const: {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "#define %s (", rio_get_gen_name(sym));
    if (decl->const_decl.type) {
      rio_buf_printf(&(rio_gen_buf), "(%s)(", rio_typespec_to_cdecl(decl->const_decl.type, ""));
    }
    rio_gen_expr(decl->const_decl.expr);
    if (decl->const_decl.type) {
      rio_buf_printf(&(rio_gen_buf), ")");
    }
    rio_buf_printf(&(rio_gen_buf), ")");
    break;
  }
  case rio_Decl_Var: {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "extern ");
    if ((decl->var_decl.type) && (!(rio_is_incomplete_array_typespec(decl->var_decl.type)))) {
      rio_buf_printf(&(rio_gen_buf), "%s", rio_typespec_to_cdecl(decl->var_decl.type, rio_get_gen_name(sym)));
    } else {
      rio_buf_printf(&(rio_gen_buf), "%s", rio_type_to_cdecl(sym->type, rio_get_gen_name(sym)));
    }
    rio_buf_printf(&(rio_gen_buf), ";");
    break;
  }
  case rio_Decl_Func: {
    if (!(decl->is_generic)) {
      rio_gen_func_decl(decl);
      rio_buf_printf(&(rio_gen_buf), ";");
    }
    break;
  }
  case rio_Decl_Struct:
  case rio_Decl_Union: {
    rio_gen_aggregate(decl);
    break;
  }
  case rio_Decl_Typedef: {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "typedef %s;", rio_typespec_to_cdecl(decl->typedef_decl.val, rio_get_gen_name(sym)));
    break;
  }
  case rio_Decl_Enum: {
    if (decl->enum_decl.type) {
      rio_genln();
      rio_buf_printf(&(rio_gen_buf), "typedef %s;", rio_typespec_to_cdecl(decl->enum_decl.type, rio_get_gen_name(decl)));
    } else {
      rio_genln();
      rio_buf_printf(&(rio_gen_buf), "typedef int %s;", rio_get_gen_name(decl));
    }
    break;
  }
  case rio_Decl_Import: {
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  rio_genln();
}

void rio_gen_sorted_decls(void) {
  for (size_t i = 0; (i) < (rio_buf_len(rio_sorted_syms)); (i)++) {
    if ((rio_sorted_syms[i]->reachable) == ((rio_ReachablePhase_Natural))) {
      rio_gen_decl(rio_sorted_syms[i]);
    }
  }
}

void rio_gen_defs(void) {
  for (rio_Sym (*(*it)) = rio_sorted_syms; (it) != (rio_buf_end(rio_sorted_syms, sizeof(*(rio_sorted_syms)))); (it)++) {
    rio_Sym (*sym) = *(it);
    rio_Decl (*decl) = sym->decl;
    if ((((((sym->state) != ((rio_SymState_Resolved))) || (!(decl))) || (rio_is_decl_foreign(decl))) || (decl->is_incomplete)) || ((sym->reachable) != ((rio_ReachablePhase_Natural)))) {
      continue;
    }
    if ((decl->kind) == ((rio_Decl_Func))) {
      if (!(decl->is_generic)) {
        rio_gen_func_decl(decl);
        rio_buf_printf(&(rio_gen_buf), " ");
        rio_gen_stmt_block(decl->function.block);
        rio_genln();
      }
    } else if ((decl->kind) == ((rio_Decl_Var))) {
      if ((decl->var_decl.type) && (!(rio_is_incomplete_array_typespec(decl->var_decl.type)))) {
        rio_genln();
        rio_buf_printf(&(rio_gen_buf), "%s", rio_typespec_to_cdecl(decl->var_decl.type, rio_get_gen_name(sym)));
      } else {
        rio_genln();
        rio_buf_printf(&(rio_gen_buf), "%s", rio_type_to_cdecl(sym->type, rio_get_gen_name(sym)));
      }
      if (decl->var_decl.expr) {
        rio_buf_printf(&(rio_gen_buf), " = ");
        rio_gen_expr(decl->var_decl.expr);
      }
      rio_buf_printf(&(rio_gen_buf), ";");
    }
  }
}

rio_Map rio_gen_foreign_headers_map;
char const ((*(*rio_gen_foreign_headers_buf)));
void rio_add_foreign_header(char const ((*name))) {
  name = rio_str_intern(name);
  if (!(rio_map_get(&(rio_gen_foreign_headers_map), name))) {
    rio_map_put(&(rio_gen_foreign_headers_map), name, (void *)(1));
    rio_buf_push2_ptr_const_char(&(rio_gen_foreign_headers_buf), &(name));
  }
}

char const ((*(*rio_gen_foreign_sources_buf)));
void rio_add_foreign_source(char const ((*name))) {
  char const ((*interned)) = rio_str_intern(name);
  rio_buf_push2_ptr_const_char(&(rio_gen_foreign_headers_buf), &(interned));
}

void rio_gen_include(char const ((*path))) {
  rio_genln();
  rio_buf_printf(&(rio_gen_buf), "#include ");
  if ((*(path)) == ('<')) {
    rio_buf_printf(&(rio_gen_buf), "%s", path);
  } else {
    rio_gen_str(path, false);
  }
}

void rio_gen_foreign_headers(void) {
  if (rio_gen_foreign_headers_buf) {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "// Foreign header files");
    for (size_t i = 0; (i) < (rio_buf_len(rio_gen_foreign_headers_buf)); (i)++) {
      rio_gen_include(rio_gen_foreign_headers_buf[i]);
    }
  }
}

void rio_gen_foreign_sources(void) {
  for (size_t i = 0; (i) < (rio_buf_len(rio_gen_foreign_sources_buf)); (i)++) {
    rio_gen_include(rio_gen_foreign_sources_buf[i]);
  }
}

char const ((*(*rio_gen_sources_buf)));
void rio_put_include_path(char (path[MAX_PATH]), rio_Package (*package), char const ((*filename))) {
  if ((*(filename)) == ('<')) {
    rio_path_copy(path, filename);
  } else {
    rio_path_copy(path, package->full_path);
    rio_path_join(path, filename);
    rio_path_absolute(path);
  }
}

char (*rio_gen_preamble_buf);
char (*rio_gen_postamble_buf);
void rio_preprocess_package(rio_Package (*package)) {
  if (!(package->external_name)) {
    char (*external_name) = NULL;
    for (char const ((*ptr)) = package->path; *(ptr); (ptr)++) {
      rio_buf_printf(&(external_name), "%c", ((*(ptr)) == ('/') ? '_' : *(ptr)));
    }
    rio_buf_printf(&(external_name), "_");
    package->external_name = rio_str_intern(external_name);
  }
  char const ((*header_name)) = rio_str_intern("header");
  char const ((*source_name)) = rio_str_intern("source");
  char const ((*preamble_name)) = rio_str_intern("preamble");
  char const ((*postamble_name)) = rio_str_intern("postamble");
  {
    rio_Slice_ref_Decl items__ = package->decls;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Decl (*decl) = items__.items[i__];
      if ((decl->kind) != ((rio_Decl_Note))) {
        continue;
      }
      rio_Note note = decl->note;
      if ((note.name) == (rio_foreign_name)) {
        {
          rio_Slice_NoteArg items__ = note.args;
          for (size_t i__ = 0; i__ < items__.length; ++i__) {
            rio_NoteArg arg = items__.items[i__];
            rio_Expr (*expr) = arg.expr;
            if ((expr->kind) != ((rio_Expr_Str))) {
              rio_fatal_error(decl->pos, "#foreign argument must be a string");
            }
            char const ((*str)) = expr->str_lit.val;
            if ((arg.name) == (header_name)) {
              char (path[MAX_PATH]) = {0};
              rio_put_include_path(path, package, str);
              rio_add_foreign_header(path);
            } else if ((arg.name) == (source_name)) {
              char (path[MAX_PATH]) = {0};
              rio_put_include_path(path, package, str);
              rio_add_foreign_source(path);
            } else if ((arg.name) == (preamble_name)) {
              rio_buf_printf(&(rio_gen_preamble_buf), "%s\n", str);
            } else if ((arg.name) == (postamble_name)) {
              rio_buf_printf(&(rio_gen_postamble_buf), "%s\n", str);
            } else {
              rio_fatal_error(decl->pos, "Unknown #foreign named argument \'%s\'", arg.name);
            }
          }
        }
      }
    }
  }
}

void rio_preprocess_packages(void) {
  for (size_t i = 0; (i) < (rio_buf_len(rio_package_list)); (i)++) {
    rio_preprocess_package(rio_package_list[i]);
  }
}

void rio_gen_typeinfo_header(char const ((*kind)), rio_Type (*type)) {
  if ((rio_type_sizeof(type)) == (0)) {
    rio_buf_printf(&(rio_gen_buf), "&(TypeInfo){%s, .size = 0, .align = 0", kind);
  } else {
    char (*ctype) = rio_type_to_cdecl(type, "");
    rio_buf_printf(&(rio_gen_buf), "&(TypeInfo){%s, .size = sizeof(%s), .align = alignof(%s)", kind, ctype, ctype);
  }
}

void rio_gen_typeinfo_fields(rio_Type (*type)) {
  (rio_gen_indent)++;
  {
    rio_Slice_TypeField items__ = type->aggregate.fields;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_TypeField field = items__.items[i__];
      rio_genln();
      rio_buf_printf(&(rio_gen_buf), "{");
      rio_gen_str(field.name, false);
      rio_buf_printf(&(rio_gen_buf), ", .type = ");
      rio_gen_typeid(field.type);
      if (!(rio_is_generic_type(type))) {
        rio_buf_printf(&(rio_gen_buf), ", .offset = offsetof(%s, %s)", rio_get_gen_name(type->sym), field.name);
      }
      rio_buf_printf(&(rio_gen_buf), "},");
    }
  }
  (rio_gen_indent)--;
}

void rio_gen_typeinfo_case(char (*(*buf)), char const ((*item_name)), char const ((*type_name))) {
  rio_buf_printf(buf, "&(TypeInfo){%s, .size = sizeof(%s), .align = sizeof(%s), .name = ", item_name, type_name, type_name);
  rio_gen_str(type_name, false);
  rio_buf_printf(buf, "},");
}

void rio_gen_typeinfo(rio_Type (*type)) {
  switch (type->kind) {
  case rio_CompilerTypeKind_Bool: {
    rio_gen_typeinfo_case(&(rio_gen_buf), "TypeKind_Bool", "bool");
    break;
  }
  case rio_CompilerTypeKind_Char: {
    rio_gen_typeinfo_case(&(rio_gen_buf), "TypeKind_Char", "char");
    break;
  }
  case rio_CompilerTypeKind_UChar: {
    rio_gen_typeinfo_case(&(rio_gen_buf), "TypeKind_UChar", "uchar");
    break;
  }
  case rio_CompilerTypeKind_SChar: {
    rio_gen_typeinfo_case(&(rio_gen_buf), "TypeKind_SChar", "schar");
    break;
  }
  case rio_CompilerTypeKind_Short: {
    rio_gen_typeinfo_case(&(rio_gen_buf), "TypeKind_Short", "short");
    break;
  }
  case rio_CompilerTypeKind_UShort: {
    rio_gen_typeinfo_case(&(rio_gen_buf), "TypeKind_UShort", "ushort");
    break;
  }
  case rio_CompilerTypeKind_Int: {
    rio_gen_typeinfo_case(&(rio_gen_buf), "TypeKind_Int", "int");
    break;
  }
  case rio_CompilerTypeKind_UInt: {
    rio_gen_typeinfo_case(&(rio_gen_buf), "TypeKind_UInt", "uint");
    break;
  }
  case rio_CompilerTypeKind_Long: {
    rio_gen_typeinfo_case(&(rio_gen_buf), "TypeKind_Long", "long");
    break;
  }
  case rio_CompilerTypeKind_ULong: {
    rio_gen_typeinfo_case(&(rio_gen_buf), "TypeKind_ULong", "ulong");
    break;
  }
  case rio_CompilerTypeKind_LLong: {
    rio_gen_typeinfo_case(&(rio_gen_buf), "TypeKind_LLong", "llong");
    break;
  }
  case rio_CompilerTypeKind_ULLong: {
    rio_gen_typeinfo_case(&(rio_gen_buf), "TypeKind_ULLong", "ullong");
    break;
  }
  case rio_CompilerTypeKind_Float: {
    rio_gen_typeinfo_case(&(rio_gen_buf), "TypeKind_Float", "float");
    break;
  }
  case rio_CompilerTypeKind_Double: {
    rio_gen_typeinfo_case(&(rio_gen_buf), "TypeKind_Double", "double");
    break;
  }
  case rio_CompilerTypeKind_Void: {
    rio_buf_printf(&(rio_gen_buf), "&(TypeInfo){TypeKind_Void, .name = \"void\", .size = 0, .align = 0},");
    break;
  }
  case rio_CompilerTypeKind_Ptr: {
    rio_buf_printf(&(rio_gen_buf), "&(TypeInfo){TypeKind_Ptr, .size = sizeof(void *), .align = alignof(void *), .base = ");
    rio_gen_typeid(type->base);
    rio_buf_printf(&(rio_gen_buf), "},");
    break;
  }
  case rio_CompilerTypeKind_Ref: {
    rio_buf_printf(&(rio_gen_buf), "&(TypeInfo){TypeKind_Ref, .size = sizeof(void *), .align = alignof(void *), .base = ");
    rio_gen_typeid(type->base);
    rio_buf_printf(&(rio_gen_buf), "},");
    break;
  }
  case rio_CompilerTypeKind_Const: {
    rio_gen_typeinfo_header("TypeKind_Const", type);
    rio_buf_printf(&(rio_gen_buf), ", .base = ");
    rio_gen_typeid(type->base);
    rio_buf_printf(&(rio_gen_buf), "},");
    break;
  }
  case rio_CompilerTypeKind_Array: {
    if (rio_is_incomplete_array_type(type)) {
      rio_buf_printf(&(rio_gen_buf), "NULL, // Incomplete array type");
    } else {
      rio_gen_typeinfo_header("TypeKind_Array", type);
      rio_buf_printf(&(rio_gen_buf), ", .base = ");
      rio_gen_typeid(type->base);
      rio_buf_printf(&(rio_gen_buf), ", .count = %d},", type->num_elems);
    }
    break;
  }
  case rio_CompilerTypeKind_Struct:
  case rio_CompilerTypeKind_Union: {
    rio_gen_typeinfo_header(((type->kind) == ((rio_CompilerTypeKind_Struct)) ? "TypeKind_Struct" : "TypeKind_Union"), type);
    rio_buf_printf(&(rio_gen_buf), ", .name = ");
    rio_gen_str(rio_get_gen_name(type->sym), false);
    rio_buf_printf(&(rio_gen_buf), ", .fields = {(TypeFieldInfo[]) {");
    rio_gen_typeinfo_fields(type);
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "}, %d}},", type->aggregate.fields.length);
    break;
  }
  case rio_CompilerTypeKind_Func: {
    rio_buf_printf(&(rio_gen_buf), "NULL, // Function");
    break;
  }
  case rio_CompilerTypeKind_Enum: {
    rio_buf_printf(&(rio_gen_buf), "NULL, // Enum");
    break;
  }
  case rio_CompilerTypeKind_Incomplete: {
    rio_buf_printf(&(rio_gen_buf), "NULL, // Incomplete: %s", rio_get_gen_name(type->sym));
    break;
  }
  default: {
    rio_buf_printf(&(rio_gen_buf), "NULL, // Unhandled");
    break;
  }
  }
}

void rio_gen_typeinfos(void) {
  rio_genln();
  rio_buf_printf(&(rio_gen_buf), "#define TYPEID0(index, kind) ((ullong)(index) | ((ullong)(kind) << 24))");
  rio_genln();
  rio_buf_printf(&(rio_gen_buf), "#define TYPEID(index, kind, ...) ((ullong)(index) | ((ullong)sizeof(__VA_ARGS__) << 32) | ((ullong)(kind) << 24))");
  rio_genln();
  if (rio_flag_notypeinfo) {
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "int num_typeinfos;");
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "const TypeInfo **typeinfos;");
  } else {
    int num_typeinfos = rio_next_typeid;
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "const TypeInfo *typeinfo_table[%d] = {", num_typeinfos);
    (rio_gen_indent)++;
    for (int typeid = 0; (typeid) < (num_typeinfos); (typeid)++) {
      rio_genln();
      rio_buf_printf(&(rio_gen_buf), "[%d] = ", typeid);
      rio_Type (*type) = rio_get_type_from_typeid(typeid);
      if ((type) && (!(rio_is_excluded_typeinfo(type)))) {
        rio_gen_typeinfo(type);
      } else {
        rio_buf_printf(&(rio_gen_buf), "NULL, // No associated type");
      }
    }
    (rio_gen_indent)--;
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "};");
    rio_genln();
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "int num_typeinfos = %d;", num_typeinfos);
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "const TypeInfo **typeinfos = (const TypeInfo **)typeinfo_table;");
  }
}

void rio_gen_package_external_names(void) {
  for (size_t i = 0; (i) < (rio_buf_len(rio_package_list)); (i)++) {
  }
}

void rio_gen_preamble(void) {
  rio_buf_printf(&(rio_gen_buf), "%s", rio_gen_preamble_str);
  if (rio_gen_preamble_buf) {
    rio_genln();
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "// Foreign preamble");
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "%s", rio_gen_preamble_buf);
  }
}

void rio_gen_postamble(void) {
  rio_buf_printf(&(rio_gen_buf), "%s", rio_gen_postamble_str);
  if (rio_gen_postamble_buf) {
    rio_genln();
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "// Foreign postamble");
    rio_genln();
    rio_buf_printf(&(rio_gen_buf), "%s", rio_gen_postamble_buf);
  }
}

void rio_gen_all(void) {
  rio_preprocess_packages();
  rio_gen_buf = NULL;
  rio_gen_preamble();
  rio_gen_foreign_headers();
  rio_genln();
  rio_genln();
  rio_buf_printf(&(rio_gen_buf), "// Forward declarations");
  rio_gen_forward_decls();
  rio_genln();
  rio_genln();
  rio_buf_printf(&(rio_gen_buf), "// Sorted declarations");
  rio_gen_sorted_decls();
  rio_genln();
  rio_buf_printf(&(rio_gen_buf), "// Typeinfo");
  rio_gen_typeinfos();
  rio_genln();
  rio_genln();
  rio_buf_printf(&(rio_gen_buf), "// Definitions");
  rio_gen_defs();
  rio_genln();
  rio_buf_printf(&(rio_gen_buf), "// Foreign source files");
  rio_gen_foreign_sources();
  rio_genln();
  rio_gen_postamble();
}

char const ((*rio_typedef_keyword));
char const ((*rio_enum_keyword));
char const ((*rio_struct_keyword));
char const ((*rio_union_keyword));
char const ((*rio_let_keyword));
char const ((*rio_mut_keyword));
char const ((*rio_own_keyword));
char const ((*rio_const_keyword));
char const ((*rio_def_keyword));
char const ((*rio_sizeof_keyword));
char const ((*rio_alignof_keyword));
char const ((*rio_typeof_keyword));
char const ((*rio_offsetof_keyword));
char const ((*rio_break_keyword));
char const ((*rio_continue_keyword));
char const ((*rio_return_keyword));
char const ((*rio_if_keyword));
char const ((*rio_else_keyword));
char const ((*rio_while_keyword));
char const ((*rio_do_keyword));
char const ((*rio_for_keyword));
char const ((*rio_switch_keyword));
char const ((*rio_case_keyword));
char const ((*rio_default_keyword));
char const ((*rio_import_keyword));
char const ((*rio_goto_keyword));
char const ((*rio_first_keyword));
char const ((*rio_last_keyword));
char const ((*(*rio_keywords)));
char const ((*rio_as_name));
char const ((*rio_always_name));
char const ((*rio_foreign_name));
char const ((*rio_unscoped_name));
char const ((*rio_complete_name));
char const ((*rio_assert_name));
char const ((*rio_declare_note_name));
char const ((*rio_static_assert_name));
char const ((*rio_void_name));
char const ((*rio_init_keyword(char const ((*keyword))))) {
  keyword = rio_str_intern(keyword);
  rio_buf_push((void (**))(&(rio_keywords)), (void *)(&(keyword)), sizeof(keyword));
  return keyword;
}

bool rio_keywords_inited = false;
void rio_init_keywords(void) {
  if (rio_keywords_inited) {
    return;
  }
  rio_typedef_keyword = rio_init_keyword("typedef");
  char (*arena_end) = rio_intern_arena.end;
  rio_enum_keyword = rio_init_keyword("enum");
  rio_struct_keyword = rio_init_keyword("struct");
  rio_union_keyword = rio_init_keyword("union");
  rio_const_keyword = rio_init_keyword("const");
  rio_let_keyword = rio_init_keyword("let");
  rio_mut_keyword = rio_init_keyword("mut");
  rio_own_keyword = rio_init_keyword("own");
  rio_def_keyword = rio_init_keyword("def");
  rio_import_keyword = rio_init_keyword("import");
  rio_goto_keyword = rio_init_keyword("goto");
  rio_sizeof_keyword = rio_init_keyword("sizeof");
  rio_alignof_keyword = rio_init_keyword("alignof");
  rio_typeof_keyword = rio_init_keyword("typeof");
  rio_offsetof_keyword = rio_init_keyword("offsetof");
  rio_break_keyword = rio_init_keyword("break");
  rio_continue_keyword = rio_init_keyword("continue");
  rio_return_keyword = rio_init_keyword("return");
  rio_if_keyword = rio_init_keyword("if");
  rio_else_keyword = rio_init_keyword("else");
  rio_while_keyword = rio_init_keyword("while");
  rio_do_keyword = rio_init_keyword("do");
  rio_for_keyword = rio_init_keyword("for");
  rio_switch_keyword = rio_init_keyword("switch");
  rio_case_keyword = rio_init_keyword("case");
  rio_default_keyword = rio_init_keyword("default");
  assert((rio_intern_arena.end) == (arena_end));
  rio_first_keyword = rio_typedef_keyword;
  rio_last_keyword = rio_default_keyword;
  rio_as_name = rio_str_intern("as");
  rio_always_name = rio_str_intern("always");
  rio_foreign_name = rio_str_intern("foreign");
  rio_unscoped_name = rio_str_intern("unscoped");
  rio_complete_name = rio_str_intern("complete");
  rio_assert_name = rio_str_intern("assert");
  rio_declare_note_name = rio_str_intern("declare_note");
  rio_static_assert_name = rio_str_intern("static_assert");
  rio_void_name = rio_str_intern("void");
  rio_keywords_inited = true;
}

bool rio_is_keyword_name(char const ((*name))) {
  return ((rio_first_keyword) <= (name)) && ((name) <= (rio_last_keyword));
}

char const ((*(rio_token_suffix_names[7]))) = {[(rio_TokenSuffix_None)] = "", [(rio_TokenSuffix_D)] = "d", [(rio_TokenSuffix_U)] = "u", [(rio_TokenSuffix_L)] = "l", [(rio_TokenSuffix_UL)] = "ul", [(rio_TokenSuffix_LL)] = "ll", [(rio_TokenSuffix_ULL)] = "ull"};
char const ((*(rio_token_kind_names[63]))) = {[(rio_TokenKind_Eof)] = "EOF", [(rio_TokenKind_Colon)] = ":", [(rio_TokenKind_Arrow)] = "->", [(rio_TokenKind_Spear)] = "=>", [(rio_TokenKind_Lparen)] = "(", [(rio_TokenKind_Rparen)] = ")", [(rio_TokenKind_Lbrace)] = "{", [(rio_TokenKind_Rbrace)] = "}", [(rio_TokenKind_Lbracket)] = "[", [(rio_TokenKind_Rbracket)] = "]", [(rio_TokenKind_Comma)] = ",", [(rio_TokenKind_Dot)] = ".", [(rio_TokenKind_At)] = "@", [(rio_TokenKind_Pound)] = "#", [(rio_TokenKind_Ellipsis)] = "...", [(rio_TokenKind_Question)] = "?", [(rio_TokenKind_Semicolon)] = ";", [(rio_TokenKind_Keyword)] = "keyword", [(rio_TokenKind_Int)] = "int", [(rio_TokenKind_Float)] = "float", [(rio_TokenKind_Str)] = "string", [(rio_TokenKind_Name)] = "name", [(rio_TokenKind_Neg)] = "~", [(rio_TokenKind_Not)] = "!", [(rio_TokenKind_Mul)] = "*", [(rio_TokenKind_Div)] = "/", [(rio_TokenKind_Mod)] = "%", [(rio_TokenKind_And)] = "&", [(rio_TokenKind_Lshift)] = "<<", [(rio_TokenKind_Rshift)] = ">>", [(rio_TokenKind_Add)] = "+", [(rio_TokenKind_Sub)] = "-", [(rio_TokenKind_Or)] = "|", [(rio_TokenKind_Xor)] = "^", [(rio_TokenKind_Eq)] = "==", [(rio_TokenKind_NotEq)] = "!=", [(rio_TokenKind_Lt)] = "<", [(rio_TokenKind_Gt)] = ">", [(rio_TokenKind_LtEq)] = "<=", [(rio_TokenKind_GtEq)] = ">=", [(rio_TokenKind_AndAnd)] = "&&", [(rio_TokenKind_OrOr)] = "||", [(rio_TokenKind_Assign)] = "=", [(rio_TokenKind_AddAssign)] = "+=", [(rio_TokenKind_SubAssign)] = "-=", [(rio_TokenKind_OrAssign)] = "|=", [(rio_TokenKind_AndAssign)] = "&=", [(rio_TokenKind_XorAssign)] = "^=", [(rio_TokenKind_MulAssign)] = "*=", [(rio_TokenKind_DivAssign)] = "/=", [(rio_TokenKind_ModAssign)] = "%=", [(rio_TokenKind_LshiftAssign)] = "<<=", [(rio_TokenKind_RshiftAssign)] = ">>=", [(rio_TokenKind_Inc)] = "++", [(rio_TokenKind_Dec)] = "--"};
char const ((*rio_token_kind_name(rio_TokenKind kind))) {
  if ((kind) < ((sizeof(rio_token_kind_names)) / (sizeof(*(rio_token_kind_names))))) {
    return rio_token_kind_names[kind];
  } else {
    return "<unknown>";
  }
}

rio_TokenKind (rio_assign_token_to_binary_token[(rio_TokenKind_Num)]) = {[(rio_TokenKind_AddAssign)] = (rio_TokenKind_Add), [(rio_TokenKind_SubAssign)] = (rio_TokenKind_Sub), [(rio_TokenKind_OrAssign)] = (rio_TokenKind_Or), [(rio_TokenKind_AndAssign)] = (rio_TokenKind_And), [(rio_TokenKind_XorAssign)] = (rio_TokenKind_Xor), [(rio_TokenKind_LshiftAssign)] = (rio_TokenKind_Lshift), [(rio_TokenKind_RshiftAssign)] = (rio_TokenKind_Rshift), [(rio_TokenKind_MulAssign)] = (rio_TokenKind_Mul), [(rio_TokenKind_DivAssign)] = (rio_TokenKind_Div), [(rio_TokenKind_ModAssign)] = (rio_TokenKind_Mod)};
rio_SrcPos rio_pos_builtin = {.name = "<builtin>"};
rio_Token rio_token;
char const ((*rio_stream));
char const ((*rio_line_start));
void rio_vnotice(char const ((*level)), rio_SrcPos pos, char const ((*fmt)), va_list args) {
  if ((pos.name) == (NULL)) {
    pos = rio_pos_builtin;
  }
  printf("%s(%d): %s: ", pos.name, pos.line, level);
  vprintf(fmt, args);
  printf("\n");
}

void rio_warning(rio_SrcPos pos, char const ((*fmt)), ...) {
  va_list args = {0};
  va_start_ptr(&(args), &(fmt));
  rio_vnotice("warning", pos, fmt, args);
  va_end_ptr(&(args));
}

void rio_verror(rio_SrcPos pos, char const ((*fmt)), va_list args) {
  rio_vnotice("error", pos, fmt, args);
}

void rio_error(rio_SrcPos pos, char const ((*fmt)), ...) {
  va_list args = {0};
  va_start_ptr(&(args), &(fmt));
  rio_verror(pos, fmt, args);
  va_end_ptr(&(args));
}

void rio_fatal_error(rio_SrcPos pos, char const ((*fmt)), ...) {
  va_list args = {0};
  va_start_ptr(&(args), &(fmt));
  rio_verror(pos, fmt, args);
  va_end_ptr(&(args));
  exit(1);
}

char const ((*rio_token_info(void))) {
  if (((rio_token.kind) == ((rio_TokenKind_Name))) || ((rio_token.kind) == ((rio_TokenKind_Keyword)))) {
    return rio_token.name;
  } else {
    return rio_token_kind_name(rio_token.kind);
  }
}

uint8_t (rio_char_to_digit[256]) = {['0'] = 0, ['1'] = 1, ['2'] = 2, ['3'] = 3, ['4'] = 4, ['5'] = 5, ['6'] = 6, ['7'] = 7, ['8'] = 8, ['9'] = 9, ['a'] = 10, ['A'] = 10, ['b'] = 11, ['B'] = 11, ['c'] = 12, ['C'] = 12, ['d'] = 13, ['D'] = 13, ['e'] = 14, ['E'] = 14, ['f'] = 15, ['F'] = 15};
void rio_scan_int(void) {
  int base = 10;
  char const ((*start_digits)) = rio_stream;
  if ((*(rio_stream)) == ('0')) {
    (rio_stream)++;
    if ((tolower(*(rio_stream))) == ('x')) {
      (rio_stream)++;
      rio_token.mod = (rio_TokenMod_Hex);
      base = 16;
      start_digits = rio_stream;
    } else if ((tolower(*(rio_stream))) == ('b')) {
      (rio_stream)++;
      rio_token.mod = (rio_TokenMod_Bin);
      base = 2;
      start_digits = rio_stream;
    } else if (isdigit(*(rio_stream))) {
      rio_token.mod = (rio_TokenMod_Oct);
      base = 8;
      start_digits = rio_stream;
    }
  }
  ullong val = 0;
  for (;;) {
    if ((*(rio_stream)) == ('_')) {
      (rio_stream)++;
      continue;
    }
    uchar digit = rio_char_to_digit[(uchar)(*(rio_stream))];
    if (((digit) == (0)) && ((*(rio_stream)) != ('0'))) {
      break;
    }
    if ((digit) >= (base)) {
      rio_error(rio_token.pos, "Digit \'%c\' out of range for base %d", *(rio_stream), base);
      digit = 0;
    }
    if ((val) > ((((ULLONG_MAX) - (digit))) / (base))) {
      rio_error(rio_token.pos, "Integer literal overflow");
      while (isdigit(*(rio_stream))) {
        (rio_stream)++;
      }
      val = 0;
      break;
    }
    val = ((val) * (base)) + (digit);
    (rio_stream)++;
  }
  if ((rio_stream) == (start_digits)) {
    rio_error(rio_token.pos, "Expected base %d digit, got \'%c\'", base, *(rio_stream));
  }
  rio_token.kind = (rio_TokenKind_Int);
  rio_token.int_val = val;
  if ((tolower(*(rio_stream))) == ('u')) {
    rio_token.suffix = (rio_TokenSuffix_U);
    (rio_stream)++;
    if ((tolower(*(rio_stream))) == ('l')) {
      rio_token.suffix = (rio_TokenSuffix_UL);
      (rio_stream)++;
      if ((tolower(*(rio_stream))) == ('l')) {
        rio_token.suffix = (rio_TokenSuffix_ULL);
        (rio_stream)++;
      }
    }
  } else if ((tolower(*(rio_stream))) == ('l')) {
    rio_token.suffix = (rio_TokenSuffix_L);
    (rio_stream)++;
    if ((tolower(*(rio_stream))) == ('l')) {
      rio_token.suffix = (rio_TokenSuffix_LL);
      (rio_stream)++;
    }
  }
}

void rio_scan_float(void) {
  char const ((*start)) = rio_stream;
  while (isdigit(*(rio_stream))) {
    (rio_stream)++;
  }
  if ((*(rio_stream)) == ('.')) {
    (rio_stream)++;
  }
  while (isdigit(*(rio_stream))) {
    (rio_stream)++;
  }
  if ((tolower(*(rio_stream))) == ('e')) {
    (rio_stream)++;
    if (((*(rio_stream)) == ('+')) || ((*(rio_stream)) == ('-'))) {
      (rio_stream)++;
    }
    if (!(isdigit(*(rio_stream)))) {
      rio_error(rio_token.pos, "Expected digit after float literal exponent, found \'%c\'.", *(rio_stream));
    }
    while (isdigit(*(rio_stream))) {
      (rio_stream)++;
    }
  }
  double val = strtod(start, NULL);
  if ((val) == (HUGE_VAL)) {
    rio_error(rio_token.pos, "Float literal overflow");
  }
  rio_token.kind = (rio_TokenKind_Float);
  rio_token.float_val = val;
  if ((tolower(*(rio_stream))) == ('d')) {
    rio_token.suffix = (rio_TokenSuffix_D);
    (rio_stream)++;
  }
}

char (rio_escape_to_char[256]) = {['0'] = '\0', ['\''] = '\'', ['\"'] = '\"', ['\\'] = '\\', ['n'] = '\n', ['r'] = '\r', ['t'] = '\t', ['v'] = '\v', ['b'] = '\b', ['a'] = '\a'};
int rio_scan_hex_escape(void) {
  assert((*(rio_stream)) == ('x'));
  (rio_stream)++;
  uchar val = rio_char_to_digit[(uchar)(*(rio_stream))];
  if ((!(val)) && ((*(rio_stream)) != ('0'))) {
    rio_error(rio_token.pos, "\\x needs at least 1 hex digit");
  }
  (rio_stream)++;
  uchar digit = rio_char_to_digit[(uchar)(*(rio_stream))];
  if ((digit) || ((*(rio_stream)) == ('0'))) {
    val *= 16;
    val += digit;
    if ((val) > (0xff)) {
      rio_error(rio_token.pos, "\\x argument out of range");
      val = 0xff;
    }
    (rio_stream)++;
  }
  return val;
}

void rio_scan_char(void) {
  assert((*(rio_stream)) == ('\''));
  (rio_stream)++;
  int val = 0;
  if ((*(rio_stream)) == ('\'')) {
    rio_error(rio_token.pos, "Char literal cannot be empty");
    (rio_stream)++;
  } else if ((*(rio_stream)) == ('\n')) {
    rio_error(rio_token.pos, "Char literal cannot contain newline");
  } else if ((*(rio_stream)) == ('\\')) {
    (rio_stream)++;
    if ((*(rio_stream)) == ('x')) {
      val = rio_scan_hex_escape();
    } else {
      val = rio_escape_to_char[(uchar)(*(rio_stream))];
      if (((val) == (0)) && ((*(rio_stream)) != ('0'))) {
        rio_error(rio_token.pos, "Invalid char literal escape \'\\%c\'", *(rio_stream));
      }
      (rio_stream)++;
    }
  } else {
    val = *(rio_stream);
    (rio_stream)++;
  }
  if ((*(rio_stream)) != ('\'')) {
    rio_error(rio_token.pos, "Expected closing char quote, got \'%c\'", *(rio_stream));
  } else {
    (rio_stream)++;
  }
  rio_token.kind = (rio_TokenKind_Int);
  rio_token.int_val = val;
  rio_token.mod = (rio_TokenMod_Char);
}

void rio_scan_str(void) {
  assert((*(rio_stream)) == ('\"'));
  (rio_stream)++;
  char (*str) = NULL;
  if (((rio_stream[0]) == ('\"')) && ((rio_stream[1]) == ('\"'))) {
    rio_stream += 2;
    while (*(rio_stream)) {
      if ((((rio_stream[0]) == ('\"')) && ((rio_stream[1]) == ('\"'))) && ((rio_stream[2]) == ('\"'))) {
        rio_stream += 3;
        break;
      }
      if ((*(rio_stream)) != ('\r')) {
        rio_buf_push((void (**))(&(str)), (void *)(rio_stream), 1);
      }
      if ((*(rio_stream)) == ('\n')) {
        (rio_token.pos.line)++;
      }
      (rio_stream)++;
    }
    if (!(*(rio_stream))) {
      rio_error(rio_token.pos, "Unexpected end of file within multi-line string literal");
    }
    rio_token.mod = (rio_TokenMod_Multiline);
  } else {
    while ((*(rio_stream)) && ((*(rio_stream)) != ('\"'))) {
      char val = *(rio_stream);
      if ((val) == ('\n')) {
        rio_error(rio_token.pos, "String literal cannot contain newline");
        break;
      } else if ((val) == ('\\')) {
        (rio_stream)++;
        if ((*(rio_stream)) == ('x')) {
          val = rio_scan_hex_escape();
        } else {
          val = rio_escape_to_char[(uchar)(*(rio_stream))];
          if (((val) == (0)) && ((*(rio_stream)) != ('0'))) {
            rio_error(rio_token.pos, "Invalid string literal escape \'\\%c\'", *(rio_stream));
          }
          (rio_stream)++;
        }
      } else {
        (rio_stream)++;
      }
      rio_buf_push((void (**))(&(str)), &(val), 1);
    }
    if (*(rio_stream)) {
      (rio_stream)++;
    } else {
      rio_error(rio_token.pos, "Unexpected end of file within string literal");
    }
  }
  int nul = '\0';
  rio_buf_push((void (**))(&(str)), &(nul), 1);
  rio_token.kind = (rio_TokenKind_Str);
  rio_token.str_val = str;
}

void rio_next_token(void) {
  repeat: ;
  rio_token.start = rio_stream;
  rio_token.mod = 0;
  rio_token.suffix = 0;
  switch (*(rio_stream)) {
  case ' ':
  case '\n':
  case '\r':
  case '\t':
  case '\v': {
    while (isspace(*(rio_stream))) {
      if ((*((rio_stream)++)) == ('\n')) {
        rio_line_start = rio_stream;
        (rio_token.pos.line)++;
      }
    }
    goto repeat;
    break;
  }
  case '\'': {
    rio_scan_char();
    break;
  }
  case '\"': {
    rio_scan_str();
    break;
  }
  case '.': {
    if (isdigit(rio_stream[1])) {
      rio_scan_float();
    } else if (((rio_stream[1]) == ('.')) && ((rio_stream[2]) == ('.'))) {
      rio_token.kind = (rio_TokenKind_Ellipsis);
      rio_stream += 3;
    } else {
      rio_token.kind = (rio_TokenKind_Dot);
      (rio_stream)++;
    }
    break;
  }
  case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':  {
    while (isdigit(*(rio_stream))) {
      (rio_stream)++;
    }
    char c = *(rio_stream);
    rio_stream = rio_token.start;
    if (((c) == ('.')) || ((tolower(c)) == ('e'))) {
      rio_scan_float();
    } else {
      rio_scan_int();
    }
    break;
  }
  case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g': case 'h': case 'i': case 'j': case 'k': case 'l': case 'm': case 'n': case 'o': case 'p': case 'q': case 'r': case 's': case 't': case 'u': case 'v': case 'w': case 'x': case 'y': case 'z': 
  case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': case 'G': case 'H': case 'I': case 'J': case 'K': case 'L': case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R': case 'S': case 'T': case 'U': case 'V': case 'W': case 'X': case 'Y': case 'Z': 
  case '_': {
    while ((isalnum(*(rio_stream))) || ((*(rio_stream)) == ('_'))) {
      (rio_stream)++;
    }
    rio_token.name = rio_str_intern_range(rio_token.start, rio_stream);
    rio_token.kind = (rio_is_keyword_name(rio_token.name) ? (rio_TokenKind_Keyword) : (rio_TokenKind_Name));
    break;
  }
  case '<': {
    rio_token.kind = (rio_TokenKind_Lt);
    (rio_stream)++;
    if ((*(rio_stream)) == ('<')) {
      rio_token.kind = (rio_TokenKind_Lshift);
      (rio_stream)++;
      if ((*(rio_stream)) == ('=')) {
        rio_token.kind = (rio_TokenKind_LshiftAssign);
        (rio_stream)++;
      }
    } else if ((*(rio_stream)) == ('=')) {
      rio_token.kind = (rio_TokenKind_LtEq);
      (rio_stream)++;
    }
    break;
  }
  case '>': {
    rio_token.kind = (rio_TokenKind_Gt);
    (rio_stream)++;
    if ((*(rio_stream)) == ('>')) {
      rio_token.kind = (rio_TokenKind_Rshift);
      (rio_stream)++;
      if ((*(rio_stream)) == ('=')) {
        rio_token.kind = (rio_TokenKind_RshiftAssign);
        (rio_stream)++;
      }
    } else if ((*(rio_stream)) == ('=')) {
      rio_token.kind = (rio_TokenKind_GtEq);
      (rio_stream)++;
    }
    break;
  }
  case '/': {
    rio_token.kind = (rio_TokenKind_Div);
    (rio_stream)++;
    if ((*(rio_stream)) == ('=')) {
      rio_token.kind = (rio_TokenKind_DivAssign);
      (rio_stream)++;
    } else if ((*(rio_stream)) == ('/')) {
      (rio_stream)++;
      while ((*(rio_stream)) && ((*(rio_stream)) != ('\n'))) {
        (rio_stream)++;
      }
      goto repeat;
    } else if ((*(rio_stream)) == ('*')) {
      (rio_stream)++;
      int level = 1;
      while ((*(rio_stream)) && ((level) > (0))) {
        if (((rio_stream[0]) == ('/')) && ((rio_stream[1]) == ('*'))) {
          (level)++;
          rio_stream += 2;
        } else if (((rio_stream[0]) == ('*')) && ((rio_stream[1]) == ('/'))) {
          (level)--;
          rio_stream += 2;
        } else {
          if ((*(rio_stream)) == ('\n')) {
            (rio_token.pos.line)++;
          }
          (rio_stream)++;
        }
      }
      goto repeat;
    }
    break;
  }
  case '\0': {
    rio_token.kind = (rio_TokenKind_Eof);
    (rio_stream)++;
    break;
  }
  case '(': {
    rio_token.kind = (rio_TokenKind_Lparen);
    (rio_stream)++;
    break;
  }
  case ')': {
    rio_token.kind = (rio_TokenKind_Rparen);
    (rio_stream)++;
    break;
  }
  case '{': {
    rio_token.kind = (rio_TokenKind_Lbrace);
    (rio_stream)++;
    break;
  }
  case '}': {
    rio_token.kind = (rio_TokenKind_Rbrace);
    (rio_stream)++;
    break;
  }
  case '[': {
    rio_token.kind = (rio_TokenKind_Lbracket);
    (rio_stream)++;
    break;
  }
  case ']': {
    rio_token.kind = (rio_TokenKind_Rbracket);
    (rio_stream)++;
    break;
  }
  case ',': {
    rio_token.kind = (rio_TokenKind_Comma);
    (rio_stream)++;
    break;
  }
  case '@': {
    rio_token.kind = (rio_TokenKind_At);
    (rio_stream)++;
    break;
  }
  case '#': {
    rio_token.kind = (rio_TokenKind_Pound);
    (rio_stream)++;
    break;
  }
  case '?': {
    rio_token.kind = (rio_TokenKind_Question);
    (rio_stream)++;
    break;
  }
  case ';': {
    rio_token.kind = (rio_TokenKind_Semicolon);
    (rio_stream)++;
    break;
  }
  case '~': {
    rio_token.kind = (rio_TokenKind_Neg);
    (rio_stream)++;
    break;
  }
  case '!': {
    rio_token.kind = (rio_TokenKind_Not);
    (rio_stream)++;
    if ((*(rio_stream)) == ('=')) {
      rio_token.kind = (rio_TokenKind_NotEq);
      (rio_stream)++;
    }
    break;
  }
  case ':': {
    rio_token.kind = (rio_TokenKind_Colon);
    (rio_stream)++;
    break;
  }
  case '=': {
    rio_token.kind = (rio_TokenKind_Assign);
    (rio_stream)++;
    if ((*(rio_stream)) == ('=')) {
      rio_token.kind = (rio_TokenKind_Eq);
      (rio_stream)++;
    } else if ((*(rio_stream)) == ('>')) {
      rio_token.kind = (rio_TokenKind_Spear);
      ++(rio_stream);
    }
    break;
  }
  case '^': {
    rio_token.kind = (rio_TokenKind_Xor);
    (rio_stream)++;
    if ((*(rio_stream)) == ('=')) {
      rio_token.kind = (rio_TokenKind_XorAssign);
      (rio_stream)++;
    }
    break;
  }
  case '*': {
    rio_token.kind = (rio_TokenKind_Mul);
    (rio_stream)++;
    if ((*(rio_stream)) == ('=')) {
      rio_token.kind = (rio_TokenKind_MulAssign);
      (rio_stream)++;
    }
    break;
  }
  case '%': {
    rio_token.kind = (rio_TokenKind_Mod);
    (rio_stream)++;
    if ((*(rio_stream)) == ('=')) {
      rio_token.kind = (rio_TokenKind_ModAssign);
      (rio_stream)++;
    }
    break;
  }
  case '+': {
    rio_token.kind = (rio_TokenKind_Add);
    (rio_stream)++;
    if ((*(rio_stream)) == ('=')) {
      rio_token.kind = (rio_TokenKind_AddAssign);
      (rio_stream)++;
    } else if ((*(rio_stream)) == ('+')) {
      rio_token.kind = (rio_TokenKind_Inc);
      (rio_stream)++;
    }
    break;
  }
  case '-': {
    rio_token.kind = (rio_TokenKind_Sub);
    (rio_stream)++;
    if ((*(rio_stream)) == ('=')) {
      rio_token.kind = (rio_TokenKind_SubAssign);
      (rio_stream)++;
    } else if ((*(rio_stream)) == ('-')) {
      rio_token.kind = (rio_TokenKind_Dec);
      (rio_stream)++;
    } else if ((*(rio_stream)) == ('>')) {
      rio_token.kind = (rio_TokenKind_Arrow);
      (rio_stream)++;
    }
    break;
  }
  case '&': {
    rio_token.kind = (rio_TokenKind_And);
    (rio_stream)++;
    if ((*(rio_stream)) == ('=')) {
      rio_token.kind = (rio_TokenKind_AndAssign);
      (rio_stream)++;
    } else if ((*(rio_stream)) == ('&')) {
      rio_token.kind = (rio_TokenKind_AndAnd);
      (rio_stream)++;
    }
    break;
  }
  case '|': {
    rio_token.kind = (rio_TokenKind_Or);
    (rio_stream)++;
    if ((*(rio_stream)) == ('=')) {
      rio_token.kind = (rio_TokenKind_OrAssign);
      (rio_stream)++;
    } else if ((*(rio_stream)) == ('|')) {
      rio_token.kind = (rio_TokenKind_OrOr);
      (rio_stream)++;
    }
    break;
  }
  default: {
    rio_error(rio_token.pos, "Invalid \'%c\' token, skipping", *(rio_stream));
    (rio_stream)++;
    goto repeat;
    break;
  }
  }
  rio_token.end = rio_stream;
}

void rio_init_stream(char const ((*name)), char const ((*buf))) {
  rio_stream = buf;
  rio_line_start = rio_stream;
  rio_token.pos.name = (name ? name : (char const (*))("<string>"));
  rio_token.pos.line = 1;
  rio_next_token();
}

bool rio_is_token(rio_TokenKind kind) {
  return (rio_token.kind) == (kind);
}

bool rio_is_token_eof(void) {
  return (rio_token.kind) == ((rio_TokenKind_Eof));
}

bool rio_is_token_name(char const ((*name))) {
  return ((rio_token.kind) == ((rio_TokenKind_Name))) && ((rio_token.name) == (name));
}

bool rio_is_keyword(char const ((*name))) {
  return (rio_is_token((rio_TokenKind_Keyword))) && ((rio_token.name) == (name));
}

bool rio_match_keyword(char const ((*name))) {
  if (rio_is_keyword(name)) {
    rio_next_token();
    return true;
  } else {
    return false;
  }
}

bool rio_expect_close_angle(void) {
  if (rio_is_token((rio_TokenKind_Rshift))) {
    ++(rio_token.start);
    rio_token.kind = (rio_TokenKind_Gt);
    return true;
  } else {
    return rio_expect_token((rio_TokenKind_Gt));
  }
}

bool rio_match_token(rio_TokenKind kind) {
  if (rio_is_token(kind)) {
    rio_next_token();
    return true;
  } else {
    return false;
  }
}

bool rio_expect_token(rio_TokenKind kind) {
  if (rio_is_token(kind)) {
    rio_next_token();
    return true;
  } else {
    rio_fatal_error(rio_token.pos, "Expected token %s, got %s", rio_token_kind_name(kind), rio_token_info());
    return false;
  }
}

bool rio_flag_verbose;
bool rio_flag_lazy;
bool rio_flag_nosourcemap;
bool rio_flag_notypeinfo;
bool rio_flag_fullgen;
void rio_path_normalize(char (*path)) {
  char (*ptr) = {0};
  for (ptr = path; *(ptr); (ptr)++) {
    if ((*(ptr)) == ('\\')) {
      *(ptr) = '/';
    }
  }
  if (((ptr) != (path)) && ((ptr[-(1)]) == ('/'))) {
    ptr[-(1)] = 0;
  }
}

void rio_path_copy(char (path[MAX_PATH]), char const ((*src))) {
  strncpy(path, src, MAX_PATH);
  path[(MAX_PATH) - (1)] = 0;
  rio_path_normalize(path);
}

void rio_path_join(char (path[MAX_PATH]), char const ((*src))) {
  char (*ptr) = (path) + (strlen(path));
  if (((ptr) != (path)) && ((ptr[-(1)]) == ('/'))) {
    (ptr)--;
  }
  if ((*(src)) == ('/')) {
    (src)++;
  }
  snprintf(ptr, ((path) + (MAX_PATH)) - (ptr), "/%s", src);
}

char (*rio_path_file(char (path[MAX_PATH]))) {
  rio_path_normalize(path);
  for (char (*ptr) = (path) + (strlen(path)); (ptr) != (path); (ptr)--) {
    if ((ptr[-(1)]) == ('/')) {
      return ptr;
    }
  }
  return path;
}

char (*rio_path_ext(char (path[MAX_PATH]))) {
  for (char (*ptr) = (path) + (strlen(path)); (ptr) != (path); (ptr)--) {
    if ((ptr[-(1)]) == ('.')) {
      return ptr;
    }
  }
  return path;
}

bool rio_dir_excluded(rio_DirListIter (*iter)) {
  return (iter->valid) && ((((strcmp(iter->name, ".")) == (0)) || ((strcmp(iter->name, "..")) == (0))));
}

bool rio_dir_list_subdir(rio_DirListIter (*iter)) {
  if ((!(iter->valid)) || (!(iter->is_dir))) {
    return false;
  }
  rio_DirListIter subdir_iter = {0};
  rio_path_join(iter->base, iter->name);
  rio_dir_list(&(subdir_iter), iter->base);
  rio_dir_list_free(iter);
  *(iter) = subdir_iter;
  return true;
}

char const ((*(*rio_dir_list_buf(char const ((*filespec)))))) {
  char const ((*(*buf))) = NULL;
  rio_DirListIter iter = {0};
  for (rio_dir_list(&(iter), filespec); iter.valid; rio_dir_list_next(&(iter))) {
    char const ((*name)) = _strdup(iter.name);
    rio_buf_push((void (**))(&(buf)), &(name), sizeof(name));
  }
  return buf;
}

rio_Flag (*rio_flag_defs);
void rio_add_flag_bool(char const ((*name)), bool (*ptr), char const ((*help))) {
  rio_Flag flag = (rio_Flag){(rio_Flag_Bool), .name = name, .help = help, .b = ptr};
  rio_buf_push((void (**))(&(rio_flag_defs)), &(flag), sizeof(flag));
}

void rio_add_flag_str(char const ((*name)), char const ((*(*ptr))), char const ((*arg_name)), char const ((*help))) {
  rio_Flag flag = (rio_Flag){(rio_Flag_Str), .name = name, .help = help, .arg_name = arg_name, .s = ptr};
  rio_buf_push((void (**))(&(rio_flag_defs)), &(flag), sizeof(flag));
}

void rio_add_flag_enum(char const ((*name)), int (*ptr), char const ((*help)), char const ((*(*options))), int num_options) {
  rio_Flag flag = (rio_Flag){(rio_Flag_Enum), .name = name, .help = help, .i = ptr, .options = {options, num_options}};
  rio_buf_push((void (**))(&(rio_flag_defs)), &(flag), sizeof(flag));
}

rio_Flag (*rio_get_flag_def(char const ((*name)))) {
  for (size_t i = 0; (i) < (rio_buf_len(rio_flag_defs)); (i)++) {
    if ((strcmp(rio_flag_defs[i].name, name)) == (0)) {
      return &(rio_flag_defs[i]);
    }
  }
  return NULL;
}

void rio_print_flags_usage(void) {
  printf("Flags:\n");
  for (size_t i = 0; (i) < (rio_buf_len(rio_flag_defs)); (i)++) {
    rio_Flag flag = rio_flag_defs[i];
    char (note[256]) = {0};
    char (format[256]) = {0};
    switch (flag.kind) {
    case rio_Flag_Str: {
      snprintf(format, sizeof(format), "%s <%s>", flag.name, (flag.arg_name ? flag.arg_name : (char const (*))("value")));
      if (*(flag.s)) {
        snprintf(note, sizeof(note), "(default: %s)", *(flag.s));
      }
      break;
    }
    case rio_Flag_Enum: {
      char (*end) = (format) + (sizeof(format));
      char (*ptr) = format;
      ptr += snprintf(ptr, (end) - (ptr), "%s <", flag.name);
      {
        rio_Slice_ptr_const_char items__ = flag.options;
        for (size_t i__ = 0; i__ < items__.length; ++i__) {
          char const ((*option)) = items__.items[i__];
          size_t k = i__;
          ptr += snprintf(ptr, (end) - (ptr), "%s%s", ((k) == (0) ? "" : "|"), option);
          if ((k) == (*(flag.i))) {
            snprintf(note, sizeof(note), " (default: %s)", option);
          }
        }
      }
      snprintf(ptr, (end) - (ptr), ">");
      break;
    }
    case rio_Flag_Bool:
    default: {
      snprintf(format, sizeof(format), "%s", flag.name);
      break;
    }
    }
    printf(" -%-32s %s%s\n", format, (flag.help ? flag.help : (char const (*))("")), note);
  }
}

char const ((*rio_parse_flags(int (*argc_ptr), char const ((*(*(*argv_ptr))))))) {
  int argc = *(argc_ptr);
  char const ((*(*argv))) = *(argv_ptr);
  int i = {0};
  for (i = 1; (i) < (argc); (i)++) {
    char const ((*arg)) = argv[i];
    char const ((*name)) = arg;
    if ((*(name)) == ('-')) {
      (name)++;
      if ((*(name)) == ('-')) {
        (name)++;
      }
      rio_Flag (*flag) = rio_get_flag_def(name);
      if (!(flag)) {
        printf("Unknown flag %s\n", arg);
        continue;
      }
      switch (flag->kind) {
      case rio_Flag_Bool: {
        *(flag->b) = true;
        break;
      }
      case rio_Flag_Str: {
        if (((i) + (1)) < (argc)) {
          (i)++;
          *(flag->s) = argv[i];
        } else {
          printf("No value argument after -%s\n", arg);
        }
        break;
      }
      case rio_Flag_Enum: {
        char const ((*option)) = {0};
        if (((i) + (1)) < (argc)) {
          (i)++;
          option = argv[i];
        } else {
          printf("No value after %s\n", arg);
          break;
        }
        bool found = false;
        {
          rio_Slice_ptr_const_char items__ = flag->options;
          for (size_t i__ = 0; i__ < items__.length; ++i__) {
            char const ((*flag_option)) = items__.items[i__];
            size_t k = i__;
            if ((strcmp(flag_option, option)) == (0)) {
              *(flag->i) = k;
              found = true;
              break;
            }
          }
        }
        if (!(found)) {
          printf("Invalid value \'%s\' for %s\n", option, arg);
        }
        break;
      }
      default: {
        printf("Unhandled flag kind\n");
        break;
      }
      }
    } else {
      break;
    }
  }
  *(argc_ptr) = (argc) - (i);
  *(argv_ptr) = (argv) + (i);
  return rio_path_file(_strdup(argv[0]));
}

void rio_path_absolute(char (path[MAX_PATH])) {
  char (rel_path[MAX_PATH]) = {0};
  rio_path_copy(rel_path, path);
  _fullpath(path, rel_path, MAX_PATH);
}

void rio_dir_list_free(rio_DirListIter (*iter)) {
  if (iter->valid) {
    _findclose((intptr_t)(iter->handle));
    iter->valid = false;
    iter->error = false;
  }
}

void rio_dir__update(rio_DirListIter (*iter), bool done, FindData (*fileinfo)) {
  iter->valid = !(done);
  iter->error = (done) && ((errno) != (ENOENT));
  if (!(done)) {
    iter->size = fileinfo->size;
    memcpy(iter->name, fileinfo->name, (sizeof(iter->name)) - (1));
    iter->name[(MAX_PATH) - (1)] = 0;
    iter->is_dir = (fileinfo->attrib) & (_A_SUBDIR);
  }
}

void rio_dir_list_next(rio_DirListIter (*iter)) {
  if (!(iter->valid)) {
    return;
  }
  do {
    FindData fileinfo = {0};
    int result = _findnext((intptr_t)(iter->handle), &(fileinfo));
    rio_dir__update(iter, (result) != (0), &(fileinfo));
    if ((result) != (0)) {
      rio_dir_list_free(iter);
      return;
    }
  } while (rio_dir_excluded(iter));
}

void rio_dir_list(rio_DirListIter (*iter), char const ((*path))) {
  memset(iter, 0, sizeof(*(iter)));
  rio_path_copy(iter->base, path);
  char (filespec[MAX_PATH]) = {0};
  rio_path_copy(filespec, path);
  rio_path_join(filespec, "*");
  FindData fileinfo = {0};
  llong handle = _findfirst(filespec, &(fileinfo));
  iter->handle = (void *)(handle);
  rio_dir__update(iter, (handle) == (-(1)), &(fileinfo));
  if (rio_dir_excluded(iter)) {
    rio_dir_list_next(iter);
  }
}

rio_Typespec (*rio_parse_type_func_param(void)) {
  rio_Typespec (*type) = rio_parse_type();
  if (rio_match_token((rio_TokenKind_Colon))) {
    if ((type->kind) != ((rio_Typespec_Name))) {
      rio_error(rio_token.pos, "Colons in parameters of function types must be preceded by names.");
    }
    type = rio_parse_type();
  }
  return type;
}

rio_Typespec (*rio_parse_type_func(void)) {
  rio_SrcPos pos = rio_token.pos;
  rio_Typespec (*(*args)) = NULL;
  bool has_varargs = false;
  rio_expect_token((rio_TokenKind_Lparen));
  while (!(rio_is_token((rio_TokenKind_Rparen)))) {
    if (rio_match_token((rio_TokenKind_Ellipsis))) {
      if (has_varargs) {
        rio_error(rio_token.pos, "Multiple ellipsis instances in function type");
      }
      has_varargs = true;
    } else {
      if (has_varargs) {
        rio_error(rio_token.pos, "Ellipsis must be last parameter in function type");
      }
      rio_Typespec (*param) = rio_parse_type_func_param();
      rio_buf_push((void (**))(&(args)), &(param), sizeof(param));
    }
    if (!(rio_match_token((rio_TokenKind_Comma)))) {
      break;
    }
  }
  rio_expect_token((rio_TokenKind_Rparen));
  rio_Typespec (*ret) = NULL;
  if (rio_match_token((rio_TokenKind_Arrow))) {
    ret = rio_parse_type();
  }
  return rio_new_typespec_func(pos, (rio_Slice_ref_Typespec){args, rio_buf_len(args)}, ret, has_varargs);
}

rio_Slice_TypeArg rio_parse_type_args(void) {
  rio_TypeArg (*args) = {0};
  if (rio_match_token((rio_TokenKind_Lt))) {
    do {
      rio_TypeArg type_arg = {.pos = rio_token.pos, .val = rio_parse_type()};
      rio_buf_push((void (**))(&(args)), &(type_arg), sizeof(*(args)));
    } while (rio_match_token((rio_TokenKind_Comma)));
    if (rio_is_token((rio_TokenKind_Rshift))) {
      rio_token.kind = (rio_TokenKind_Gt);
    } else {
      rio_expect_token((rio_TokenKind_Gt));
    }
  }
  return (rio_Slice_TypeArg){.items = args, .length = rio_buf_len(args)};
}

rio_Typespec (*rio_parse_type_base(void)) {
  if (rio_is_token((rio_TokenKind_Name))) {
    rio_SrcPos pos = rio_token.pos;
    rio_TypespecName (*names) = {0};
    char const ((*token_name)) = rio_token.name;
    rio_next_token();
    rio_TypespecName first_name = {.name = token_name, .type_args = rio_parse_type_args()};
    rio_buf_push((void (**))(&(names)), &(first_name), sizeof(first_name));
    while (rio_match_token((rio_TokenKind_Dot))) {
      rio_TypespecName name = {.name = rio_parse_name(), .type_args = rio_parse_type_args()};
      rio_buf_push((void (**))(&(names)), &(name), sizeof(name));
    }
    rio_Typespec (*result) = rio_new_typespec_name(pos, (rio_Slice_TypespecName){names, rio_buf_len(names)});
    rio_buf_free((void (**))(&(names)));
    return result;
  } else if (rio_match_keyword(rio_do_keyword)) {
    return rio_parse_type_func();
  } else if (rio_match_token((rio_TokenKind_Lparen))) {
    rio_Typespec (*type) = rio_parse_type();
    rio_expect_token((rio_TokenKind_Rparen));
    return type;
  } else {
    rio_fatal_error(rio_token.pos, "Unexpected token %s in type", rio_token_info());
    return NULL;
  }
}

rio_Typespec (*rio_parse_type(void)) {
  rio_SrcPos pos = rio_token.pos;
  rio_Typespec (*type) = {0};
  if (rio_match_token((rio_TokenKind_Lbracket))) {
    rio_Expr (*size) = NULL;
    if (!(rio_is_token((rio_TokenKind_Rbracket)))) {
      size = rio_parse_expr();
    }
    rio_expect_token((rio_TokenKind_Rbracket));
    type = rio_new_typespec_array(pos, rio_parse_type(), size);
  } else if (rio_match_token((rio_TokenKind_And))) {
    type = rio_new_typespec_ref(pos, rio_parse_type(), false);
  } else if (rio_match_token((rio_TokenKind_AndAnd))) {
    type = rio_new_typespec_ref(pos, rio_parse_type(), false);
    type = rio_new_typespec_ref(pos, type, false);
  } else if (rio_match_token((rio_TokenKind_Mul))) {
    type = rio_new_typespec_ptr(pos, rio_parse_type(), false);
  } else if (rio_match_keyword(rio_const_keyword)) {
    type = rio_new_typespec_const(pos, rio_parse_type());
  } else if (rio_match_keyword(rio_own_keyword)) {
    type = rio_parse_type();
  } else {
    type = rio_parse_type_base();
  }
  return type;
}

rio_CompoundField rio_parse_expr_struct_field(bool is_tuple) {
  rio_SrcPos pos = rio_token.pos;
  rio_Expr (*expr) = rio_parse_expr();
  if (rio_match_token((rio_TokenKind_Colon))) {
    if ((expr->kind) != ((rio_Expr_Name))) {
      rio_fatal_error(rio_token.pos, "Field key not a name");
      return (rio_CompoundField){0};
    }
    return (rio_CompoundField){(rio_CompoundField_Name), .expr = rio_parse_expr(), .name = expr->name, .pos = pos};
  } else {
    if (is_tuple) {
      return (rio_CompoundField){(rio_CompoundField_Default), .expr = expr, .pos = pos};
    } else {
      char const ((*name)) = rio_find_expr_name(pos, expr);
      return (rio_CompoundField){(rio_CompoundField_Name), .expr = expr, .name = name, .pos = pos};
    }
  }
}

char const ((*rio_find_expr_name(rio_SrcPos pos, rio_Expr (*expr)))) {
  switch (expr->kind) {
  case rio_Expr_Field: {
    return expr->field.name;
    break;
  }
  case rio_Expr_Name: {
    return expr->name;
    break;
  }
  case rio_Expr_Unary: {
    if ((expr->unary.op) == ((rio_TokenKind_And))) {
      return rio_find_expr_name(pos, expr->unary.expr);
    }
    break;
  }
  }
  rio_fatal_error(pos, "No implied name");
  return NULL;
}

rio_Expr (*rio_parse_expr_struct(rio_Typespec (*type))) {
  rio_SrcPos pos = rio_token.pos;
  rio_expect_token((rio_TokenKind_Lbrace));
  rio_CompoundField (*fields) = {0};
  while (!(rio_is_token((rio_TokenKind_Rbrace)))) {
    rio_CompoundField field = rio_parse_expr_struct_field(false);
    rio_buf_push((void (**))(&(fields)), &(field), sizeof(field));
    if (!(rio_match_token((rio_TokenKind_Comma)))) {
      break;
    }
  }
  rio_expect_token((rio_TokenKind_Rbrace));
  return rio_new_expr_compound(pos, (rio_ExprCompound_Struct), type, (rio_Slice_CompoundField){fields, rio_buf_len(fields)});
}

rio_Expr (*rio_parse_expr_tuple(rio_Typespec (*type))) {
  rio_SrcPos pos = rio_token.pos;
  rio_expect_token((rio_TokenKind_Lparen));
  rio_CompoundField (*fields) = {0};
  while (!(rio_is_token((rio_TokenKind_Rparen)))) {
    rio_CompoundField field = rio_parse_expr_struct_field(true);
    if (((!(fields)) && ((field.kind) == ((rio_CompoundField_Default)))) && (rio_match_token((rio_TokenKind_Rparen)))) {
      return rio_new_expr_paren(pos, field.expr);
    }
    rio_buf_push((void (**))(&(fields)), &(field), sizeof(field));
    if (!(rio_match_token((rio_TokenKind_Comma)))) {
      break;
    }
  }
  rio_expect_token((rio_TokenKind_Rparen));
  return rio_new_expr_compound(pos, (rio_ExprCompound_Tuple), type, (rio_Slice_CompoundField){fields, rio_buf_len(fields)});
}

rio_CompoundField rio_parse_expr_list_item(void) {
  rio_SrcPos pos = rio_token.pos;
  rio_Expr (*expr) = rio_parse_expr();
  if (rio_match_token((rio_TokenKind_Colon))) {
    switch (expr->kind) {
    case rio_Expr_Compound: {
      if ((expr->compound.kind) == ((rio_ExprCompound_List))) {
        rio_Slice_CompoundField fields = expr->compound.fields;
        if ((fields.length) != (1)) {
          rio_fatal_error(rio_token.pos, "Computed field key must be single");
        }
        rio_warning(pos, "Needless brackets");
        expr = fields.items[0].expr;
      }
      break;
    }
    case rio_Expr_Name: {
      return (rio_CompoundField){(rio_CompoundField_Name), .expr = rio_parse_expr(), .name = expr->name, .pos = pos};
      break;
    }
    }
    return (rio_CompoundField){(rio_CompoundField_Index), .expr = rio_parse_expr(), .index = expr, .pos = pos};
  } else {
    return (rio_CompoundField){(rio_CompoundField_Default), .expr = expr, .pos = pos};
  }
}

rio_Expr (*rio_parse_expr_list(rio_Typespec (*type))) {
  rio_SrcPos pos = rio_token.pos;
  rio_expect_token((rio_TokenKind_Lbracket));
  rio_CompoundField (*fields) = NULL;
  while (!(rio_is_token((rio_TokenKind_Rbracket)))) {
    rio_CompoundField field = rio_parse_expr_list_item();
    rio_buf_push((void (**))(&(fields)), &(field), sizeof(field));
    if (!(rio_match_token((rio_TokenKind_Comma)))) {
      break;
    }
  }
  rio_expect_token((rio_TokenKind_Rbracket));
  return rio_new_expr_compound(pos, (rio_ExprCompound_List), type, (rio_Slice_CompoundField){fields, rio_buf_len(fields)});
}

rio_Expr (*rio_parse_expr_operand(void)) {
  rio_SrcPos pos = rio_token.pos;
  if (rio_is_token((rio_TokenKind_Int))) {
    ullong val = rio_token.int_val;
    rio_TokenMod mod = rio_token.mod;
    rio_TokenSuffix suffix = rio_token.suffix;
    rio_next_token();
    return rio_new_expr_int(pos, val, mod, suffix);
  } else if (rio_is_token((rio_TokenKind_Float))) {
    char const ((*start)) = rio_token.start;
    char const ((*end)) = rio_token.end;
    double val = rio_token.float_val;
    rio_TokenSuffix suffix = rio_token.suffix;
    rio_next_token();
    return rio_new_expr_float(pos, start, end, val, suffix);
  } else if (rio_is_token((rio_TokenKind_Str))) {
    char const ((*val)) = rio_token.str_val;
    rio_TokenMod mod = rio_token.mod;
    rio_next_token();
    return rio_new_expr_str(pos, val, mod);
  } else if (rio_is_token((rio_TokenKind_Name))) {
    char const ((*name)) = rio_token.name;
    rio_next_token();
    if (rio_is_token((rio_TokenKind_Lbrace))) {
      return rio_parse_expr_struct(rio_new_typespec_name1(pos, name));
    } else {
      return rio_new_expr_name(pos, name);
    }
  } else if (rio_match_keyword(rio_sizeof_keyword)) {
    if (rio_match_token((rio_TokenKind_Lparen))) {
      rio_Expr (*expr) = rio_parse_expr();
      rio_expect_token((rio_TokenKind_Rparen));
      return rio_new_expr_sizeof_expr(pos, expr);
    } else {
      rio_expect_token((rio_TokenKind_Lt));
      rio_Typespec (*type) = rio_parse_type();
      rio_expect_close_angle();
      return rio_new_expr_sizeof_type(pos, type);
    }
  } else if (rio_match_keyword(rio_alignof_keyword)) {
    if (rio_match_token((rio_TokenKind_Lparen))) {
      rio_Expr (*expr) = rio_parse_expr();
      rio_expect_token((rio_TokenKind_Rparen));
      return rio_new_expr_alignof_expr(pos, expr);
    } else {
      rio_expect_token((rio_TokenKind_Lt));
      rio_Typespec (*type) = rio_parse_type();
      rio_expect_close_angle();
      return rio_new_expr_alignof_type(pos, type);
    }
  } else if (rio_match_keyword(rio_typeof_keyword)) {
    if (rio_match_token((rio_TokenKind_Lparen))) {
      rio_Expr (*expr) = rio_parse_expr();
      rio_expect_token((rio_TokenKind_Rparen));
      return rio_new_expr_typeof_expr(pos, expr);
    } else {
      rio_expect_token((rio_TokenKind_Lt));
      rio_Typespec (*type) = rio_parse_type();
      rio_expect_close_angle();
      return rio_new_expr_typeof_type(pos, type);
    }
  } else if (rio_match_keyword(rio_offsetof_keyword)) {
    rio_expect_token((rio_TokenKind_Lparen));
    rio_Typespec (*type) = rio_parse_type();
    rio_expect_token((rio_TokenKind_Comma));
    char const ((*name)) = rio_parse_name();
    rio_expect_token((rio_TokenKind_Rparen));
    return rio_new_expr_offsetof(pos, type, name);
  } else if (rio_is_token((rio_TokenKind_Lbracket))) {
    return rio_parse_expr_list(NULL);
  } else if (rio_is_token((rio_TokenKind_Lbrace))) {
    return rio_parse_expr_struct(NULL);
  } else if (rio_match_token((rio_TokenKind_Lt))) {
    rio_Typespec (*type) = rio_parse_type();
    rio_expect_close_angle();
    if (rio_is_token((rio_TokenKind_Lbrace))) {
      return rio_parse_expr_struct(type);
    } else if (rio_is_token((rio_TokenKind_Lparen))) {
      return rio_parse_expr_tuple(type);
    } else if (rio_is_token((rio_TokenKind_Lbracket))) {
      return rio_parse_expr_list(type);
    } else {
      return rio_new_expr_cast(pos, type, rio_parse_expr_unary());
    }
  } else if (rio_is_token((rio_TokenKind_Lparen))) {
    return rio_parse_expr_tuple(NULL);
  } else {
    rio_fatal_error(rio_token.pos, "Unexpected token %s in expression", rio_token_info());
    return NULL;
  }
}

rio_Expr (*rio_parse_expr_base(void)) {
  rio_Expr (*expr) = rio_parse_expr_operand();
  while ((((((rio_is_token((rio_TokenKind_Lparen))) || (rio_is_token((rio_TokenKind_Lbrace)))) || (rio_is_token((rio_TokenKind_Lbracket)))) || (rio_is_token((rio_TokenKind_Dot)))) || (rio_is_token((rio_TokenKind_Inc)))) || (rio_is_token((rio_TokenKind_Dec)))) {
    rio_SrcPos pos = rio_token.pos;
    if (rio_match_token((rio_TokenKind_Lparen))) {
      rio_CompoundField (*args) = {0};
      while (!(rio_is_token((rio_TokenKind_Rparen)))) {
        rio_CompoundField arg = rio_parse_expr_struct_field(true);
        rio_buf_push((void (**))(&(args)), &(arg), sizeof(arg));
        if (!(rio_match_token((rio_TokenKind_Comma)))) {
          break;
        }
      }
      rio_expect_token((rio_TokenKind_Rparen));
      expr = rio_new_expr_call(pos, expr, (rio_Slice_CompoundField){args, rio_buf_len(args)});
    } else if (rio_is_token((rio_TokenKind_Lbrace))) {
      switch (expr->kind) {
      case rio_Expr_Call: {
        rio_fatal_error(expr->pos, "No support yet for trailing blocks");
        return NULL;
        break;
      }
      default: {
        rio_Expr (*compound) = rio_parse_expr_struct(NULL);
        rio_Slice_CompoundField args = compound->compound.fields;
        compound->kind = (rio_Expr_Call);
        compound->call = (rio_ExprCall){.args = args, .expr = expr};
        expr = compound;
        break;
      }
      }
    } else if (rio_match_token((rio_TokenKind_Lbracket))) {
      rio_Expr (*index) = rio_parse_expr();
      rio_expect_token((rio_TokenKind_Rbracket));
      expr = rio_new_expr_index(pos, expr, index);
    } else if (rio_is_token((rio_TokenKind_Dot))) {
      rio_next_token();
      if (rio_is_token((rio_TokenKind_Lt))) {
        rio_Slice_TypeArg type_args = rio_parse_type_args();
        switch (expr->kind) {
        case rio_Expr_Field: {
          expr->field.type_args = type_args;
          break;
        }
        case rio_Expr_Name: {
          expr->type_args = type_args;
          break;
        }
        default: {
          rio_fatal_error(pos, "Unexpected type args");
          break;
        }
        }
      } else {
        char const ((*field)) = rio_token.name;
        rio_expect_token((rio_TokenKind_Name));
        expr = rio_new_expr_field(pos, expr, field);
      }
    } else {
      assert((rio_is_token((rio_TokenKind_Inc))) || (rio_is_token((rio_TokenKind_Dec))));
      rio_TokenKind op = rio_token.kind;
      rio_next_token();
      expr = rio_new_expr_modify(pos, op, true, expr);
    }
  }
  return expr;
}

bool rio_is_unary_op(void) {
  return (((((((rio_is_token((rio_TokenKind_Add))) || (rio_is_token((rio_TokenKind_Sub)))) || (rio_is_token((rio_TokenKind_Mul)))) || (rio_is_token((rio_TokenKind_And)))) || (rio_is_token((rio_TokenKind_Neg)))) || (rio_is_token((rio_TokenKind_Not)))) || (rio_is_token((rio_TokenKind_Inc)))) || (rio_is_token((rio_TokenKind_Dec)));
}

rio_Expr (*rio_parse_expr_unary(void)) {
  if (rio_is_unary_op()) {
    rio_SrcPos pos = rio_token.pos;
    rio_TokenKind op = rio_token.kind;
    rio_next_token();
    if (((op) == ((rio_TokenKind_Inc))) || ((op) == ((rio_TokenKind_Dec)))) {
      return rio_new_expr_modify(pos, op, false, rio_parse_expr_unary());
    } else {
      return rio_new_expr_unary(pos, op, rio_parse_expr_unary());
    }
  } else {
    return rio_parse_expr_base();
  }
}

bool rio_is_mul_op(void) {
  return (((rio_TokenKind_FirstMul)) <= (rio_token.kind)) && ((rio_token.kind) <= ((rio_TokenKind_LastMul)));
}

rio_Expr (*rio_parse_expr_as(void)) {
  rio_Expr (*expr) = rio_parse_expr_unary();
  while (rio_is_token_name(rio_as_name)) {
    rio_SrcPos pos = rio_token.pos;
    rio_next_token();
    rio_Typespec (*type) = rio_parse_type();
    expr = rio_new_expr_cast(pos, type, expr);
  }
  return expr;
}

rio_Expr (*rio_parse_expr_mul(void)) {
  rio_Expr (*expr) = rio_parse_expr_as();
  while (rio_is_mul_op()) {
    rio_SrcPos pos = rio_token.pos;
    rio_TokenKind op = rio_token.kind;
    rio_next_token();
    expr = rio_new_expr_binary(pos, op, expr, rio_parse_expr_as());
  }
  return expr;
}

bool rio_is_add_op(void) {
  return (((rio_TokenKind_FirstAdd)) <= (rio_token.kind)) && ((rio_token.kind) <= ((rio_TokenKind_LastAdd)));
}

rio_Expr (*rio_parse_expr_add(void)) {
  rio_Expr (*expr) = rio_parse_expr_mul();
  while (rio_is_add_op()) {
    rio_SrcPos pos = rio_token.pos;
    rio_TokenKind op = rio_token.kind;
    rio_next_token();
    expr = rio_new_expr_binary(pos, op, expr, rio_parse_expr_mul());
  }
  return expr;
}

bool rio_is_cmp_op(void) {
  return (((rio_TokenKind_FirstCmp)) <= (rio_token.kind)) && ((rio_token.kind) <= ((rio_TokenKind_LastCmp)));
}

rio_Expr (*rio_parse_expr_cmp(void)) {
  rio_Expr (*expr) = rio_parse_expr_add();
  while (rio_is_cmp_op()) {
    rio_SrcPos pos = rio_token.pos;
    rio_TokenKind op = rio_token.kind;
    rio_next_token();
    expr = rio_new_expr_binary(pos, op, expr, rio_parse_expr_add());
  }
  return expr;
}

rio_Expr (*rio_parse_expr_and(void)) {
  rio_Expr (*expr) = rio_parse_expr_cmp();
  while (rio_match_token((rio_TokenKind_AndAnd))) {
    rio_SrcPos pos = rio_token.pos;
    expr = rio_new_expr_binary(pos, (rio_TokenKind_AndAnd), expr, rio_parse_expr_cmp());
  }
  return expr;
}

rio_Expr (*rio_parse_expr_or(void)) {
  rio_Expr (*expr) = rio_parse_expr_and();
  while (rio_match_token((rio_TokenKind_OrOr))) {
    rio_SrcPos pos = rio_token.pos;
    expr = rio_new_expr_binary(pos, (rio_TokenKind_OrOr), expr, rio_parse_expr_and());
  }
  return expr;
}

rio_Expr (*rio_parse_expr_ternary(void)) {
  rio_SrcPos pos = rio_token.pos;
  rio_Expr (*expr) = rio_parse_expr_or();
  if (rio_match_token((rio_TokenKind_Question))) {
    rio_Expr (*then_expr) = rio_parse_expr_ternary();
    rio_expect_token((rio_TokenKind_Colon));
    rio_Expr (*else_expr) = rio_parse_expr_ternary();
    expr = rio_new_expr_ternary(pos, expr, then_expr, else_expr);
  }
  return expr;
}

rio_Expr (*rio_parse_expr(void)) {
  return rio_parse_expr_ternary();
}

rio_Expr (*rio_parse_paren_expr(void)) {
  rio_expect_token((rio_TokenKind_Lparen));
  rio_Expr (*expr) = rio_parse_expr();
  rio_expect_token((rio_TokenKind_Rparen));
  return expr;
}

rio_StmtList rio_parse_stmt_block(void) {
  rio_SrcPos pos = rio_token.pos;
  rio_expect_token((rio_TokenKind_Lbrace));
  rio_Stmt (*(*stmts)) = NULL;
  while ((!(rio_is_token_eof())) && (!(rio_is_token((rio_TokenKind_Rbrace))))) {
    rio_Stmt (*stmt) = rio_parse_stmt();
    rio_buf_push((void (**))(&(stmts)), &(stmt), sizeof(stmt));
  }
  rio_expect_token((rio_TokenKind_Rbrace));
  return rio_new_stmt_list(pos, (rio_Slice_ref_Stmt){stmts, rio_buf_len(stmts)});
}

rio_Stmt (*rio_parse_stmt_if(rio_SrcPos pos)) {
  rio_expect_token((rio_TokenKind_Lparen));
  rio_Expr (*cond) = {0};
  rio_Stmt (*init) = {0};
  if (rio_match_keyword(rio_let_keyword)) {
    init = rio_parse_let_stmt(pos);
    if (rio_match_token((rio_TokenKind_Semicolon))) {
      cond = rio_parse_expr();
    }
  } else {
    cond = rio_parse_expr();
  }
  rio_expect_token((rio_TokenKind_Rparen));
  rio_StmtList then_block = rio_parse_stmt_block();
  rio_StmtList else_block = {0};
  rio_ElseIf (*elseifs) = {0};
  while (rio_match_keyword(rio_else_keyword)) {
    if (!(rio_match_keyword(rio_if_keyword))) {
      else_block = rio_parse_stmt_block();
      break;
    }
    rio_Expr (*elseif_cond) = rio_parse_paren_expr();
    rio_StmtList elseif_block = rio_parse_stmt_block();
    rio_ElseIf elseif = (rio_ElseIf){elseif_cond, elseif_block};
    rio_buf_push((void (**))(&(elseifs)), &(elseif), sizeof(elseif));
  }
  return rio_new_stmt_if(pos, init, cond, then_block, (rio_Slice_ElseIf){elseifs, rio_buf_len(elseifs)}, else_block);
}

rio_Stmt (*rio_parse_stmt_while(rio_SrcPos pos)) {
  rio_Expr (*cond) = rio_parse_paren_expr();
  return rio_new_stmt_while(pos, cond, rio_parse_stmt_block());
}

rio_Stmt (*rio_parse_stmt_do_while(rio_SrcPos pos)) {
  rio_StmtList block = rio_parse_stmt_block();
  if (!(rio_match_keyword(rio_while_keyword))) {
    rio_fatal_error(rio_token.pos, "Expected \'while\' after \'do\' block");
    return NULL;
  }
  rio_Stmt (*stmt) = rio_new_stmt_do_while(pos, rio_parse_paren_expr(), block);
  rio_expect_token((rio_TokenKind_Semicolon));
  return stmt;
}

bool rio_is_assign_op(void) {
  return (((rio_TokenKind_FirstAssign)) <= (rio_token.kind)) && ((rio_token.kind) <= ((rio_TokenKind_LastAssign)));
}

rio_Stmt (*rio_parse_let_stmt(rio_SrcPos pos)) {
  bool is_mut = rio_match_keyword(rio_mut_keyword);
  char const ((*name)) = rio_parse_name();
  if (rio_match_token((rio_TokenKind_Assign))) {
    return rio_new_stmt_init(pos, name, is_mut, NULL, rio_parse_expr());
  } else if (rio_match_token((rio_TokenKind_Colon))) {
    rio_Typespec (*type) = rio_parse_type();
    rio_Expr (*expr) = {0};
    if (rio_match_token((rio_TokenKind_Assign))) {
      expr = rio_parse_expr();
    }
    return rio_new_stmt_init(pos, name, is_mut, type, expr);
  } else {
    rio_fatal_error(rio_token.pos, "Expected : or = after let mut, got %s", rio_token_info());
    return NULL;
  }
}

rio_Stmt (*rio_parse_simple_stmt(void)) {
  rio_SrcPos pos = rio_token.pos;
  rio_Stmt (*stmt) = {0};
  if (rio_match_keyword(rio_let_keyword)) {
    stmt = rio_parse_let_stmt(pos);
  } else {
    rio_Expr (*expr) = rio_parse_expr();
    if (((expr->kind) == ((rio_Expr_Name))) && (rio_match_token((rio_TokenKind_Colon)))) {
      stmt = rio_new_stmt_label(pos, expr->name);
    } else if (rio_is_assign_op()) {
      rio_TokenKind op = rio_token.kind;
      rio_next_token();
      stmt = rio_new_stmt_assign(pos, op, expr, rio_parse_expr());
    } else {
      stmt = rio_new_stmt_expr(pos, expr);
    }
  }
  return stmt;
}

rio_Stmt (*rio_parse_stmt_for_each(rio_SrcPos pos, bool get_ref, rio_Expr (*expr))) {
  bool has_varargs = {0};
  rio_Slice_Member params = {0};
  if (rio_match_keyword(rio_do_keyword)) {
    params = rio_parse_decl_func_params(&(has_varargs), true);
  }
  if (has_varargs) {
    rio_fatal_error(pos, "Varargs not allowed in for-each loop");
  }
  return rio_new_stmt_for_each(pos, get_ref, expr, params, rio_parse_stmt_block());
}

rio_Stmt (*rio_parse_stmt_for(rio_SrcPos pos)) {
  bool get_ref = rio_match_token((rio_TokenKind_And));
  rio_expect_token((rio_TokenKind_Lparen));
  rio_Stmt (*init) = {0};
  if (!(rio_is_token((rio_TokenKind_Semicolon)))) {
    init = rio_parse_simple_stmt();
  }
  if (((init) && ((init->kind) == ((rio_Stmt_Expr)))) && (rio_is_token((rio_TokenKind_Rparen)))) {
    rio_next_token();
    return rio_parse_stmt_for_each(pos, get_ref, init->expr);
  } else if (get_ref) {
    rio_fatal_error(pos, "Ref requested for segmented for loop");
  }
  rio_expect_token((rio_TokenKind_Semicolon));
  rio_Expr (*cond) = {0};
  if (!(rio_is_token((rio_TokenKind_Semicolon)))) {
    cond = rio_parse_expr();
  }
  rio_Stmt (*next) = {0};
  if (rio_match_token((rio_TokenKind_Semicolon))) {
    if (!(rio_is_token((rio_TokenKind_Rparen)))) {
      next = rio_parse_simple_stmt();
      if ((next->kind) == ((rio_Stmt_Init))) {
        rio_error(rio_token.pos, "Init statements not allowed in for-statement\'s next clause");
      }
    }
  }
  rio_expect_token((rio_TokenKind_Rparen));
  return rio_new_stmt_for(pos, init, cond, next, rio_parse_stmt_block());
}

rio_SwitchCasePattern rio_parse_switch_case_pattern(void) {
  if (rio_match_keyword(rio_default_keyword)) {
    return (rio_SwitchCasePattern){.is_default = true};
  }
  rio_Expr (*start) = rio_parse_expr();
  rio_Expr (*end) = {0};
  if (rio_match_token((rio_TokenKind_Ellipsis))) {
    end = rio_parse_expr();
  }
  return (rio_SwitchCasePattern){false, start, end};
}

rio_SwitchCase rio_parse_stmt_switch_case(void) {
  rio_SwitchCasePattern (*patterns) = {0};
  rio_SwitchCasePattern pattern = rio_parse_switch_case_pattern();
  rio_buf_push((void (**))(&(patterns)), &(pattern), sizeof(pattern));
  while (rio_match_token((rio_TokenKind_Comma))) {
    pattern = rio_parse_switch_case_pattern();
    rio_buf_push((void (**))(&(patterns)), &(pattern), sizeof(pattern));
  }
  rio_expect_token((rio_TokenKind_Spear));
  rio_SrcPos pos = rio_token.pos;
  rio_Stmt (*stmt) = rio_parse_stmt();
  return (rio_SwitchCase){{patterns, rio_buf_len(patterns)}, rio_new_stmt_list(pos, (rio_Slice_ref_Stmt){&(stmt), 1})};
}

rio_Stmt (*rio_parse_stmt_switch(rio_SrcPos pos)) {
  rio_Expr (*const (expr)) = rio_parse_paren_expr();
  rio_SwitchCase (*cases) = {0};
  rio_expect_token((rio_TokenKind_Lbrace));
  while ((!(rio_is_token_eof())) && (!(rio_is_token((rio_TokenKind_Rbrace))))) {
    rio_SwitchCase case_stmt = rio_parse_stmt_switch_case();
    rio_buf_push((void (**))(&(cases)), &(case_stmt), sizeof(case_stmt));
  }
  rio_expect_token((rio_TokenKind_Rbrace));
  return rio_new_stmt_switch(pos, expr, (rio_Slice_SwitchCase){cases, rio_buf_len(cases)});
}

rio_Stmt (*rio_parse_stmt(void)) {
  rio_Slice_Note notes = rio_parse_notes();
  rio_SrcPos pos = rio_token.pos;
  rio_Stmt (*stmt) = {0};
  if (rio_match_keyword(rio_if_keyword)) {
    if (rio_match_token((rio_TokenKind_Semicolon))) {
      return rio_new_stmt_close(pos, (rio_Stmt_If));
    }
    stmt = rio_parse_stmt_if(pos);
  } else if (rio_match_keyword(rio_while_keyword)) {
    if (rio_match_token((rio_TokenKind_Semicolon))) {
      return rio_new_stmt_close(pos, (rio_Stmt_While));
    }
    stmt = rio_parse_stmt_while(pos);
  } else if (rio_match_keyword(rio_do_keyword)) {
    stmt = rio_parse_stmt_do_while(pos);
  } else if (rio_match_keyword(rio_for_keyword)) {
    if (rio_match_token((rio_TokenKind_Semicolon))) {
      return rio_new_stmt_close(pos, (rio_Stmt_For));
    }
    stmt = rio_parse_stmt_for(pos);
  } else if (rio_match_keyword(rio_switch_keyword)) {
    if (rio_match_token((rio_TokenKind_Semicolon))) {
      return rio_new_stmt_close(pos, (rio_Stmt_Switch));
    }
    stmt = rio_parse_stmt_switch(pos);
  } else if (rio_is_token((rio_TokenKind_Lbrace))) {
    stmt = rio_new_stmt_block(pos, rio_parse_stmt_block());
  } else if (rio_match_keyword(rio_break_keyword)) {
    rio_expect_token((rio_TokenKind_Semicolon));
    stmt = rio_new_stmt_break(pos);
  } else if (rio_match_keyword(rio_continue_keyword)) {
    rio_expect_token((rio_TokenKind_Semicolon));
    stmt = rio_new_stmt_continue(pos);
  } else if (rio_match_keyword(rio_return_keyword)) {
    rio_Expr (*expr) = {0};
    if (!(rio_is_token((rio_TokenKind_Semicolon)))) {
      expr = rio_parse_expr();
    }
    rio_expect_token((rio_TokenKind_Semicolon));
    stmt = rio_new_stmt_return(pos, expr);
  } else if (rio_match_token((rio_TokenKind_Pound))) {
    rio_Note note = rio_parse_note();
    rio_expect_token((rio_TokenKind_Semicolon));
    stmt = rio_new_stmt_note(pos, note);
  } else if (rio_match_keyword(rio_goto_keyword)) {
    stmt = rio_new_stmt_goto(pos, rio_parse_name());
    rio_expect_token((rio_TokenKind_Semicolon));
  } else {
    stmt = rio_parse_simple_stmt();
    if ((stmt->kind) != ((rio_Stmt_Label))) {
      rio_expect_token((rio_TokenKind_Semicolon));
    }
  }
  stmt->notes = notes;
  return stmt;
}

char const ((*rio_parse_name(void))) {
  char const ((*name)) = rio_token.name;
  rio_expect_token((rio_TokenKind_Name));
  return name;
}

rio_EnumItem rio_parse_decl_enum_item(void) {
  rio_SrcPos pos = rio_token.pos;
  char const ((*name)) = rio_parse_name();
  rio_Expr (*init) = {0};
  if (rio_match_token((rio_TokenKind_Assign))) {
    init = rio_parse_expr();
  }
  return (rio_EnumItem){pos, name, init};
}

rio_Decl (*rio_parse_decl_enum(rio_SrcPos pos)) {
  char const ((*name)) = {0};
  if (rio_is_token((rio_TokenKind_Name))) {
    name = rio_parse_name();
  }
  rio_Typespec (*type) = {0};
  if (rio_match_token((rio_TokenKind_Assign))) {
    type = rio_parse_type();
  }
  rio_expect_token((rio_TokenKind_Lbrace));
  rio_EnumItem (*items) = {0};
  while (!(rio_is_token((rio_TokenKind_Rbrace)))) {
    rio_EnumItem item = rio_parse_decl_enum_item();
    rio_buf_push((void (**))(&(items)), &(item), sizeof(item));
    if (!(rio_match_token((rio_TokenKind_Comma)))) {
      break;
    }
  }
  rio_expect_token((rio_TokenKind_Rbrace));
  return rio_new_decl_enum(pos, name, type, (rio_Slice_EnumItem){items, rio_buf_len(items)});
}

rio_Member rio_parse_decl_aggregate_item(void) {
  rio_SrcPos pos = rio_token.pos;
  if (rio_match_keyword(rio_struct_keyword)) {
    return (rio_Member){.pos = pos, .kind = (rio_Member_Subaggregate), .subaggregate = rio_parse_aggregate((rio_AggregateKind_Struct), NULL, NULL)};
  } else if (rio_match_keyword(rio_union_keyword)) {
    return (rio_Member){.pos = pos, .kind = (rio_Member_Subaggregate), .subaggregate = rio_parse_aggregate((rio_AggregateKind_Union), NULL, NULL)};
  } else {
    char const ((*name)) = rio_parse_name();
    rio_expect_token((rio_TokenKind_Colon));
    rio_Typespec (*type) = rio_parse_type();
    rio_expect_token((rio_TokenKind_Semicolon));
    return (rio_Member){(rio_Member_Field), .name = name, .pos = pos, .type = type};
  }
}

char const ((*(rio_enum_tag_names[1]))) = {"kind"};
bool rio_enum_tag_name_interned = false;
rio_Aggregate (*rio_parse_aggregate(rio_AggregateKind kind, char const ((*name)), rio_Slice_Note (*notes))) {
  rio_SrcPos pos = rio_token.pos;
  rio_Member (*items) = {0};
  bool has_enum = false;
  rio_Aggregate (*enum_union) = {0};
  if (rio_match_keyword(rio_switch_keyword)) {
    if ((kind) != ((rio_AggregateKind_Union))) {
      rio_fatal_error(pos, "Switch aggregate applies only to union");
    }
    items = rio_parse_switch_union();
    has_enum = true;
  } else {
    rio_expect_token((rio_TokenKind_Lbrace));
    while ((!(rio_is_token_eof())) && (!(rio_is_token((rio_TokenKind_Rbrace))))) {
      rio_Member item = rio_parse_decl_aggregate_item();
      rio_buf_push((void (**))(&(items)), &(item), sizeof(item));
      if ((item.kind) == ((rio_Member_Subaggregate))) {
        rio_Aggregate (*sub) = item.subaggregate;
        if (((sub->kind) == ((rio_AggregateKind_Union))) && (sub->members.length)) {
          if (sub->members.items->kind_names.length) {
            if (enum_union) {
              rio_fatal_error(sub->pos, "Multiple switch unions in struct");
              return NULL;
            }
            enum_union = sub;
          }
        }
      }
    }
    rio_expect_token((rio_TokenKind_Rbrace));
    if ((notes) && (rio_get_note(notes, rio_enum_keyword))) {
      has_enum = true;
    }
  }
  if ((name) && (((has_enum) || (enum_union)))) {
    if ((kind) == ((rio_AggregateKind_Union))) {
      enum_union = rio_new_aggregate(pos, kind, (rio_Slice_Member){items, rio_buf_len(items)});
      rio_Member subitem = {.pos = pos, .kind = (rio_Member_Subaggregate), .subaggregate = enum_union};
      kind = (rio_AggregateKind_Struct);
      items = NULL;
      rio_buf_push((void (**))(&(items)), &(subitem), sizeof(subitem));
    } else if (!(enum_union)) {
      enum_union = rio_get_subunion((rio_Slice_Member){items, rio_buf_len(items)});
      if (!(enum_union)) {
        rio_fatal_error(pos, "No union for enum tag");
        return NULL;
      }
    }
    if (!(rio_enum_tag_name_interned)) {
      rio_enum_tag_names[0] = rio_str_intern(rio_enum_tag_names[0]);
      rio_enum_tag_name_interned = true;
    }
    char const ((*tag_type_name)) = rio_build_scoped_name(name, "Kind");
    rio_Member tag_item = {.pos = pos, .kind = (rio_Member_Field), .name = *(rio_enum_tag_names), .type = rio_new_typespec_name1(pos, tag_type_name)};
    rio_buf_unshift((void (**))(&(items)), &(tag_item), sizeof(tag_item));
    rio_build_enum_union_decl(enum_union, name);
  }
  rio_Aggregate (*result) = rio_new_aggregate(pos, kind, (rio_Slice_Member){items, rio_buf_len(items)});
  if (enum_union) {
    result->union_enum_decl = enum_union->union_enum_decl;
  }
  return result;
}

char const ((*(rio_empty_names[1]))) = {""};
rio_Member (*rio_parse_switch_union(void)) {
  rio_expect_token((rio_TokenKind_Lbrace));
  rio_Member (*items) = {0};
  while ((!(rio_is_token_eof())) && (!(rio_is_token((rio_TokenKind_Rbrace))))) {
    char const ((*(*kind_names))) = {0};
    char const ((*kind_name)) = rio_parse_name();
    rio_buf_push((void (**))(&(kind_names)), &(kind_name), sizeof(kind_name));
    while (rio_match_token((rio_TokenKind_Comma))) {
      kind_name = rio_parse_name();
      rio_buf_push((void (**))(&(kind_names)), &(kind_name), sizeof(kind_name));
    }
    rio_expect_token((rio_TokenKind_Spear));
    rio_SrcPos pos = rio_token.pos;
    rio_Member item = {0};
    if (rio_match_token((rio_TokenKind_Colon))) {
      rio_Typespec (*type) = rio_parse_type();
      if (!(((((type->kind) == ((rio_Typespec_Name))) && ((type->names.length) == (1))) && ((type->names.items[0].name) == (rio_void_name))))) {
        rio_fatal_error(rio_token.pos, "Anonymous switch fields can only be void");
        return NULL;
      }
      rio_expect_token((rio_TokenKind_Semicolon));
      item = (rio_Member){(rio_Member_Field), .pos = pos, .name = *(rio_empty_names), .type = type};
    } else {
      item = rio_parse_decl_aggregate_item();
    }
    item.kind_names = (rio_Slice_ptr_const_char){kind_names, rio_buf_len(kind_names)};
    rio_buf_push((void (**))(&(items)), &(item), sizeof(item));
  }
  rio_expect_token((rio_TokenKind_Rbrace));
  return items;
}

void rio_build_enum_union_decl(rio_Aggregate (*enum_union), char const ((*decl_name))) {
  char const ((*enum_type_name)) = rio_build_scoped_name(decl_name, "Kind");
  size_t num_all_items = 0;
  {
    rio_Slice_Member items__ = enum_union->members;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Member (*union_member) = &items__.items[i__];
      ullong num_names = union_member->kind_names.length;
      if (!(num_names)) {
        if ((union_member->kind) != ((rio_Member_Field))) {
          rio_fatal_error(union_member->pos, "Enum union item of %s not a field", decl_name);
          return;
        }
        num_names = 1;
      }
      num_all_items += num_names;
    }
  }
  rio_EnumItem (*enum_items) = (rio_EnumItem *)(rio_xmalloc((num_all_items) * (sizeof(rio_EnumItem))));
  size_t enum_item_index = 0;
  {
    rio_Slice_Member items__ = enum_union->members;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Member (*union_member) = &items__.items[i__];
      rio_Slice_ptr_const_char names = union_member->kind_names;
      if (!(names.length)) {
        names = (rio_Slice_ptr_const_char){&(union_member->name), 1};
      }
      {
        rio_Slice_ptr_const_char items__ = names;
        for (size_t i__ = 0; i__ < items__.length; ++i__) {
          char const ((*name)) = items__.items[i__];
          enum_items[(enum_item_index)++] = (rio_EnumItem){.name = name, .pos = union_member->pos};
        }
      }
    }
  }
  rio_Decl (*union_enum_decl) = rio_new_decl_enum(enum_union->pos, enum_type_name, NULL, (rio_Slice_EnumItem){enum_items, num_all_items});
  enum_union->union_enum_decl = union_enum_decl;
}

rio_Slice_Decl rio_parse_type_params(void) {
  rio_Slice_Decl params = {0};
  if (rio_match_token((rio_TokenKind_Lt))) {
    do {
      char const ((*param_name)) = rio_parse_name();
      rio_Typespec (*constraint) = {0};
      if (rio_match_token((rio_TokenKind_Colon))) {
        constraint = rio_parse_type();
      }
      rio_Decl param = {.kind = (rio_Decl_Typedef), .pos = rio_token.pos, .is_generic = true, .name = param_name, .typedef_decl = {.constraint = constraint}};
      rio_buf_push((void (**))(&(params.items)), &(param), sizeof(param));
    } while (rio_match_token((rio_TokenKind_Comma)));
    rio_expect_token((rio_TokenKind_Gt));
    params.length = rio_buf_len(params.items);
  }
  return params;
}

rio_Decl (*rio_parse_decl_aggregate(rio_SrcPos pos, rio_Decl_Kind kind, rio_Slice_Note (*notes))) {
  assert(((kind) == ((rio_Decl_Struct))) || ((kind) == ((rio_Decl_Union))));
  char const ((*name)) = rio_parse_name();
  rio_AggregateKind aggregate_kind = ((kind) == ((rio_Decl_Struct)) ? (rio_AggregateKind_Struct) : (rio_AggregateKind_Union));
  rio_Slice_Decl params = rio_parse_type_params();
  rio_Decl (*decl) = {0};
  if (rio_match_token((rio_TokenKind_Semicolon))) {
    decl = rio_new_decl_aggregate(pos, kind, name, params, rio_new_aggregate(pos, aggregate_kind, (rio_Slice_Member){0}));
    decl->is_incomplete = true;
    return decl;
  } else {
    rio_Aggregate (*aggregate) = rio_parse_aggregate(aggregate_kind, name, notes);
    kind = ((aggregate->kind) == ((rio_AggregateKind_Struct)) ? (rio_Decl_Struct) : (rio_Decl_Union));
    decl = rio_new_decl_aggregate(pos, kind, name, params, aggregate);
  }
  if (decl->aggregate->union_enum_decl) {
    decl->aggregate->union_enum_decl->enum_decl.kind_aggregate_decl = decl;
  }
  if (params.length) {
    decl->is_generic = true;
  }
  return decl;
}

rio_Decl (*rio_parse_decl_var(rio_SrcPos pos)) {
  bool is_mut = rio_match_keyword(rio_mut_keyword);
  char const ((*name)) = rio_parse_name();
  if (rio_match_token((rio_TokenKind_Assign))) {
    rio_Expr (*expr) = rio_parse_expr();
    rio_expect_token((rio_TokenKind_Semicolon));
    return rio_new_decl_var(pos, name, NULL, expr);
  } else if (rio_match_token((rio_TokenKind_Colon))) {
    rio_Typespec (*type) = rio_parse_type();
    rio_Expr (*expr) = NULL;
    if (rio_match_token((rio_TokenKind_Assign))) {
      expr = rio_parse_expr();
    }
    rio_expect_token((rio_TokenKind_Semicolon));
    return rio_new_decl_var(pos, name, type, expr);
  } else {
    rio_fatal_error(rio_token.pos, "Expected : or = after let mut, got %s", rio_token_info());
    return NULL;
  }
}

rio_Decl (*rio_parse_decl_const(rio_SrcPos pos)) {
  char const ((*name)) = rio_parse_name();
  rio_Typespec (*type) = NULL;
  if (rio_match_token((rio_TokenKind_Colon))) {
    type = rio_parse_type();
  }
  rio_expect_token((rio_TokenKind_Assign));
  rio_Expr (*expr) = rio_parse_expr();
  rio_expect_token((rio_TokenKind_Semicolon));
  return rio_new_decl_const(pos, name, type, expr);
}

rio_Decl (*rio_parse_decl_typedef(rio_SrcPos pos)) {
  char const ((*name)) = rio_parse_name();
  rio_expect_token((rio_TokenKind_Assign));
  rio_Typespec (*type) = rio_parse_type();
  rio_expect_token((rio_TokenKind_Semicolon));
  return rio_new_decl_typedef(pos, name, type);
}

rio_Member rio_parse_decl_func_param(bool optional_types) {
  rio_SrcPos pos = rio_token.pos;
  bool is_mut = rio_match_keyword(rio_mut_keyword);
  char const ((*name)) = rio_parse_name();
  rio_Typespec (*type) = {0};
  if (optional_types) {
    if (rio_match_token((rio_TokenKind_Colon))) {
      type = rio_parse_type();
    }
  } else {
    rio_expect_token((rio_TokenKind_Colon));
    type = rio_parse_type();
  }
  if (is_mut) {
    if (!(type)) {
      type = rio_new_typespec((rio_Typespec_None), pos);
    }
    type->is_mut = true;
  }
  return (rio_Member){.name = name, .pos = pos, .type = type};
}

rio_Slice_Member rio_parse_decl_func_params(bool (*has_varargs), bool optional_types) {
  rio_expect_token((rio_TokenKind_Lparen));
  rio_Member (*params) = NULL;
  *(has_varargs) = false;
  while (!(rio_is_token((rio_TokenKind_Rparen)))) {
    if (rio_match_token((rio_TokenKind_Ellipsis))) {
      if (*(has_varargs)) {
        rio_error(rio_token.pos, "Multiple ellipsis in function declaration");
      }
      *(has_varargs) = true;
    } else {
      if (*(has_varargs)) {
        rio_error(rio_token.pos, "Ellipsis must be last parameter in function declaration");
      }
      rio_Member param = rio_parse_decl_func_param(optional_types);
      rio_buf_push((void (**))(&(params)), &(param), sizeof(param));
    }
    if (!(rio_match_token((rio_TokenKind_Comma)))) {
      break;
    }
  }
  rio_expect_token((rio_TokenKind_Rparen));
  return (rio_Slice_Member){params, rio_buf_len(params)};
}

rio_Decl (*rio_parse_decl_func(rio_SrcPos pos)) {
  char const ((*name)) = rio_parse_name();
  rio_Slice_Decl type_params = rio_parse_type_params();
  bool has_varargs = false;
  rio_Slice_Member params = rio_parse_decl_func_params(&(has_varargs), false);
  rio_Typespec (*ret_type) = NULL;
  if (rio_match_token((rio_TokenKind_Arrow))) {
    ret_type = rio_parse_type();
  }
  rio_StmtList block = {0};
  bool is_incomplete = {0};
  if (rio_match_token((rio_TokenKind_Semicolon))) {
    is_incomplete = true;
  } else {
    block = rio_parse_stmt_block();
    is_incomplete = false;
  }
  rio_Decl (*decl) = rio_new_decl_func(pos, name, type_params, params, ret_type, has_varargs, block);
  decl->is_incomplete = is_incomplete;
  if (type_params.length) {
    decl->is_generic = true;
  }
  return decl;
}

rio_NoteArg rio_parse_note_arg(void) {
  rio_SrcPos pos = rio_token.pos;
  rio_Expr (*expr) = rio_parse_expr();
  char const ((*name)) = NULL;
  if (rio_match_token((rio_TokenKind_Assign))) {
    if ((expr->kind) != ((rio_Expr_Name))) {
      rio_fatal_error(rio_token.pos, "Left of: operand = in note argument must be a name");
    }
    name = expr->name;
    expr = rio_parse_expr();
  }
  return (rio_NoteArg){.expr = expr, .name = name, .pos = pos};
}

rio_Note rio_parse_note(void) {
  rio_SrcPos pos = rio_token.pos;
  char const ((*name)) = {0};
  if (rio_is_token((rio_TokenKind_Keyword))) {
    name = rio_token.name;
    rio_next_token();
  } else {
    name = rio_parse_name();
  }
  rio_NoteArg (*args) = NULL;
  if (rio_match_token((rio_TokenKind_Lparen))) {
    rio_NoteArg arg = rio_parse_note_arg();
    rio_buf_push((void (**))(&(args)), &(arg), sizeof(arg));
    while (rio_match_token((rio_TokenKind_Comma))) {
      arg = rio_parse_note_arg();
      rio_buf_push((void (**))(&(args)), &(arg), sizeof(arg));
    }
    rio_expect_token((rio_TokenKind_Rparen));
  }
  return rio_new_note(pos, name, (rio_Slice_NoteArg){args, rio_buf_len(args)});
}

rio_Slice_Note rio_parse_notes(void) {
  rio_Note (*notes) = NULL;
  while (rio_match_token((rio_TokenKind_At))) {
    rio_Note note = rio_parse_note();
    rio_buf_push((void (**))(&(notes)), &(note), sizeof(note));
  }
  return rio_new_notes((rio_Slice_Note){notes, rio_buf_len(notes)});
}

rio_Decl (*rio_parse_decl_note(rio_SrcPos pos)) {
  return rio_new_decl_note(pos, rio_parse_note());
}

rio_Decl (*rio_parse_decl_import(rio_SrcPos pos)) {
  char const ((*rename_name)) = {0};
  bool is_relative = {0};
  repeat: ;
  is_relative = false;
  if (rio_match_token((rio_TokenKind_Dot))) {
    is_relative = true;
  }
  char const ((*name)) = rio_token.name;
  rio_expect_token((rio_TokenKind_Name));
  if ((!(is_relative)) && (rio_match_token((rio_TokenKind_Assign)))) {
    if (rename_name) {
      rio_fatal_error(pos, "Only one import assignment is allowed");
    }
    rename_name = name;
    goto repeat;
  }
  char const ((*(*names))) = NULL;
  rio_buf_push((void (**))(&(names)), &(name), sizeof(name));
  while (rio_match_token((rio_TokenKind_Dot))) {
    rio_buf_push((void (**))(&(names)), &(rio_token.name), sizeof(rio_token.name));
    rio_expect_token((rio_TokenKind_Name));
  }
  bool import_all = false;
  rio_ImportItem (*items) = {0};
  if (rio_match_token((rio_TokenKind_Lbrace))) {
    while (!(rio_is_token((rio_TokenKind_Rbrace)))) {
      if (rio_match_token((rio_TokenKind_Ellipsis))) {
        import_all = true;
      } else {
        char const ((*item_name)) = rio_parse_name();
        if (rio_match_token((rio_TokenKind_Assign))) {
          rio_ImportItem item = {.name = rio_parse_name(), .rename = item_name};
          rio_buf_push((void (**))(&(items)), &(item), sizeof(item));
        } else {
          rio_ImportItem item = {.name = item_name};
          rio_buf_push((void (**))(&(items)), &(item), sizeof(item));
        }
        if (!(rio_match_token((rio_TokenKind_Comma)))) {
          break;
        }
      }
    }
    rio_expect_token((rio_TokenKind_Rbrace));
  }
  return rio_new_decl_import(pos, rename_name, is_relative, (rio_Slice_ptr_const_char){names, rio_buf_len(names)}, import_all, (rio_Slice_ImportItem){items, rio_buf_len(items)});
}

rio_Decl (*rio_parse_decl_opt(rio_Slice_Note (*notes))) {
  rio_SrcPos pos = rio_token.pos;
  if (rio_match_keyword(rio_enum_keyword)) {
    return rio_parse_decl_enum(pos);
  } else if (rio_match_keyword(rio_struct_keyword)) {
    return rio_parse_decl_aggregate(pos, (rio_Decl_Struct), notes);
  } else if (rio_match_keyword(rio_union_keyword)) {
    return rio_parse_decl_aggregate(pos, (rio_Decl_Union), notes);
  } else if (rio_match_keyword(rio_const_keyword)) {
    return rio_parse_decl_const(pos);
  } else if (rio_match_keyword(rio_typedef_keyword)) {
    return rio_parse_decl_typedef(pos);
  } else if (rio_match_keyword(rio_def_keyword)) {
    return rio_parse_decl_func(pos);
  } else if (rio_match_keyword(rio_let_keyword)) {
    return rio_parse_decl_var(pos);
  } else if (rio_match_keyword(rio_import_keyword)) {
    return rio_parse_decl_import(pos);
  } else if (rio_match_token((rio_TokenKind_Pound))) {
    return rio_parse_decl_note(pos);
  } else {
    return NULL;
  }
}

rio_Decl (*rio_parse_decl(void)) {
  rio_Slice_Note notes = rio_parse_notes();
  rio_Decl (*decl) = rio_parse_decl_opt(&(notes));
  if (!(decl)) {
    rio_fatal_error(rio_token.pos, "Expected declaration keyword, got %s", rio_token_info());
  }
  decl->notes = notes;
  return decl;
}

rio_Slice_ref_Decl (*rio_parse_decls(void)) {
  rio_Decl (*(*decls)) = NULL;
  while (!(rio_is_token((rio_TokenKind_Eof)))) {
    rio_Decl (*decl) = rio_parse_decl();
    rio_buf_push((void (**))(&(decls)), &(decl), sizeof(decl));
  }
  return rio_new_decls((rio_Slice_ref_Decl){decls, rio_buf_len(decls)});
}

rio_Package (*rio_current_package);
rio_Package (*rio_builtin_package);
rio_Map rio_package_map;
rio_Package (*(*rio_package_list));
rio_ReachablePhase rio_reachable_phase = (rio_ReachablePhase_Natural);
rio_Sym (*rio_get_package_sym(rio_Package (*package), char const ((*name)))) {
  return rio_map_get(&(package->syms_map), name);
}

void rio_add_package(rio_Package (*package)) {
  rio_Package (*old_package) = rio_map_get(&(rio_package_map), package->path);
  if ((old_package) != (package)) {
    assert(!(old_package));
    rio_map_put(&(rio_package_map), package->path, package);
    rio_buf_push((void (**))(&(rio_package_list)), &(package), sizeof(package));
  }
}

rio_Package (*rio_enter_package(rio_Package (*new_package))) {
  rio_Package (*old_package) = rio_current_package;
  rio_current_package = new_package;
  return old_package;
}

void rio_leave_package(rio_Package (*old_package)) {
  rio_current_package = old_package;
}

rio_Sym (*(*rio_reachable_syms));
rio_Sym (*(*rio_sorted_syms));
rio_Sym (rio_local_syms[rio_MAX_LOCAL_SYMS]);
rio_Sym (*rio_local_syms_end) = rio_local_syms;
bool rio_is_local_sym(rio_Sym (*sym)) {
  return ((rio_local_syms) <= (sym)) && ((sym) < (rio_local_syms_end));
}

rio_Sym (*rio_sym_new(rio_Sym_Kind kind, char const ((*name)), rio_Decl (*decl))) {
  rio_Sym (*sym) = rio_xcalloc(1, sizeof(rio_Sym));
  sym->kind = kind;
  sym->name = name;
  sym->decl = decl;
  sym->home_package = rio_current_package;
  rio_set_resolved_sym(sym, sym);
  return sym;
}

void rio_process_decl_notes(rio_Decl (*decl), rio_Sym (*sym)) {
  rio_Note (*foreign_note) = rio_get_decl_note(decl, rio_foreign_name);
  if (foreign_note) {
    if ((foreign_note->args.length) > (1)) {
      rio_fatal_error(decl->pos, "@foreign takes 0 or 1 argument");
    }
    char const ((*external_name)) = {0};
    if ((foreign_note->args.length) == (0)) {
      external_name = sym->name;
    } else {
      rio_Expr (*arg) = foreign_note->args.items[0].expr;
      if ((arg->kind) != ((rio_Expr_Str))) {
        rio_fatal_error(decl->pos, "@foreign argument 1 must be a string literal");
      }
      external_name = arg->str_lit.val;
    }
    sym->external_name = external_name;
  }
}

rio_Sym (*rio_sym_decl(rio_Decl (*decl))) {
  rio_Sym_Kind kind = (rio_Sym_None);
  switch (decl->kind) {
  case rio_Decl_Struct:
  case rio_Decl_Union:
  case rio_Decl_Typedef:
  case rio_Decl_Enum: {
    kind = (rio_Sym_Type);
    break;
  }
  case rio_Decl_Var: {
    kind = (rio_Sym_Var);
    break;
  }
  case rio_Decl_Const: {
    kind = (rio_Sym_Const);
    break;
  }
  case rio_Decl_Func: {
    kind = (rio_Sym_Func);
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  rio_Sym (*sym) = rio_sym_new(kind, decl->name, decl);
  rio_set_resolved_sym(decl, sym);
  rio_process_decl_notes(decl, sym);
  return sym;
}

rio_Sym (*rio_sym_get_local(char const ((*name)))) {
  for (rio_Sym (*it) = rio_local_syms_end; (it) != (rio_local_syms); (it)--) {
    rio_Sym (*sym) = (it) - (1);
    if ((sym->name) == (name)) {
      return sym;
    }
  }
  return NULL;
}

rio_Sym (*rio_sym_get(char const ((*name)))) {
  rio_Sym (*sym) = rio_sym_get_local(name);
  return (sym ? sym : rio_get_package_sym(rio_current_package, name));
}

bool rio_sym_push_var(char const ((*name)), rio_Type (*type)) {
  return rio_sym_push_local((rio_Sym_Var), name, type, NULL);
}

bool rio_sym_push_local(rio_Sym_Kind kind, char const ((*name)), rio_Type (*type), rio_Decl (*decl)) {
  if (rio_sym_get_local(name)) {
    return false;
  }
  if ((rio_local_syms_end) == ((rio_local_syms) + (rio_MAX_LOCAL_SYMS))) {
    rio_fatal("Too many local symbols");
  }
  *((rio_local_syms_end)++) = (rio_Sym){.kind = kind, .name = name, .state = (rio_SymState_Resolved), .decl = decl, .type = type};
  return true;
}

rio_Sym (*rio_sym_enter(void)) {
  return rio_local_syms_end;
}

void rio_sym_leave(rio_Sym (*sym)) {
  rio_local_syms_end = sym;
}

void rio_sym_global_put(char const ((*name)), rio_Sym (*sym)) {
  rio_Sym (*old_sym) = rio_map_get(&(rio_current_package->syms_map), name);
  if (old_sym) {
    if ((sym) == (old_sym)) {
      return;
    }
    if ((((sym->kind) == ((rio_Sym_Package))) && ((old_sym->kind) == ((rio_Sym_Package)))) && ((sym->package) == (old_sym->package))) {
      return;
    }
    rio_SrcPos pos = (sym->decl ? sym->decl->pos : rio_pos_builtin);
    if (old_sym->decl) {
      rio_warning(old_sym->decl->pos, "Previous definition of \'%s\'", name);
    }
    rio_fatal_error(pos, "Duplicate definition of global symbol \'%s\'.", name);
  }
  rio_map_put(&(rio_current_package->syms_map), name, sym);
  rio_buf_push((void (**))(&(rio_current_package->syms)), &(sym), sizeof(sym));
}

rio_Sym (*rio_sym_global_type(char const ((*name)), rio_Type (*type))) {
  name = rio_str_intern(name);
  rio_Sym (*sym) = rio_sym_new((rio_Sym_Type), name, NULL);
  sym->state = (rio_SymState_Resolved);
  sym->type = type;
  sym->external_name = name;
  rio_sym_global_put(name, sym);
  return sym;
}

void rio_sym_track_ref_type(rio_Sym (*sym), rio_Typespec (*type)) {
  rio_Decl (*decl) = sym->decl;
  if (!(decl)) {
    return;
  }
  if ((type->kind) == ((rio_Typespec_Name))) {
    type->decl = decl;
  }
  rio_buf_push((void (**))(&(decl->refs.items)), &(type), sizeof(type));
  ++(decl->refs.length);
}

char const ((*rio_build_scoped_name(char const ((*space)), char const ((*name))))) {
  char (*scoped_name_buf) = {0};
  rio_buf_printf(&(scoped_name_buf), "%s_%s", space, name);
  char const ((*scoped_name)) = rio_str_intern(scoped_name_buf);
  rio_buf_free((void (**))(&(scoped_name_buf)));
  return scoped_name;
}

rio_Sym (*rio_sym_global_decl(rio_Decl (*decl), char const ((*scope)))) {
  rio_Sym (*sym) = NULL;
  if (decl->name) {
    sym = rio_sym_decl(decl);
    rio_sym_global_put(sym->name, sym);
    if (!(scope)) {
      scope = decl->name;
    }
  }
  if (((decl->kind) == ((rio_Decl_Struct))) && (decl->aggregate->union_enum_decl)) {
    bool done = false;
    char const ((*enum_name)) = decl->aggregate->union_enum_decl->name;
    if (enum_name) {
      rio_Sym (*enum_sym) = rio_resolve_name(enum_name);
      done = ((enum_sym) && (enum_sym->decl)) && ((enum_sym->decl) == (decl->aggregate->union_enum_decl));
    }
    if (!(done)) {
      rio_sym_global_decl(decl->aggregate->union_enum_decl, decl->name);
    }
  } else if ((decl->kind) == ((rio_Decl_Enum))) {
    int unscoped = ((!(decl->name)) || (rio_get_decl_note(decl, rio_foreign_name))) || (rio_get_decl_note(decl, rio_unscoped_name));
    char const ((*name)) = (sym ? sym->name : rio_str_intern("int"));
    rio_Typespec (*enum_typespec) = rio_new_typespec_name1(decl->pos, name);
    char const ((*prev_item_name)) = NULL;
    char const ((*prev_scoped_name)) = NULL;
    {
      rio_Slice_EnumItem items__ = decl->enum_decl.items;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_EnumItem item = items__.items[i__];
        rio_Expr (*init) = {0};
        if (item.init) {
          init = item.init;
        } else if (prev_item_name) {
          init = rio_new_expr_binary(item.pos, (rio_TokenKind_Add), rio_new_expr_name(item.pos, prev_item_name), rio_new_expr_int(item.pos, 1, 0, 0));
        } else {
          init = rio_new_expr_int(item.pos, 0, 0, 0);
        }
        if (unscoped) {
          rio_Decl (*item_decl) = rio_new_decl_const(item.pos, item.name, enum_typespec, init);
          item_decl->notes = decl->notes;
          rio_sym_global_decl(item_decl, NULL);
          prev_item_name = item.name;
        } else {
          decl->enum_decl.scope = scope;
          char const ((*scoped_name)) = rio_build_scoped_name(scope, item.name);
          if (prev_scoped_name) {
            init = rio_new_expr_binary(item.pos, (rio_TokenKind_Add), rio_new_expr_name(item.pos, prev_scoped_name), rio_new_expr_int(item.pos, 1, 0, 0));
          }
          rio_Decl (*scoped_decl) = rio_new_decl_const(item.pos, scoped_name, enum_typespec, init);
          scoped_decl->notes = decl->notes;
          rio_sym_global_decl(scoped_decl, NULL);
          prev_scoped_name = scoped_name;
        }
      }
    }
  }
  return sym;
}

void rio_put_type_name(char (*(*buf)), rio_Type (*type)) {
  char const ((*type_name)) = rio_type_names[type->kind];
  if (type_name) {
    rio_buf_printf(buf, "%s", type_name);
  } else {
    switch (type->kind) {
    case rio_CompilerTypeKind_Struct:
    case rio_CompilerTypeKind_Union:
    case rio_CompilerTypeKind_Enum:
    case rio_CompilerTypeKind_Incomplete: {
      assert(type->sym);
      rio_buf_printf(buf, "%s", type->sym->name);
      break;
    }
    case rio_CompilerTypeKind_Const: {
      rio_buf_printf(buf, "const ");
      rio_put_type_name(buf, type->base);
      break;
    }
    case rio_CompilerTypeKind_Ptr: {
      rio_buf_printf(buf, "*");
      rio_put_type_name(buf, type->base);
      break;
    }
    case rio_CompilerTypeKind_Ref: {
      rio_buf_printf(buf, "&");
      rio_put_type_name(buf, type->base);
      break;
    }
    case rio_CompilerTypeKind_Array: {
      rio_buf_printf(buf, "[%zu]", type->num_elems);
      rio_put_type_name(buf, type->base);
      break;
    }
    case rio_CompilerTypeKind_Func: {
      rio_buf_printf(buf, "do(");
      {
        rio_Slice_ref_Type items__ = type->function.params;
        for (size_t i__ = 0; i__ < items__.length; ++i__) {
          rio_Type (*param) = items__.items[i__];
          size_t i = i__;
          if (i) {
            rio_buf_printf(buf, ", ");
          }
          rio_put_type_name(buf, param);
        }
      }
      if (type->function.has_varargs) {
        rio_buf_printf(buf, "...");
      }
      rio_buf_printf(buf, ")");
      if ((type->function.ret) != (rio_type_void)) {
        rio_buf_printf(buf, " -> ");
        rio_put_type_name(buf, type->function.ret);
      }
      break;
    }
    default:
      assert("@complete switch failed to handle case" && 0);
      break;
    }
  }
}

char (*rio_get_type_name(rio_Type (*type))) {
  char (*buf) = NULL;
  rio_put_type_name(&(buf), type);
  return buf;
}

rio_Operand rio_operand_null;
rio_Operand rio_operand_rvalue(rio_Type (*type)) {
  return (rio_Operand){.type = rio_unqualify_type(type), .type_orig = type};
}

rio_Operand rio_operand_lvalue(rio_Type (*type)) {
  return (rio_Operand){.type = type, .type_orig = type, .is_lvalue = true};
}

rio_Operand rio_operand_const(rio_Type (*type), rio_Val val) {
  return (rio_Operand){.type = rio_unqualify_type(type), .type_orig = type, .is_const = true, .val = val};
}

rio_Type (*rio_type_decay(rio_Type (*type))) {
  type = rio_unqualify_type(type);
  if ((type->kind) == ((rio_CompilerTypeKind_Array))) {
    type = rio_type_ptr(type->base);
  }
  return type;
}

rio_Operand rio_operand_decay(rio_Operand operand) {
  operand.type = rio_type_decay(operand.type);
  operand.is_lvalue = false;
  return operand;
}

rio_Operand rio_operand_type(rio_Type (*type)) {
  return (rio_Operand){.type = type, .type_orig = type, .is_type = true};
}

bool rio_is_convertible(rio_Operand (*operand), rio_Type (*dest)) {
  dest = rio_unqualify_type(dest);
  rio_Type (*src) = rio_unqualify_type(operand->type);
  if ((dest) == (src)) {
    return true;
  } else if ((rio_is_arithmetic_type(dest)) && (rio_is_arithmetic_type(src))) {
    return true;
  } else if ((rio_is_ptr_like_type(dest)) && (rio_is_null_ptr(*(operand)))) {
    return true;
  } else if ((rio_is_ptr_type(dest)) && (rio_is_ptr_type(src))) {
    if ((rio_is_const_type(dest->base)) && (rio_is_const_type(src->base))) {
      return (((dest->base->base) == (src->base->base)) || ((dest->base->base) == (rio_type_void))) || ((src->base->base) == (rio_type_void));
    } else {
      rio_Type (*unqual_dest_base) = rio_unqualify_type(dest->base);
      if ((unqual_dest_base) == (src->base)) {
        return true;
      } else if ((unqual_dest_base) == (rio_type_void)) {
        return (rio_is_const_type(dest->base)) || (!(rio_is_const_type(src->base)));
      } else {
        return (src->base) == (rio_type_void);
      }
    }
  } else {
    return false;
  }
}

bool rio_is_castable(rio_Operand (*operand), rio_Type (*dest)) {
  rio_Type (*src) = operand->type;
  if (rio_is_convertible(operand, dest)) {
    return true;
  } else if (rio_is_integer_type(dest)) {
    return rio_is_ptr_like_type(src);
  } else if (rio_is_integer_type(src)) {
    return rio_is_ptr_like_type(dest);
  } else if ((rio_is_ptr_like_type(dest)) && (rio_is_ptr_like_type(src))) {
    return true;
  } else {
    return false;
  }
}

bool rio_convert_operand(rio_Operand (*operand), rio_Type (*type)) {
  if (rio_is_convertible(operand, type)) {
    cast_operand(operand, type);
    operand->type = rio_unqualify_type(operand->type);
    operand->is_lvalue = false;
    return true;
  }
  return false;
}

bool rio_is_null_ptr(rio_Operand operand) {
  if ((operand.is_const) && (((rio_is_ptr_type(operand.type)) || (rio_is_integer_type(operand.type))))) {
    cast_operand(&(operand), rio_type_ullong);
    return (operand.val.ull) == (0);
  } else {
    return false;
  }
}

void rio_promote_operand(rio_Operand (*operand)) {
  switch (operand->type->kind) {
  case rio_CompilerTypeKind_Bool:
  case rio_CompilerTypeKind_Char:
  case rio_CompilerTypeKind_SChar:
  case rio_CompilerTypeKind_UChar:
  case rio_CompilerTypeKind_Short:
  case rio_CompilerTypeKind_UShort:
  case rio_CompilerTypeKind_Enum: {
    cast_operand(operand, rio_type_int);
    break;
  }
  default: {
    break;
  }
  }
}

void rio_unify_arithmetic_operands(rio_Operand (*left), rio_Operand (*right)) {
  if ((left->type) == (rio_type_double)) {
    cast_operand(right, rio_type_double);
  } else if ((right->type) == (rio_type_double)) {
    cast_operand(left, rio_type_double);
  } else if ((left->type) == (rio_type_float)) {
    cast_operand(right, rio_type_float);
  } else if ((right->type) == (rio_type_float)) {
    cast_operand(left, rio_type_float);
  } else {
    assert(rio_is_integer_type(left->type));
    assert(rio_is_integer_type(right->type));
    rio_promote_operand(left);
    rio_promote_operand(right);
    if ((left->type) != (right->type)) {
      if ((rio_is_signed_type(left->type)) == (rio_is_signed_type(right->type))) {
        if ((rio_type_rank(left->type)) <= (rio_type_rank(right->type))) {
          cast_operand(left, right->type);
        } else {
          cast_operand(right, left->type);
        }
      } else if ((rio_is_signed_type(left->type)) && ((rio_type_rank(right->type)) >= (rio_type_rank(left->type)))) {
        cast_operand(left, right->type);
      } else if ((rio_is_signed_type(right->type)) && ((rio_type_rank(left->type)) >= (rio_type_rank(right->type)))) {
        cast_operand(right, left->type);
      } else if ((rio_is_signed_type(left->type)) && ((rio_type_sizeof(left->type)) > (rio_type_sizeof(right->type)))) {
        cast_operand(right, left->type);
      } else if ((rio_is_signed_type(right->type)) && ((rio_type_sizeof(right->type)) > (rio_type_sizeof(left->type)))) {
        cast_operand(left, right->type);
      } else {
        rio_Type (*type) = rio_unsigned_type((rio_is_signed_type(left->type) ? left->type : right->type));
        cast_operand(left, type);
        cast_operand(right, type);
      }
    }
  }
  assert((left->type) == (right->type));
}

rio_Map rio_resolved_val_map;
rio_Val rio_get_resolved_val(void (*ptr)) {
  uint64_t u64 = rio_map_get_uint64(&(rio_resolved_val_map), ptr);
  rio_Val val = {0};
  assert((sizeof(val)) == (sizeof(u64)));
  memcpy(&(val), &(u64), sizeof(u64));
  return val;
}

void rio_set_resolved_val(void (*ptr), rio_Val val) {
  uint64_t u64 = {0};
  assert((sizeof(val)) == (sizeof(u64)));
  memcpy(&(u64), &(val), sizeof(val));
  rio_map_put_uint64(&(rio_resolved_val_map), ptr, u64);
}

rio_Map rio_resolved_type_map;
rio_Type (*rio_get_resolved_type(void (*ptr))) {
  return rio_map_get(&(rio_resolved_type_map), ptr);
}

void rio_set_resolved_type(void (*ptr), rio_Type (*type)) {
  rio_map_put(&(rio_resolved_type_map), ptr, type);
}

rio_Map rio_resolved_type_orig_map;
rio_Type (*rio_get_resolved_type_orig(void (*ptr))) {
  return rio_map_get(&(rio_resolved_type_orig_map), ptr);
}

void rio_set_resolved_type_orig(void (*ptr), rio_Type (*type)) {
  rio_map_put(&(rio_resolved_type_orig_map), ptr, type);
}

rio_Map rio_resolved_sym_map;
rio_Sym (*rio_get_resolved_sym(void const ((*ptr)))) {
  return rio_map_get(&(rio_resolved_sym_map), ptr);
}

void rio_set_resolved_sym(void const ((*ptr)), rio_Sym (*sym)) {
  if (!(rio_is_local_sym(sym))) {
    rio_map_put(&(rio_resolved_sym_map), ptr, sym);
  }
}

rio_Map rio_resolved_expected_type_map;
rio_Type (*rio_get_resolved_expected_type(rio_Expr (*expr))) {
  return rio_map_get(&(rio_resolved_expected_type_map), expr);
}

void rio_set_resolved_expected_type(rio_Expr (*expr), rio_Type (*type)) {
  if ((expr) && (type)) {
    rio_map_put(&(rio_resolved_expected_type_map), expr, type);
  }
}

rio_Operand rio_resolve_expr(rio_Expr (*expr)) {
  return rio_resolve_expected_expr(expr, NULL);
}

rio_Operand rio_resolve_expr_rvalue(rio_Expr (*expr)) {
  return rio_operand_decay(rio_resolve_expr(expr));
}

rio_Operand rio_resolve_expected_expr_rvalue(rio_Expr (*expr), rio_Type (*expected_type)) {
  return rio_operand_decay(rio_resolve_expected_expr(expr, expected_type));
}

rio_Sym (*rio_get_nested_type_sym(rio_Sym (*scope_sym), size_t num_names, rio_TypespecName (*names))) {
  if (scope_sym->decl) {
    switch (scope_sym->decl->kind) {
    case rio_Decl_Struct:
    case rio_Decl_Union: {
      if (scope_sym->decl->aggregate->union_enum_decl) {
        if (((num_names) == (1)) && (!(strcmp(names[0].name, "Kind")))) {
          rio_DeclEnum enum_decl = scope_sym->decl->aggregate->union_enum_decl->enum_decl;
          rio_Sym (*sym) = rio_resolve_name(rio_build_scoped_name(enum_decl.scope, "Kind"));
          return sym;
        }
      }
      break;
    }
    default: {
      break;
    }
    }
  }
  return NULL;
}

rio_Sym (*rio_resolve_specialized_decl(rio_SrcPos pos, rio_Sym (*sym), rio_Slice_TypeArg type_args, bool shallow)) {
  if (!(((sym->decl) && (sym->decl->name)))) {
    rio_fatal_error(pos, "Undeclared generic type");
    return NULL;
  }
  rio_Decl (*decl) = sym->decl;
  rio_Slice_Decl type_params = decl->type_params;
  if ((type_args.length) != (type_params.length)) {
    rio_fatal_error(pos, "Typespec with wrong number of arguments");
    return NULL;
  }
  char const ((*name)) = decl->name;
  {
    rio_Slice_TypeArg items__ = type_args;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_TypeArg (*type_arg) = &items__.items[i__];
      rio_Typespec (*arg_typespec) = type_arg->val;
      char (*arg_name) = rio_get_typespec_sym_name(arg_typespec);
      name = rio_build_scoped_name(name, arg_name);
      rio_buf_free((void (**))(&(arg_name)));
    }
  }
  bool is_generic = false;
  {
    rio_Slice_TypeArg items__ = type_args;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_TypeArg (*type_arg) = &items__.items[i__];
      if (rio_find_generic(type_arg->val)) {
        is_generic = true;
        break;
      }
    }
  }
  rio_Sym (*dupe_sym) = rio_resolve_name(name);
  if (dupe_sym) {
    if ((shallow) || (!(dupe_sym->decl->shallow))) {
      return dupe_sym;
    }
  }
  rio_TypeMap type_map = {.type_args = type_args, .type_params = type_params};
  rio_MapClosure map = {.self = &(type_map), .call = (rio_MapClosureCall)(rio_map_type_args)};
  rio_Decl (*dupe) = {0};
  switch (decl->kind) {
  case rio_Decl_Func: {
    assert(shallow);
    dupe = rio_new_decl((rio_Decl_Func), decl->pos, name);
    dupe->function = rio_dupe_function(decl->function, shallow, &(map));
    break;
  }
  case rio_Decl_Struct:
  case rio_Decl_Union: {
    rio_Aggregate (*dupe_agg) = rio_dupe_aggregate(decl->aggregate, &(map));
    dupe = rio_new_decl_aggregate(decl->pos, decl->kind, name, (rio_Slice_Decl){0}, dupe_agg);
    break;
  }
  default: {
    rio_fatal_error(pos, "Unsupported generic construct");
    return NULL;
    break;
  }
  }
  dupe->is_generic = is_generic;
  dupe->generic_base = decl;
  dupe->type_args = type_args;
  dupe->shallow = shallow;
  dupe_sym = rio_sym_global_decl(dupe, NULL);
  rio_resolve_sym(dupe_sym);
  return dupe_sym;
}

rio_Type (*rio_resolve_typespec(rio_Typespec (*typespec))) {
  if (!(typespec)) {
    return rio_type_void;
  }
  rio_Type (*result) = {0};
  switch (typespec->kind) {
  case rio_Typespec_Name: {
    rio_Sym (*sym) = {0};
    char const ((*name)) = {0};
    rio_TypespecName (*typespec_name) = {0};
    if ((typespec->names.length) == (1)) {
      typespec_name = &(typespec->names.items[0]);
      name = typespec_name->name;
      sym = rio_sym_get_local(name);
      if (sym) {
        rio_sym_track_ref_type(sym, typespec);
      }
    }
    if (!(sym)) {
      rio_Package (*package) = rio_current_package;
      for (size_t i = 0; (i) < ((typespec->names.length) - (1)); ++(i)) {
        char const ((*scope)) = typespec->names.items[i].name;
        rio_Sym (*scope_sym) = rio_get_package_sym(package, scope);
        if (!(scope_sym)) {
          rio_fatal_error(typespec->pos, "Unresolved scope \'%s\'", scope);
          return NULL;
        }
        if ((scope_sym->kind) == ((rio_Sym_Type))) {
          package = NULL;
          sym = rio_get_nested_type_sym(scope_sym, ((typespec->names.length) - (i)) - (1), ((typespec->names.items) + (i)) + (1));
          break;
        } else if ((scope_sym->kind) != ((rio_Sym_Package))) {
          rio_fatal_error(typespec->pos, "%s must denote a type or a package", scope);
          return NULL;
        }
        package = scope_sym->package;
      }
      typespec_name = &(typespec->names.items[(typespec->names.length) - (1)]);
      name = typespec_name->name;
      if (package) {
        sym = rio_get_package_sym(package, name);
      }
    }
    if (!(sym)) {
      rio_fatal_error(typespec->pos, "Unresolved type name \'%s\'", name);
      return NULL;
    }
    if ((sym->kind) != ((rio_Sym_Type))) {
      rio_fatal_error(typespec->pos, "%s must denote a type", name);
      return NULL;
    }
    rio_resolve_sym(sym);
    if (typespec_name->type_args.length) {
      {
        rio_Slice_TypeArg items__ = typespec_name->type_args;
        for (size_t i__ = 0; i__ < items__.length; ++i__) {
          rio_TypeArg type_arg = items__.items[i__];
          rio_resolve_typespec(type_arg.val);
        }
      }
      rio_complete_type(sym->type);
      sym = rio_resolve_specialized_decl(typespec->pos, sym, typespec_name->type_args, false);
    }
    rio_set_resolved_sym(typespec, sym);
    result = sym->type;
    break;
  }
  case rio_Typespec_Const: {
    result = rio_type_const(rio_resolve_typespec(typespec->base));
    break;
  }
  case rio_Typespec_Ptr: {
    result = rio_type_ptr(rio_resolve_typespec(typespec->base));
    break;
  }
  case rio_Typespec_Ref: {
    result = rio_type_ref(rio_resolve_typespec(typespec->base));
    break;
  }
  case rio_Typespec_Array: {
    int size = 0;
    if (typespec->num_elems) {
      rio_Operand operand = rio_resolve_const_expr(typespec->num_elems);
      if (!(rio_is_integer_type(operand.type))) {
        rio_fatal_error(typespec->pos, "Array size constant expression must have integer type");
      }
      cast_operand(&(operand), rio_type_int);
      size = operand.val.i;
      if ((size) <= (0)) {
        rio_fatal_error(typespec->num_elems->pos, "Non-positive array size");
      }
    }
    result = rio_type_array(rio_resolve_typespec(typespec->base), size);
    break;
  }
  case rio_Typespec_Func: {
    rio_Type (*(*args)) = NULL;
    {
      rio_Slice_ref_Typespec items__ = typespec->function.args;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_Typespec (*arg) = items__.items[i__];
        rio_Type (*arg_type) = rio_resolve_typespec(arg);
        if ((arg_type) == (rio_type_void)) {
          rio_fatal_error(typespec->pos, "Function parameter type cannot be void");
        }
        rio_buf_push((void (**))(&(args)), &(arg_type), sizeof(arg_type));
      }
    }
    rio_Type (*ret) = rio_type_void;
    if (typespec->function.ret) {
      ret = rio_resolve_typespec(typespec->function.ret);
    }
    if (rio_is_array_type(ret)) {
      rio_fatal_error(typespec->pos, "Function return type cannot be array");
    }
    result = rio_type_func(args, rio_buf_len(args), ret, false);
    break;
  }
  default: {
    assert(0);
    return NULL;
    break;
  }
  }
  rio_set_resolved_type(typespec, result);
  return result;
}

void rio_push_type_params(rio_Decl (*decl)) {
  rio_Slice_Decl params = decl->type_params;
  {
    rio_Slice_Decl items__ = params;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Decl (*param) = &items__.items[i__];
      assert((param->kind) == ((rio_Decl_Typedef)));
      rio_Type (*constraint) = rio_resolve_typespec(param->typedef_decl.constraint);
      rio_sym_push_local((rio_Sym_Type), param->name, constraint, param);
    }
  }
}

rio_Type (*rio_complete_aggregate(rio_Type (*type), rio_Aggregate (*aggregate))) {
  rio_TypeField (*fields) = {0};
  rio_Sym (*scope) = rio_sym_enter();
  if (((type) && (type->sym)) && (type->sym->decl)) {
    rio_push_type_params(type->sym->decl);
  }
  {
    rio_Slice_Member items__ = aggregate->members;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Member member = items__.items[i__];
      if ((member.kind) == ((rio_Member_Field))) {
        rio_Type (*member_type) = rio_resolve_typespec(member.type);
        rio_complete_type(member_type);
        rio_TypeField type_field = {.name = member.name, .type = member_type};
        rio_buf_push((void (**))(&(fields)), &(type_field), sizeof(type_field));
      } else {
        assert((member.kind) == ((rio_Member_Subaggregate)));
        rio_Type (*member_type) = rio_complete_aggregate(NULL, member.subaggregate);
        rio_TypeField type_field = {.type = member_type};
        rio_buf_push((void (**))(&(fields)), &(type_field), sizeof(type_field));
      }
    }
  }
  if (!(type)) {
    type = rio_type_incomplete(NULL);
    type->kind = (rio_CompilerTypeKind_Completing);
  }
  if ((aggregate->kind) == ((rio_AggregateKind_Struct))) {
    rio_type_complete_struct(type, fields, rio_buf_len(fields));
  } else {
    assert((aggregate->kind) == ((rio_AggregateKind_Union)));
    rio_type_complete_union(type, fields, rio_buf_len(fields));
  }
  if ((type->aggregate.fields.length) == (0)) {
    rio_fatal_error(aggregate->pos, "No fields");
  }
  if (rio_has_duplicate_fields(type)) {
    rio_fatal_error(aggregate->pos, "Duplicate fields");
  }
  rio_sym_leave(scope);
  return type;
}

void rio_complete_type(rio_Type (*type)) {
  if ((type->kind) == ((rio_CompilerTypeKind_Completing))) {
    rio_fatal_error(type->sym->decl->pos, "Type completion cycle");
    return;
  } else if ((type->kind) != ((rio_CompilerTypeKind_Incomplete))) {
    return;
  }
  rio_Sym (*sym) = type->sym;
  rio_Package (*old_package) = rio_enter_package(sym->home_package);
  rio_Decl (*decl) = sym->decl;
  if (decl->is_incomplete) {
    rio_fatal_error(decl->pos, "Trying to use incomplete type as complete type");
  }
  type->kind = (rio_CompilerTypeKind_Completing);
  assert(((decl->kind) == ((rio_Decl_Struct))) || ((decl->kind) == ((rio_Decl_Union))));
  rio_complete_aggregate(type, decl->aggregate);
  rio_buf_push((void (**))(&(rio_sorted_syms)), &(type->sym), sizeof(type->sym));
  rio_leave_package(old_package);
}

rio_Type (*rio_resolve_typed_init(rio_SrcPos pos, rio_Type (*type), rio_Expr (*expr))) {
  rio_Type (*expected_type) = rio_unqualify_type(type);
  rio_Operand operand = rio_resolve_expected_expr(expr, expected_type);
  if (((rio_is_incomplete_array_type(type)) && (rio_is_array_type(operand.type))) && ((type->base) == (operand.type->base))) {
  } else {
    if ((type) && (rio_is_ptr_type(type))) {
      operand = rio_operand_decay(operand);
    }
    if (!(rio_convert_operand(&(operand), expected_type))) {
      return NULL;
    }
  }
  rio_set_resolved_expected_type(expr, operand.type);
  return operand.type;
}

rio_Type (*rio_resolve_init(rio_SrcPos pos, rio_Typespec (*typespec), rio_Expr (*expr), bool is_mut)) {
  rio_Type (*type) = {0};
  if (typespec) {
    rio_Type (*declared_type) = rio_resolve_typespec(typespec);
    type = declared_type;
    if (expr) {
      rio_Type (*expr_type) = rio_resolve_typed_init(pos, declared_type, expr);
      if (!(expr_type)) {
        rio_fatal_error(pos, "Invalid type in initialization. Expected %s", rio_get_type_name(declared_type));
      }
      if ((expr_type->kind) == ((rio_CompilerTypeKind_Array))) {
        type = expr_type;
      }
    }
  } else {
    assert(expr);
    rio_Operand operand = rio_resolve_expr(expr);
    if (!(is_mut)) {
      type = operand.type;
      if (!(rio_is_const_type(operand.type))) {
        type = rio_type_const(type);
      }
    } else {
      type = rio_unqualify_type(operand.type);
    }
    if ((rio_is_array_type(type)) && ((expr->kind) != ((rio_Expr_Compound)))) {
      type = rio_type_decay(type);
      rio_set_resolved_type(expr, type);
    }
    rio_set_resolved_expected_type(expr, type);
  }
  rio_complete_type(type);
  if (!(type->size)) {
    if (rio_is_generic_type(type)) {
      rio_fatal_error(pos, "Cannot declare variable of raw generic type");
    } else {
      rio_fatal_error(pos, "Cannot declare variable of size 0");
    }
  }
  return type;
}

rio_Type (*rio_resolve_decl_var(rio_Decl (*decl))) {
  assert((decl->kind) == ((rio_Decl_Var)));
  return rio_resolve_init(decl->pos, decl->var_decl.type, decl->var_decl.expr, true);
}

rio_Type (*rio_resolve_decl_const(rio_Decl (*decl), rio_Val (*val))) {
  assert((decl->kind) == ((rio_Decl_Const)));
  rio_Operand result = rio_resolve_const_expr(decl->const_decl.expr);
  if (!(rio_is_scalar_type(result.type))) {
    rio_fatal_error(decl->pos, "Const declarations must have scalar type");
  }
  if (decl->const_decl.type) {
    rio_Type (*type) = rio_resolve_typespec(decl->const_decl.type);
    if (!(rio_convert_operand(&(result), type))) {
      rio_fatal_error(decl->pos, "Invalid type in constant declaration. Expected %s, got %s", rio_get_type_name(type), rio_get_type_name(result.type));
    }
  }
  *(val) = result.val;
  return result.type;
}

rio_Type (*rio_resolve_decl_func(rio_Decl (*decl))) {
  assert((decl->kind) == ((rio_Decl_Func)));
  rio_Sym (*scope) = rio_sym_enter();
  ullong has_type_params = !(!(decl->type_params.length));
  rio_push_type_params(decl);
  rio_Type (*(*params)) = NULL;
  {
    rio_Slice_Member items__ = decl->function.params;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Member (*param) = &items__.items[i__];
      rio_Type (*param_type) = rio_resolve_typespec(param->type);
      rio_complete_type(param_type);
      if ((!(has_type_params)) && ((param_type) == (rio_type_void))) {
        rio_fatal_error(decl->pos, "Function parameter type cannot be void");
      }
      rio_buf_push((void (**))(&(params)), &(param_type), sizeof(param_type));
    }
  }
  rio_Type (*ret_type) = rio_type_void;
  if (decl->function.ret_type) {
    ret_type = rio_resolve_typespec(decl->function.ret_type);
    rio_complete_type(ret_type);
  }
  if (rio_is_array_type(ret_type)) {
    rio_fatal_error(decl->pos, "Function return type cannot be array");
  }
  rio_sym_leave(scope);
  return rio_type_func(params, rio_buf_len(params), ret_type, decl->function.has_varargs);
}

rio_Label (rio_labels[rio_MAX_LABELS]);
rio_Label (*rio_labels_end) = rio_labels;
rio_Label (*rio_get_label(rio_SrcPos pos, char const ((*name)))) {
  rio_Label (*label) = {0};
  for (label = rio_labels; (label) != (rio_labels_end); (label)++) {
    if ((label->name) == (name)) {
      return label;
    }
  }
  if ((label) == ((rio_labels) + (rio_MAX_LABELS))) {
    rio_fatal_error(pos, "Too many labels");
  }
  *(label) = (rio_Label){.name = name, .pos = pos};
  (rio_labels_end)++;
  return label;
}

void rio_reference_label(rio_SrcPos pos, char const ((*name))) {
  rio_Label (*label) = rio_get_label(pos, name);
  label->referenced = true;
}

void rio_define_label(rio_SrcPos pos, char const ((*name))) {
  rio_Label (*label) = rio_get_label(pos, name);
  if (label->defined) {
    rio_fatal_error(pos, "Multiple definitions of label \'%s\'", name);
  }
  label->defined = true;
}

void rio_resolve_labels(void) {
  for (rio_Label (*label) = rio_labels; (label) != (rio_labels_end); (label)++) {
    if ((label->referenced) && (!(label->defined))) {
      rio_fatal_error(label->pos, "Label \'%s\' referenced but not defined", label->name);
    }
    if ((label->defined) && (!(label->referenced))) {
      rio_warning(label->pos, "Label \'%s\' defined but not referenced", label->name);
    }
  }
  rio_labels_end = rio_labels;
}

bool rio_is_cond_operand(rio_Operand operand) {
  operand = rio_operand_decay(operand);
  return rio_is_scalar_type(operand.type);
}

void rio_resolve_cond_expr(rio_Expr (*expr)) {
  rio_Operand cond = rio_resolve_expr_rvalue(expr);
  if (!(rio_is_cond_operand(cond))) {
    rio_fatal_error(expr->pos, "Conditional expression must have scalar type");
  }
}

bool rio_resolve_stmt_block(rio_StmtList block, rio_Type (*ret_type), rio_StmtCtx ctx) {
  rio_Sym (*scope) = rio_sym_enter();
  bool returns = false;
  rio_Stmt (*prev_stmt) = {0};
  {
    rio_Slice_ref_Stmt items__ = block.stmts;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Stmt (*stmt) = items__.items[i__];
      if ((stmt->kind) == ((rio_Stmt_Close))) {
        if (((stmt->tag) != (prev_stmt->kind)) && (!((((stmt->tag) == ((rio_Stmt_For))) && ((prev_stmt->kind) == ((rio_Stmt_ForEach))))))) {
          rio_fatal_error(stmt->pos, "Non-matching close tag");
          return false;
        }
      } else {
        returns = (rio_resolve_stmt(stmt, ret_type, ctx)) || (returns);
      }
      prev_stmt = stmt;
    }
  }
  rio_sym_leave(scope);
  return returns;
}

void rio_resolve_stmt_assign(rio_Stmt (*stmt)) {
  assert((stmt->kind) == ((rio_Stmt_Assign)));
  rio_Operand left = rio_resolve_expr(stmt->assign.left);
  if (!(left.is_lvalue)) {
    rio_fatal_error(stmt->pos, "Cannot assign to non-lvalue");
  }
  if (rio_is_array_type(left.type)) {
    rio_fatal_error(stmt->pos, "Cannot assign to array");
  }
  if (left.type->nonmodifiable) {
    rio_fatal_error(stmt->pos, "Left-hand side of assignment has non-modifiable type");
  }
  char const ((*assign_op_name)) = rio_token_kind_name(stmt->assign.op);
  rio_TokenKind binary_op = rio_assign_token_to_binary_token[stmt->assign.op];
  rio_Operand right = rio_resolve_expected_expr_rvalue(stmt->assign.right, left.type);
  rio_Operand result = {0};
  if ((stmt->assign.op) == ((rio_TokenKind_Assign))) {
    result = right;
  } else if (((stmt->assign.op) == ((rio_TokenKind_AddAssign))) || ((stmt->assign.op) == ((rio_TokenKind_SubAssign)))) {
    if ((rio_is_ptr_type(left.type)) && (rio_is_integer_type(right.type))) {
      result = rio_operand_rvalue(left.type);
    } else if ((rio_is_arithmetic_type(left.type)) && (rio_is_arithmetic_type(right.type))) {
      result = rio_resolve_expr_binary_op(binary_op, assign_op_name, stmt->pos, left, right);
    } else {
      rio_fatal_error(stmt->pos, "Invalid operand types for %s", assign_op_name);
    }
  } else {
    result = rio_resolve_expr_binary_op(binary_op, assign_op_name, stmt->pos, left, right);
  }
  if (!(rio_convert_operand(&(result), left.type))) {
    rio_fatal_error(stmt->pos, "Invalid type in assignment. Expected %s, got %s", rio_get_type_name(left.type), rio_get_type_name(result.type));
  }
}

void rio_resolve_stmt_init(rio_Stmt (*stmt)) {
  assert((stmt->kind) == ((rio_Stmt_Init)));
  if (((!(stmt->init.is_mut)) && (stmt->init.type)) && ((stmt->init.type->kind) != ((rio_Typespec_Const)))) {
    stmt->init.type = rio_new_typespec_const(stmt->init.type->pos, stmt->init.type);
  }
  rio_Type (*type) = rio_resolve_init(stmt->pos, stmt->init.type, stmt->init.expr, stmt->init.is_mut);
  if (!(rio_sym_push_var(stmt->init.name, type))) {
    rio_fatal_error(stmt->pos, "Shadowed definition of local symbol");
  }
}

void rio_resolve_static_assert(rio_Note note) {
  if ((note.args.length) != (1)) {
    rio_fatal_error(note.pos, "#static_assert takes 1 argument");
  }
  rio_Operand operand = rio_resolve_const_expr(note.args.items[0].expr);
  if (!(operand.val.ull)) {
    rio_fatal_error(note.pos, "#static_assert failed");
  }
}

bool rio_resolve_stmt(rio_Stmt (*stmt), rio_Type (*ret_type), rio_StmtCtx ctx) {
  switch (stmt->kind) {
  case rio_Stmt_Return: {
    if (stmt->expr) {
      rio_Operand operand = rio_resolve_expected_expr_rvalue(stmt->expr, ret_type);
      if (!(rio_convert_operand(&(operand), ret_type))) {
        rio_fatal_error(stmt->pos, "Invalid type in return expression. Expected %s, got %s", rio_get_type_name(ret_type), rio_get_type_name(operand.type));
      }
    } else if ((ret_type) != (rio_type_void)) {
      rio_fatal_error(stmt->pos, "Empty return expression for function with non-void return type");
    }
    return true;
    break;
  }
  case rio_Stmt_Break: {
    if (!(ctx.is_break_legal)) {
      rio_fatal_error(stmt->pos, "Illegal break");
    }
    return false;
    break;
  }
  case rio_Stmt_Continue: {
    if (!(ctx.is_continue_legal)) {
      rio_fatal_error(stmt->pos, "Illegal continue");
    }
    return false;
    break;
  }
  case rio_Stmt_Block: {
    return rio_resolve_stmt_block(stmt->block, ret_type, ctx);
    break;
  }
  case rio_Stmt_Close: {
    rio_fatal_error(stmt->pos, "Illegal close tag");
    return false;
    break;
  }
  case rio_Stmt_Note: {
    if ((stmt->note.name) == (rio_assert_name)) {
      if ((stmt->note.args.length) != (1)) {
        rio_fatal_error(stmt->pos, "#assert takes 1 argument");
      }
      rio_resolve_cond_expr(stmt->note.args.items[0].expr);
    } else if ((stmt->note.name) == (rio_static_assert_name)) {
      rio_resolve_static_assert(stmt->note);
    } else {
      rio_warning(stmt->pos, "Unknown statement #directive \'%s\'", stmt->note.name);
    }
    return false;
    break;
  }
  case rio_Stmt_If: {
    rio_Sym (*scope) = rio_sym_enter();
    if (stmt->if_stmt.init) {
      rio_resolve_stmt_init(stmt->if_stmt.init);
    }
    if (stmt->if_stmt.cond) {
      rio_resolve_cond_expr(stmt->if_stmt.cond);
    } else if (!(rio_is_cond_operand(rio_resolve_name_operand(stmt->pos, stmt->if_stmt.init->init.name)))) {
      rio_fatal_error(stmt->pos, "Conditional expression must have scalar type");
    }
    bool returns = rio_resolve_stmt_block(stmt->if_stmt.then_block, ret_type, ctx);
    {
      rio_Slice_ElseIf items__ = stmt->if_stmt.elseifs;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_ElseIf elseif = items__.items[i__];
        rio_resolve_cond_expr(elseif.cond);
        returns = (rio_resolve_stmt_block(elseif.block, ret_type, ctx)) && (returns);
      }
    }
    if (stmt->if_stmt.else_block.stmts.length) {
      returns = (rio_resolve_stmt_block(stmt->if_stmt.else_block, ret_type, ctx)) && (returns);
    } else {
      returns = false;
    }
    rio_sym_leave(scope);
    return returns;
    break;
  }
  case rio_Stmt_While:
  case rio_Stmt_DoWhile: {
    rio_resolve_cond_expr(stmt->while_stmt.cond);
    ctx.is_break_legal = true;
    ctx.is_continue_legal = true;
    rio_resolve_stmt_block(stmt->while_stmt.block, ret_type, ctx);
    return false;
    break;
  }
  case rio_Stmt_ForEach: {
    rio_resolve_for_each(stmt, ret_type, ctx);
    return false;
    break;
  }
  case rio_Stmt_For: {
    rio_Sym (*scope) = rio_sym_enter();
    if (stmt->for_stmt.init) {
      rio_resolve_stmt(stmt->for_stmt.init, ret_type, ctx);
    }
    if (stmt->for_stmt.cond) {
      rio_resolve_cond_expr(stmt->for_stmt.cond);
    }
    if (stmt->for_stmt.next) {
      rio_resolve_stmt(stmt->for_stmt.next, ret_type, ctx);
    }
    ctx.is_break_legal = true;
    ctx.is_continue_legal = true;
    rio_resolve_stmt_block(stmt->for_stmt.block, ret_type, ctx);
    rio_sym_leave(scope);
    return false;
    break;
  }
  case rio_Stmt_Switch: {
    rio_Operand operand = rio_resolve_expr_rvalue(stmt->switch_stmt.expr);
    rio_DeclEnum (*enum_decl) = rio_get_type_enum_decl(operand.type);
    if (!(rio_is_integer_type(operand.type))) {
      rio_fatal_error(stmt->pos, "Switch expression must have integer type");
    }
    ctx.is_break_legal = true;
    bool returns = true;
    bool has_default = false;
    {
      rio_Slice_SwitchCase items__ = stmt->switch_stmt.cases;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_SwitchCase switch_case = items__.items[i__];
        {
          rio_Slice_SwitchCasePattern items__ = switch_case.patterns;
          for (size_t i__ = 0; i__ < items__.length; ++i__) {
            rio_SwitchCasePattern pattern = items__.items[i__];
            if (pattern.is_default) {
              if (has_default) {
                rio_fatal_error(stmt->pos, "Switch statement has multiple default clauses");
              }
              has_default = true;
              continue;
            }
            rio_Expr (*start_expr) = pattern.start;
            rio_Operand start_operand = rio_resolve_enum_item_or_const_expr(enum_decl, start_expr);
            if (!(rio_convert_operand(&(start_operand), operand.type))) {
              rio_fatal_error(start_expr->pos, "Invalid type in switch case expression. Expected %s, got %s", rio_get_type_name(operand.type), rio_get_type_name(start_operand.type));
            }
            rio_Expr (*end_expr) = pattern.end;
            if (end_expr) {
              rio_Operand end_operand = rio_resolve_enum_item_or_const_expr(enum_decl, end_expr);
              if (!(rio_convert_operand(&(end_operand), operand.type))) {
                rio_fatal_error(end_expr->pos, "Invalid type in switch case expression. Expected %s, got %s", rio_get_type_name(operand.type), rio_get_type_name(end_operand.type));
              }
              rio_convert_operand(&(start_operand), rio_type_llong);
              rio_set_resolved_val(start_expr, start_operand.val);
              rio_convert_operand(&(end_operand), rio_type_llong);
              rio_set_resolved_val(end_expr, end_operand.val);
              if ((end_operand.val.ll) < (start_operand.val.ll)) {
                rio_fatal_error(start_expr->pos, "Case range end value cannot be less thn start value");
              }
              if (((end_operand.val.ll) - (start_operand.val.ll)) >= (256)) {
                rio_fatal_error(start_expr->pos, "Case range cannot span more than 256 values");
              }
            }
          }
        }
        if ((switch_case.block.stmts.length) > (1)) {
          rio_Stmt (*last_stmt) = switch_case.block.stmts.items[(switch_case.block.stmts.length) - (1)];
          if ((last_stmt->kind) == ((rio_Stmt_Break))) {
            rio_warning(last_stmt->pos, "Case blocks already end with an implicit break");
          }
        }
        returns = (rio_resolve_stmt_block(switch_case.block, ret_type, ctx)) && (returns);
      }
    }
    return (returns) && (has_default);
    break;
  }
  case rio_Stmt_Assign: {
    rio_resolve_stmt_assign(stmt);
    return false;
    break;
  }
  case rio_Stmt_Init: {
    rio_resolve_stmt_init(stmt);
    return false;
    break;
  }
  case rio_Stmt_Expr: {
    rio_resolve_expr(stmt->expr);
    return false;
    break;
  }
  case rio_Stmt_Label: {
    rio_define_label(stmt->pos, stmt->label);
    return false;
    break;
  }
  case rio_Stmt_Goto: {
    rio_reference_label(stmt->pos, stmt->label);
    return false;
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  return false;
}

void rio_resolve_for_each(rio_Stmt (*stmt), rio_Type (*ret_type), rio_StmtCtx ctx) {
  assert((stmt->kind) == ((rio_Stmt_ForEach)));
  rio_Sym (*scope) = rio_sym_enter();
  rio_Operand operand = rio_resolve_expr(stmt->for_each.expr);
  rio_set_resolved_type_orig(stmt->for_each.expr, operand.type_orig);
  rio_DeclFunc (*func) = &(stmt->for_each.func);
  assert(!(func->has_varargs));
  assert(!(func->ret_type));
  if ((func->params.length) > (2)) {
    rio_fatal_error(stmt->pos, "Max of 2 params allowed in for-each block");
  }
  rio_Type (*iterable_type) = rio_resolve_for_each_type(stmt->pos, operand.type_orig, false);
  rio_Type (*item_type) = {0};
  rio_Type (*length_type) = {0};
  switch (iterable_type->kind) {
  case rio_CompilerTypeKind_Array: {
    item_type = iterable_type->base;
    length_type = rio_type_usize;
    break;
  }
  case rio_CompilerTypeKind_Struct: {
    rio_SrcPos pos = stmt->for_each.expr->pos;
    item_type = rio_resolve_item_type(pos, operand);
    length_type = rio_resolve_length_type(pos, operand);
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  if (stmt->for_each.get_ref) {
    item_type = rio_type_ref(item_type);
  }
  if (func->params.length) {
    rio_Member (*item) = &(func->params.items[0]);
    rio_sym_push_var(item->name, item_type);
    rio_set_resolved_type(item, item_type);
  }
  if ((func->params.length) > (1)) {
    rio_Member (*index) = &(func->params.items[1]);
    rio_sym_push_var(index->name, length_type);
  }
  stmt->for_each.length_type = length_type;
  ctx.is_break_legal = true;
  ctx.is_continue_legal = true;
  rio_resolve_stmt_block(func->block, ret_type, ctx);
  rio_sym_leave(scope);
}

rio_Type (*rio_resolve_item_type(rio_SrcPos pos, rio_Operand operand)) {
  rio_Operand items = rio_resolve_expr_aggregate_field(pos, operand, rio_str_intern("items"));
  rio_Type (*type) = rio_unqualify_type(items.type);
  if ((type->kind) != ((rio_CompilerTypeKind_Ptr))) {
    rio_fatal_error(pos, "Items collection must be a pointer");
  }
  return type->base;
}

rio_Type (*rio_resolve_length_type(rio_SrcPos pos, rio_Operand operand)) {
  rio_Type (*length_type) = rio_unqualify_type(rio_resolve_expr_aggregate_field(pos, operand, rio_str_intern("length")).type);
  if (!(rio_is_integer_type(length_type))) {
    rio_fatal_error(pos, "Length must have integer type");
  }
  return length_type;
}

rio_Type (*rio_resolve_for_each_type(rio_SrcPos pos, rio_Type (*type), bool had_ref)) {
  switch (type->kind) {
  case rio_CompilerTypeKind_Array: {
    if (had_ref) {
      rio_fatal_error(pos, "Unsupported array ref in for each loop");
    } else {
      return type;
    }
    break;
  }
  case rio_CompilerTypeKind_Const: {
    return rio_resolve_for_each_type(pos, type->base, had_ref);
    break;
  }
  case rio_CompilerTypeKind_Ref: {
    if (had_ref) {
      rio_fatal_error(pos, "Unsupported nested refs in for each loop");
    } else {
      return rio_resolve_for_each_type(pos, type->base, true);
    }
    break;
  }
  case rio_CompilerTypeKind_Struct: {
    return type;
    break;
  }
  default: {
    rio_fatal_error(pos, "Unsupported type in for each loop");
    break;
  }
  }
  return NULL;
}

void rio_resolve_func_body(rio_Sym (*sym)) {
  rio_Decl (*decl) = sym->decl;
  assert((decl->kind) == ((rio_Decl_Func)));
  assert((sym->state) == ((rio_SymState_Resolved)));
  if (decl->is_incomplete) {
    return;
  }
  if ((decl->generic_base) && (decl->shallow)) {
    rio_TypeMap type_map = {.type_args = decl->type_args, .type_params = decl->generic_base->type_params};
    rio_MapClosure map = {.self = &(type_map), .call = (rio_MapClosureCall)(rio_map_type_args)};
    decl->function.block = rio_dupe_block(decl->function.block, &(map));
    decl->shallow = false;
  }
  rio_Package (*old_package) = rio_enter_package(sym->home_package);
  rio_Sym (*scope) = rio_sym_enter();
  ullong has_type_params = !(!(decl->type_params.length));
  rio_push_type_params(decl);
  {
    rio_Slice_Member items__ = decl->function.params;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Member param = items__.items[i__];
      rio_Type (*param_type) = rio_resolve_typespec(param.type);
      if (rio_is_array_type(param_type)) {
        param_type = rio_type_ptr(param_type->base);
      }
      rio_sym_push_var(param.name, param_type);
    }
  }
  rio_Type (*ret_type) = rio_resolve_typespec(decl->function.ret_type);
  assert(!(rio_is_array_type(ret_type)));
  bool returns = rio_resolve_stmt_block(decl->function.block, ret_type, (rio_StmtCtx){0});
  rio_resolve_labels();
  rio_sym_leave(scope);
  if (((ret_type) != (rio_type_void)) && (!(returns))) {
    rio_fatal_error(decl->pos, "Not all control paths return values");
  }
  rio_leave_package(old_package);
}

void rio_resolve_sym(rio_Sym (*sym)) {
  if ((sym->state) == ((rio_SymState_Resolved))) {
    return;
  } else if ((sym->state) == ((rio_SymState_Resolving))) {
    rio_fatal_error(sym->decl->pos, "Cyclic dependency");
    return;
  }
  assert((sym->state) == ((rio_SymState_Unresolved)));
  assert(!(sym->reachable));
  if (!(rio_is_local_sym(sym))) {
    rio_buf_push((void (**))(&(rio_reachable_syms)), &(sym), sizeof(sym));
    sym->reachable = rio_reachable_phase;
  }
  sym->state = (rio_SymState_Resolving);
  rio_Decl (*decl) = sym->decl;
  rio_Package (*old_package) = rio_enter_package(sym->home_package);
  switch (sym->kind) {
  case rio_Sym_Type: {
    if ((decl) && ((decl->kind) == ((rio_Decl_Typedef)))) {
      sym->type = rio_resolve_typespec(decl->typedef_decl.val);
    } else if ((decl->kind) == ((rio_Decl_Enum))) {
      rio_Type (*base) = (decl->enum_decl.type ? rio_resolve_typespec(decl->enum_decl.type) : rio_type_int);
      if (!(rio_is_integer_type(base))) {
        rio_fatal_error(decl->pos, "Base type of enum must be integer type");
      }
      sym->type = rio_type_enum(sym, base);
    } else {
      sym->type = rio_type_incomplete(sym);
    }
    break;
  }
  case rio_Sym_Var: {
    sym->type = rio_resolve_decl_var(decl);
    break;
  }
  case rio_Sym_Const: {
    sym->type = rio_resolve_decl_const(decl, &(sym->val));
    break;
  }
  case rio_Sym_Func: {
    sym->type = rio_resolve_decl_func(decl);
    break;
  }
  case rio_Sym_Package: {
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  rio_leave_package(old_package);
  sym->state = (rio_SymState_Resolved);
  if ((decl->is_incomplete) || ((((decl->kind) != ((rio_Decl_Struct))) && ((decl->kind) != ((rio_Decl_Union)))))) {
    rio_buf_push((void (**))(&(rio_sorted_syms)), &(sym), sizeof(sym));
  }
}

void rio_finalize_sym(rio_Sym (*sym)) {
  assert((sym->state) == ((rio_SymState_Resolved)));
  if (((sym->decl) && (!(rio_is_decl_foreign(sym->decl)))) && (!(sym->decl->is_incomplete))) {
    if ((sym->kind) == ((rio_Sym_Type))) {
      rio_complete_type(sym->type);
    } else if ((sym->kind) == ((rio_Sym_Func))) {
      rio_resolve_func_body(sym);
    }
  }
}

rio_Sym (*rio_resolve_name(char const ((*name)))) {
  rio_Sym (*sym) = rio_sym_get(name);
  if (!(sym)) {
    return NULL;
  }
  rio_resolve_sym(sym);
  return sym;
}

rio_Package (*rio_try_resolve_package(rio_Expr (*expr))) {
  if ((expr->kind) == ((rio_Expr_Name))) {
    rio_Sym (*sym) = rio_resolve_name(expr->name);
    if ((sym) && ((sym->kind) == ((rio_Sym_Package)))) {
      return sym->package;
    }
  } else if ((expr->kind) == ((rio_Expr_Field))) {
    rio_Package (*package) = rio_try_resolve_package(expr->field.expr);
    if (package) {
      rio_Sym (*sym) = rio_get_package_sym(package, expr->field.name);
      if ((sym) && ((sym->kind) == ((rio_Sym_Package)))) {
        return sym->package;
      }
    }
  }
  return NULL;
}

rio_DeclEnum (*rio_get_type_enum_decl(rio_Type (*type))) {
  if ((type->sym) && (type->sym->decl)) {
    rio_Decl (*decl) = type->sym->decl;
    switch (type->kind) {
    case (rio_CompilerTypeKind_Enum): {
      break;
      break;
    }
    case (rio_CompilerTypeKind_Struct):
    case (rio_CompilerTypeKind_Union): {
      if (decl->aggregate->union_enum_decl) {
        decl = decl->aggregate->union_enum_decl;
      } else {
        decl = NULL;
      }
      break;
    }
    default: {
      decl = NULL;
      break;
    }
    }
    if (decl) {
      return &(decl->enum_decl);
    }
  }
  return NULL;
}

rio_Operand rio_resolve_enum_item_or_const_expr(rio_DeclEnum (*enum_decl), rio_Expr (*expr)) {
  if ((enum_decl) && ((expr->kind) == ((rio_Expr_Name)))) {
    {
      rio_Operand item = rio_resolve_enum_item(enum_decl, expr, expr->name);
      if (item.type) {
        return item;
      } else {
        rio_fatal_error(expr->pos, "No enum item named \'%s\'", expr->name);
        return rio_operand_null;
      }
    }
  }
  return rio_resolve_const_expr(expr);
}

rio_Operand rio_resolve_enum_item(rio_DeclEnum (*enum_decl), rio_Expr (*expr), char const ((*name))) {
  {
    rio_Slice_EnumItem items__ = enum_decl->items;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_EnumItem item = items__.items[i__];
      if ((item.name) == (name)) {
        rio_Sym (*sym) = rio_resolve_name(rio_build_scoped_name(enum_decl->scope, item.name));
        if (sym) {
          assert((sym->kind) == ((rio_Sym_Const)));
          rio_set_resolved_sym(expr, sym);
          rio_Operand item_operand = rio_operand_const(sym->type, sym->val);
          return item_operand;
        }
      }
    }
  }
  return rio_operand_null;
}

rio_Operand rio_resolve_expr_field(rio_Expr (*expr)) {
  assert((expr->kind) == ((rio_Expr_Field)));
  rio_Package (*package) = rio_try_resolve_package(expr->field.expr);
  if (package) {
    rio_Package (*old_package) = rio_enter_package(package);
    rio_Sym (*sym) = rio_resolve_name(expr->field.name);
    rio_Operand operand = rio_resolve_name_operand(expr->pos, expr->field.name);
    rio_leave_package(old_package);
    rio_set_resolved_sym(expr, sym);
    return operand;
  }
  rio_Operand operand = rio_resolve_expr(expr->field.expr);
  if (operand.is_type) {
    {
      rio_DeclEnum (*enum_decl) = rio_get_type_enum_decl(operand.type);
      if (enum_decl) {
        rio_Operand item = rio_resolve_enum_item(enum_decl, expr, expr->field.name);
        if (item.type) {
          return item;
        }
      }
    }
    rio_fatal_error(expr->pos, "No item named \'%s\'", expr->field.name);
    return rio_operand_null;
  }
  return rio_resolve_expr_aggregate_field(expr->pos, operand, expr->field.name);
}

rio_Operand rio_resolve_expr_aggregate_field(rio_SrcPos pos, rio_Operand operand, char const ((*name))) {
  bool was_const_type = rio_is_const_type(operand.type);
  rio_Type (*base_type) = rio_unqualify_type(operand.type);
  rio_complete_type(base_type);
  if (rio_is_ptr_type(base_type)) {
    operand = rio_operand_lvalue(base_type->base);
    was_const_type = rio_is_const_type(operand.type);
    base_type = rio_unqualify_type(operand.type);
    rio_complete_type(base_type);
  }
  if (((base_type->kind) != ((rio_CompilerTypeKind_Struct))) && ((base_type->kind) != ((rio_CompilerTypeKind_Union)))) {
    rio_fatal_error(pos, "Can only access fields on aggregates or pointers to aggregates");
    return rio_operand_null;
  }
  {
    rio_Slice_TypeField items__ = base_type->aggregate.fields;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_TypeField field = items__.items[i__];
      if ((field.name) == (name)) {
        rio_Operand field_operand = (operand.is_lvalue ? rio_operand_lvalue(field.type) : rio_operand_rvalue(field.type));
        if (was_const_type) {
          field_operand.type = rio_type_const(field_operand.type);
        }
        return field_operand;
      }
    }
  }
  rio_fatal_error(pos, "No field named \'%s\'", name);
  return rio_operand_null;
}

llong rio_eval_unary_op_ll(rio_TokenKind op, llong val) {
  switch (op) {
  case rio_TokenKind_Add: {
    return +(val);
    break;
  }
  case rio_TokenKind_Sub: {
    return -(val);
    break;
  }
  case rio_TokenKind_Neg: {
    return ~(val);
    break;
  }
  case rio_TokenKind_Not: {
    return !(val);
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  return 0;
}

ullong rio_eval_unary_op_ull(rio_TokenKind op, ullong val) {
  switch (op) {
  case rio_TokenKind_Add: {
    return +(val);
    break;
  }
  case rio_TokenKind_Sub: {
    return (0ull) - (val);
    break;
  }
  case rio_TokenKind_Neg: {
    return ~(val);
    break;
  }
  case rio_TokenKind_Not: {
    return !(val);
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  return 0;
}

llong rio_eval_binary_op_ll(rio_TokenKind op, llong left, llong right) {
  switch (op) {
  case rio_TokenKind_Mul: {
    return (left) * (right);
    break;
  }
  case rio_TokenKind_Div: {
    return ((right) != (0) ? (left) / (right) : 0);
    break;
  }
  case rio_TokenKind_Mod: {
    return ((right) != (0) ? (left) % (right) : 0);
    break;
  }
  case rio_TokenKind_And: {
    return (left) & (right);
    break;
  }
  case rio_TokenKind_Lshift: {
    return (left) << (right);
    break;
  }
  case rio_TokenKind_Rshift: {
    return (left) >> (right);
    break;
  }
  case rio_TokenKind_Add: {
    return (left) + (right);
    break;
  }
  case rio_TokenKind_Sub: {
    return (left) - (right);
    break;
  }
  case rio_TokenKind_Or: {
    return (left) | (right);
    break;
  }
  case rio_TokenKind_Xor: {
    return (left) ^ (right);
    break;
  }
  case rio_TokenKind_Eq: {
    return (left) == (right);
    break;
  }
  case rio_TokenKind_NotEq: {
    return (left) != (right);
    break;
  }
  case rio_TokenKind_Lt: {
    return (left) < (right);
    break;
  }
  case rio_TokenKind_LtEq: {
    return (left) <= (right);
    break;
  }
  case rio_TokenKind_Gt: {
    return (left) > (right);
    break;
  }
  case rio_TokenKind_GtEq: {
    return (left) >= (right);
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  return 0;
}

ullong rio_eval_binary_op_ull(rio_TokenKind op, ullong left, ullong right) {
  switch (op) {
  case rio_TokenKind_Mul: {
    return (left) * (right);
    break;
  }
  case rio_TokenKind_Div: {
    return ((right) != (0) ? (left) / (right) : 0);
    break;
  }
  case rio_TokenKind_Mod: {
    return ((right) != (0) ? (left) % (right) : 0);
    break;
  }
  case rio_TokenKind_And: {
    return (left) & (right);
    break;
  }
  case rio_TokenKind_Lshift: {
    return (left) << (right);
    break;
  }
  case rio_TokenKind_Rshift: {
    return (left) >> (right);
    break;
  }
  case rio_TokenKind_Add: {
    return (left) + (right);
    break;
  }
  case rio_TokenKind_Sub: {
    return (left) - (right);
    break;
  }
  case rio_TokenKind_Or: {
    return (left) | (right);
    break;
  }
  case rio_TokenKind_Xor: {
    return (left) ^ (right);
    break;
  }
  case rio_TokenKind_Eq: {
    return (left) == (right);
    break;
  }
  case rio_TokenKind_NotEq: {
    return (left) != (right);
    break;
  }
  case rio_TokenKind_Lt: {
    return (left) < (right);
    break;
  }
  case rio_TokenKind_LtEq: {
    return (left) <= (right);
    break;
  }
  case rio_TokenKind_Gt: {
    return (left) > (right);
    break;
  }
  case rio_TokenKind_GtEq: {
    return (left) >= (right);
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  return 0;
}

rio_Val rio_eval_unary_op(rio_TokenKind op, rio_Type (*type), rio_Val val) {
  if (rio_is_integer_type(type)) {
    rio_Operand operand = rio_operand_const(type, val);
    if (rio_is_signed_type(type)) {
      cast_operand(&(operand), rio_type_llong);
      operand.val.ll = rio_eval_unary_op_ll(op, operand.val.ll);
    } else {
      cast_operand(&(operand), rio_type_ullong);
      operand.val.ll = rio_eval_unary_op_ull(op, operand.val.ull);
    }
    cast_operand(&(operand), type);
    return operand.val;
  } else {
    return (rio_Val){0};
  }
}

rio_Val rio_eval_binary_op(rio_TokenKind op, rio_Type (*type), rio_Val left, rio_Val right) {
  if (rio_is_integer_type(type)) {
    rio_Operand left_operand = rio_operand_const(type, left);
    rio_Operand right_operand = rio_operand_const(type, right);
    rio_Operand result_operand = {0};
    if (rio_is_signed_type(type)) {
      cast_operand(&(left_operand), rio_type_llong);
      cast_operand(&(right_operand), rio_type_llong);
      result_operand = rio_operand_const(rio_type_llong, (rio_Val){.ll = rio_eval_binary_op_ll(op, left_operand.val.ll, right_operand.val.ll)});
    } else {
      cast_operand(&(left_operand), rio_type_ullong);
      cast_operand(&(right_operand), rio_type_ullong);
      result_operand = rio_operand_const(rio_type_ullong, (rio_Val){.ull = rio_eval_binary_op_ull(op, left_operand.val.ull, right_operand.val.ull)});
    }
    cast_operand(&(result_operand), type);
    return result_operand.val;
  } else {
    return (rio_Val){0};
  }
}

rio_Operand rio_resolve_name_operand(rio_SrcPos pos, char const ((*name))) {
  rio_Sym (*sym) = rio_resolve_name(name);
  if (!(sym)) {
    rio_fatal_error(pos, "Unresolved name \'%s\'", name);
  }
  if ((sym->kind) == ((rio_Sym_Var))) {
    rio_Operand operand = rio_operand_lvalue(sym->type);
    if (rio_is_array_type(operand.type)) {
      operand = rio_operand_decay(operand);
    }
    return operand;
  } else if ((sym->kind) == ((rio_Sym_Const))) {
    return rio_operand_const(sym->type, sym->val);
  } else if ((sym->kind) == ((rio_Sym_Func))) {
    return rio_operand_rvalue(sym->type);
  } else if ((sym->kind) == ((rio_Sym_Type))) {
    return rio_operand_type(sym->type);
  } else {
    assert(false);
    rio_fatal_error(pos, "%s must be a let mut or const", name);
    return rio_operand_null;
  }
}

rio_Operand rio_resolve_expr_name(rio_Expr (*expr)) {
  assert((expr->kind) == ((rio_Expr_Name)));
  return rio_resolve_name_operand(expr->pos, expr->name);
}

rio_Operand rio_resolve_unary_op(rio_TokenKind op, rio_Operand operand) {
  rio_promote_operand(&(operand));
  if (operand.is_const) {
    return rio_operand_const(operand.type, rio_eval_unary_op(op, operand.type, operand.val));
  } else {
    return operand;
  }
}

rio_Operand rio_resolve_expr_unary(rio_Expr (*expr)) {
  rio_Operand operand = rio_resolve_expr_rvalue(expr->unary.expr);
  rio_Type (*type) = operand.type;
  switch (expr->unary.op) {
  case rio_TokenKind_Mul: {
    if (!(rio_is_ptr_type(type))) {
      rio_fatal_error(expr->pos, "Cannot deref non-ptr type");
    }
    return rio_operand_lvalue(type->base);
    break;
  }
  case rio_TokenKind_Add:
  case rio_TokenKind_Sub: {
    if (!(rio_is_arithmetic_type(type))) {
      rio_fatal_error(expr->pos, "Can only use unary %s with arithmetic types", rio_token_kind_name(expr->unary.op));
    }
    return rio_resolve_unary_op(expr->unary.op, operand);
    break;
  }
  case rio_TokenKind_Neg: {
    if (!(rio_is_integer_type(type))) {
      rio_fatal_error(expr->pos, "Can only use ~ with integer types");
    }
    return rio_resolve_unary_op(expr->unary.op, operand);
    break;
  }
  case rio_TokenKind_Not: {
    if (!(rio_is_scalar_type(type))) {
      rio_fatal_error(expr->pos, " Can only use ! with scalar types");
    }
    return rio_resolve_unary_op(expr->unary.op, operand);
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  return (rio_Operand){0};
}

rio_Operand rio_resolve_binary_op(rio_TokenKind op, rio_Operand left, rio_Operand right) {
  if ((left.is_const) && (right.is_const)) {
    return rio_operand_const(left.type, rio_eval_binary_op(op, left.type, left.val, right.val));
  } else {
    return rio_operand_rvalue(left.type);
  }
}

rio_Operand rio_resolve_binary_arithmetic_op(rio_TokenKind op, rio_Operand left, rio_Operand right) {
  rio_unify_arithmetic_operands(&(left), &(right));
  return rio_resolve_binary_op(op, left, right);
}

rio_Operand rio_resolve_expr_binary_op(rio_TokenKind op, char const ((*op_name)), rio_SrcPos pos, rio_Operand left, rio_Operand right) {
  switch (op) {
  case rio_TokenKind_Mul:
  case rio_TokenKind_Div: {
    if (!(rio_is_arithmetic_type(left.type))) {
      rio_fatal_error(pos, "Left operand of %s must have arithmetic type", op_name);
    }
    if (!(rio_is_arithmetic_type(right.type))) {
      rio_fatal_error(pos, "Right operand of %s must have arithmetic type", op_name);
    }
    return rio_resolve_binary_arithmetic_op(op, left, right);
    break;
  }
  case rio_TokenKind_Mod: {
    if (!(rio_is_integer_type(left.type))) {
      rio_fatal_error(pos, "Left operand of %% must have integer type");
    }
    if (!(rio_is_integer_type(right.type))) {
      rio_fatal_error(pos, "Right operand of %% must have integer type");
    }
    return rio_resolve_binary_arithmetic_op(op, left, right);
    break;
  }
  case rio_TokenKind_Add: {
    if ((rio_is_arithmetic_type(left.type)) && (rio_is_arithmetic_type(right.type))) {
      return rio_resolve_binary_arithmetic_op(op, left, right);
    } else if ((rio_is_ptr_star_type(left.type)) && (rio_is_integer_type(right.type))) {
      rio_complete_type(left.type->base);
      if ((rio_type_sizeof(left.type->base)) == (0)) {
        rio_fatal_error(pos, "Cannot do pointer arithmetic with size 0 base type");
      }
      return rio_operand_rvalue(left.type);
    } else if ((rio_is_ptr_star_type(right.type)) && (rio_is_integer_type(left.type))) {
      rio_complete_type(right.type->base);
      if ((rio_type_sizeof(right.type->base)) == (0)) {
        rio_fatal_error(pos, "Cannot do pointer arithmetic with size 0 base type");
      }
      return rio_operand_rvalue(right.type);
    } else {
      rio_fatal_error(pos, "Operands of + must both have arithmetic type, or star pointer and integer type");
    }
    break;
  }
  case rio_TokenKind_Sub: {
    if ((rio_is_arithmetic_type(left.type)) && (rio_is_arithmetic_type(right.type))) {
      return rio_resolve_binary_arithmetic_op(op, left, right);
    } else if ((rio_is_ptr_star_type(left.type)) && (rio_is_integer_type(right.type))) {
      return rio_operand_rvalue(left.type);
    } else if ((rio_is_ptr_star_type(left.type)) && (rio_is_ptr_star_type(right.type))) {
      if ((left.type->base) != (right.type->base)) {
        rio_fatal_error(pos, "Cannot subtract pointers to different types");
      }
      return rio_operand_rvalue(rio_type_ssize);
    } else {
      rio_fatal_error(pos, "Operands of - must both have arithmetic type, pointer and integer type, or compatible pointer types");
    }
    break;
  }
  case rio_TokenKind_Lshift:
  case rio_TokenKind_Rshift: {
    if ((rio_is_integer_type(left.type)) && (rio_is_integer_type(right.type))) {
      rio_promote_operand(&(left));
      rio_promote_operand(&(right));
      rio_Type (*result_type) = left.type;
      rio_Operand result = {0};
      if (rio_is_signed_type(left.type)) {
        cast_operand(&(left), rio_type_llong);
        cast_operand(&(right), rio_type_llong);
      } else {
        cast_operand(&(left), rio_type_ullong);
        cast_operand(&(right), rio_type_ullong);
      }
      result = rio_resolve_binary_op(op, left, right);
      cast_operand(&(result), result_type);
      return result;
    } else {
      rio_fatal_error(pos, "Operands of %s must both have integer type", op_name);
    }
    break;
  }
  case rio_TokenKind_Eq:
  case rio_TokenKind_NotEq: {
    if ((rio_is_arithmetic_type(left.type)) && (rio_is_arithmetic_type(right.type))) {
      rio_Operand result = rio_resolve_binary_arithmetic_op(op, left, right);
      cast_operand(&(result), rio_type_int);
      return result;
    } else if ((rio_is_ptr_type(left.type)) && (rio_is_ptr_type(right.type))) {
      rio_Type (*unqual_left_base) = rio_unqualify_type(left.type->base);
      rio_Type (*unqual_right_base) = rio_unqualify_type(right.type->base);
      if ((((unqual_left_base) != (unqual_right_base)) && ((unqual_left_base) != (rio_type_void))) && ((unqual_right_base) != (rio_type_void))) {
        rio_fatal_error(pos, "Cannot compare pointers to different types");
      }
      return rio_operand_rvalue(rio_type_int);
    } else if ((((rio_is_null_ptr(left)) && (rio_is_ptr_type(right.type)))) || (((rio_is_null_ptr(right)) && (rio_is_ptr_type(left.type))))) {
      return rio_operand_rvalue(rio_type_int);
    } else {
      rio_fatal_error(pos, "Operands of %s must be arithmetic types or compatible pointer types", op_name);
    }
    break;
  }
  case rio_TokenKind_Lt:
  case rio_TokenKind_LtEq:
  case rio_TokenKind_Gt:
  case rio_TokenKind_GtEq: {
    if ((rio_is_arithmetic_type(left.type)) && (rio_is_arithmetic_type(right.type))) {
      rio_Operand result = rio_resolve_binary_arithmetic_op(op, left, right);
      cast_operand(&(result), rio_type_int);
      return result;
    } else if ((rio_is_ptr_type(left.type)) && (rio_is_ptr_type(right.type))) {
      if ((rio_unqualify_type(left.type->base)) != (rio_unqualify_type(right.type->base))) {
        rio_fatal_error(pos, "Cannot compare pointers to different types");
      }
      return rio_operand_rvalue(rio_type_int);
    } else if ((((rio_is_null_ptr(left)) && (rio_is_ptr_type(right.type)))) || (((rio_is_null_ptr(right)) && (rio_is_ptr_type(left.type))))) {
      return rio_operand_rvalue(rio_type_int);
    } else {
      rio_fatal_error(pos, "Operands of %s must be arithmetic types or compatible pointer types", op_name);
    }
    break;
  }
  case rio_TokenKind_And:
  case rio_TokenKind_Xor:
  case rio_TokenKind_Or: {
    if ((rio_is_integer_type(left.type)) && (rio_is_integer_type(right.type))) {
      return rio_resolve_binary_arithmetic_op(op, left, right);
    } else {
      rio_fatal_error(pos, "Operands of %s must have arithmetic types", op_name);
    }
    break;
  }
  case rio_TokenKind_AndAnd:
  case rio_TokenKind_OrOr: {
    if ((rio_is_scalar_type(left.type)) && (rio_is_scalar_type(right.type))) {
      if ((left.is_const) && (right.is_const)) {
        cast_operand(&(left), rio_type_bool);
        cast_operand(&(right), rio_type_bool);
        int i = {0};
        if ((op) == ((rio_TokenKind_AndAnd))) {
          i = (left.val.b) && (right.val.b);
        } else {
          assert((op) == ((rio_TokenKind_OrOr)));
          i = (left.val.b) || (right.val.b);
        }
        return rio_operand_const(rio_type_int, (rio_Val){.i = i});
      } else {
        return rio_operand_rvalue(rio_type_int);
      }
    } else {
      rio_fatal_error(pos, "Operands of %s must have scalar types", op_name);
    }
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  return (rio_Operand){0};
}

rio_Operand rio_resolve_expr_binary(rio_Expr (*expr)) {
  assert((expr->kind) == ((rio_Expr_Binary)));
  rio_Operand left = rio_resolve_expr_rvalue(expr->binary.left);
  rio_Operand right = rio_resolve_expr_rvalue(expr->binary.right);
  rio_TokenKind op = expr->binary.op;
  char const ((*op_name)) = rio_token_kind_name(op);
  return rio_resolve_expr_binary_op(op, op_name, expr->pos, left, right);
}

void rio_resolve_struct_fields(rio_Slice_CompoundField fields, rio_Type (*type)) {
  ullong index = (size_t)(0);
  bool had_name = false;
  rio_Slice_TypeField declared_fields = type->aggregate.fields;
  {
    rio_Slice_CompoundField items__ = fields;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_CompoundField field = items__.items[i__];
      if ((field.kind) == ((rio_CompoundField_Index))) {
        rio_fatal_error(field.pos, "Index field initializer not allowed for struct/union compound literal");
      } else if ((field.kind) == ((rio_CompoundField_Name))) {
        had_name = true;
        int found = rio_aggregate_item_field_index(type, field.name);
        if ((found) < (0)) {
          rio_fatal_error(field.pos, "Named field in compound literal does not exist");
        }
        index = (size_t)(found);
      } else if (had_name) {
        rio_fatal_error(field.pos, "Positional field after named field");
      }
      if ((index) >= ((int)(declared_fields.length))) {
        rio_fatal_error(field.pos, "Field initializer in struct/union compound literal out of range");
      }
      rio_Type (*field_type) = declared_fields.items[index].type;
      if (!(rio_resolve_typed_init(field.pos, field_type, field.expr))) {
        rio_fatal_error(field.pos, "Invalid type in compound literal initializer for aggregate type. Expected %s", rio_get_type_name(field_type));
      }
      (index)++;
    }
  }
}

rio_Operand rio_resolve_expr_compound(rio_Expr (*expr), rio_Type (*expected_type)) {
  assert((expr->kind) == ((rio_Expr_Compound)));
  if ((!(expected_type)) && (!(expr->compound.type))) {
    rio_fatal_error(expr->pos, "Implicitly typed compound literals used in context without expected type");
  }
  rio_Type (*type) = {0};
  if (expr->compound.type) {
    type = rio_resolve_typespec(expr->compound.type);
  } else {
    type = expected_type;
  }
  rio_complete_type(type);
  bool is_const = rio_is_const_type(type);
  type = rio_unqualify_type(type);
  if (((type->kind) == ((rio_CompilerTypeKind_Struct))) || ((type->kind) == ((rio_CompilerTypeKind_Union)))) {
    if ((expr->compound.kind) == ((rio_ExprCompound_List))) {
      rio_fatal_error(expr->pos, "Must use struct or tuple literal for structs or unions");
    }
    rio_resolve_struct_fields(expr->compound.fields, type);
  } else if ((type->kind) == ((rio_CompilerTypeKind_Array))) {
    if ((expr->compound.kind) != ((rio_ExprCompound_List))) {
      rio_fatal_error(expr->pos, "Must use list literal for arrays");
    }
    size_t index = 0;
    size_t max_index = 0;
    {
      rio_Slice_CompoundField items__ = expr->compound.fields;
      for (size_t i__ = 0; i__ < items__.length; ++i__) {
        rio_CompoundField field = items__.items[i__];
        if ((field.kind) == ((rio_CompoundField_Name))) {
          rio_fatal_error(field.pos, "Named field initializer not allowed for array compound literals");
        } else if ((field.kind) == ((rio_CompoundField_Index))) {
          rio_Operand operand = rio_resolve_const_expr(field.index);
          if (!(rio_is_integer_type(operand.type))) {
            rio_fatal_error(field.pos, "Field initializer index expression must have type int");
          }
          if (!(cast_operand(&(operand), rio_type_int))) {
            rio_fatal_error(field.pos, "Invalid type in field initializer index. Expected integer type");
          }
          if ((operand.val.i) < (0)) {
            rio_fatal_error(field.pos, "Field initializer index cannot be negative");
          }
          index = operand.val.i;
        }
        if ((type->num_elems) && ((index) >= ((int)(type->num_elems)))) {
          rio_fatal_error(field.pos, "Field initializer in array compound literal out of range");
        }
        if (!(rio_resolve_typed_init(field.pos, type->base, field.expr))) {
          rio_fatal_error(field.pos, "Invalid type in compound literal initializer for array type. Expected %s", rio_get_type_name(type->base));
        }
        max_index = rio_max(max_index, index);
        (index)++;
      }
    }
    if ((type->num_elems) == (0)) {
      type = rio_type_array(type->base, (max_index) + (1));
    }
  } else {
    assert(rio_is_scalar_type(type));
    if ((expr->compound.fields.length) > (1)) {
      rio_fatal_error(expr->pos, "Compound literal for scalar type cannot have more than one operand");
    }
    if ((expr->compound.fields.length) == (1)) {
      rio_CompoundField field = expr->compound.fields.items[0];
      rio_Operand init = rio_resolve_expected_expr_rvalue(field.expr, type);
      if (!(rio_convert_operand(&(init), type))) {
        rio_fatal_error(field.pos, "Invalid type in compound literal initializer. Expected %s, got %s", rio_get_type_name(type), rio_get_type_name(init.type));
      }
    }
  }
  return rio_operand_lvalue((is_const ? rio_type_const(type) : type));
}

rio_Operand rio_resolve_expr_call(rio_Expr (*expr)) {
  assert((expr->kind) == ((rio_Expr_Call)));
  bool verbose = false;
  rio_Sym (*sym) = {0};
  rio_Expr (*called_expr) = expr->call.expr;
  rio_Operand function = rio_resolve_expr_rvalue(called_expr);
  if ((function.type->kind) != ((rio_CompilerTypeKind_Func))) {
    sym = function.type->sym;
  }
  if ((!(sym)) && ((called_expr->kind) == ((rio_Expr_Name)))) {
    sym = rio_resolve_name(called_expr->name);
  }
  if ((((sym) && (sym->decl)) && ((sym->decl->kind) == ((rio_Decl_Enum)))) && (sym->decl->enum_decl.kind_aggregate_decl)) {
    sym = rio_get_resolved_sym(sym->decl->enum_decl.kind_aggregate_decl);
    rio_set_resolved_sym(called_expr, sym);
    if (!(expr->call.prefixed)) {
      rio_Expr (*dupe) = rio_ast_dup_Expr(called_expr);
      rio_ast_unshift_CompoundField(&(expr->call.args), (rio_CompoundField){.kind = (rio_CompoundField_Default), .pos = dupe->pos, .expr = dupe});
      expr->call.prefixed = true;
    }
  }
  if ((sym) && ((sym->kind) == ((rio_Sym_Type)))) {
    rio_Type (*type) = sym->type;
    rio_complete_type(type);
    bool is_const = rio_is_const_type(type);
    type = rio_unqualify_type(type);
    rio_Slice_CompoundField fields = expr->call.args;
    switch (type->kind) {
    case rio_CompilerTypeKind_Struct:
    case rio_CompilerTypeKind_Union: {
      rio_resolve_struct_fields(fields, type);
      break;
    }
    default: {
      assert(rio_is_scalar_type(type));
      if ((fields.length) > (1)) {
        rio_fatal_error(expr->pos, "Compound literal for scalar type cannot have more than one operand");
      }
      if ((fields.length) == (1)) {
        rio_CompoundField field = fields.items[0];
        rio_Operand init = rio_resolve_expected_expr_rvalue(field.expr, type);
        if (!(rio_convert_operand(&(init), type))) {
          rio_fatal_error(field.pos, "Invalid type in compound literal initializer. Expected %s, got %s", rio_get_type_name(type), rio_get_type_name(init.type));
        }
      }
      break;
    }
    }
    return rio_operand_lvalue((is_const ? rio_type_const(type) : type));
  }
  if ((function.type->kind) != ((rio_CompilerTypeKind_Func))) {
    rio_fatal_error(expr->pos, "Cannot call non-function value");
  }
  bool is_generic = false;
  rio_Slice_TypeArg type_args = {0};
  rio_Decl (*decl) = {0};
  if (((sym) && (sym->decl)) && ((sym->decl->kind) == ((rio_Decl_Func)))) {
    decl = sym->decl;
    if (decl->is_generic) {
      is_generic = true;
      switch (called_expr->kind) {
      case rio_Expr_Field: {
        type_args = called_expr->field.type_args;
        break;
      }
      case rio_Expr_Name: {
        type_args = called_expr->type_args;
        break;
      }
      default:
        assert("@complete switch failed to handle case" && 0);
        break;
      }
      if (type_args.length) {
        sym = rio_resolve_specialized_decl(decl->pos, sym, type_args, true);
        rio_set_resolved_sym(called_expr, sym);
        function = rio_operand_rvalue(sym->type);
      }
    }
  }
  ullong num_params = function.type->function.params.length;
  if ((expr->call.args.length) < (num_params)) {
    rio_fatal_error(expr->pos, "Function call with too few arguments");
  }
  if (((expr->call.args.length) > (num_params)) && (!(function.type->function.has_varargs))) {
    rio_fatal_error(expr->pos, "Function call with too many arguments");
  }
  if (verbose) {
    printf("Check args.\n");
  }
  {
    rio_Slice_ref_Type items__ = function.type->function.params;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Type (*param_type) = items__.items[i__];
      size_t i = i__;
      rio_Operand arg = rio_resolve_expected_expr_rvalue(expr->call.args.items[i].expr, param_type);
      if ((is_generic) && (!(type_args.length))) {
      }
      if (rio_is_array_type(param_type)) {
        param_type = rio_type_ptr(param_type->base);
      }
      if (!(rio_convert_operand(&(arg), param_type))) {
        rio_fatal_error(expr->call.args.items[i].pos, "Invalid type in function call argument. Expected %s, got %s", rio_get_type_name(param_type), rio_get_type_name(arg.type));
      }
    }
  }
  if (verbose) {
    printf("Checked.\n");
  }
  for (size_t i = num_params; (i) < (expr->call.args.length); (i)++) {
    rio_resolve_expr_rvalue(expr->call.args.items[i].expr);
  }
  if (verbose) {
    printf("Got here.\n");
  }
  return rio_operand_rvalue(function.type->function.ret);
}

rio_Operand rio_resolve_expr_ternary(rio_Expr (*expr), rio_Type (*expected_type)) {
  assert((expr->kind) == ((rio_Expr_Ternary)));
  rio_Operand cond = rio_resolve_expr_rvalue(expr->ternary.cond);
  if (!(rio_is_scalar_type(cond.type))) {
    rio_fatal_error(expr->pos, "Ternary conditional must have scalar type");
  }
  rio_Operand left = rio_resolve_expected_expr_rvalue(expr->ternary.then_expr, expected_type);
  rio_Operand right = rio_resolve_expected_expr_rvalue(expr->ternary.else_expr, expected_type);
  if ((left.type) == (right.type)) {
    return rio_operand_rvalue(left.type);
  } else if ((rio_is_arithmetic_type(left.type)) && (rio_is_arithmetic_type(right.type))) {
    rio_unify_arithmetic_operands(&(left), &(right));
    if (((cond.is_const) && (left.is_const)) && (right.is_const)) {
      return rio_operand_const(left.type, (cond.val.i ? left.val : right.val));
    } else {
      return rio_operand_rvalue(left.type);
    }
  } else if ((rio_is_ptr_type(left.type)) && (rio_is_null_ptr(right))) {
    return rio_operand_rvalue(left.type);
  } else if ((rio_is_ptr_type(right.type)) && (rio_is_null_ptr(left))) {
    return rio_operand_rvalue(right.type);
  } else {
    rio_fatal_error(expr->pos, "Left and right operands of ternary expression must have arithmetic types or identical types");
  }
  return (rio_Operand){0};
}

rio_Operand rio_resolve_expr_index(rio_Expr (*expr)) {
  assert((expr->kind) == ((rio_Expr_Index)));
  rio_Operand operand = rio_resolve_expr_rvalue(expr->index.expr);
  rio_Type (*item_type) = {0};
  if (rio_is_ptr_star_type(operand.type)) {
    item_type = operand.type->base;
  } else {
    if (rio_is_aggregate_type(rio_deref_type(operand.type))) {
      item_type = rio_resolve_item_type(expr->pos, operand);
    } else {
      rio_fatal_error(expr->pos, "Can only index arrays, star pointers, and slices");
    }
  }
  rio_Operand index = rio_resolve_expr_rvalue(expr->index.index);
  if (!(rio_is_integer_type(index.type))) {
    rio_fatal_error(expr->pos, "Index must have integer type");
  }
  return rio_operand_lvalue(item_type);
}

rio_Operand rio_resolve_expr_cast(rio_Expr (*expr)) {
  assert((expr->kind) == ((rio_Expr_Cast)));
  rio_Type (*type) = rio_resolve_typespec(expr->cast.type);
  rio_Operand operand = rio_resolve_expr_rvalue(expr->cast.expr);
  if (!(cast_operand(&(operand), type))) {
    rio_fatal_error(expr->pos, "Invalid type cast from %s to %s", rio_get_type_name(operand.type), rio_get_type_name(type));
  }
  return operand;
}

rio_Operand rio_resolve_expr_int(rio_Expr (*expr)) {
  assert((expr->kind) == ((rio_Expr_Int)));
  ullong int_max = rio_type_metrics[(rio_CompilerTypeKind_Int)].max;
  ullong uint_max = rio_type_metrics[(rio_CompilerTypeKind_UInt)].max;
  ullong long_max = rio_type_metrics[(rio_CompilerTypeKind_Long)].max;
  ullong ulong_max = rio_type_metrics[(rio_CompilerTypeKind_ULong)].max;
  ullong llong_max = rio_type_metrics[(rio_CompilerTypeKind_LLong)].max;
  ullong val = expr->int_lit.val;
  rio_Operand operand = rio_operand_const(rio_type_ullong, (rio_Val){.ull = val});
  rio_Type (*type) = rio_type_ullong;
  if ((expr->int_lit.mod) == ((rio_TokenMod_None))) {
    bool overflow = false;
    switch (expr->int_lit.suffix) {
    case rio_TokenSuffix_None: {
      type = rio_type_int;
      if ((val) > (int_max)) {
        type = rio_type_long;
        if ((val) > (long_max)) {
          type = rio_type_llong;
          overflow = (val) > (llong_max);
        }
      }
      break;
    }
    case rio_TokenSuffix_U: {
      type = rio_type_uint;
      if ((val) > (uint_max)) {
        type = rio_type_ulong;
        if ((val) > (ulong_max)) {
          type = rio_type_ullong;
        }
      }
      break;
    }
    case rio_TokenSuffix_L: {
      type = rio_type_long;
      if ((val) > (long_max)) {
        type = rio_type_llong;
        overflow = (val) > (llong_max);
      }
      break;
    }
    case rio_TokenSuffix_UL: {
      type = rio_type_ulong;
      if ((val) > (ulong_max)) {
        type = rio_type_ullong;
      }
      break;
    }
    case rio_TokenSuffix_LL: {
      type = rio_type_llong;
      overflow = (val) > (llong_max);
      break;
    }
    case rio_TokenSuffix_ULL: {
      type = rio_type_ullong;
      break;
    }
    default:
      assert("@complete switch failed to handle case" && 0);
      break;
    }
    if (overflow) {
      rio_fatal_error(expr->pos, "Integer literal overflow");
    }
  } else {
    switch (expr->int_lit.suffix) {
    case rio_TokenSuffix_None: {
      type = rio_type_int;
      if ((val) > (int_max)) {
        type = rio_type_uint;
        if ((val) > (uint_max)) {
          type = rio_type_long;
          if ((val) > (long_max)) {
            type = rio_type_ulong;
            if ((val) > (ulong_max)) {
              type = rio_type_llong;
              if ((val) > (llong_max)) {
                type = rio_type_ullong;
              }
            }
          }
        }
      }
      break;
    }
    case rio_TokenSuffix_U: {
      type = rio_type_uint;
      if ((val) > (uint_max)) {
        type = rio_type_ulong;
        if ((val) > (ulong_max)) {
          type = rio_type_ullong;
        }
      }
      break;
    }
    case rio_TokenSuffix_L: {
      type = rio_type_long;
      if ((val) > (long_max)) {
        type = rio_type_ulong;
        if ((val) > (ulong_max)) {
          type = rio_type_llong;
          if ((val) > (llong_max)) {
            type = rio_type_ullong;
          }
        }
      }
      break;
    }
    case rio_TokenSuffix_UL: {
      type = rio_type_ulong;
      if ((val) > (ulong_max)) {
        type = rio_type_ullong;
      }
      break;
    }
    case rio_TokenSuffix_LL: {
      type = rio_type_llong;
      if ((val) > (llong_max)) {
        type = rio_type_ullong;
      }
      break;
    }
    case rio_TokenSuffix_ULL: {
      type = rio_type_ullong;
      break;
    }
    default:
      assert("@complete switch failed to handle case" && 0);
      break;
    }
  }
  cast_operand(&(operand), type);
  return operand;
}

rio_Operand rio_resolve_expr_modify(rio_Expr (*expr)) {
  rio_Operand operand = rio_resolve_expr(expr->modify.expr);
  rio_Type (*type) = operand.type;
  rio_complete_type(type);
  if (!(operand.is_lvalue)) {
    rio_fatal_error(expr->pos, "Cannot modify non-lvalue");
  }
  if (type->nonmodifiable) {
    rio_fatal_error(expr->pos, "Cannot modify non-modifiable type");
  }
  if (!(((rio_is_integer_type(type)) || ((type->kind) == ((rio_CompilerTypeKind_Ptr)))))) {
    rio_fatal_error(expr->pos, "%s only valid for integer and pointer types", rio_token_kind_name(expr->modify.op));
  }
  return rio_operand_rvalue(type);
}

rio_Operand rio_resolve_expected_expr(rio_Expr (*expr), rio_Type (*expected_type)) {
  rio_Operand result = {0};
  switch (expr->kind) {
  case rio_Expr_Paren: {
    result = rio_resolve_expected_expr(expr->arg, expected_type);
    break;
  }
  case rio_Expr_Int: {
    result = rio_resolve_expr_int(expr);
    break;
  }
  case rio_Expr_Float: {
    result = rio_operand_const(((expr->float_lit.suffix) == ((rio_TokenSuffix_D)) ? rio_type_double : rio_type_float), (rio_Val){0});
    break;
  }
  case rio_Expr_Str: {
    result = rio_operand_rvalue(rio_type_array(rio_type_char, (strlen(expr->str_lit.val)) + (1)));
    break;
  }
  case rio_Expr_Name: {
    result = rio_resolve_expr_name(expr);
    rio_set_resolved_sym(expr, rio_resolve_name(expr->name));
    break;
  }
  case rio_Expr_Cast: {
    result = rio_resolve_expr_cast(expr);
    break;
  }
  case rio_Expr_Call: {
    result = rio_resolve_expr_call(expr);
    break;
  }
  case rio_Expr_Index: {
    result = rio_resolve_expr_index(expr);
    break;
  }
  case rio_Expr_Field: {
    result = rio_resolve_expr_field(expr);
    break;
  }
  case rio_Expr_Compound: {
    result = rio_resolve_expr_compound(expr, expected_type);
    break;
  }
  case rio_Expr_Unary: {
    if ((expr->unary.op) == ((rio_TokenKind_And))) {
      rio_Operand operand = {0};
      if ((expected_type) && (rio_is_ptr_type(expected_type))) {
        operand = rio_resolve_expected_expr(expr->unary.expr, expected_type->base);
      } else {
        operand = rio_resolve_expr(expr->unary.expr);
      }
      if (!(operand.is_lvalue)) {
        rio_fatal_error(expr->pos, "Cannot take address of non-lvalue");
      }
      result = rio_operand_rvalue(rio_type_ref(operand.type));
    } else {
      result = rio_resolve_expr_unary(expr);
    }
    break;
  }
  case rio_Expr_Binary: {
    result = rio_resolve_expr_binary(expr);
    break;
  }
  case rio_Expr_Ternary: {
    result = rio_resolve_expr_ternary(expr, expected_type);
    break;
  }
  case rio_Expr_SizeofExpr: {
    if ((expr->arg->kind) == ((rio_Expr_Name))) {
      rio_Sym (*sym) = rio_resolve_name(expr->arg->name);
      if ((sym) && ((sym->kind) == ((rio_Sym_Type)))) {
        rio_complete_type(sym->type);
        result = rio_operand_const(rio_type_usize, (rio_Val){.ull = rio_type_sizeof(sym->type)});
        rio_set_resolved_type(expr->arg, sym->type);
        rio_set_resolved_sym(expr->arg, sym);
        break;
      }
    }
    rio_Type (*type) = rio_resolve_expr(expr->arg).type;
    rio_complete_type(type);
    result = rio_operand_const(rio_type_usize, (rio_Val){.ull = rio_type_sizeof(type)});
    break;
  }
  case rio_Expr_SizeofType: {
    rio_Type (*type) = rio_resolve_typespec(expr->type_arg);
    rio_complete_type(type);
    result = rio_operand_const(rio_type_usize, (rio_Val){.ull = rio_type_sizeof(type)});
    break;
  }
  case rio_Expr_AlignofExpr: {
    if ((expr->arg->kind) == ((rio_Expr_Name))) {
      rio_Sym (*sym) = rio_resolve_name(expr->arg->name);
      if ((sym) && ((sym->kind) == ((rio_Sym_Type)))) {
        rio_complete_type(sym->type);
        result = rio_operand_const(rio_type_usize, (rio_Val){.ull = rio_type_alignof(sym->type)});
        rio_set_resolved_type(expr->arg, sym->type);
        rio_set_resolved_sym(expr->arg, sym);
        break;
      }
    }
    rio_Type (*type) = rio_resolve_expr(expr->arg).type;
    rio_complete_type(type);
    result = rio_operand_const(rio_type_usize, (rio_Val){.ull = rio_type_alignof(type)});
    break;
  }
  case rio_Expr_AlignofType: {
    rio_Type (*type) = rio_resolve_typespec(expr->type_arg);
    rio_complete_type(type);
    result = rio_operand_const(rio_type_usize, (rio_Val){.ull = rio_type_alignof(type)});
    break;
  }
  case rio_Expr_TypeofType: {
    rio_Type (*type) = rio_resolve_typespec(expr->type_arg);
    result = rio_operand_const(rio_type_ullong, (rio_Val){.ull = type->typeid});
    break;
  }
  case rio_Expr_TypeofExpr: {
    if ((expr->arg->kind) == ((rio_Expr_Name))) {
      rio_Sym (*sym) = rio_resolve_name(expr->arg->name);
      if ((sym) && ((sym->kind) == ((rio_Sym_Type)))) {
        result = rio_operand_const(rio_type_ullong, (rio_Val){.ull = sym->type->typeid});
        rio_set_resolved_type(expr->arg, sym->type);
        rio_set_resolved_sym(expr->arg, sym);
        break;
      }
    }
    rio_Type (*type) = rio_resolve_expr(expr->arg).type;
    result = rio_operand_const(rio_type_ullong, (rio_Val){.ull = type->typeid});
    break;
  }
  case rio_Expr_Offsetof: {
    rio_Type (*type) = rio_resolve_typespec(expr->offsetof_field.type);
    rio_complete_type(type);
    if (((type->kind) != ((rio_CompilerTypeKind_Struct))) && ((type->kind) != ((rio_CompilerTypeKind_Union)))) {
      rio_fatal_error(expr->pos, "offsetof can only be used with struct/union types");
    }
    int index = rio_aggregate_item_field_index(type, expr->offsetof_field.name);
    if ((index) < (0)) {
      rio_fatal_error(expr->pos, "No field \'%s\' in type", expr->offsetof_field.name);
    }
    result = rio_operand_const(rio_type_usize, (rio_Val){.ull = type->aggregate.fields.items[index].offset});
    break;
  }
  case rio_Expr_Modify: {
    result = rio_resolve_expr_modify(expr);
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  rio_set_resolved_type(expr, result.type);
  return result;
}

rio_Operand rio_resolve_const_expr(rio_Expr (*expr)) {
  rio_Operand operand = rio_resolve_expr(expr);
  if (!(operand.is_const)) {
    rio_fatal_error(expr->pos, "Expected constant expression");
  }
  return operand;
}

rio_Map rio_decl_note_names;
void rio_init_builtin_syms(void) {
  assert(rio_current_package);
  rio_sym_global_type("void", rio_type_void);
  rio_sym_global_type("bool", rio_type_bool);
  rio_sym_global_type("char", rio_type_char);
  rio_sym_global_type("schar", rio_type_schar);
  rio_sym_global_type("uchar", rio_type_uchar);
  rio_sym_global_type("short", rio_type_short);
  rio_sym_global_type("ushort", rio_type_ushort);
  rio_sym_global_type("int", rio_type_int);
  rio_sym_global_type("uint", rio_type_uint);
  rio_sym_global_type("long", rio_type_long);
  rio_sym_global_type("ulong", rio_type_ulong);
  rio_sym_global_type("llong", rio_type_llong);
  rio_sym_global_type("ullong", rio_type_ullong);
  rio_sym_global_type("float", rio_type_float);
  rio_sym_global_type("double", rio_type_double);
}

void rio_add_package_decls(rio_Package (*package)) {
  {
    rio_Slice_ref_Decl items__ = package->decls;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Decl (*decl) = items__.items[i__];
      if ((decl->kind) == ((rio_Decl_Note))) {
        if (!(rio_map_get(&(rio_decl_note_names), decl->note.name))) {
          rio_warning(decl->pos, "Unknown declaration #directive \'%s\'", decl->note.name);
        }
        if ((decl->note.name) == (rio_declare_note_name)) {
          if ((decl->note.args.length) != (1)) {
            rio_fatal_error(decl->pos, "#declare_note takes 1 argument");
          }
          rio_Expr (*arg) = decl->note.args.items[0].expr;
          if ((arg->kind) != ((rio_Expr_Name))) {
            rio_fatal_error(decl->pos, "#declare_note argument must be name");
          }
          rio_map_put(&(rio_decl_note_names), arg->name, (void *)(1));
        } else if ((decl->note.name) == (rio_static_assert_name)) {
          if (!(rio_flag_lazy)) {
            rio_resolve_static_assert(decl->note);
          }
        }
      } else if ((decl->kind) == ((rio_Decl_Import))) {
      } else {
        rio_sym_global_decl(decl, NULL);
      }
    }
  }
}

bool rio_is_package_dir(char const ((*search_path)), char const ((*package_path))) {
  char (path[MAX_PATH]) = {0};
  rio_path_copy(path, search_path);
  rio_path_join(path, package_path);
  rio_DirListIter iter = {0};
  for (rio_dir_list(&(iter), path); iter.valid; rio_dir_list_next(&(iter))) {
    char const ((*ext)) = rio_path_ext(iter.name);
    if (((ext) != (iter.name)) && (!(strcmp(ext, "rio")))) {
      rio_dir_list_free(&(iter));
      return true;
    }
  }
  return false;
}

bool rio_copy_package_full_path(char (dest[MAX_PATH]), char const ((*package_path))) {
  for (int i = 0; (i) < (rio_num_package_search_paths); (i)++) {
    if (rio_is_package_dir(rio_package_search_paths[i], package_path)) {
      rio_path_copy(dest, rio_package_search_paths[i]);
      rio_path_join(dest, package_path);
      return true;
    }
  }
  return false;
}

rio_Package (*rio_import_package(char const ((*package_path)))) {
  package_path = rio_str_intern(package_path);
  rio_Package (*package) = rio_map_get(&(rio_package_map), package_path);
  if (!(package)) {
    package = rio_xcalloc(1, sizeof(rio_Package));
    package->path = package_path;
    if (rio_flag_verbose) {
      printf("Importing %s\n", package_path);
    }
    char (full_path[MAX_PATH]) = {0};
    if (!(rio_copy_package_full_path(full_path, package_path))) {
      return NULL;
    }
    strcpy(package->full_path, full_path);
    rio_add_package(package);
    rio_compile_package(package);
  }
  return package;
}

void rio_import_all_package_symbols(rio_Package (*package)) {
  char const ((*main_name)) = rio_str_intern("main");
  for (size_t i = 0; (i) < (rio_buf_len(package->syms)); (i)++) {
    if (((package->syms[i]->home_package) == (package)) && ((package->syms[i]->name) != (main_name))) {
      rio_sym_global_put(package->syms[i]->name, package->syms[i]);
    }
  }
}

void rio_import_package_symbols(rio_Decl (*decl), rio_Package (*package)) {
  {
    rio_Slice_ImportItem items__ = decl->import_decl.items;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_ImportItem item = items__.items[i__];
      rio_Sym (*sym) = rio_get_package_sym(package, item.name);
      if (!(sym)) {
        rio_fatal_error(decl->pos, "Symbol \'%s\' does not exist in package \'%s\'", item.name, package->path);
      }
      rio_sym_global_put((item.rename ? item.rename : item.name), sym);
    }
  }
}

void rio_process_package_imports(rio_Package (*package)) {
  {
    rio_Slice_ref_Decl items__ = package->decls;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_Decl (*decl) = items__.items[i__];
      if ((decl->kind) == ((rio_Decl_Note))) {
        if ((decl->note.name) == (rio_always_name)) {
          package->always_reachable = true;
        }
      } else if ((decl->kind) == ((rio_Decl_Import))) {
        char (*path_buf) = NULL;
        if (decl->import_decl.is_relative) {
          rio_buf_printf(&(path_buf), "%s/", package->path);
        }
        {
          rio_Slice_ptr_const_char items__ = decl->import_decl.names;
          for (size_t i__ = 0; i__ < items__.length; ++i__) {
            char const ((*name)) = items__.items[i__];
            size_t k = i__;
            if (!(rio_str_islower(name))) {
              rio_fatal_error(decl->pos, "Import name must be lower case: \'%s\'", name);
            }
            rio_buf_printf(&(path_buf), "%s%s", ((k) == (0) ? "" : "/"), name);
          }
        }
        rio_Package (*imported_package) = rio_import_package(path_buf);
        if (!(imported_package)) {
          rio_fatal_error(decl->pos, "Failed to import package \'%s\'", path_buf);
        }
        rio_buf_free((void (**))(&(path_buf)));
        rio_import_package_symbols(decl, imported_package);
        if (decl->import_decl.import_all) {
          rio_import_all_package_symbols(imported_package);
        }
        char const ((*sym_name)) = (decl->name ? decl->name : decl->import_decl.names.items[(decl->import_decl.names.length) - (1)]);
        rio_Sym (*sym) = rio_sym_new((rio_Sym_Package), sym_name, decl);
        sym->package = imported_package;
        rio_sym_global_put(sym_name, sym);
      }
    }
  }
}

bool rio_parse_package(rio_Package (*package)) {
  rio_Decl (*(*decls)) = NULL;
  rio_DirListIter iter = {0};
  for (rio_dir_list(&(iter), package->full_path); iter.valid; rio_dir_list_next(&(iter))) {
    if (((iter.is_dir) || ((iter.name[0]) == ('_'))) || ((iter.name[0]) == ('.'))) {
      continue;
    }
    char (name[MAX_PATH]) = {0};
    rio_path_copy(name, iter.name);
    char (*ext) = rio_path_ext(name);
    if (((ext) == (name)) || (strcmp(ext, "rio"))) {
      continue;
    }
    ext[-(1)] = 0;
    if (rio_is_excluded_target_filename(name)) {
      continue;
    }
    char (path[MAX_PATH]) = {0};
    rio_path_copy(path, iter.base);
    rio_path_join(path, iter.name);
    rio_path_absolute(path);
    char const ((*code)) = rio_read_file(path);
    if (!(code)) {
      rio_fatal_error((rio_SrcPos){.name = path}, "Failed to read source file");
    }
    rio_init_stream(rio_str_intern(path), code);
    rio_Slice_ref_Decl (*file_decls) = rio_parse_decls();
    {
      rio_Slice_ref_Decl (*items__) = file_decls;
      for (size_t i__ = 0; i__ < items__->length; ++i__) {
        rio_Decl (*(*decl)) = &items__->items[i__];
        rio_buf_push((void (**))(&(decls)), decl, sizeof(*(decl)));
      }
    }
  }
  package->decls = (rio_Slice_ref_Decl){decls, rio_buf_len(decls)};
  return (package) != (NULL);
}

bool rio_compile_package(rio_Package (*package)) {
  if (!(rio_parse_package(package))) {
    return false;
  }
  rio_Package (*old_package) = rio_enter_package(package);
  if ((rio_buf_len(rio_package_list)) == (1)) {
    rio_init_builtin_syms();
  }
  if (rio_builtin_package) {
    rio_import_all_package_symbols(rio_builtin_package);
  }
  rio_add_package_decls(package);
  rio_process_package_imports(package);
  rio_leave_package(old_package);
  return true;
}

void rio_resolve_package_syms(rio_Package (*package)) {
  rio_Package (*old_package) = rio_enter_package(package);
  for (size_t i = 0; (i) < (rio_buf_len(package->syms)); (i)++) {
    if ((package->syms[i]->home_package) == (package)) {
      rio_resolve_sym(package->syms[i]);
    }
  }
  rio_leave_package(old_package);
}

void rio_finalize_reachable_syms(void) {
  if (rio_flag_verbose) {
    printf("Finalizing reachable symbols\n");
  }
  size_t prev_num_reachable = 0;
  ullong num_reachable = rio_buf_len(rio_reachable_syms);
  for (size_t i = 0; (i) < (num_reachable); (i)++) {
    rio_finalize_sym(rio_reachable_syms[i]);
    if ((i) == ((num_reachable) - (1))) {
      if (rio_flag_verbose) {
        printf("New reachable symbols:");
        for (size_t k = prev_num_reachable; (k) < (num_reachable); (k)++) {
          printf(" %s/%s", rio_reachable_syms[k]->home_package->path, rio_reachable_syms[k]->name);
        }
        printf("\n");
      }
      prev_num_reachable = num_reachable;
      num_reachable = rio_buf_len(rio_reachable_syms);
    }
  }
}

char const ((*(rio_static_package_search_paths[rio_MAX_SEARCH_PATHS])));
char const ((*(*rio_package_search_paths))) = rio_static_package_search_paths;
int rio_num_package_search_paths;
void rio_add_package_search_path(char const ((*path))) {
  if (rio_flag_verbose) {
    printf("Adding package search path %s\n", path);
  }
  rio_package_search_paths[(rio_num_package_search_paths)++] = rio_str_intern(path);
}

void rio_add_package_search_path_range(char const ((*start)), char const ((*end))) {
  char (path[MAX_PATH]) = {0};
  size_t len = rio_clamp_max((end) - (start), (MAX_PATH) - (1));
  memcpy(path, start, len);
  path[len] = 0;
  rio_add_package_search_path(path);
}

void rio_init_package_search_paths(void) {
  char (*riohome_var) = getenv("RIOHOME");
  if (!(riohome_var)) {
    printf("error: Set the environment variable RIOHOME to the Rio home directory (where system_packages is located)\n");
    exit(1);
  }
  char (path[MAX_PATH]) = {0};
  rio_path_copy(path, riohome_var);
  rio_path_join(path, "system_packages");
  rio_add_package_search_path(path);
  rio_add_package_search_path(".");
  char (*riopath_var) = getenv("RIOPATH");
  if (riopath_var) {
    char (*start) = riopath_var;
    for (char (*ptr) = riopath_var; *(ptr); (ptr)++) {
      if ((*(ptr)) == (';')) {
        rio_add_package_search_path_range(start, ptr);
        start = (ptr) + (1);
      }
    }
    if (*(start)) {
      rio_add_package_search_path(start);
    }
  }
}

void rio_init_compiler(void) {
  rio_init_target();
  rio_init_package_search_paths();
  rio_init_keywords();
  rio_init_builtin_types();
  rio_map_put(&(rio_decl_note_names), rio_declare_note_name, (void *)(1));
}

void rio_parse_env_vars(void) {
  char (*rioos_var) = getenv("RIOOS");
  if (rioos_var) {
    rio_Os os = rio_get_os(rioos_var);
    if ((os) == (-(1))) {
      printf("Unknown target operating system in RIOOS environment variable: %s\n", rioos_var);
    } else {
      rio_target_os = os;
    }
  }
  char (*rioarch_var) = getenv("RIOARCH");
  if (rioarch_var) {
    rio_Arch arch = rio_get_arch(rioarch_var);
    if ((arch) == (-(1))) {
      printf("Unknown target architecture in RIOARCH environment variable: %s\n", rioarch_var);
    } else {
      rio_target_arch = arch;
    }
  }
}

int rio_rio_main(int argc, char const ((*(*argv))), void (*gen_all)(void), char const ((*extension))) {
  rio_parse_env_vars();
  char const ((*output_name)) = {0};
  bool flag_check = false;
  rio_add_flag_str("o", &(output_name), "file", "Output file (default: out_<main-package>.c)");
  rio_add_flag_enum("os", (int *)(&(rio_target_os)), "Target operating system", rio_os_names, (rio_Os_Num));
  rio_add_flag_enum("arch", (int *)(&(rio_target_arch)), "Target machine architecture", rio_arch_names, (rio_Arch_Num));
  rio_add_flag_bool("check", &(flag_check), "Semantic checking with no code generation");
  rio_add_flag_bool("lazy", &(rio_flag_lazy), "Only compile what\'s reachable from the main package");
  rio_add_flag_bool("nosourcemap", &(rio_flag_nosourcemap), "Don\'t generate any source map information");
  rio_add_flag_bool("notypeinfo", &(rio_flag_notypeinfo), "Don\'t generate any typeinfo tables");
  rio_add_flag_bool("fullgen", &(rio_flag_fullgen), "Force full code generation even for non-reachable symbols");
  rio_add_flag_bool("verbose", &(rio_flag_verbose), "Extra diagnostic information");
  char const ((*program_name)) = rio_parse_flags(&(argc), &(argv));
  if ((argc) != (1)) {
    printf("Usage: %s [flags] <main-package>\n", program_name);
    rio_print_flags_usage();
    return 1;
  }
  char const ((*package_name)) = argv[0];
  if (rio_flag_verbose) {
    printf("Target operating system: %s\n", rio_os_names[rio_target_os]);
    printf("Target architecture: %s\n", rio_arch_names[rio_target_arch]);
  }
  rio_init_compiler();
  rio_builtin_package = rio_import_package("builtin");
  if (!(rio_builtin_package)) {
    printf("error: Failed to compile package \'builtin\'.\n");
    return 1;
  }
  rio_builtin_package->external_name = rio_str_intern("");
  rio_Package (*main_package) = rio_import_package(package_name);
  if (!(main_package)) {
    printf("error: Failed to compile package \'%s\'\n", package_name);
    return 1;
  }
  char const ((*main_name)) = rio_str_intern("main");
  rio_Sym (*main_sym) = rio_get_package_sym(main_package, main_name);
  if (!(main_sym)) {
    printf("error: No \'main\' entry point defined in package \'%s\'\n", package_name);
    return 1;
  }
  main_sym->external_name = main_name;
  rio_reachable_phase = (rio_ReachablePhase_Natural);
  rio_resolve_sym(main_sym);
  for (size_t i = 0; (i) < (rio_buf_len(rio_package_list)); (i)++) {
    if (rio_package_list[i]->always_reachable) {
      rio_resolve_package_syms(rio_package_list[i]);
    }
  }
  rio_finalize_reachable_syms();
  if (rio_flag_verbose) {
    printf("Reached %d symbols in %d packages from %s/main\n", (int)(rio_buf_len(rio_reachable_syms)), (int)(rio_buf_len(rio_package_list)), package_name);
  }
  if (!(rio_flag_lazy)) {
    rio_reachable_phase = (rio_ReachablePhase_Forced);
    for (size_t i = 0; (i) < (rio_buf_len(rio_package_list)); (i)++) {
      rio_resolve_package_syms(rio_package_list[i]);
    }
    rio_finalize_reachable_syms();
  }
  printf("Processed %d symbols in %d packages\n", (int)(rio_buf_len(rio_reachable_syms)), (int)(rio_buf_len(rio_package_list)));
  if (!(flag_check)) {
    char (c_path[MAX_PATH]) = {0};
    if (output_name) {
      rio_path_copy(c_path, output_name);
    } else {
      snprintf(c_path, sizeof(c_path), "out_%s.%s", package_name, extension);
    }
    gen_all();
    char (*c_code) = rio_gen_buf;
    rio_gen_buf = NULL;
    if (!(rio_write_file(c_path, c_code, rio_buf_len(c_code)))) {
      printf("error: Failed to write file: %s\n", c_path);
      return 1;
    }
    printf("Generated %s\n", c_path);
  }
  return 0;
}

char const ((*(rio_os_names[(rio_Os_Num)]))) = {[(rio_Os_Win32)] = "win32", [(rio_Os_Linux)] = "linux", [(rio_Os_OsX)] = "osx"};
char const ((*(rio_arch_names[(rio_Arch_Num)]))) = {[(rio_Arch_X64)] = "x64", [(rio_Arch_X86)] = "x86"};
rio_Os rio_target_os;
rio_Arch rio_target_arch;
rio_Os rio_get_os(char const ((*name))) {
  for (int i = 0; (i) < ((rio_Os_Num)); (i)++) {
    if ((strcmp(rio_os_names[i], name)) == (0)) {
      return i;
    }
  }
  return -(1);
}

rio_Arch rio_get_arch(char const ((*name))) {
  for (int i = 0; (i) < ((rio_Arch_Num)); (i)++) {
    if ((strcmp(rio_arch_names[i], name)) == (0)) {
      return i;
    }
  }
  return -(1);
}

void rio_init_default_type_metrics(rio_TypeMetrics (metrics[(rio_CompilerTypeKind_Num)])) {
  metrics[(rio_CompilerTypeKind_Ref)] = metrics[(rio_CompilerTypeKind_Ptr)];
  metrics[(rio_CompilerTypeKind_Bool)] = (rio_TypeMetrics){.size = 1, .align = 1};
  metrics[(rio_CompilerTypeKind_Char)] = (rio_TypeMetrics){.size = 1, .align = 1, .max = 0x7f, .sign = true};
  metrics[(rio_CompilerTypeKind_SChar)] = (rio_TypeMetrics){.size = 1, .align = 1, .max = 0x7f, .sign = true};
  metrics[(rio_CompilerTypeKind_UChar)] = (rio_TypeMetrics){.size = 1, .align = 1, .max = 0xff};
  metrics[(rio_CompilerTypeKind_Short)] = (rio_TypeMetrics){.size = 2, .align = 2, .max = 0x7fff, .sign = true};
  metrics[(rio_CompilerTypeKind_UShort)] = (rio_TypeMetrics){.size = 2, .align = 2, .max = 0xffff};
  metrics[(rio_CompilerTypeKind_Int)] = (rio_TypeMetrics){.size = 4, .align = 4, .max = 0x7fffffff, .sign = true};
  metrics[(rio_CompilerTypeKind_UInt)] = (rio_TypeMetrics){.size = 4, .align = 4, .max = 0xffffffff};
  metrics[(rio_CompilerTypeKind_LLong)] = (rio_TypeMetrics){.size = 8, .align = 8, .max = 0x7fffffffffffffff, .sign = true};
  metrics[(rio_CompilerTypeKind_ULLong)] = (rio_TypeMetrics){.size = 8, .align = 8, .max = 0xffffffffffffffff};
  metrics[(rio_CompilerTypeKind_Float)] = (rio_TypeMetrics){.size = 4, .align = 4};
  metrics[(rio_CompilerTypeKind_Double)] = (rio_TypeMetrics){.size = 8, .align = 8};
}

rio_TypeMetrics (rio_win32_x86_metrics[(rio_CompilerTypeKind_Num)]) = {[(rio_CompilerTypeKind_Ptr)] = {.size = 4, .align = 4}, [(rio_CompilerTypeKind_Long)] = {.size = 4, .align = 4, .max = 0x7fffffff, .sign = true}, [(rio_CompilerTypeKind_ULong)] = {.size = 4, .align = 4, .max = 0x7fffffff, .sign = true}};
rio_TypeMetrics (rio_win32_x64_metrics[(rio_CompilerTypeKind_Num)]) = {[(rio_CompilerTypeKind_Ptr)] = {.size = 8, .align = 8}, [(rio_CompilerTypeKind_Long)] = {.size = 4, .align = 4, .max = 0x7fffffff, .sign = true}, [(rio_CompilerTypeKind_ULong)] = {.size = 4, .align = 4, .max = 0x7fffffff, .sign = true}};
rio_TypeMetrics (rio_ilp32_metrics[(rio_CompilerTypeKind_Num)]) = {[(rio_CompilerTypeKind_Ptr)] = {.size = 4, .align = 4}, [(rio_CompilerTypeKind_Long)] = {.size = 4, .align = 4, .max = 0x7fffffff, .sign = true}, [(rio_CompilerTypeKind_ULong)] = {.size = 4, .align = 4, .max = 0x7fffffff, .sign = true}};
rio_TypeMetrics (rio_lp64_metrics[(rio_CompilerTypeKind_Num)]) = {[(rio_CompilerTypeKind_Ptr)] = {.size = 8, .align = 8}, [(rio_CompilerTypeKind_Long)] = {.size = 8, .align = 8, .max = 0x7fffffffffffffff, .sign = true}, [(rio_CompilerTypeKind_ULong)] = {.size = 8, .align = 8, .max = 0xffffffffffffffff, .sign = true}};
void rio_init_target(void) {
  rio_type_metrics = NULL;
  switch (rio_target_os) {
  case rio_Os_Win32: {
    switch (rio_target_arch) {
    case rio_Arch_X86: {
      rio_type_metrics = rio_win32_x86_metrics;
      break;
    }
    case rio_Arch_X64: {
      rio_type_metrics = rio_win32_x64_metrics;
      break;
    }
    default: {
      break;
    }
    }
    break;
  }
  case rio_Os_Linux: {
    switch (rio_target_arch) {
    case rio_Arch_X86: {
      rio_type_metrics = rio_ilp32_metrics;
      break;
    }
    case rio_Arch_X64: {
      rio_type_metrics = rio_lp64_metrics;
      break;
    }
    default: {
      break;
    }
    }
    break;
  }
  case rio_Os_OsX: {
    switch (rio_target_arch) {
    case rio_Arch_X64: {
      rio_type_metrics = rio_lp64_metrics;
      break;
    }
    default: {
      break;
    }
    }
    break;
  }
  default: {
    break;
  }
  }
  if (!(rio_type_metrics)) {
    printf("Unsupported os/arch combination: %s/%s\n", rio_os_names[rio_target_os], rio_arch_names[rio_target_arch]);
    exit(1);
  }
  rio_init_default_type_metrics(rio_type_metrics);
  if ((rio_type_metrics[(rio_CompilerTypeKind_Ptr)].size) == (4)) {
    rio_type_uintptr = rio_type_uint;
    rio_type_usize = rio_type_uint;
    rio_type_ssize = rio_type_int;
  } else {
    assert((rio_type_metrics[(rio_CompilerTypeKind_Ptr)].size) == (8));
    rio_type_uintptr = rio_type_ullong;
    rio_type_usize = rio_type_ullong;
    rio_type_ssize = rio_type_llong;
  }
}

bool rio_is_excluded_target_filename(char const ((*name))) {
  char const ((*end)) = (name) + (strlen(name));
  char const ((*ptr1)) = end;
  while (((ptr1) != (name)) && ((ptr1[-(1)]) != ('_'))) {
    (ptr1)--;
  }
  char (str1[MAX_PATH]) = {0};
  if ((ptr1) == (name)) {
    str1[0] = 0;
  } else {
    memcpy(str1, ptr1, (end) - (ptr1));
    str1[(end) - (ptr1)] = 0;
    (ptr1)--;
  }
  char const ((*ptr2)) = ptr1;
  while (((ptr2) != (name)) && ((ptr2[-(1)]) != ('_'))) {
    (ptr2)--;
  }
  char (str2[MAX_PATH]) = {0};
  if ((ptr2) == (name)) {
    str2[0] = 0;
  } else {
    memcpy(str2, ptr2, (ptr1) - (ptr2));
    str2[(ptr1) - (ptr2)] = 0;
  }
  rio_Os os1 = rio_get_os(str1);
  rio_Arch arch1 = rio_get_arch(str1);
  rio_Os os2 = rio_get_os(str2);
  rio_Arch arch2 = rio_get_arch(str2);
  if (((arch1) != (-(1))) && ((os2) != (-(1)))) {
    return ((arch1) != (rio_target_arch)) || ((os2) != (rio_target_os));
  } else if (((arch2) != (-(1))) && ((os1) != (-(1)))) {
    return ((arch2) != (rio_target_arch)) || ((os1) != (rio_target_os));
  } else if ((os1) != (-(1))) {
    return (os1) != (rio_target_os);
  } else if ((arch1) != (-(1))) {
    return (arch1) != (rio_target_arch);
  } else {
    return false;
  }
}

rio_TypeMetrics (*rio_type_metrics);
rio_Type (*rio_type_void) = &((rio_Type){(rio_CompilerTypeKind_Void)});
rio_Type (*rio_type_bool) = &((rio_Type){(rio_CompilerTypeKind_Bool)});
rio_Type (*rio_type_char) = &((rio_Type){(rio_CompilerTypeKind_Char)});
rio_Type (*rio_type_uchar) = &((rio_Type){(rio_CompilerTypeKind_UChar)});
rio_Type (*rio_type_schar) = &((rio_Type){(rio_CompilerTypeKind_SChar)});
rio_Type (*rio_type_short) = &((rio_Type){(rio_CompilerTypeKind_Short)});
rio_Type (*rio_type_ushort) = &((rio_Type){(rio_CompilerTypeKind_UShort)});
rio_Type (*rio_type_int) = &((rio_Type){(rio_CompilerTypeKind_Int)});
rio_Type (*rio_type_uint) = &((rio_Type){(rio_CompilerTypeKind_UInt)});
rio_Type (*rio_type_long) = &((rio_Type){(rio_CompilerTypeKind_Long)});
rio_Type (*rio_type_ulong) = &((rio_Type){(rio_CompilerTypeKind_ULong)});
rio_Type (*rio_type_llong) = &((rio_Type){(rio_CompilerTypeKind_LLong)});
rio_Type (*rio_type_ullong) = &((rio_Type){(rio_CompilerTypeKind_ULLong)});
rio_Type (*rio_type_float) = &((rio_Type){(rio_CompilerTypeKind_Float)});
rio_Type (*rio_type_double) = &((rio_Type){(rio_CompilerTypeKind_Double)});
int rio_next_typeid = 1;
rio_Type (*rio_type_uintptr);
rio_Type (*rio_type_usize);
rio_Type (*rio_type_ssize);
rio_Map rio_typeid_map;
rio_Type (*rio_get_type_from_typeid(int typeid)) {
  if ((typeid) == (0)) {
    return NULL;
  }
  return rio_map_get(&(rio_typeid_map), (void *)((uintptr_t)(typeid)));
}

void rio_register_typeid(rio_Type (*type)) {
  rio_map_put(&(rio_typeid_map), (void *)((uintptr_t)(type->typeid)), type);
}

rio_Type (*rio_type_alloc(TypeKind kind)) {
  rio_Type (*type) = rio_xcalloc(1, sizeof(rio_Type));
  type->kind = kind;
  type->typeid = (rio_next_typeid)++;
  rio_register_typeid(type);
  return type;
}

bool rio_is_generic_type(rio_Type (*type)) {
  return ((type->sym) && (type->sym->decl)) && (type->sym->decl->is_generic);
}

bool rio_is_ptr_type(rio_Type (*type)) {
  return ((type->kind) == ((rio_CompilerTypeKind_Ptr))) || ((type->kind) == ((rio_CompilerTypeKind_Ref)));
}

bool rio_is_ptr_star_type(rio_Type (*type)) {
  return (type->kind) == ((rio_CompilerTypeKind_Ptr));
}

bool rio_is_ref_type(rio_Type (*type)) {
  return (type->kind) == ((rio_CompilerTypeKind_Ref));
}

bool rio_is_func_type(rio_Type (*type)) {
  return (type->kind) == ((rio_CompilerTypeKind_Func));
}

bool rio_is_ptr_like_type(rio_Type (*type)) {
  return (rio_is_ptr_type(type)) || ((type->kind) == ((rio_CompilerTypeKind_Func)));
}

bool rio_is_const_type(rio_Type (*type)) {
  return (type->kind) == ((rio_CompilerTypeKind_Const));
}

bool rio_is_array_type(rio_Type (*type)) {
  return (type->kind) == ((rio_CompilerTypeKind_Array));
}

bool rio_is_incomplete_array_type(rio_Type (*type)) {
  return (rio_is_array_type(type)) && ((type->num_elems) == (0));
}

bool rio_is_integer_type(rio_Type (*type)) {
  return (((rio_CompilerTypeKind_Bool)) <= (type->kind)) && ((type->kind) <= ((rio_CompilerTypeKind_Enum)));
}

bool rio_is_floating_type(rio_Type (*type)) {
  return (((rio_CompilerTypeKind_Float)) <= (type->kind)) && ((type->kind) <= ((rio_CompilerTypeKind_Double)));
}

bool rio_is_arithmetic_type(rio_Type (*type)) {
  return (((rio_CompilerTypeKind_Bool)) <= (type->kind)) && ((type->kind) <= ((rio_CompilerTypeKind_Double)));
}

bool rio_is_scalar_type(rio_Type (*type)) {
  return (((rio_CompilerTypeKind_Bool)) <= (type->kind)) && ((type->kind) <= ((rio_CompilerTypeKind_Func)));
}

bool rio_is_aggregate_type(rio_Type (*type)) {
  return ((type->kind) == ((rio_CompilerTypeKind_Struct))) || ((type->kind) == ((rio_CompilerTypeKind_Union)));
}

bool rio_is_signed_type(rio_Type (*type)) {
  switch (type->kind) {
  case rio_CompilerTypeKind_Char: {
    return rio_type_metrics[(rio_CompilerTypeKind_Char)].sign;
    break;
  }
  case rio_CompilerTypeKind_SChar:
  case rio_CompilerTypeKind_Short:
  case rio_CompilerTypeKind_Int:
  case rio_CompilerTypeKind_Long:
  case rio_CompilerTypeKind_LLong: {
    return true;
    break;
  }
  default: {
    return false;
    break;
  }
  }
}

char const ((*(rio_type_names[(rio_CompilerTypeKind_Num)]))) = {[(rio_CompilerTypeKind_Void)] = "void", [(rio_CompilerTypeKind_Bool)] = "bool", [(rio_CompilerTypeKind_Char)] = "char", [(rio_CompilerTypeKind_SChar)] = "schar", [(rio_CompilerTypeKind_UChar)] = "uchar", [(rio_CompilerTypeKind_Short)] = "short", [(rio_CompilerTypeKind_UShort)] = "ushort", [(rio_CompilerTypeKind_Int)] = "int", [(rio_CompilerTypeKind_UInt)] = "uint", [(rio_CompilerTypeKind_Long)] = "long", [(rio_CompilerTypeKind_ULong)] = "ulong", [(rio_CompilerTypeKind_LLong)] = "llong", [(rio_CompilerTypeKind_ULLong)] = "ullong", [(rio_CompilerTypeKind_Float)] = "float", [(rio_CompilerTypeKind_Double)] = "double"};
int (rio_type_ranks[(rio_CompilerTypeKind_Num)]) = {[(rio_CompilerTypeKind_Bool)] = 1, [(rio_CompilerTypeKind_Char)] = 2, [(rio_CompilerTypeKind_SChar)] = 2, [(rio_CompilerTypeKind_UChar)] = 2, [(rio_CompilerTypeKind_Short)] = 3, [(rio_CompilerTypeKind_UShort)] = 3, [(rio_CompilerTypeKind_Int)] = 4, [(rio_CompilerTypeKind_UInt)] = 4, [(rio_CompilerTypeKind_Long)] = 5, [(rio_CompilerTypeKind_ULong)] = 5, [(rio_CompilerTypeKind_LLong)] = 6, [(rio_CompilerTypeKind_ULLong)] = 6};
int rio_type_rank(rio_Type (*type)) {
  int rank = rio_type_ranks[type->kind];
  assert((rank) != (0));
  return rank;
}

rio_Type (*rio_unsigned_type(rio_Type (*type))) {
  switch (type->kind) {
  case rio_CompilerTypeKind_Bool: {
    return rio_type_bool;
    break;
  }
  case rio_CompilerTypeKind_Char:
  case rio_CompilerTypeKind_SChar:
  case rio_CompilerTypeKind_UChar: {
    return rio_type_uchar;
    break;
  }
  case rio_CompilerTypeKind_Short:
  case rio_CompilerTypeKind_UShort: {
    return rio_type_ushort;
    break;
  }
  case rio_CompilerTypeKind_Int:
  case rio_CompilerTypeKind_UInt: {
    return rio_type_uint;
    break;
  }
  case rio_CompilerTypeKind_Long:
  case rio_CompilerTypeKind_ULong: {
    return rio_type_ulong;
    break;
  }
  case rio_CompilerTypeKind_LLong:
  case rio_CompilerTypeKind_ULLong: {
    return rio_type_ullong;
    break;
  }
  default: {
    assert(0);
    return NULL;
    break;
  }
  }
}

size_t rio_type_sizeof(rio_Type (*type)) {
  assert((type->kind) > ((rio_CompilerTypeKind_Completing)));
  return type->size;
}

size_t rio_type_alignof(rio_Type (*type)) {
  assert((type->kind) > ((rio_CompilerTypeKind_Completing)));
  return type->align;
}

rio_Map rio_cached_ptr_types;
rio_Map rio_cached_ref_types;
rio_Type (*rio_type_ptr_any(rio_CompilerTypeKind kind, rio_Type (*base))) {
  rio_Map (*cache) = {0};
  switch (kind) {
  case rio_CompilerTypeKind_Ptr: {
    cache = &(rio_cached_ptr_types);
    break;
  }
  case rio_CompilerTypeKind_Ref: {
    cache = &(rio_cached_ref_types);
    break;
  }
  default:
    assert("@complete switch failed to handle case" && 0);
    break;
  }
  rio_Type (*type) = rio_map_get(cache, base);
  if (!(type)) {
    type = rio_type_alloc(kind);
    type->size = rio_type_metrics[(rio_CompilerTypeKind_Ptr)].size;
    type->align = rio_type_metrics[(rio_CompilerTypeKind_Ptr)].align;
    type->base = base;
    rio_map_put(cache, base, type);
  }
  return type;
}

rio_Type (*rio_type_ptr(rio_Type (*base))) {
  return rio_type_ptr_any((rio_CompilerTypeKind_Ptr), base);
}

rio_Type (*rio_type_ref(rio_Type (*base))) {
  return rio_type_ptr_any((rio_CompilerTypeKind_Ref), base);
}

rio_Map rio_cached_const_types;
rio_Type (*rio_type_const(rio_Type (*base))) {
  if ((base->kind) == ((rio_CompilerTypeKind_Const))) {
    return base;
  }
  rio_Type (*type) = rio_map_get(&(rio_cached_const_types), base);
  if (!(type)) {
    rio_complete_type(base);
    type = rio_type_alloc((rio_CompilerTypeKind_Const));
    type->nonmodifiable = true;
    type->size = base->size;
    type->align = base->align;
    type->base = base;
    rio_map_put(&(rio_cached_const_types), base, type);
  }
  return type;
}

rio_Type (*rio_deref_type(rio_Type (*type))) {
  type = rio_unqualify_type(type);
  return rio_unqualify_type((rio_is_ref_type(type) ? type->base : type));
}

rio_Type (*rio_unqualify_type(rio_Type (*type))) {
  if ((type->kind) == ((rio_CompilerTypeKind_Const))) {
    return type->base;
  } else {
    return type;
  }
}

rio_Map rio_cached_array_types;
rio_Type (*rio_type_array(rio_Type (*base), size_t num_elems)) {
  ullong hash = rio_hash_mix(rio_hash_ptr(base), rio_hash_uint64(num_elems));
  uint64_t key = (hash ? hash : 1);
  rio_CachedArrayType (*cached) = rio_map_get_from_uint64(&(rio_cached_array_types), key);
  for (rio_CachedArrayType (*it) = cached; it; it = it->next) {
    rio_Type (*type) = it->type;
    if (((type->base) == (base)) && ((type->num_elems) == (num_elems))) {
      return type;
    }
  }
  rio_complete_type(base);
  rio_Type (*type) = rio_type_alloc((rio_CompilerTypeKind_Array));
  type->nonmodifiable = base->nonmodifiable;
  type->size = (num_elems) * (rio_type_sizeof(base));
  type->align = rio_type_alignof(base);
  type->base = base;
  type->num_elems = num_elems;
  rio_CachedArrayType (*new_cached) = rio_xmalloc(sizeof(rio_CachedArrayType));
  new_cached->type = type;
  new_cached->next = cached;
  rio_map_put_from_uint64(&(rio_cached_array_types), key, new_cached);
  return type;
}

rio_Map rio_cached_func_types;
rio_Type (*rio_type_func(rio_Type (*(*params)), size_t num_params, rio_Type (*ret), bool has_varargs)) {
  ullong params_size = (num_params) * (sizeof(*(params)));
  ullong hash = rio_hash_mix(rio_hash_bytes(params, params_size), rio_hash_ptr(ret));
  uint64_t key = (hash ? hash : 1);
  rio_CachedFuncType (*cached) = rio_map_get_from_uint64(&(rio_cached_func_types), key);
  for (rio_CachedFuncType (*it) = cached; it; it = it->next) {
    rio_Type (*type) = it->type;
    if ((((type->function.params.length) == (num_params)) && ((type->function.ret) == (ret))) && ((type->function.has_varargs) == (has_varargs))) {
      if ((memcmp(type->function.params.items, params, params_size)) == (0)) {
        return type;
      }
    }
  }
  rio_Type (*type) = rio_type_alloc((rio_CompilerTypeKind_Func));
  type->size = rio_type_metrics[(rio_CompilerTypeKind_Ptr)].size;
  type->align = rio_type_metrics[(rio_CompilerTypeKind_Ptr)].align;
  type->function.params = (rio_Slice_ref_Type){rio_memdup(params, params_size), num_params};
  type->function.has_varargs = has_varargs;
  type->function.ret = ret;
  rio_CachedFuncType (*new_cached) = rio_xmalloc(sizeof(rio_CachedFuncType));
  new_cached->type = type;
  new_cached->next = cached;
  rio_map_put_from_uint64(&(rio_cached_func_types), key, new_cached);
  return type;
}

bool rio_has_duplicate_fields(rio_Type (*type)) {
  {
    rio_Slice_TypeField items__ = type->aggregate.fields;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_TypeField (*field_i) = &items__.items[i__];
      size_t i = i__;
      for (ullong j = (i) + (1); (j) < (type->aggregate.fields.length); (j)++) {
        if ((field_i->name) == (type->aggregate.fields.items[j].name)) {
          return true;
        }
      }
    }
  }
  return false;
}

void rio_add_type_fields(rio_TypeField (*(*fields)), rio_Type (*type), size_t offset) {
  assert(((type->kind) == ((rio_CompilerTypeKind_Struct))) || ((type->kind) == ((rio_CompilerTypeKind_Union))));
  {
    rio_Slice_TypeField items__ = type->aggregate.fields;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_TypeField (*field) = &items__.items[i__];
      rio_TypeField new_field = (rio_TypeField){field->name, field->type, (field->offset) + (offset)};
      rio_buf_push((void (**))(fields), &(new_field), sizeof(new_field));
    }
  }
}

void rio_type_complete_struct(rio_Type (*type), rio_TypeField (*fields), size_t num_fields) {
  assert((type->kind) == ((rio_CompilerTypeKind_Completing)));
  type->kind = (rio_CompilerTypeKind_Struct);
  type->size = 0;
  type->align = 0;
  bool nonmodifiable = false;
  rio_TypeField (*new_fields) = {0};
  for (rio_TypeField (*it) = fields; (it) != ((fields) + (num_fields)); (it)++) {
    ullong align = rio_type_alignof(it->type);
    assert((!(align)) || (rio_is_pow2(align)));
    if (it->name) {
      it->offset = type->size;
      rio_buf_push((void (**))(&(new_fields)), it, sizeof(*(it)));
    } else {
      rio_add_type_fields(&(new_fields), it->type, type->size);
    }
    type->align = rio_max(type->align, rio_type_alignof(it->type));
    type->size = (rio_type_sizeof(it->type)) + (rio_align_up(type->size, rio_type_alignof(it->type)));
    nonmodifiable = (it->type->nonmodifiable) || (nonmodifiable);
  }
  type->size = rio_align_up(type->size, type->align);
  if (rio_is_generic_type(type)) {
    type->size = 0;
  }
  type->aggregate.fields = (rio_Slice_TypeField){new_fields, rio_buf_len(new_fields)};
  type->nonmodifiable = nonmodifiable;
}

void rio_type_complete_union(rio_Type (*type), rio_TypeField (*fields), size_t num_fields) {
  assert((type->kind) == ((rio_CompilerTypeKind_Completing)));
  type->kind = (rio_CompilerTypeKind_Union);
  type->size = 0;
  type->align = 0;
  bool nonmodifiable = false;
  rio_TypeField (*new_fields) = {0};
  for (rio_TypeField (*it) = fields; (it) != ((fields) + (num_fields)); (it)++) {
    assert((it->type->kind) > ((rio_CompilerTypeKind_Completing)));
    if (it->name) {
      if (*(it->name)) {
        it->offset = type->size;
        rio_buf_push((void (**))(&(new_fields)), it, sizeof(*(it)));
      }
    } else {
      rio_add_type_fields(&(new_fields), it->type, 0);
    }
    type->size = rio_max(type->size, rio_type_sizeof(it->type));
    type->align = rio_max(type->align, rio_type_alignof(it->type));
    nonmodifiable = (it->type->nonmodifiable) || (nonmodifiable);
  }
  type->size = rio_align_up(type->size, type->align);
  type->aggregate.fields = (rio_Slice_TypeField){new_fields, rio_buf_len(new_fields)};
  type->nonmodifiable = nonmodifiable;
}

rio_Type (*rio_type_incomplete(rio_Sym (*sym))) {
  rio_Type (*type) = rio_type_alloc((rio_CompilerTypeKind_Incomplete));
  type->sym = sym;
  return type;
}

rio_Type (*rio_type_enum(rio_Sym (*sym), rio_Type (*base))) {
  rio_Type (*type) = rio_type_alloc((rio_CompilerTypeKind_Enum));
  type->sym = sym;
  type->base = base;
  type->size = rio_type_int->size;
  type->align = rio_type_int->align;
  return type;
}

void rio_init_builtin_type(rio_Type (*type)) {
  type->typeid = (rio_next_typeid)++;
  rio_register_typeid(type);
  type->size = rio_type_metrics[type->kind].size;
  type->align = rio_type_metrics[type->kind].align;
}

void rio_init_builtin_types(void) {
  rio_init_builtin_type(rio_type_void);
  rio_init_builtin_type(rio_type_bool);
  rio_init_builtin_type(rio_type_char);
  rio_init_builtin_type(rio_type_uchar);
  rio_init_builtin_type(rio_type_schar);
  rio_init_builtin_type(rio_type_short);
  rio_init_builtin_type(rio_type_ushort);
  rio_init_builtin_type(rio_type_int);
  rio_init_builtin_type(rio_type_uint);
  rio_init_builtin_type(rio_type_long);
  rio_init_builtin_type(rio_type_ulong);
  rio_init_builtin_type(rio_type_llong);
  rio_init_builtin_type(rio_type_ullong);
  rio_init_builtin_type(rio_type_float);
  rio_init_builtin_type(rio_type_double);
}

int rio_aggregate_item_field_index(rio_Type (*type), char const ((*name))) {
  assert(rio_is_aggregate_type(type));
  {
    rio_Slice_TypeField items__ = type->aggregate.fields;
    for (size_t i__ = 0; i__ < items__.length; ++i__) {
      rio_TypeField (*field) = &items__.items[i__];
      size_t i = i__;
      if ((field->name) == (name)) {
        return (int)(i);
      }
    }
  }
  return -(1);
}

rio_Type (*rio_aggregate_item_field_type_from_index(rio_Type (*type), int index)) {
  assert(rio_is_aggregate_type(type));
  assert(((0) <= (index)) && ((index) < ((int)(type->aggregate.fields.length))));
  return type->aggregate.fields.items[index].type;
}

rio_Type (*rio_aggregate_item_field_type_from_name(rio_Type (*type), char const ((*name)))) {
  assert(rio_is_aggregate_type(type));
  int index = rio_aggregate_item_field_index(type, name);
  if ((index) < (0)) {
    return NULL;
  }
  return rio_aggregate_item_field_type_from_index(type, index);
}

rio_Slice_Decl rio_ast_dup_slice_Decl(rio_Slice_Decl const (src)) {
  void (*items) = rio_ast_dup_sized(src.items, (src.length) * (sizeof(*(src.items))));
  return (rio_Slice_Decl){items, src.length};
}

rio_Slice_NoteArg rio_ast_dup_slice_NoteArg(rio_Slice_NoteArg const (src)) {
  void (*items) = rio_ast_dup_sized(src.items, (src.length) * (sizeof(*(src.items))));
  return (rio_Slice_NoteArg){items, src.length};
}

rio_Slice_Note rio_ast_dup_slice_Note(rio_Slice_Note const (src)) {
  void (*items) = rio_ast_dup_sized(src.items, (src.length) * (sizeof(*(src.items))));
  return (rio_Slice_Note){items, src.length};
}

rio_Slice_ref_Stmt rio_ast_dup_slice_ref_Stmt(rio_Slice_ref_Stmt const (src)) {
  void (*items) = rio_ast_dup_sized(src.items, (src.length) * (sizeof(*(src.items))));
  return (rio_Slice_ref_Stmt){items, src.length};
}

rio_Slice_TypespecName rio_ast_dup_slice_TypespecName(rio_Slice_TypespecName const (src)) {
  void (*items) = rio_ast_dup_sized(src.items, (src.length) * (sizeof(*(src.items))));
  return (rio_Slice_TypespecName){items, src.length};
}

rio_Slice_ref_Typespec rio_ast_dup_slice_ref_Typespec(rio_Slice_ref_Typespec const (src)) {
  void (*items) = rio_ast_dup_sized(src.items, (src.length) * (sizeof(*(src.items))));
  return (rio_Slice_ref_Typespec){items, src.length};
}

rio_Slice_ref_Decl rio_ast_dup_slice_ref_Decl(rio_Slice_ref_Decl const (src)) {
  void (*items) = rio_ast_dup_sized(src.items, (src.length) * (sizeof(*(src.items))));
  return (rio_Slice_ref_Decl){items, src.length};
}

rio_Slice_EnumItem rio_ast_dup_slice_EnumItem(rio_Slice_EnumItem const (src)) {
  void (*items) = rio_ast_dup_sized(src.items, (src.length) * (sizeof(*(src.items))));
  return (rio_Slice_EnumItem){items, src.length};
}

rio_Slice_Member rio_ast_dup_slice_Member(rio_Slice_Member const (src)) {
  void (*items) = rio_ast_dup_sized(src.items, (src.length) * (sizeof(*(src.items))));
  return (rio_Slice_Member){items, src.length};
}

rio_Slice_ptr_const_char rio_ast_dup_slice_ptr_const_char(rio_Slice_ptr_const_char const (src)) {
  void (*items) = rio_ast_dup_sized(src.items, (src.length) * (sizeof(*(src.items))));
  return (rio_Slice_ptr_const_char){items, src.length};
}

rio_Slice_ImportItem rio_ast_dup_slice_ImportItem(rio_Slice_ImportItem const (src)) {
  void (*items) = rio_ast_dup_sized(src.items, (src.length) * (sizeof(*(src.items))));
  return (rio_Slice_ImportItem){items, src.length};
}

rio_Slice_CompoundField rio_ast_dup_slice_CompoundField(rio_Slice_CompoundField const (src)) {
  void (*items) = rio_ast_dup_sized(src.items, (src.length) * (sizeof(*(src.items))));
  return (rio_Slice_CompoundField){items, src.length};
}

rio_Slice_ElseIf rio_ast_dup_slice_ElseIf(rio_Slice_ElseIf const (src)) {
  void (*items) = rio_ast_dup_sized(src.items, (src.length) * (sizeof(*(src.items))));
  return (rio_Slice_ElseIf){items, src.length};
}

rio_Slice_SwitchCase rio_ast_dup_slice_SwitchCase(rio_Slice_SwitchCase const (src)) {
  void (*items) = rio_ast_dup_sized(src.items, (src.length) * (sizeof(*(src.items))));
  return (rio_Slice_SwitchCase){items, src.length};
}

rio_Aggregate (*rio_ast_dup_Aggregate(rio_Aggregate const ((*src)))) {
  return rio_ast_dup_sized(src, sizeof(*(src)));
}

rio_Expr (*rio_ast_dup_Expr(rio_Expr const ((*src)))) {
  return rio_ast_dup_sized(src, sizeof(*(src)));
}

rio_Stmt (*rio_ast_dup_Stmt(rio_Stmt const ((*src)))) {
  return rio_ast_dup_sized(src, sizeof(*(src)));
}

rio_Slice_SwitchCasePattern rio_ast_dup_slice_SwitchCasePattern(rio_Slice_SwitchCasePattern const (src)) {
  void (*items) = rio_ast_dup_sized(src.items, (src.length) * (sizeof(*(src.items))));
  return (rio_Slice_SwitchCasePattern){items, src.length};
}

rio_Slice_TypeArg rio_ast_dup_slice_TypeArg(rio_Slice_TypeArg const (src)) {
  void (*items) = rio_ast_dup_sized(src.items, (src.length) * (sizeof(*(src.items))));
  return (rio_Slice_TypeArg){items, src.length};
}

rio_Typespec (*rio_ast_dup_Typespec(rio_Typespec const ((*src)))) {
  return rio_ast_dup_sized(src, sizeof(*(src)));
}

void rio_buf_push2_ptr_const_char(char const ((*(*(*buf)))), char const ((*(*item)))) {
  ullong item_size = sizeof(*(item));
  rio_buf_fit((void (**))(buf), (1) + (rio_buf_len(*(buf))), item_size);
  memcpy(((char *)(*(buf))) + ((item_size) * ((rio_buf__hdr(*(buf))->len)++)), item, item_size);
}

void rio_ast_unshift_CompoundField(rio_Slice_CompoundField (*nodes), rio_CompoundField node) {
  ullong node_size = sizeof(node);
  void (*items) = rio_ast_alloc((((nodes->length) + (1))) * (node_size));
  memmove(((char *)(items)) + (node_size), nodes->items, (node_size) * (nodes->length));
  memcpy(items, &(node), node_size);
  nodes->items = items;
  ++(nodes->length);
}

// Foreign source files

static void va_arg_ptr(va_list *args, Any any) {
  switch (typeid_kind(any.type)) {
  case TypeKind_Bool:
    *(bool *)any.ptr = (bool)va_arg(*args, int);
    break;
  case TypeKind_Char:
    *(char *)any.ptr = (char)va_arg(*args, int);
    break;
  case TypeKind_UChar:
    *(uchar *)any.ptr = (uchar)va_arg(*args, int);
    break;
  case TypeKind_SChar:
    *(schar *)any.ptr = (schar)va_arg(*args, int);
    break;
  case TypeKind_Short:
    *(short *)any.ptr = (short)va_arg(*args, int);
    break;
  case TypeKind_UShort:
    *(ushort *)any.ptr = (ushort)va_arg(*args, int);
    break;
  case TypeKind_Int:
    *(int *)any.ptr = va_arg(*args, int);
    break;
  case TypeKind_UInt:
    *(uint *)any.ptr = va_arg(*args, uint);
    break;
  case TypeKind_Long:
    *(long *)any.ptr = va_arg(*args, long);
    break;
  case TypeKind_ULong:
    *(ulong *)any.ptr = va_arg(*args, ulong);
    break;
  case TypeKind_LLong:
    *(llong *)any.ptr = va_arg(*args, llong);
    break;
  case TypeKind_ULLong:
    *(ullong *)any.ptr = va_arg(*args, ullong);
    break;
  case TypeKind_Float:
    *(float *)any.ptr = (float)va_arg(*args, double);
    break;
  case TypeKind_Double:
    *(double *)any.ptr = va_arg(*args, double);
    break;
  case TypeKind_Func:
  case TypeKind_Ptr:
  case TypeKind_Ref:
    *(void **)any.ptr = va_arg(*args, void *);
    break;
  default:
    assert(0 && "argument type not supported");
    break;
  }
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif
