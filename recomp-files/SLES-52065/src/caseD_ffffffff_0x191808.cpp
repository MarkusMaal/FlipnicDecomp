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

// Function: caseD_ffffffff
// Address: 0x191808 - 0x191868
void caseD_ffffffff_0x191808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_ffffffff_0x191808");
#endif

    switch (ctx->pc) {
        case 0x191818u: goto label_191818;
        case 0x191834u: goto label_191834;
        case 0x19184cu: goto label_19184c;
        default: break;
    }

    ctx->pc = 0x191808u;

    // 0x191808: 0x124002c6  beqz        $s2, . + 4 + (0x2C6 << 2)
    ctx->pc = 0x191808u;
    {
        const bool branch_taken_0x191808 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x191808) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191810u;
    // 0x191810: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x191810u;
    SET_GPR_U32(ctx, 31, 0x191818u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x191810u, 0x191818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191818u;
label_191818:
    // 0x191818: 0x16420017  bne         $s2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x191818u;
    {
        const bool branch_taken_0x191818 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x191818) {
            ctx->pc = 0x191878u;
            return;
        }
    }
    ctx->pc = 0x191820u;
    // 0x191820: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x191824: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x191828: 0x8c420490  lw          $v0, 0x490($v0)
    ctx->pc = 0x191828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
    // 0x19182c: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x19182Cu;
    SET_GPR_U32(ctx, 31, 0x191834u);
    ctx->pc = 0x191830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19182Cu;
    // 0x191830: 0x8c520028  lw          $s2, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x19182Cu, 0x191834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191834u;
label_191834:
    // 0x191834: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x191834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x191838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19183c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x19183cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x191840: 0x8c420490  lw          $v0, 0x490($v0)
    ctx->pc = 0x191840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
    // 0x191844: 0xc067f0c  jal         func_19FC30
    ctx->pc = 0x191844u;
    SET_GPR_U32(ctx, 31, 0x19184Cu);
    ctx->pc = 0x191848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191844u;
    // 0x191848: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC30u, 0x191844u, 0x19184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19184Cu;
label_19184c:
    // 0x19184c: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19184Cu;
    {
        const bool branch_taken_0x19184c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x19184c) {
            ctx->pc = 0x191868u;
            return;
        }
    }
    ctx->pc = 0x191854u;
    // 0x191854: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x191858: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19185c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x19185cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x191860: 0x100002b0  b           . + 4 + (0x2B0 << 2)
    ctx->pc = 0x191860u;
    {
        const bool branch_taken_0x191860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191860u;
        // 0x191864: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191860) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191868u;
}
