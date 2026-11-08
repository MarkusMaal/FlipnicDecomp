#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001341b0
// Address: 0x1341b0 - 0x1341c8
void FUN_001341b0_0x1341b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001341b0_0x1341b0");
#endif

    ctx->pc = 0x1341b0u;

    // 0x1341b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1341b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341b4: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1341b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1341b8: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x1341b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1341bc: 0x24460060  addiu       $a2, $v0, 0x60
    ctx->pc = 0x1341bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1341c0: 0x807d49c  j           func_1F5270
    ctx->pc = 0x1341C0u;
    ctx->pc = 0x1341C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341C0u;
    // 0x1341c4: 0x24470070  addiu       $a3, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5270u;
    FUN_001f5270_0x1f5270(rdram, ctx, runtime); return;
    ctx->pc = 0x1341C8u;
}
