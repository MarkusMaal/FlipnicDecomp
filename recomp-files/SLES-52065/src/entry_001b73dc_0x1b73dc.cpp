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

// Function: entry_001b73dc
// Address: 0x1b73dc - 0x1b7414
void entry_001b73dc_0x1b73dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b73dc_0x1b73dc");
#endif

    switch (ctx->pc) {
        case 0x1b73fcu: goto label_1b73fc;
        case 0x1b7408u: goto label_1b7408;
        default: break;
    }

    ctx->pc = 0x1b73dcu;

    // 0x1b73dc: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x1b73dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1b73e0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1b73e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1b73e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b73e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b73e8: 0x90630014  lbu         $v1, 0x14($v1)
    ctx->pc = 0x1b73e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1b73ec: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B73ECu;
    {
        const bool branch_taken_0x1b73ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73ECu;
        // 0x1b73f0: 0x26640030  addiu       $a0, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73ec) {
            ctx->pc = 0x1B745Cu;
            return;
        }
    }
    ctx->pc = 0x1B73F4u;
    // 0x1b73f4: 0xc06dd2c  jal         func_1B74B0
    ctx->pc = 0x1B73F4u;
    SET_GPR_U32(ctx, 31, 0x1B73FCu);
    ctx->pc = 0x1B73F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B73F4u;
    // 0x1b73f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74B0u, 0x1B73F4u, 0x1B73FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B73FCu;
label_1b73fc:
    // 0x1b73fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7400: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1B7400u;
    SET_GPR_U32(ctx, 31, 0x1B7408u);
    ctx->pc = 0x1B7404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7400u;
    // 0x1b7404: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1B7400u, 0x1B7408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7408u;
label_1b7408:
    // 0x1b7408: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b740c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B740Cu;
    {
        const bool branch_taken_0x1b740c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B740Cu;
        // 0x1b7410: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b740c) {
            ctx->pc = 0x1B7438u;
            return;
        }
    }
    ctx->pc = 0x1B7414u;
}
