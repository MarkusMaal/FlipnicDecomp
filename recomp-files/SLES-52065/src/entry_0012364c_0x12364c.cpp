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

// Function: entry_0012364c
// Address: 0x12364c - 0x123670
void entry_0012364c_0x12364c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012364c_0x12364c");
#endif

    switch (ctx->pc) {
        case 0x123664u: goto label_123664;
        default: break;
    }

    ctx->pc = 0x12364cu;

    // 0x12364c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x12364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x123650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x123650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x123654: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x123654u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x123658: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x123658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x12365c: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x12365Cu;
    SET_GPR_U32(ctx, 31, 0x123664u);
    ctx->pc = 0x123660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12365Cu;
    // 0x123660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x12365Cu, 0x123664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123664u;
label_123664:
    // 0x123664: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x123664u;
    {
        const bool branch_taken_0x123664 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x123668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123664u;
        // 0x123668: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123664) {
            ctx->pc = 0x123670u;
            return;
        }
    }
    ctx->pc = 0x12366Cu;
    // 0x12366c: 0xaed0000c  sw          $s0, 0xC($s6)
    ctx->pc = 0x12366cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 16));
    ctx->pc = 0x123670u;
}
