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

// Function: entry_0017f418
// Address: 0x17f418 - 0x17f438
void entry_0017f418_0x17f418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f418_0x17f418");
#endif

    ctx->pc = 0x17f418u;

    // 0x17f418: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x17f418u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17f41c: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x17F41Cu;
    {
        const bool branch_taken_0x17f41c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F41Cu;
        // 0x17f420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f41c) {
            ctx->pc = 0x17F46Cu;
            return;
        }
    }
    ctx->pc = 0x17F424u;
    // 0x17f424: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x17f424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17f428: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F428u;
    {
        const bool branch_taken_0x17f428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F428u;
        // 0x17f42c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f428) {
            ctx->pc = 0x17F438u;
            return;
        }
    }
    ctx->pc = 0x17F430u;
    // 0x17f430: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F430u;
    SET_GPR_U32(ctx, 31, 0x17F438u);
    ctx->pc = 0x17F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3A0u, 0x17F430u, 0x17F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F438u;
}
