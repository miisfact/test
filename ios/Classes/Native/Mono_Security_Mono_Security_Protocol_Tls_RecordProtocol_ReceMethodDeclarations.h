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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t602;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t356;
// System.IO.Stream
struct Stream_t604;
// System.Exception
struct Exception_t110;
// System.Threading.WaitHandle
struct WaitHandle_t650;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m2823 (ReceiveRecordAsyncResult_t602 * __this, AsyncCallback_t72 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t356* ___initialBuffer, Stream_t604 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t604 * ReceiveRecordAsyncResult_get_Record_m2824 (ReceiveRecordAsyncResult_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t356* ReceiveRecordAsyncResult_get_ResultingBuffer_m2825 (ReceiveRecordAsyncResult_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t356* ReceiveRecordAsyncResult_get_InitialBuffer_m2826 (ReceiveRecordAsyncResult_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m2827 (ReceiveRecordAsyncResult_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t110 * ReceiveRecordAsyncResult_get_AsyncException_m2828 (ReceiveRecordAsyncResult_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m2829 (ReceiveRecordAsyncResult_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t650 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m2830 (ReceiveRecordAsyncResult_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m2831 (ReceiveRecordAsyncResult_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m2832 (ReceiveRecordAsyncResult_t602 * __this, Exception_t110 * ___ex, ByteU5BU5D_t356* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m2833 (ReceiveRecordAsyncResult_t602 * __this, Exception_t110 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m2834 (ReceiveRecordAsyncResult_t602 * __this, ByteU5BU5D_t356* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
