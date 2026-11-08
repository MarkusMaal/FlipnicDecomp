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

// Function: entry_001be600
// Address: 0x1be600 - 0x1be618
void entry_001be600_0x1be600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be600_0x1be600");
#endif

    switch (ctx->pc) {
        case 0x1be614u: goto label_1be614;
        default: break;
    }

    ctx->pc = 0x1be600u;

    // 0x1be600: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1be600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1be604: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE604u;
    {
        const bool branch_taken_0x1be604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE604u;
        // 0x1be608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be604) {
            ctx->pc = 0x1BE618u;
            return;
        }
    }
    ctx->pc = 0x1BE60Cu;
    // 0x1be60c: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE60Cu;
    SET_GPR_U32(ctx, 31, 0x1BE614u);
    ctx->pc = 0x1BE610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE60Cu;
    // 0x1be610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE4B0u, 0x1BE60Cu, 0x1BE614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE614u;
label_1be614:
    // 0x1be614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1be618u;
}
