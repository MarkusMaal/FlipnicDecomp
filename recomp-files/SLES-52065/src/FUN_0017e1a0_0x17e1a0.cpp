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

// Function: FUN_0017e1a0
// Address: 0x17e1a0 - 0x17e1b8
void FUN_0017e1a0_0x17e1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017e1a0_0x17e1a0");
#endif

    ctx->pc = 0x17e1a0u;

    // 0x17e1a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17e1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17e1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1a8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17e1ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17e1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1b0: 0x805f974  j           func_17E5D0
    ctx->pc = 0x17E1B0u;
    ctx->pc = 0x17E1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E1B0u;
    // 0x17e1b4: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E5D0u;
    FUN_0017e5d0_0x17e5d0(rdram, ctx, runtime); return;
    ctx->pc = 0x17E1B8u;
}
