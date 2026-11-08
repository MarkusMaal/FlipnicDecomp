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

// Function: entry_001d7bc8
// Address: 0x1d7bc8 - 0x1d7bd8
void entry_001d7bc8_0x1d7bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7bc8_0x1d7bc8");
#endif

    ctx->pc = 0x1d7bc8u;

    // 0x1d7bc8: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x1d7bc8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d7bcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d7bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7bd0: 0x8074cb8  j           func_1D32E0
    ctx->pc = 0x1D7BD0u;
    ctx->pc = 0x1D7BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BD0u;
    // 0x1d7bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D32E0u;
    FUN_001d32e0_0x1d32e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7BD8u;
}
