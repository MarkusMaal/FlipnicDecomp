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

// Function: FUN_0017e1e0
// Address: 0x17e1e0 - 0x17e1f8
void FUN_0017e1e0_0x17e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017e1e0_0x17e1e0");
#endif

    ctx->pc = 0x17e1e0u;

    // 0x17e1e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17e1e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17e1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1e8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17e1ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17e1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1f0: 0x805fa00  j           func_17E800
    ctx->pc = 0x17E1F0u;
    ctx->pc = 0x17E1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E1F0u;
    // 0x17e1f4: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E800u;
    FUN_0017e800_0x17e800(rdram, ctx, runtime); return;
    ctx->pc = 0x17E1F8u;
}
