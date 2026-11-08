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

// Function: entry_0012ba88
// Address: 0x12ba88 - 0x12bad4
void entry_0012ba88_0x12ba88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ba88_0x12ba88");
#endif

    switch (ctx->pc) {
        case 0x12ba90u: goto label_12ba90;
        case 0x12ba9cu: goto label_12ba9c;
        case 0x12baa8u: goto label_12baa8;
        case 0x12bab4u: goto label_12bab4;
        case 0x12bac4u: goto label_12bac4;
        default: break;
    }

    ctx->pc = 0x12ba88u;

label_12ba88:
    // 0x12ba88: 0xc04c25c  jal         func_130970
    ctx->pc = 0x12BA88u;
    SET_GPR_U32(ctx, 31, 0x12BA90u);
    ctx->pc = 0x130970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130970u, 0x12BA88u, 0x12BA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA90u;
label_12ba90:
    // 0x12ba90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12ba90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba94: 0xc080702  jal         func_201C08
    ctx->pc = 0x12BA94u;
    SET_GPR_U32(ctx, 31, 0x12BA9Cu);
    ctx->pc = 0x12BA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA94u;
    // 0x12ba98: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x12BA94u, 0x12BA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA9Cu;
label_12ba9c:
    // 0x12ba9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ba9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12baa0: 0xc04a860  jal         func_12A180
    ctx->pc = 0x12BAA0u;
    SET_GPR_U32(ctx, 31, 0x12BAA8u);
    ctx->pc = 0x12BAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BAA0u;
    // 0x12baa4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A180u, 0x12BAA0u, 0x12BAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BAA8u;
label_12baa8:
    // 0x12baa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12baa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12baac: 0xc080664  jal         func_201990
    ctx->pc = 0x12BAACu;
    SET_GPR_U32(ctx, 31, 0x12BAB4u);
    ctx->pc = 0x12BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BAACu;
    // 0x12bab0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x12BAACu, 0x12BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BAB4u;
label_12bab4:
    // 0x12bab4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12bab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12bab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12babc: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x12BABCu;
    SET_GPR_U32(ctx, 31, 0x12BAC4u);
    ctx->pc = 0x12BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BABCu;
    // 0x12bac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x12BABCu, 0x12BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BAC4u;
label_12bac4:
    // 0x12bac4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12bac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x12bac8: 0x270182a  slt         $v1, $s3, $s0
    ctx->pc = 0x12bac8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12bacc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12BACCu;
    {
        const bool branch_taken_0x12bacc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bacc) {
            ctx->pc = 0x12BA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ba88;
        }
    }
    ctx->pc = 0x12BAD4u;
}
