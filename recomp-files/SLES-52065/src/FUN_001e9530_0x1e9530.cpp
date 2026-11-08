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

// Function: FUN_001e9530
// Address: 0x1e9530 - 0x1e958c
void FUN_001e9530_0x1e9530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9530_0x1e9530");
#endif

    switch (ctx->pc) {
        case 0x1e9530u: goto label_1e9530;
        case 0x1e9534u: goto label_1e9534;
        case 0x1e9538u: goto label_1e9538;
        case 0x1e953cu: goto label_1e953c;
        case 0x1e9540u: goto label_1e9540;
        case 0x1e9544u: goto label_1e9544;
        case 0x1e9548u: goto label_1e9548;
        case 0x1e954cu: goto label_1e954c;
        case 0x1e9550u: goto label_1e9550;
        case 0x1e9554u: goto label_1e9554;
        case 0x1e9558u: goto label_1e9558;
        case 0x1e955cu: goto label_1e955c;
        case 0x1e9560u: goto label_1e9560;
        case 0x1e9564u: goto label_1e9564;
        case 0x1e9568u: goto label_1e9568;
        case 0x1e956cu: goto label_1e956c;
        case 0x1e9570u: goto label_1e9570;
        case 0x1e9574u: goto label_1e9574;
        case 0x1e9578u: goto label_1e9578;
        case 0x1e957cu: goto label_1e957c;
        case 0x1e9580u: goto label_1e9580;
        case 0x1e9584u: goto label_1e9584;
        case 0x1e9588u: goto label_1e9588;
        default: break;
    }

    ctx->pc = 0x1e9530u;

label_1e9530:
    // 0x1e9530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e9534:
    // 0x1e9534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e9538:
    // 0x1e9538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e953c:
    // 0x1e953c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e953cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e9540:
    // 0x1e9540: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e9544:
    // 0x1e9544: 0x91082b  sltu        $at, $a0, $s1
    ctx->pc = 0x1e9544u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1e9548:
    // 0x1e9548: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1e954c:
    if (ctx->pc == 0x1E954Cu) {
        ctx->pc = 0x1E954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9548u;
        // 0x1e954c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9550u;
        goto label_1e9550;
    }
    ctx->pc = 0x1E9548u;
    {
        const bool branch_taken_0x1e9548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9548u;
        // 0x1e954c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9548) {
            ctx->pc = 0x1E9574u;
            goto label_1e9574;
        }
    }
    ctx->pc = 0x1E9550u;
label_1e9550:
    // 0x1e9550: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e9550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9554:
    // 0x1e9554: 0x40f809  jalr        $v0
label_1e9558:
    if (ctx->pc == 0x1E9558u) {
        ctx->pc = 0x1E955Cu;
        goto label_1e955c;
    }
    ctx->pc = 0x1E9554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E955Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9554u, 0x1E955Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E955Cu;
label_1e955c:
    // 0x1e955c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e955cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1e9560:
    // 0x1e9560: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1e9560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1e9564:
    // 0x1e9564: 0x0  nop
    ctx->pc = 0x1e9564u;
    // NOP
label_1e9568:
    // 0x1e9568: 0x0  nop
    ctx->pc = 0x1e9568u;
    // NOP
label_1e956c:
    // 0x1e956c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_1e9570:
    if (ctx->pc == 0x1E9570u) {
        ctx->pc = 0x1E9574u;
        goto label_1e9574;
    }
    ctx->pc = 0x1E956Cu;
    {
        const bool branch_taken_0x1e956c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e956c) {
            ctx->pc = 0x1E9550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9550;
        }
    }
    ctx->pc = 0x1E9574u;
label_1e9574:
    // 0x1e9574: 0x0  nop
    ctx->pc = 0x1e9574u;
    // NOP
label_1e9578:
    // 0x1e9578: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e9578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e957c:
    // 0x1e957c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e957cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9580:
    // 0x1e9580: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9584:
    // 0x1e9584: 0x3e00008  jr          $ra
label_1e9588:
    if (ctx->pc == 0x1E9588u) {
        ctx->pc = 0x1E9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9584u;
        // 0x1e9588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E958Cu;
        goto label_fallthrough_0x1e9584;
    }
    ctx->pc = 0x1E9584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9584u;
        // 0x1e9588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e9584:
    ctx->pc = 0x1E958Cu;
}
