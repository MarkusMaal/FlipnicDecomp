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

// Function: entry_0013ba60
// Address: 0x13ba60 - 0x13ba80
void entry_0013ba60_0x13ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ba60_0x13ba60");
#endif

    ctx->pc = 0x13ba60u;

    // 0x13ba60: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x13ba60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13ba64: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13BA64u;
    {
        const bool branch_taken_0x13ba64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba64) {
            ctx->pc = 0x13BAA8u;
            return;
        }
    }
    ctx->pc = 0x13BA6Cu;
    // 0x13ba6c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x13ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13ba70: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BA70u;
    {
        const bool branch_taken_0x13ba70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA70u;
        // 0x13ba74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba70) {
            ctx->pc = 0x13BA80u;
            return;
        }
    }
    ctx->pc = 0x13BA78u;
    // 0x13ba78: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BA78u;
    SET_GPR_U32(ctx, 31, 0x13BA80u);
    ctx->pc = 0x13B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B9F0u, 0x13BA78u, 0x13BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA80u;
}
