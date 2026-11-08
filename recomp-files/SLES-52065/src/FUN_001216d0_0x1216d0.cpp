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

// Function: FUN_001216d0
// Address: 0x1216d0 - 0x1216ec
void FUN_001216d0_0x1216d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001216d0_0x1216d0");
#endif

    ctx->pc = 0x1216d0u;

    // 0x1216d0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1216d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1216d4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1216d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1216d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1216d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1216dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1216dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1216e0: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1216e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1216e4: 0x8048610  j           func_121840
    ctx->pc = 0x1216E4u;
    ctx->pc = 0x1216E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1216E4u;
    // 0x1216e8: 0x24840c90  addiu       $a0, $a0, 0xC90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121840u;
    FUN_00121840_0x121840(rdram, ctx, runtime); return;
    ctx->pc = 0x1216ECu;
}
