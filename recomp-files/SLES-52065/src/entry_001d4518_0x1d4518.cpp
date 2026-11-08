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

// Function: entry_001d4518
// Address: 0x1d4518 - 0x1d4528
void entry_001d4518_0x1d4518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4518_0x1d4518");
#endif

    ctx->pc = 0x1d4518u;

    // 0x1d4518: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d4518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d451c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1d451cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4520: 0x80782d2  j           func_1E0B48
    ctx->pc = 0x1D4520u;
    ctx->pc = 0x1D4524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4520u;
    // 0x1d4524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0B48u;
    FUN_001e0b48_0x1e0b48(rdram, ctx, runtime); return;
    ctx->pc = 0x1D4528u;
}
