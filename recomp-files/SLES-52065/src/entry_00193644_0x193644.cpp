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

// Function: entry_00193644
// Address: 0x193644 - 0x19366c
void entry_00193644_0x193644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193644_0x193644");
#endif

    switch (ctx->pc) {
        case 0x193664u: goto label_193664;
        default: break;
    }

    ctx->pc = 0x193644u;

label_193644:
    // 0x193644: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x193644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_193648:
    // 0x193648: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x193648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_19364c:
    // 0x19364c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19364cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_193650:
    // 0x193650: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x193650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_193654:
    // 0x193654: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x193654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_193658:
    // 0x193658: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x193658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_19365c:
    // 0x19365c: 0x320f809  jalr        $t9
label_193660:
    if (ctx->pc == 0x193660u) {
        ctx->pc = 0x193664u;
        goto label_193664;
    }
    ctx->pc = 0x19365Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193664u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19365Cu, 0x193664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193664u;
label_193664:
    // 0x193664: 0x10000122  b           . + 4 + (0x122 << 2)
label_193668:
    if (ctx->pc == 0x193668u) {
        ctx->pc = 0x193668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193664u;
        // 0x193668: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19366Cu;
        goto label_fallthrough_0x193664;
    }
    ctx->pc = 0x193664u;
    {
        const bool branch_taken_0x193664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193664u;
        // 0x193668: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193664) {
            ctx->pc = 0x193AF0u;
            return;
        }
    }
label_fallthrough_0x193664:
    ctx->pc = 0x19366Cu;
}
