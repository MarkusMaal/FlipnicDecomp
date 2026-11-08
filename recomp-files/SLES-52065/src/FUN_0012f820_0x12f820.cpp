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

// Function: FUN_0012f820
// Address: 0x12f820 - 0x12f884
void FUN_0012f820_0x12f820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012f820_0x12f820");
#endif

    switch (ctx->pc) {
        case 0x12f820u: goto label_12f820;
        case 0x12f824u: goto label_12f824;
        case 0x12f828u: goto label_12f828;
        case 0x12f82cu: goto label_12f82c;
        case 0x12f830u: goto label_12f830;
        case 0x12f834u: goto label_12f834;
        case 0x12f838u: goto label_12f838;
        case 0x12f83cu: goto label_12f83c;
        case 0x12f840u: goto label_12f840;
        case 0x12f844u: goto label_12f844;
        case 0x12f848u: goto label_12f848;
        case 0x12f84cu: goto label_12f84c;
        case 0x12f850u: goto label_12f850;
        case 0x12f854u: goto label_12f854;
        case 0x12f858u: goto label_12f858;
        case 0x12f85cu: goto label_12f85c;
        case 0x12f860u: goto label_12f860;
        case 0x12f864u: goto label_12f864;
        case 0x12f868u: goto label_12f868;
        case 0x12f86cu: goto label_12f86c;
        case 0x12f870u: goto label_12f870;
        case 0x12f874u: goto label_12f874;
        case 0x12f878u: goto label_12f878;
        case 0x12f87cu: goto label_12f87c;
        case 0x12f880u: goto label_12f880;
        default: break;
    }

    ctx->pc = 0x12f820u;

label_12f820:
    // 0x12f820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f824:
    // 0x12f824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12f824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f828:
    // 0x12f828: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x12f828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_12f82c:
    // 0x12f82c: 0x24633e70  addiu       $v1, $v1, 0x3E70
    ctx->pc = 0x12f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15984));
label_12f830:
    // 0x12f830: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x12f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_12f834:
    // 0x12f834: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12f834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12f838:
    // 0x12f838: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
label_12f83c:
    if (ctx->pc == 0x12F83Cu) {
        ctx->pc = 0x12F840u;
        goto label_12f840;
    }
    ctx->pc = 0x12F838u;
    {
        const bool branch_taken_0x12f838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x12f838) {
            ctx->pc = 0x12F860u;
            goto label_12f860;
        }
    }
    ctx->pc = 0x12F840u;
label_12f840:
    // 0x12f840: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x12f840u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_12f844:
    // 0x12f844: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x12f844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_12f848:
    // 0x12f848: 0x24423e74  addiu       $v0, $v0, 0x3E74
    ctx->pc = 0x12f848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15988));
label_12f84c:
    // 0x12f84c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_12f850:
    // 0x12f850: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x12f850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_12f854:
    // 0x12f854: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x12f854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_12f858:
    // 0x12f858: 0x10000005  b           . + 4 + (0x5 << 2)
label_12f85c:
    if (ctx->pc == 0x12F85Cu) {
        ctx->pc = 0x12F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F858u;
        // 0x12f85c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F860u;
        goto label_12f860;
    }
    ctx->pc = 0x12F858u;
    {
        const bool branch_taken_0x12f858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F858u;
        // 0x12f85c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f858) {
            ctx->pc = 0x12F870u;
            goto label_12f870;
        }
    }
    ctx->pc = 0x12F860u;
label_12f860:
    // 0x12f860: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12f860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12f864:
    // 0x12f864: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x12f864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
label_12f868:
    // 0x12f868: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_12f86c:
    if (ctx->pc == 0x12F86Cu) {
        ctx->pc = 0x12F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F868u;
        // 0x12f86c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F870u;
        goto label_12f870;
    }
    ctx->pc = 0x12F868u;
    {
        const bool branch_taken_0x12f868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F868u;
        // 0x12f86c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f868) {
            ctx->pc = 0x12F830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f830;
        }
    }
    ctx->pc = 0x12F870u;
label_12f870:
    // 0x12f870: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12f870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12f874:
    // 0x12f874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f878:
    // 0x12f878: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x12f878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_12f87c:
    // 0x12f87c: 0x3200008  jr          $t9
label_12f880:
    if (ctx->pc == 0x12F880u) {
        ctx->pc = 0x12F884u;
        goto label_fallthrough_0x12f87c;
    }
    ctx->pc = 0x12F87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F87Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x12f87c:
    ctx->pc = 0x12F884u;
}
