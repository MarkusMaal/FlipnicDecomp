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

// Function: FUN_001cd530
// Address: 0x1cd530 - 0x1cd5e8
void FUN_001cd530_0x1cd530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cd530_0x1cd530");
#endif

    switch (ctx->pc) {
        case 0x1cd558u: goto label_1cd558;
        case 0x1cd58cu: goto label_1cd58c;
        case 0x1cd5a4u: goto label_1cd5a4;
        default: break;
    }

    ctx->pc = 0x1cd530u;

label_1cd530:
    // 0x1cd530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd534: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1cd534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cd538: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CD538u;
    {
        const bool branch_taken_0x1cd538 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1CD53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD538u;
        // 0x1cd53c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd538) {
            ctx->pc = 0x1CD544u;
            goto label_1cd544;
        }
    }
    ctx->pc = 0x1CD540u;
    // 0x1cd540: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1cd544:
    // 0x1cd544: 0x28a2000c  slti        $v0, $a1, 0xC
    ctx->pc = 0x1cd544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1cd548: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CD548u;
    {
        const bool branch_taken_0x1cd548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD548u;
        // 0x1cd54c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd548) {
            ctx->pc = 0x1CD554u;
            goto label_1cd554;
        }
    }
    ctx->pc = 0x1CD550u;
    // 0x1cd550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd554:
    // 0x1cd554: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd558:
    // 0x1cd558: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1cd558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1cd55c: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x1cd55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd560: 0x14450019  bne         $v0, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CD560u;
    {
        const bool branch_taken_0x1cd560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1cd560) {
            ctx->pc = 0x1CD5C8u;
            goto label_1cd5c8;
        }
    }
    ctx->pc = 0x1CD568u;
    // 0x1cd568: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1cd568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cd56c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD56Cu;
    {
        const bool branch_taken_0x1cd56c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1CD570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD56Cu;
        // 0x1cd570: 0x28a2000c  slti        $v0, $a1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd56c) {
            ctx->pc = 0x1CD57Cu;
            goto label_1cd57c;
        }
    }
    ctx->pc = 0x1CD574u;
    // 0x1cd574: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd578: 0x28a2000c  slti        $v0, $a1, 0xC
    ctx->pc = 0x1cd578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
label_1cd57c:
    // 0x1cd57c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CD57Cu;
    {
        const bool branch_taken_0x1cd57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD57Cu;
        // 0x1cd580: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd57c) {
            ctx->pc = 0x1CD588u;
            goto label_1cd588;
        }
    }
    ctx->pc = 0x1CD584u;
    // 0x1cd584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd588:
    // 0x1cd588: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd58c:
    // 0x1cd58c: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1cd58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1cd590: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x1cd590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd594: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD594u;
    {
        const bool branch_taken_0x1cd594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1cd594) {
            ctx->pc = 0x1CD5ACu;
            goto label_1cd5ac;
        }
    }
    ctx->pc = 0x1CD59Cu;
    // 0x1cd59c: 0xc07354c  jal         func_1CD530
    ctx->pc = 0x1CD59Cu;
    SET_GPR_U32(ctx, 31, 0x1CD5A4u);
    ctx->pc = 0x1CD530u;
    goto label_1cd530;
    ctx->pc = 0x1CD5A4u;
label_1cd5a4:
    // 0x1cd5a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD5A4u;
    {
        const bool branch_taken_0x1cd5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd5a4) {
            ctx->pc = 0x1CD5C0u;
            goto label_1cd5c0;
        }
    }
    ctx->pc = 0x1CD5ACu;
label_1cd5ac:
    // 0x1cd5ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cd5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cd5b0: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1cd5b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cd5b4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CD5B4u;
    {
        const bool branch_taken_0x1cd5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD5B4u;
        // 0x1cd5b8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5b4) {
            ctx->pc = 0x1CD58Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd58c;
        }
    }
    ctx->pc = 0x1CD5BCu;
    // 0x1cd5bc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1cd5bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cd5c0:
    // 0x1cd5c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD5C0u;
    {
        const bool branch_taken_0x1cd5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD5C0u;
        // 0x1cd5c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5c0) {
            ctx->pc = 0x1CD5E0u;
            goto label_1cd5e0;
        }
    }
    ctx->pc = 0x1CD5C8u;
label_1cd5c8:
    // 0x1cd5c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cd5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cd5cc: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1cd5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cd5d0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1CD5D0u;
    {
        const bool branch_taken_0x1cd5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD5D0u;
        // 0x1cd5d4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5d0) {
            ctx->pc = 0x1CD558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd558;
        }
    }
    ctx->pc = 0x1CD5D8u;
    // 0x1cd5d8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1cd5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd5dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd5e0:
    // 0x1cd5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD5E0u;
        // 0x1cd5e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD5E8u;
}
