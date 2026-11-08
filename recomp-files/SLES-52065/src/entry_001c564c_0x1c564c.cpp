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

// Function: entry_001c564c
// Address: 0x1c564c - 0x1c5678
void entry_001c564c_0x1c564c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c564c_0x1c564c");
#endif

    switch (ctx->pc) {
        case 0x1c5654u: goto label_1c5654;
        case 0x1c566cu: goto label_1c566c;
        default: break;
    }

    ctx->pc = 0x1c564cu;

    // 0x1c564c: 0xc06e598  jal         func_1B9660
    ctx->pc = 0x1C564Cu;
    SET_GPR_U32(ctx, 31, 0x1C5654u);
    ctx->pc = 0x1C5650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C564Cu;
    // 0x1c5650: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9660u, 0x1C564Cu, 0x1C5654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5654u;
label_1c5654:
    // 0x1c5654: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c5654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5658: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x1c5658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1c565c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C565Cu;
    {
        const bool branch_taken_0x1c565c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C565Cu;
        // 0x1c5660: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c565c) {
            ctx->pc = 0x1C56D4u;
            return;
        }
    }
    ctx->pc = 0x1C5664u;
    // 0x1c5664: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1C5664u;
    SET_GPR_U32(ctx, 31, 0x1C566Cu);
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1C5664u, 0x1C566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C566Cu;
label_1c566c:
    // 0x1c566c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5670: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C5670u;
    {
        const bool branch_taken_0x1c5670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5670u;
        // 0x1c5674: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5670) {
            ctx->pc = 0x1C56BCu;
            return;
        }
    }
    ctx->pc = 0x1C5678u;
}
