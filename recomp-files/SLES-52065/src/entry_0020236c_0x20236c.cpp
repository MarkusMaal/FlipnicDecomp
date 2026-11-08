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

// Function: entry_0020236c
// Address: 0x20236c - 0x202388
void entry_0020236c_0x20236c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020236c_0x20236c");
#endif

    ctx->pc = 0x20236cu;

    // 0x20236c: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x20236cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x202370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202370u;
    {
        const bool branch_taken_0x202370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202370u;
        // 0x202374: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202370) {
            ctx->pc = 0x202388u;
            return;
        }
    }
    ctx->pc = 0x202378u;
    // 0x202378: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x202378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x20237c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x20237cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x202380: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x202380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x202384: 0x6452ffd0  daddiu      $s2, $v0, -0x30
    ctx->pc = 0x202384u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
    ctx->pc = 0x202388u;
}
