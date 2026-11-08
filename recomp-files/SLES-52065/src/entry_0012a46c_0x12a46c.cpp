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

// Function: entry_0012a46c
// Address: 0x12a46c - 0x12a4c8
void entry_0012a46c_0x12a46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a46c_0x12a46c");
#endif

    switch (ctx->pc) {
        case 0x12a474u: goto label_12a474;
        case 0x12a480u: goto label_12a480;
        case 0x12a48cu: goto label_12a48c;
        case 0x12a498u: goto label_12a498;
        case 0x12a4a8u: goto label_12a4a8;
        default: break;
    }

    ctx->pc = 0x12a46cu;

label_12a46c:
    // 0x12a46c: 0xc04c25c  jal         func_130970
    ctx->pc = 0x12A46Cu;
    SET_GPR_U32(ctx, 31, 0x12A474u);
    ctx->pc = 0x130970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130970u, 0x12A46Cu, 0x12A474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A474u;
label_12a474:
    // 0x12a474: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a478: 0xc080702  jal         func_201C08
    ctx->pc = 0x12A478u;
    SET_GPR_U32(ctx, 31, 0x12A480u);
    ctx->pc = 0x12A47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A478u;
    // 0x12a47c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x12A478u, 0x12A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A480u;
label_12a480:
    // 0x12a480: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12a480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a484: 0xc04a860  jal         func_12A180
    ctx->pc = 0x12A484u;
    SET_GPR_U32(ctx, 31, 0x12A48Cu);
    ctx->pc = 0x12A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A484u;
    // 0x12a488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A180u, 0x12A484u, 0x12A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A48Cu;
label_12a48c:
    // 0x12a48c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a490: 0xc080664  jal         func_201990
    ctx->pc = 0x12A490u;
    SET_GPR_U32(ctx, 31, 0x12A498u);
    ctx->pc = 0x12A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A490u;
    // 0x12a494: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x12A490u, 0x12A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A498u;
label_12a498:
    // 0x12a498: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12a498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12a49c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12a49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4a0: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x12A4A0u;
    SET_GPR_U32(ctx, 31, 0x12A4A8u);
    ctx->pc = 0x12A4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A4A0u;
    // 0x12a4a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x12A4A0u, 0x12A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A4A8u;
label_12a4a8:
    // 0x12a4a8: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x12a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x12a4ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12a4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12a4b0: 0x24632e90  addiu       $v1, $v1, 0x2E90
    ctx->pc = 0x12a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11920));
    // 0x12a4b4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x12a4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x12a4b8: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x12a4b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12a4bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x12a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x12a4c0: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x12A4C0u;
    {
        const bool branch_taken_0x12a4c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A4C0u;
        // 0x12a4c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4c0) {
            ctx->pc = 0x12A46Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a46c;
        }
    }
    ctx->pc = 0x12A4C8u;
}
