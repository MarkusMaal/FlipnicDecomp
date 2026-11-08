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

// Function: entry_001bb5fc
// Address: 0x1bb5fc - 0x1bb628
void entry_001bb5fc_0x1bb5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb5fc_0x1bb5fc");
#endif

    ctx->pc = 0x1bb5fcu;

    // 0x1bb5fc: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x1bb5fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bb600: 0x12400037  beqz        $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x1BB600u;
    {
        const bool branch_taken_0x1bb600 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB600u;
        // 0x1bb604: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb600) {
            ctx->pc = 0x1BB6E0u;
            return;
        }
    }
    ctx->pc = 0x1BB608u;
    // 0x1bb608: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1bb608u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb60c: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BB60Cu;
    {
        const bool branch_taken_0x1bb60c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb60c) {
            ctx->pc = 0x1BB664u;
            return;
        }
    }
    ctx->pc = 0x1BB614u;
    // 0x1bb614: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1bb614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb618: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB618u;
    {
        const bool branch_taken_0x1bb618 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB618u;
        // 0x1bb61c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb618) {
            ctx->pc = 0x1BB628u;
            return;
        }
    }
    ctx->pc = 0x1BB620u;
    // 0x1bb620: 0xc06ed40  jal         func_1BB500
    ctx->pc = 0x1BB620u;
    SET_GPR_U32(ctx, 31, 0x1BB628u);
    ctx->pc = 0x1BB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB500u, 0x1BB620u, 0x1BB628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB628u;
}
