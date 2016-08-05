#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.IO.FileStream
struct FileStream_t2141505868;
// System.IO.StreamReader
struct StreamReader_t2549717843;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.IO.StreamWriter
struct StreamWriter_t2705123075;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IO_FileMode3233790127.h"
#include "mscorlib_System_IO_StreamReader2549717843.h"
#include "mscorlib_System_IO_StreamWriter2705123075.h"

// System.Void System.IO.File::Delete(System.String)
extern "C"  void File_Delete_m760984832 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C"  bool File_Exists_m1326262381 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
extern "C"  FileStream_t2141505868 * File_Open_m1918038371 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C"  FileStream_t2141505868 * File_OpenRead_m3104031109 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern "C"  StreamReader_t2549717843 * File_OpenText_m396847893 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.File::ReadAllLines(System.String)
extern "C"  StringU5BU5D_t4054002952* File_ReadAllLines_m173915158 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.File::ReadAllLines(System.IO.StreamReader)
extern "C"  StringU5BU5D_t4054002952* File_ReadAllLines_m3534810368 (Il2CppObject * __this /* static, unused */, StreamReader_t2549717843 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllLines(System.String,System.String[])
extern "C"  void File_WriteAllLines_m2476731860 (Il2CppObject * __this /* static, unused */, String_t* ___path0, StringU5BU5D_t4054002952* ___contents1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllLines(System.IO.StreamWriter,System.String[])
extern "C"  void File_WriteAllLines_m2174077638 (Il2CppObject * __this /* static, unused */, StreamWriter_t2705123075 * ___writer0, StringU5BU5D_t4054002952* ___contents1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
