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

// Function: FUN_0017e1c0
// Address: 0x17e1c0 - 0x17e1d8
void FUN_0017e1c0_0x17e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017e1c0_0x17e1c0");
#endif

    ctx->pc = 0x17e1c0u;

    // 0x17e1c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17e1c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17e1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1c8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17e1cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17e1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1d0: 0x805fa38  j           func_17E8E0
    ctx->pc = 0x17E1D0u;
    ctx->pc = 0x17E1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E1D0u;
    // 0x17e1d4: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E8E0u;
    FUN_0017e8e0_0x17e8e0(rdram, ctx, runtime); return;
    ctx->pc = 0x17E1D8u;
}
