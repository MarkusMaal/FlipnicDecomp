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

// Function: entry_001d737c
// Address: 0x1d737c - 0x1d7398
void entry_001d737c_0x1d737c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d737c_0x1d737c");
#endif

    switch (ctx->pc) {
        case 0x1d7390u: goto label_1d7390;
        default: break;
    }

    ctx->pc = 0x1d737cu;

    // 0x1d737c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D737Cu;
    {
        const bool branch_taken_0x1d737c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d737c) {
            ctx->pc = 0x1D7380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D737Cu;
            // 0x1d7380: 0x92c5000d  lbu         $a1, 0xD($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7398u;
            return;
        }
    }
    ctx->pc = 0x1D7384u;
    // 0x1d7384: 0x92650004  lbu         $a1, 0x4($s3)
    ctx->pc = 0x1d7384u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d7388: 0xc077488  jal         func_1DD220
    ctx->pc = 0x1D7388u;
    SET_GPR_U32(ctx, 31, 0x1D7390u);
    ctx->pc = 0x1D738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7388u;
    // 0x1d738c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD220u, 0x1D7388u, 0x1D7390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7390u;
label_1d7390:
    // 0x1d7390: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7390u;
    {
        const bool branch_taken_0x1d7390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7390u;
        // 0x1d7394: 0x8ea50034  lw          $a1, 0x34($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7390) {
            ctx->pc = 0x1D73A4u;
            return;
        }
    }
    ctx->pc = 0x1D7398u;
}
