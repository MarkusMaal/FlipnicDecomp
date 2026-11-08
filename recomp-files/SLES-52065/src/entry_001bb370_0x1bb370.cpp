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

// Function: entry_001bb370
// Address: 0x1bb370 - 0x1bb388
void entry_001bb370_0x1bb370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb370_0x1bb370");
#endif

    switch (ctx->pc) {
        case 0x1bb384u: goto label_1bb384;
        default: break;
    }

    ctx->pc = 0x1bb370u;

    // 0x1bb370: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1bb370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1bb374: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB374u;
    {
        const bool branch_taken_0x1bb374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB374u;
        // 0x1bb378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb374) {
            ctx->pc = 0x1BB388u;
            return;
        }
    }
    ctx->pc = 0x1BB37Cu;
    // 0x1bb37c: 0xc06ec9c  jal         func_1BB270
    ctx->pc = 0x1BB37Cu;
    SET_GPR_U32(ctx, 31, 0x1BB384u);
    ctx->pc = 0x1BB380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB37Cu;
    // 0x1bb380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB270u, 0x1BB37Cu, 0x1BB384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB384u;
label_1bb384:
    // 0x1bb384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bb388u;
}
