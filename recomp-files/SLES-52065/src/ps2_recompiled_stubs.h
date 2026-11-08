#pragma once

#include <cstdint>
#include "ps2_runtime.h"
#include "ps2_syscalls.h"

void SetGsCrt_0x1eb220(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void AddIntcHandler_0x1eb300(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void RemoveIntcHandler_0x1eb320(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void AddDmacHandler_0x1eb330(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void RemoveDmacHandler_0x1eb350(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void ps2__EnableIntc_0x1eb360(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void ps2__DisableIntc_0x1eb370(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void ps2__EnableDmac_0x1eb380(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void ps2__DisableDmac_0x1eb390(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void SetAlarm_0x1eb3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void _iEnableIntc_0x1eb3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void _iDisableIntc_0x1eb3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void _iEnableDmac_0x1eb3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void _iDisableDmac_0x1eb3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void iSetAlarm_0x1eb400(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void CreateThread_0x1eb420(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void DeleteThread_0x1eb430(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void ps2__StartThread_0x1eb440(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void ExitDeleteThread_0x1eb460(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void ChangeThreadPriority_0x1eb4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void RotateThreadReadyQueue_0x1eb4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void GetThreadId_0x1eb510(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void ReferThreadStatus_0x1eb520(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void SleepThread_0x1eb540(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void WakeupThread_0x1eb550(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void _iWakeupThread_0x1eb560(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void iCancelWakeupThread_0x1eb580(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void SuspendThread_0x1eb590(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void EndOfHeap_0x1eb600(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void CreateSema_0x1eb620(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void DeleteSema_0x1eb630(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void SignalSema_0x1eb640(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void iSignalSema_0x1eb650(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void WaitSema_0x1eb660(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void PollSema_0x1eb670(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void SetOsdConfigParam_0x1eb6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void GetOsdConfigParam_0x1eb6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void FlushCache_0x1eb8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void sceSifStopDma_0x1eb8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void GsPutIMR_0x1eb960(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void SetVSyncFlag_0x1eb990(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void sceSifDmaStat_0x1eb9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void sceSifSetDma_0x1eb9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void isceSifSetDma_0x1eb9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void sceSifSetDChain_0x1eba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void isceSifSetDChain_0x1eba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void sceSifSetReg_0x1eba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void sceSifGetReg_0x1eba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void Deci2Call_0x1eba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void GetMemorySize_0x1eba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void ps2__InitTLB_0x1eba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
