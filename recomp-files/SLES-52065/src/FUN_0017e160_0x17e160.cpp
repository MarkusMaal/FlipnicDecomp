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

// Function: FUN_0017e160
// Address: 0x17e160 - 0x17e17c
void FUN_0017e160_0x17e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017e160_0x17e160");
#endif

    ctx->pc = 0x17e160u;

    // 0x17e160: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x17e160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e164: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x17e164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e168: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17e168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e16c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17e16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e170: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17e170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17e174: 0x805f8dc  j           func_17E370
    ctx->pc = 0x17E174u;
    ctx->pc = 0x17E178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E174u;
    // 0x17e178: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E370u;
    FUN_0017e370_0x17e370(rdram, ctx, runtime); return;
    ctx->pc = 0x17E17Cu;
}
