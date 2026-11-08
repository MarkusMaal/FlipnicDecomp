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

// Function: FUN_001e25f0
// Address: 0x1e25f0 - 0x1e270c
void FUN_001e25f0_0x1e25f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e25f0_0x1e25f0");
#endif

    switch (ctx->pc) {
        case 0x1e25f0u: goto label_1e25f0;
        case 0x1e25f4u: goto label_1e25f4;
        case 0x1e25f8u: goto label_1e25f8;
        case 0x1e25fcu: goto label_1e25fc;
        case 0x1e2600u: goto label_1e2600;
        case 0x1e2604u: goto label_1e2604;
        case 0x1e2608u: goto label_1e2608;
        case 0x1e260cu: goto label_1e260c;
        case 0x1e2610u: goto label_1e2610;
        case 0x1e2614u: goto label_1e2614;
        case 0x1e2618u: goto label_1e2618;
        case 0x1e261cu: goto label_1e261c;
        case 0x1e2620u: goto label_1e2620;
        case 0x1e2624u: goto label_1e2624;
        case 0x1e2628u: goto label_1e2628;
        case 0x1e262cu: goto label_1e262c;
        case 0x1e2630u: goto label_1e2630;
        case 0x1e2634u: goto label_1e2634;
        case 0x1e2638u: goto label_1e2638;
        case 0x1e263cu: goto label_1e263c;
        case 0x1e2640u: goto label_1e2640;
        case 0x1e2644u: goto label_1e2644;
        case 0x1e2648u: goto label_1e2648;
        case 0x1e264cu: goto label_1e264c;
        case 0x1e2650u: goto label_1e2650;
        case 0x1e2654u: goto label_1e2654;
        case 0x1e2658u: goto label_1e2658;
        case 0x1e265cu: goto label_1e265c;
        case 0x1e2660u: goto label_1e2660;
        case 0x1e2664u: goto label_1e2664;
        case 0x1e2668u: goto label_1e2668;
        case 0x1e266cu: goto label_1e266c;
        case 0x1e2670u: goto label_1e2670;
        case 0x1e2674u: goto label_1e2674;
        case 0x1e2678u: goto label_1e2678;
        case 0x1e267cu: goto label_1e267c;
        case 0x1e2680u: goto label_1e2680;
        case 0x1e2684u: goto label_1e2684;
        case 0x1e2688u: goto label_1e2688;
        case 0x1e268cu: goto label_1e268c;
        case 0x1e2690u: goto label_1e2690;
        case 0x1e2694u: goto label_1e2694;
        case 0x1e2698u: goto label_1e2698;
        case 0x1e269cu: goto label_1e269c;
        case 0x1e26a0u: goto label_1e26a0;
        case 0x1e26a4u: goto label_1e26a4;
        case 0x1e26a8u: goto label_1e26a8;
        case 0x1e26acu: goto label_1e26ac;
        case 0x1e26b0u: goto label_1e26b0;
        case 0x1e26b4u: goto label_1e26b4;
        case 0x1e26b8u: goto label_1e26b8;
        case 0x1e26bcu: goto label_1e26bc;
        case 0x1e26c0u: goto label_1e26c0;
        case 0x1e26c4u: goto label_1e26c4;
        case 0x1e26c8u: goto label_1e26c8;
        case 0x1e26ccu: goto label_1e26cc;
        case 0x1e26d0u: goto label_1e26d0;
        case 0x1e26d4u: goto label_1e26d4;
        case 0x1e26d8u: goto label_1e26d8;
        case 0x1e26dcu: goto label_1e26dc;
        case 0x1e26e0u: goto label_1e26e0;
        case 0x1e26e4u: goto label_1e26e4;
        case 0x1e26e8u: goto label_1e26e8;
        case 0x1e26ecu: goto label_1e26ec;
        case 0x1e26f0u: goto label_1e26f0;
        case 0x1e26f4u: goto label_1e26f4;
        case 0x1e26f8u: goto label_1e26f8;
        case 0x1e26fcu: goto label_1e26fc;
        case 0x1e2700u: goto label_1e2700;
        case 0x1e2704u: goto label_1e2704;
        case 0x1e2708u: goto label_1e2708;
        default: break;
    }

    ctx->pc = 0x1e25f0u;

label_1e25f0:
    // 0x1e25f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e25f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e25f4:
    // 0x1e25f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e25f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e25f8:
    // 0x1e25f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e25f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e25fc:
    // 0x1e25fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e25fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e2600:
    // 0x1e2600: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e2600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2604:
    // 0x1e2604: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e2608:
    // 0x1e2608: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e2608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e260c:
    // 0x1e260c: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x1e260cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
label_1e2610:
    // 0x1e2610: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1e2610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1e2614:
    // 0x1e2614: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e2614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e2618:
    // 0x1e2618: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1e2618u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e261c:
    // 0x1e261c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e261cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1e2620:
    // 0x1e2620: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e2620u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1e2624:
    // 0x1e2624: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x1e2624u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1e2628:
    // 0x1e2628: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e262c:
    if (ctx->pc == 0x1E262Cu) {
        ctx->pc = 0x1E262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2628u;
        // 0x1e262c: 0xffa20048  sd          $v0, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2630u;
        goto label_1e2630;
    }
    ctx->pc = 0x1E2628u;
    {
        const bool branch_taken_0x1e2628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2628u;
        // 0x1e262c: 0xffa20048  sd          $v0, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2628) {
            ctx->pc = 0x1E2638u;
            goto label_1e2638;
        }
    }
    ctx->pc = 0x1E2630u;
label_1e2630:
    // 0x1e2630: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e2634:
    if (ctx->pc == 0x1E2634u) {
        ctx->pc = 0x1E2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2630u;
        // 0x1e2634: 0x27a20048  addiu       $v0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2638u;
        goto label_1e2638;
    }
    ctx->pc = 0x1E2630u;
    {
        const bool branch_taken_0x1e2630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2630u;
        // 0x1e2634: 0x27a20048  addiu       $v0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2630) {
            ctx->pc = 0x1E263Cu;
            goto label_1e263c;
        }
    }
    ctx->pc = 0x1E2638u;
label_1e2638:
    // 0x1e2638: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1e2638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e263c:
    // 0x1e263c: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x1e263cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2640:
    // 0x1e2640: 0x1a000026  blez        $s0, . + 4 + (0x26 << 2)
label_1e2644:
    if (ctx->pc == 0x1E2644u) {
        ctx->pc = 0x1E2648u;
        goto label_1e2648;
    }
    ctx->pc = 0x1E2640u;
    {
        const bool branch_taken_0x1e2640 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1e2640) {
            ctx->pc = 0x1E26DCu;
            goto label_1e26dc;
        }
    }
    ctx->pc = 0x1E2648u;
label_1e2648:
    // 0x1e2648: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1e2648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e264c:
    // 0x1e264c: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x1e264cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
label_1e2650:
    // 0x1e2650: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1e2650u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_1e2654:
    // 0x1e2654: 0xc07fdfe  jal         func_1FF7F8
label_1e2658:
    if (ctx->pc == 0x1E2658u) {
        ctx->pc = 0x1E2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2654u;
        // 0x1e2658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E265Cu;
        goto label_1e265c;
    }
    ctx->pc = 0x1E2654u;
    SET_GPR_U32(ctx, 31, 0x1E265Cu);
    ctx->pc = 0x1E2658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2654u;
    // 0x1e2658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1E2654u, 0x1E265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E265Cu;
label_1e265c:
    // 0x1e265c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e2660:
    // 0x1e2660: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1e2660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_1e2664:
    // 0x1e2664: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e2664u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1e2668:
    // 0x1e2668: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1e2668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1e266c:
    // 0x1e266c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e266cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e2670:
    // 0x1e2670: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1e2670u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1e2674:
    // 0x1e2674: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e2674u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2678:
    // 0x1e2678: 0x50102f  dsubu       $v0, $v0, $s0
    ctx->pc = 0x1e2678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 16));
label_1e267c:
    // 0x1e267c: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e2680:
    if (ctx->pc == 0x1E2680u) {
        ctx->pc = 0x1E2680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E267Cu;
        // 0x1e2680: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2684u;
        goto label_1e2684;
    }
    ctx->pc = 0x1E267Cu;
    {
        const bool branch_taken_0x1e267c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E267Cu;
        // 0x1e2680: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e267c) {
            ctx->pc = 0x1E26DCu;
            goto label_1e26dc;
        }
    }
    ctx->pc = 0x1E2684u;
label_1e2684:
    // 0x1e2684: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1e2684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e2688:
    // 0x1e2688: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1e2688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1e268c:
    // 0x1e268c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e268cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2690:
    // 0x1e2690: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1e2694:
    if (ctx->pc == 0x1E2694u) {
        ctx->pc = 0x1E2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2690u;
        // 0x1e2694: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2698u;
        goto label_1e2698;
    }
    ctx->pc = 0x1E2690u;
    {
        const bool branch_taken_0x1e2690 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2690u;
        // 0x1e2694: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2690) {
            ctx->pc = 0x1E26A4u;
            goto label_1e26a4;
        }
    }
    ctx->pc = 0x1E2698u;
label_1e2698:
    // 0x1e2698: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1e2698u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1e269c:
    // 0x1e269c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e26a0:
    if (ctx->pc == 0x1E26A0u) {
        ctx->pc = 0x1E26A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E269Cu;
        // 0x1e26a0: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E26A4u;
        goto label_1e26a4;
    }
    ctx->pc = 0x1E269Cu;
    {
        const bool branch_taken_0x1e269c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E26A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E269Cu;
        // 0x1e26a0: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e269c) {
            ctx->pc = 0x1E26B8u;
            goto label_1e26b8;
        }
    }
    ctx->pc = 0x1E26A4u;
label_1e26a4:
    // 0x1e26a4: 0x0  nop
    ctx->pc = 0x1e26a4u;
    // NOP
label_1e26a8:
    // 0x1e26a8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1e26a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e26ac:
    // 0x1e26ac: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1e26acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1e26b0:
    // 0x1e26b0: 0x320f809  jalr        $t9
label_1e26b4:
    if (ctx->pc == 0x1E26B4u) {
        ctx->pc = 0x1E26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26B0u;
        // 0x1e26b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E26B8u;
        goto label_1e26b8;
    }
    ctx->pc = 0x1E26B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E26B8u);
        ctx->pc = 0x1E26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26B0u;
        // 0x1e26b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E26B0u, 0x1E26B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E26B8u;
label_1e26b8:
    // 0x1e26b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e26b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e26bc:
    // 0x1e26bc: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_1e26c0:
    if (ctx->pc == 0x1E26C0u) {
        ctx->pc = 0x1E26C4u;
        goto label_1e26c4;
    }
    ctx->pc = 0x1E26BCu;
    {
        const bool branch_taken_0x1e26bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e26bc) {
            ctx->pc = 0x1E26ECu;
            goto label_1e26ec;
        }
    }
    ctx->pc = 0x1E26C4u;
label_1e26c4:
    // 0x1e26c4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1e26c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e26c8:
    // 0x1e26c8: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x1e26c8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
label_1e26cc:
    // 0x1e26cc: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e26ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e26d0:
    // 0x1e26d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e26d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e26d4:
    // 0x1e26d4: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x1e26d4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
label_1e26d8:
    // 0x1e26d8: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x1e26d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
label_1e26dc:
    // 0x1e26dc: 0x0  nop
    ctx->pc = 0x1e26dcu;
    // NOP
label_1e26e0:
    // 0x1e26e0: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e26e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e26e4:
    // 0x1e26e4: 0x1c40ffe7  bgtz        $v0, . + 4 + (-0x19 << 2)
label_1e26e8:
    if (ctx->pc == 0x1E26E8u) {
        ctx->pc = 0x1E26ECu;
        goto label_1e26ec;
    }
    ctx->pc = 0x1E26E4u;
    {
        const bool branch_taken_0x1e26e4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e26e4) {
            ctx->pc = 0x1E2684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2684;
        }
    }
    ctx->pc = 0x1E26ECu;
label_1e26ec:
    // 0x1e26ec: 0x0  nop
    ctx->pc = 0x1e26ecu;
    // NOP
label_1e26f0:
    // 0x1e26f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e26f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e26f4:
    // 0x1e26f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e26f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e26f8:
    // 0x1e26f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e26f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e26fc:
    // 0x1e26fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e26fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2700:
    // 0x1e2700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2704:
    // 0x1e2704: 0x3e00008  jr          $ra
label_1e2708:
    if (ctx->pc == 0x1E2708u) {
        ctx->pc = 0x1E2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2704u;
        // 0x1e2708: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E270Cu;
        goto label_fallthrough_0x1e2704;
    }
    ctx->pc = 0x1E2704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2704u;
        // 0x1e2708: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e2704:
    ctx->pc = 0x1E270Cu;
}
