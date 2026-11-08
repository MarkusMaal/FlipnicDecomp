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

// Function: FUN_001e24c0
// Address: 0x1e24c0 - 0x1e25e4
void FUN_001e24c0_0x1e24c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e24c0_0x1e24c0");
#endif

    switch (ctx->pc) {
        case 0x1e24c0u: goto label_1e24c0;
        case 0x1e24c4u: goto label_1e24c4;
        case 0x1e24c8u: goto label_1e24c8;
        case 0x1e24ccu: goto label_1e24cc;
        case 0x1e24d0u: goto label_1e24d0;
        case 0x1e24d4u: goto label_1e24d4;
        case 0x1e24d8u: goto label_1e24d8;
        case 0x1e24dcu: goto label_1e24dc;
        case 0x1e24e0u: goto label_1e24e0;
        case 0x1e24e4u: goto label_1e24e4;
        case 0x1e24e8u: goto label_1e24e8;
        case 0x1e24ecu: goto label_1e24ec;
        case 0x1e24f0u: goto label_1e24f0;
        case 0x1e24f4u: goto label_1e24f4;
        case 0x1e24f8u: goto label_1e24f8;
        case 0x1e24fcu: goto label_1e24fc;
        case 0x1e2500u: goto label_1e2500;
        case 0x1e2504u: goto label_1e2504;
        case 0x1e2508u: goto label_1e2508;
        case 0x1e250cu: goto label_1e250c;
        case 0x1e2510u: goto label_1e2510;
        case 0x1e2514u: goto label_1e2514;
        case 0x1e2518u: goto label_1e2518;
        case 0x1e251cu: goto label_1e251c;
        case 0x1e2520u: goto label_1e2520;
        case 0x1e2524u: goto label_1e2524;
        case 0x1e2528u: goto label_1e2528;
        case 0x1e252cu: goto label_1e252c;
        case 0x1e2530u: goto label_1e2530;
        case 0x1e2534u: goto label_1e2534;
        case 0x1e2538u: goto label_1e2538;
        case 0x1e253cu: goto label_1e253c;
        case 0x1e2540u: goto label_1e2540;
        case 0x1e2544u: goto label_1e2544;
        case 0x1e2548u: goto label_1e2548;
        case 0x1e254cu: goto label_1e254c;
        case 0x1e2550u: goto label_1e2550;
        case 0x1e2554u: goto label_1e2554;
        case 0x1e2558u: goto label_1e2558;
        case 0x1e255cu: goto label_1e255c;
        case 0x1e2560u: goto label_1e2560;
        case 0x1e2564u: goto label_1e2564;
        case 0x1e2568u: goto label_1e2568;
        case 0x1e256cu: goto label_1e256c;
        case 0x1e2570u: goto label_1e2570;
        case 0x1e2574u: goto label_1e2574;
        case 0x1e2578u: goto label_1e2578;
        case 0x1e257cu: goto label_1e257c;
        case 0x1e2580u: goto label_1e2580;
        case 0x1e2584u: goto label_1e2584;
        case 0x1e2588u: goto label_1e2588;
        case 0x1e258cu: goto label_1e258c;
        case 0x1e2590u: goto label_1e2590;
        case 0x1e2594u: goto label_1e2594;
        case 0x1e2598u: goto label_1e2598;
        case 0x1e259cu: goto label_1e259c;
        case 0x1e25a0u: goto label_1e25a0;
        case 0x1e25a4u: goto label_1e25a4;
        case 0x1e25a8u: goto label_1e25a8;
        case 0x1e25acu: goto label_1e25ac;
        case 0x1e25b0u: goto label_1e25b0;
        case 0x1e25b4u: goto label_1e25b4;
        case 0x1e25b8u: goto label_1e25b8;
        case 0x1e25bcu: goto label_1e25bc;
        case 0x1e25c0u: goto label_1e25c0;
        case 0x1e25c4u: goto label_1e25c4;
        case 0x1e25c8u: goto label_1e25c8;
        case 0x1e25ccu: goto label_1e25cc;
        case 0x1e25d0u: goto label_1e25d0;
        case 0x1e25d4u: goto label_1e25d4;
        case 0x1e25d8u: goto label_1e25d8;
        case 0x1e25dcu: goto label_1e25dc;
        case 0x1e25e0u: goto label_1e25e0;
        default: break;
    }

    ctx->pc = 0x1e24c0u;

label_1e24c0:
    // 0x1e24c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e24c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e24c4:
    // 0x1e24c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e24c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e24c8:
    // 0x1e24c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e24c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e24cc:
    // 0x1e24cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e24ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e24d0:
    // 0x1e24d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e24d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e24d4:
    // 0x1e24d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e24d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e24d8:
    // 0x1e24d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e24d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e24dc:
    // 0x1e24dc: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x1e24dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
label_1e24e0:
    // 0x1e24e0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1e24e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1e24e4:
    // 0x1e24e4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1e24e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1e24e8:
    // 0x1e24e8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1e24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e24ec:
    // 0x1e24ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e24ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1e24f0:
    // 0x1e24f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e24f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1e24f4:
    // 0x1e24f4: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x1e24f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1e24f8:
    // 0x1e24f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e24fc:
    if (ctx->pc == 0x1E24FCu) {
        ctx->pc = 0x1E24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24F8u;
        // 0x1e24fc: 0xffa20048  sd          $v0, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2500u;
        goto label_1e2500;
    }
    ctx->pc = 0x1E24F8u;
    {
        const bool branch_taken_0x1e24f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24F8u;
        // 0x1e24fc: 0xffa20048  sd          $v0, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24f8) {
            ctx->pc = 0x1E2508u;
            goto label_1e2508;
        }
    }
    ctx->pc = 0x1E2500u;
label_1e2500:
    // 0x1e2500: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e2504:
    if (ctx->pc == 0x1E2504u) {
        ctx->pc = 0x1E2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2500u;
        // 0x1e2504: 0x27a20048  addiu       $v0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2508u;
        goto label_1e2508;
    }
    ctx->pc = 0x1E2500u;
    {
        const bool branch_taken_0x1e2500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2500u;
        // 0x1e2504: 0x27a20048  addiu       $v0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2500) {
            ctx->pc = 0x1E250Cu;
            goto label_1e250c;
        }
    }
    ctx->pc = 0x1E2508u;
label_1e2508:
    // 0x1e2508: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1e2508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e250c:
    // 0x1e250c: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x1e250cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2510:
    // 0x1e2510: 0x1a000028  blez        $s0, . + 4 + (0x28 << 2)
label_1e2514:
    if (ctx->pc == 0x1E2514u) {
        ctx->pc = 0x1E2518u;
        goto label_1e2518;
    }
    ctx->pc = 0x1E2510u;
    {
        const bool branch_taken_0x1e2510 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1e2510) {
            ctx->pc = 0x1E25B4u;
            goto label_1e25b4;
        }
    }
    ctx->pc = 0x1E2518u;
label_1e2518:
    // 0x1e2518: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x1e2518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1e251c:
    // 0x1e251c: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x1e251cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
label_1e2520:
    // 0x1e2520: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1e2520u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_1e2524:
    // 0x1e2524: 0xc07fdfe  jal         func_1FF7F8
label_1e2528:
    if (ctx->pc == 0x1E2528u) {
        ctx->pc = 0x1E2528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2524u;
        // 0x1e2528: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E252Cu;
        goto label_1e252c;
    }
    ctx->pc = 0x1E2524u;
    SET_GPR_U32(ctx, 31, 0x1E252Cu);
    ctx->pc = 0x1E2528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2524u;
    // 0x1e2528: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1E2524u, 0x1E252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E252Cu;
label_1e252c:
    // 0x1e252c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1e252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1e2530:
    // 0x1e2530: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1e2530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_1e2534:
    // 0x1e2534: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e2534u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1e2538:
    // 0x1e2538: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1e2538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1e253c:
    // 0x1e253c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e2540:
    // 0x1e2540: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1e2540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_1e2544:
    // 0x1e2544: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e2544u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2548:
    // 0x1e2548: 0x50102f  dsubu       $v0, $v0, $s0
    ctx->pc = 0x1e2548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 16));
label_1e254c:
    // 0x1e254c: 0x10000019  b           . + 4 + (0x19 << 2)
label_1e2550:
    if (ctx->pc == 0x1E2550u) {
        ctx->pc = 0x1E2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E254Cu;
        // 0x1e2550: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2554u;
        goto label_1e2554;
    }
    ctx->pc = 0x1E254Cu;
    {
        const bool branch_taken_0x1e254c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E254Cu;
        // 0x1e2550: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e254c) {
            ctx->pc = 0x1E25B4u;
            goto label_1e25b4;
        }
    }
    ctx->pc = 0x1E2554u;
label_1e2554:
    // 0x1e2554: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1e2554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1e2558:
    // 0x1e2558: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1e2558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1e255c:
    // 0x1e255c: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x1e255cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2560:
    // 0x1e2560: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e2560u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2564:
    // 0x1e2564: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1e2568:
    if (ctx->pc == 0x1E2568u) {
        ctx->pc = 0x1E2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2564u;
        // 0x1e2568: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E256Cu;
        goto label_1e256c;
    }
    ctx->pc = 0x1E2564u;
    {
        const bool branch_taken_0x1e2564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2564u;
        // 0x1e2568: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2564) {
            ctx->pc = 0x1E2580u;
            goto label_1e2580;
        }
    }
    ctx->pc = 0x1E256Cu;
label_1e256c:
    // 0x1e256c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e2570:
    // 0x1e2570: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1e2570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_1e2574:
    // 0x1e2574: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e2574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1e2578:
    // 0x1e2578: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e257c:
    if (ctx->pc == 0x1E257Cu) {
        ctx->pc = 0x1E257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2578u;
        // 0x1e257c: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2580u;
        goto label_1e2580;
    }
    ctx->pc = 0x1E2578u;
    {
        const bool branch_taken_0x1e2578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2578u;
        // 0x1e257c: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2578) {
            ctx->pc = 0x1E2594u;
            goto label_1e2594;
        }
    }
    ctx->pc = 0x1E2580u;
label_1e2580:
    // 0x1e2580: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1e2580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e2584:
    // 0x1e2584: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1e2584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1e2588:
    // 0x1e2588: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e2588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e258c:
    // 0x1e258c: 0x320f809  jalr        $t9
label_1e2590:
    if (ctx->pc == 0x1E2590u) {
        ctx->pc = 0x1E2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E258Cu;
        // 0x1e2590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2594u;
        goto label_1e2594;
    }
    ctx->pc = 0x1E258Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2594u);
        ctx->pc = 0x1E2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E258Cu;
        // 0x1e2590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E258Cu, 0x1E2594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2594u;
label_1e2594:
    // 0x1e2594: 0x0  nop
    ctx->pc = 0x1e2594u;
    // NOP
label_1e2598:
    // 0x1e2598: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e2598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e259c:
    // 0x1e259c: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_1e25a0:
    if (ctx->pc == 0x1E25A0u) {
        ctx->pc = 0x1E25A4u;
        goto label_1e25a4;
    }
    ctx->pc = 0x1E259Cu;
    {
        const bool branch_taken_0x1e259c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e259c) {
            ctx->pc = 0x1E25C4u;
            goto label_1e25c4;
        }
    }
    ctx->pc = 0x1E25A4u;
label_1e25a4:
    // 0x1e25a4: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e25a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e25a8:
    // 0x1e25a8: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x1e25a8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
label_1e25ac:
    // 0x1e25ac: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x1e25acu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
label_1e25b0:
    // 0x1e25b0: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x1e25b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
label_1e25b4:
    // 0x1e25b4: 0x0  nop
    ctx->pc = 0x1e25b4u;
    // NOP
label_1e25b8:
    // 0x1e25b8: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e25b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e25bc:
    // 0x1e25bc: 0x1c40ffe5  bgtz        $v0, . + 4 + (-0x1B << 2)
label_1e25c0:
    if (ctx->pc == 0x1E25C0u) {
        ctx->pc = 0x1E25C4u;
        goto label_1e25c4;
    }
    ctx->pc = 0x1E25BCu;
    {
        const bool branch_taken_0x1e25bc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e25bc) {
            ctx->pc = 0x1E2554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2554;
        }
    }
    ctx->pc = 0x1E25C4u;
label_1e25c4:
    // 0x1e25c4: 0x0  nop
    ctx->pc = 0x1e25c4u;
    // NOP
label_1e25c8:
    // 0x1e25c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e25c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e25cc:
    // 0x1e25cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e25ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e25d0:
    // 0x1e25d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e25d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e25d4:
    // 0x1e25d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e25d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e25d8:
    // 0x1e25d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e25d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e25dc:
    // 0x1e25dc: 0x3e00008  jr          $ra
label_1e25e0:
    if (ctx->pc == 0x1E25E0u) {
        ctx->pc = 0x1E25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25DCu;
        // 0x1e25e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E25E4u;
        goto label_fallthrough_0x1e25dc;
    }
    ctx->pc = 0x1E25DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25DCu;
        // 0x1e25e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E25DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e25dc:
    ctx->pc = 0x1E25E4u;
}
