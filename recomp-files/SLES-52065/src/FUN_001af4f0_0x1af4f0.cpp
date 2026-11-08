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

// Function: FUN_001af4f0
// Address: 0x1af4f0 - 0x1af5f4
void FUN_001af4f0_0x1af4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af4f0_0x1af4f0");
#endif

    switch (ctx->pc) {
        case 0x1af560u: goto label_1af560;
        default: break;
    }

    ctx->pc = 0x1af4f0u;

    // 0x1af4f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af4f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af4f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af4fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1af500: 0x8f908714  lw          $s0, -0x78EC($gp)
    ctx->pc = 0x1af500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1af504: 0x8e112838  lw          $s1, 0x2838($s0)
    ctx->pc = 0x1af504u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10296)));
    // 0x1af508: 0x2a2103e8  slti        $at, $s1, 0x3E8
    ctx->pc = 0x1af508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1af50c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF50Cu;
    {
        const bool branch_taken_0x1af50c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af50c) {
            ctx->pc = 0x1AF518u;
            goto label_1af518;
        }
    }
    ctx->pc = 0x1AF514u;
    // 0x1af514: 0x241103e7  addiu       $s1, $zero, 0x3E7
    ctx->pc = 0x1af514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_1af518:
    // 0x1af518: 0x8e072840  lw          $a3, 0x2840($s0)
    ctx->pc = 0x1af518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10304)));
    // 0x1af51c: 0x28e103e8  slti        $at, $a3, 0x3E8
    ctx->pc = 0x1af51cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1af520: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF520u;
    {
        const bool branch_taken_0x1af520 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af520) {
            ctx->pc = 0x1AF52Cu;
            goto label_1af52c;
        }
    }
    ctx->pc = 0x1AF528u;
    // 0x1af528: 0x240703e7  addiu       $a3, $zero, 0x3E7
    ctx->pc = 0x1af528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_1af52c:
    // 0x1af52c: 0x8e08283c  lw          $t0, 0x283C($s0)
    ctx->pc = 0x1af52cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10300)));
    // 0x1af530: 0x290103e8  slti        $at, $t0, 0x3E8
    ctx->pc = 0x1af530u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1af534: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF534u;
    {
        const bool branch_taken_0x1af534 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af534) {
            ctx->pc = 0x1AF540u;
            goto label_1af540;
        }
    }
    ctx->pc = 0x1AF53Cu;
    // 0x1af53c: 0x240803e7  addiu       $t0, $zero, 0x3E7
    ctx->pc = 0x1af53cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_1af540:
    // 0x1af540: 0x8e092848  lw          $t1, 0x2848($s0)
    ctx->pc = 0x1af540u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10312)));
    // 0x1af544: 0x292103e8  slti        $at, $t1, 0x3E8
    ctx->pc = 0x1af544u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1af548: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF548u;
    {
        const bool branch_taken_0x1af548 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF548u;
        // 0x1af54c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af548) {
            ctx->pc = 0x1AF554u;
            goto label_1af554;
        }
    }
    ctx->pc = 0x1AF550u;
    // 0x1af550: 0x240903e7  addiu       $t1, $zero, 0x3E7
    ctx->pc = 0x1af550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_1af554:
    // 0x1af554: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1af554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af558: 0xc061fa8  jal         func_187EA0
    ctx->pc = 0x1AF558u;
    SET_GPR_U32(ctx, 31, 0x1AF560u);
    ctx->pc = 0x1AF55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF558u;
    // 0x1af55c: 0x24a50b70  addiu       $a1, $a1, 0xB70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1AF558u, 0x1AF560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF560u;
label_1af560:
    // 0x1af560: 0x11182b  sltu        $v1, $zero, $s1
    ctx->pc = 0x1af560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1af564: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF564u;
    {
        const bool branch_taken_0x1af564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF564u;
        // 0x1af568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af564) {
            ctx->pc = 0x1AF574u;
            goto label_1af574;
        }
    }
    ctx->pc = 0x1AF56Cu;
    // 0x1af56c: 0x920328fe  lbu         $v1, 0x28FE($s0)
    ctx->pc = 0x1af56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10494)));
    // 0x1af570: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1af570u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1af574:
    // 0x1af574: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF574u;
    {
        const bool branch_taken_0x1af574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af574) {
            ctx->pc = 0x1AF584u;
            goto label_1af584;
        }
    }
    ctx->pc = 0x1AF57Cu;
    // 0x1af57c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF57Cu;
    {
        const bool branch_taken_0x1af57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF57Cu;
        // 0x1af580: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af57c) {
            ctx->pc = 0x1AF588u;
            goto label_1af588;
        }
    }
    ctx->pc = 0x1AF584u;
label_1af584:
    // 0x1af584: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1af584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af588:
    // 0x1af588: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1af588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1af58c: 0x920328fa  lbu         $v1, 0x28FA($s0)
    ctx->pc = 0x1af58cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10490)));
    // 0x1af590: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF590u;
    {
        const bool branch_taken_0x1af590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af590) {
            ctx->pc = 0x1AF5A0u;
            goto label_1af5a0;
        }
    }
    ctx->pc = 0x1AF598u;
    // 0x1af598: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF598u;
    {
        const bool branch_taken_0x1af598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF598u;
        // 0x1af59c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af598) {
            ctx->pc = 0x1AF5A4u;
            goto label_1af5a4;
        }
    }
    ctx->pc = 0x1AF5A0u;
label_1af5a0:
    // 0x1af5a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1af5a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af5a4:
    // 0x1af5a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1af5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1af5a8: 0x920328f8  lbu         $v1, 0x28F8($s0)
    ctx->pc = 0x1af5a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10488)));
    // 0x1af5ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF5ACu;
    {
        const bool branch_taken_0x1af5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af5ac) {
            ctx->pc = 0x1AF5BCu;
            goto label_1af5bc;
        }
    }
    ctx->pc = 0x1AF5B4u;
    // 0x1af5b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF5B4u;
    {
        const bool branch_taken_0x1af5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5B4u;
        // 0x1af5b8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5b4) {
            ctx->pc = 0x1AF5C0u;
            goto label_1af5c0;
        }
    }
    ctx->pc = 0x1AF5BCu;
label_1af5bc:
    // 0x1af5bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1af5bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af5c0:
    // 0x1af5c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1af5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1af5c4: 0x920328fc  lbu         $v1, 0x28FC($s0)
    ctx->pc = 0x1af5c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10492)));
    // 0x1af5c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF5C8u;
    {
        const bool branch_taken_0x1af5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af5c8) {
            ctx->pc = 0x1AF5D8u;
            goto label_1af5d8;
        }
    }
    ctx->pc = 0x1AF5D0u;
    // 0x1af5d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF5D0u;
    {
        const bool branch_taken_0x1af5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5D0u;
        // 0x1af5d4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5d0) {
            ctx->pc = 0x1AF5DCu;
            goto label_1af5dc;
        }
    }
    ctx->pc = 0x1AF5D8u;
label_1af5d8:
    // 0x1af5d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1af5d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af5dc:
    // 0x1af5dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af5e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1af5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1af5e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af5e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af5e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5ECu;
        // 0x1af5f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF5F4u;
}
