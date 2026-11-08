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

// Function: FUN_0017dda0
// Address: 0x17dda0 - 0x17ddbc
void FUN_0017dda0_0x17dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017dda0_0x17dda0");
#endif

    ctx->pc = 0x17dda0u;

    // 0x17dda0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x17dda0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dda4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x17dda4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dda8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17dda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17ddacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddb0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17ddb4: 0x805f61c  j           func_17D870
    ctx->pc = 0x17DDB4u;
    ctx->pc = 0x17DDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DDB4u;
    // 0x17ddb8: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D870u;
    FUN_0017d870_0x17d870(rdram, ctx, runtime); return;
    ctx->pc = 0x17DDBCu;
}
