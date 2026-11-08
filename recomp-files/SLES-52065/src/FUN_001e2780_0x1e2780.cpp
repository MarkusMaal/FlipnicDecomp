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

// Function: FUN_001e2780
// Address: 0x1e2780 - 0x1e295c
void FUN_001e2780_0x1e2780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e2780_0x1e2780");
#endif

    switch (ctx->pc) {
        case 0x1e2780u: goto label_1e2780;
        case 0x1e2784u: goto label_1e2784;
        case 0x1e2788u: goto label_1e2788;
        case 0x1e278cu: goto label_1e278c;
        case 0x1e2790u: goto label_1e2790;
        case 0x1e2794u: goto label_1e2794;
        case 0x1e2798u: goto label_1e2798;
        case 0x1e279cu: goto label_1e279c;
        case 0x1e27a0u: goto label_1e27a0;
        case 0x1e27a4u: goto label_1e27a4;
        case 0x1e27a8u: goto label_1e27a8;
        case 0x1e27acu: goto label_1e27ac;
        case 0x1e27b0u: goto label_1e27b0;
        case 0x1e27b4u: goto label_1e27b4;
        case 0x1e27b8u: goto label_1e27b8;
        case 0x1e27bcu: goto label_1e27bc;
        case 0x1e27c0u: goto label_1e27c0;
        case 0x1e27c4u: goto label_1e27c4;
        case 0x1e27c8u: goto label_1e27c8;
        case 0x1e27ccu: goto label_1e27cc;
        case 0x1e27d0u: goto label_1e27d0;
        case 0x1e27d4u: goto label_1e27d4;
        case 0x1e27d8u: goto label_1e27d8;
        case 0x1e27dcu: goto label_1e27dc;
        case 0x1e27e0u: goto label_1e27e0;
        case 0x1e27e4u: goto label_1e27e4;
        case 0x1e27e8u: goto label_1e27e8;
        case 0x1e27ecu: goto label_1e27ec;
        case 0x1e27f0u: goto label_1e27f0;
        case 0x1e27f4u: goto label_1e27f4;
        case 0x1e27f8u: goto label_1e27f8;
        case 0x1e27fcu: goto label_1e27fc;
        case 0x1e2800u: goto label_1e2800;
        case 0x1e2804u: goto label_1e2804;
        case 0x1e2808u: goto label_1e2808;
        case 0x1e280cu: goto label_1e280c;
        case 0x1e2810u: goto label_1e2810;
        case 0x1e2814u: goto label_1e2814;
        case 0x1e2818u: goto label_1e2818;
        case 0x1e281cu: goto label_1e281c;
        case 0x1e2820u: goto label_1e2820;
        case 0x1e2824u: goto label_1e2824;
        case 0x1e2828u: goto label_1e2828;
        case 0x1e282cu: goto label_1e282c;
        case 0x1e2830u: goto label_1e2830;
        case 0x1e2834u: goto label_1e2834;
        case 0x1e2838u: goto label_1e2838;
        case 0x1e283cu: goto label_1e283c;
        case 0x1e2840u: goto label_1e2840;
        case 0x1e2844u: goto label_1e2844;
        case 0x1e2848u: goto label_1e2848;
        case 0x1e284cu: goto label_1e284c;
        case 0x1e2850u: goto label_1e2850;
        case 0x1e2854u: goto label_1e2854;
        case 0x1e2858u: goto label_1e2858;
        case 0x1e285cu: goto label_1e285c;
        case 0x1e2860u: goto label_1e2860;
        case 0x1e2864u: goto label_1e2864;
        case 0x1e2868u: goto label_1e2868;
        case 0x1e286cu: goto label_1e286c;
        case 0x1e2870u: goto label_1e2870;
        case 0x1e2874u: goto label_1e2874;
        case 0x1e2878u: goto label_1e2878;
        case 0x1e287cu: goto label_1e287c;
        case 0x1e2880u: goto label_1e2880;
        case 0x1e2884u: goto label_1e2884;
        case 0x1e2888u: goto label_1e2888;
        case 0x1e288cu: goto label_1e288c;
        case 0x1e2890u: goto label_1e2890;
        case 0x1e2894u: goto label_1e2894;
        case 0x1e2898u: goto label_1e2898;
        case 0x1e289cu: goto label_1e289c;
        case 0x1e28a0u: goto label_1e28a0;
        case 0x1e28a4u: goto label_1e28a4;
        case 0x1e28a8u: goto label_1e28a8;
        case 0x1e28acu: goto label_1e28ac;
        case 0x1e28b0u: goto label_1e28b0;
        case 0x1e28b4u: goto label_1e28b4;
        case 0x1e28b8u: goto label_1e28b8;
        case 0x1e28bcu: goto label_1e28bc;
        case 0x1e28c0u: goto label_1e28c0;
        case 0x1e28c4u: goto label_1e28c4;
        case 0x1e28c8u: goto label_1e28c8;
        case 0x1e28ccu: goto label_1e28cc;
        case 0x1e28d0u: goto label_1e28d0;
        case 0x1e28d4u: goto label_1e28d4;
        case 0x1e28d8u: goto label_1e28d8;
        case 0x1e28dcu: goto label_1e28dc;
        case 0x1e28e0u: goto label_1e28e0;
        case 0x1e28e4u: goto label_1e28e4;
        case 0x1e28e8u: goto label_1e28e8;
        case 0x1e28ecu: goto label_1e28ec;
        case 0x1e28f0u: goto label_1e28f0;
        case 0x1e28f4u: goto label_1e28f4;
        case 0x1e28f8u: goto label_1e28f8;
        case 0x1e28fcu: goto label_1e28fc;
        case 0x1e2900u: goto label_1e2900;
        case 0x1e2904u: goto label_1e2904;
        case 0x1e2908u: goto label_1e2908;
        case 0x1e290cu: goto label_1e290c;
        case 0x1e2910u: goto label_1e2910;
        case 0x1e2914u: goto label_1e2914;
        case 0x1e2918u: goto label_1e2918;
        case 0x1e291cu: goto label_1e291c;
        case 0x1e2920u: goto label_1e2920;
        case 0x1e2924u: goto label_1e2924;
        case 0x1e2928u: goto label_1e2928;
        case 0x1e292cu: goto label_1e292c;
        case 0x1e2930u: goto label_1e2930;
        case 0x1e2934u: goto label_1e2934;
        case 0x1e2938u: goto label_1e2938;
        case 0x1e293cu: goto label_1e293c;
        case 0x1e2940u: goto label_1e2940;
        case 0x1e2944u: goto label_1e2944;
        case 0x1e2948u: goto label_1e2948;
        case 0x1e294cu: goto label_1e294c;
        case 0x1e2950u: goto label_1e2950;
        case 0x1e2954u: goto label_1e2954;
        case 0x1e2958u: goto label_1e2958;
        default: break;
    }

    ctx->pc = 0x1e2780u;

label_1e2780:
    // 0x1e2780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e2780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e2784:
    // 0x1e2784: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e2784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e2788:
    // 0x1e2788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e2788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e278c:
    // 0x1e278c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e278cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e2790:
    // 0x1e2790: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e2790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2794:
    // 0x1e2794: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e2798:
    // 0x1e2798: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e2798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e279c:
    // 0x1e279c: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x1e279cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
label_1e27a0:
    // 0x1e27a0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1e27a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1e27a4:
    // 0x1e27a4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1e27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1e27a8:
    // 0x1e27a8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e27a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e27ac:
    // 0x1e27ac: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e27b0:
    if (ctx->pc == 0x1E27B0u) {
        ctx->pc = 0x1E27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27ACu;
        // 0x1e27b0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E27B4u;
        goto label_1e27b4;
    }
    ctx->pc = 0x1E27ACu;
    {
        const bool branch_taken_0x1e27ac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27ACu;
        // 0x1e27b0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27ac) {
            ctx->pc = 0x1E27BCu;
            goto label_1e27bc;
        }
    }
    ctx->pc = 0x1E27B4u;
label_1e27b4:
    // 0x1e27b4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e27b8:
    // 0x1e27b8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e27b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1e27bc:
    // 0x1e27bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e27bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1e27c0:
    // 0x1e27c0: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e27c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e27c4:
    // 0x1e27c4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e27c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1e27c8:
    // 0x1e27c8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e27c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e27cc:
    // 0x1e27cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e27d0:
    if (ctx->pc == 0x1E27D0u) {
        ctx->pc = 0x1E27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27CCu;
        // 0x1e27d0: 0xffa30048  sd          $v1, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E27D4u;
        goto label_1e27d4;
    }
    ctx->pc = 0x1E27CCu;
    {
        const bool branch_taken_0x1e27cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27CCu;
        // 0x1e27d0: 0xffa30048  sd          $v1, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27cc) {
            ctx->pc = 0x1E27DCu;
            goto label_1e27dc;
        }
    }
    ctx->pc = 0x1E27D4u;
label_1e27d4:
    // 0x1e27d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e27d8:
    if (ctx->pc == 0x1E27D8u) {
        ctx->pc = 0x1E27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27D4u;
        // 0x1e27d8: 0x27a20048  addiu       $v0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E27DCu;
        goto label_1e27dc;
    }
    ctx->pc = 0x1E27D4u;
    {
        const bool branch_taken_0x1e27d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27D4u;
        // 0x1e27d8: 0x27a20048  addiu       $v0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27d4) {
            ctx->pc = 0x1E27E0u;
            goto label_1e27e0;
        }
    }
    ctx->pc = 0x1E27DCu;
label_1e27dc:
    // 0x1e27dc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1e27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e27e0:
    // 0x1e27e0: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x1e27e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1e27e4:
    // 0x1e27e4: 0x1a000051  blez        $s0, . + 4 + (0x51 << 2)
label_1e27e8:
    if (ctx->pc == 0x1E27E8u) {
        ctx->pc = 0x1E27ECu;
        goto label_1e27ec;
    }
    ctx->pc = 0x1E27E4u;
    {
        const bool branch_taken_0x1e27e4 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1e27e4) {
            ctx->pc = 0x1E292Cu;
            goto label_1e292c;
        }
    }
    ctx->pc = 0x1E27ECu;
label_1e27ec:
    // 0x1e27ec: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x1e27ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1e27f0:
    // 0x1e27f0: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1e27f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_1e27f4:
    // 0x1e27f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e27f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1e27f8:
    // 0x1e27f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1e27f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e27fc:
    // 0x1e27fc: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1e27fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2800:
    // 0x1e2800: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_1e2804:
    if (ctx->pc == 0x1E2804u) {
        ctx->pc = 0x1E2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2800u;
        // 0x1e2804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2808u;
        goto label_1e2808;
    }
    ctx->pc = 0x1E2800u;
    {
        const bool branch_taken_0x1e2800 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2800u;
        // 0x1e2804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2800) {
            ctx->pc = 0x1E28A4u;
            goto label_1e28a4;
        }
    }
    ctx->pc = 0x1E2808u;
label_1e2808:
    // 0x1e2808: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x1e2808u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1e280c:
    // 0x1e280c: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
label_1e2810:
    if (ctx->pc == 0x1E2810u) {
        ctx->pc = 0x1E2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E280Cu;
        // 0x1e2810: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2814u;
        goto label_1e2814;
    }
    ctx->pc = 0x1E280Cu;
    {
        const bool branch_taken_0x1e280c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E280Cu;
        // 0x1e2810: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e280c) {
            ctx->pc = 0x1E2870u;
            goto label_1e2870;
        }
    }
    ctx->pc = 0x1E2814u;
label_1e2814:
    // 0x1e2814: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x1e2814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1e2818:
    // 0x1e2818: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e2818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1e281c:
    // 0x1e281c: 0x24e8000e  addiu       $t0, $a3, 0xE
    ctx->pc = 0x1e281cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 14));
label_1e2820:
    // 0x1e2820: 0x24c9000e  addiu       $t1, $a2, 0xE
    ctx->pc = 0x1e2820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 14));
label_1e2824:
    // 0x1e2824: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1e2824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1e2828:
    // 0x1e2828: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x1e2828u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e282c:
    // 0x1e282c: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x1e282cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_1e2830:
    // 0x1e2830: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x1e2830u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
label_1e2834:
    // 0x1e2834: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x1e2834u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_1e2838:
    // 0x1e2838: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x1e2838u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
label_1e283c:
    // 0x1e283c: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x1e283cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_1e2840:
    // 0x1e2840: 0xa4c30006  sh          $v1, 0x6($a2)
    ctx->pc = 0x1e2840u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 3));
label_1e2844:
    // 0x1e2844: 0x94e30008  lhu         $v1, 0x8($a3)
    ctx->pc = 0x1e2844u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_1e2848:
    // 0x1e2848: 0xa4c30008  sh          $v1, 0x8($a2)
    ctx->pc = 0x1e2848u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 3));
label_1e284c:
    // 0x1e284c: 0x94e3000a  lhu         $v1, 0xA($a3)
    ctx->pc = 0x1e284cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1e2850:
    // 0x1e2850: 0xa4c3000a  sh          $v1, 0xA($a2)
    ctx->pc = 0x1e2850u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 3));
label_1e2854:
    // 0x1e2854: 0x94e3000c  lhu         $v1, 0xC($a3)
    ctx->pc = 0x1e2854u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
label_1e2858:
    // 0x1e2858: 0xa4c3000c  sh          $v1, 0xC($a2)
    ctx->pc = 0x1e2858u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 3));
label_1e285c:
    // 0x1e285c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1e285cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1e2860:
    // 0x1e2860: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x1e2860u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_1e2864:
    // 0x1e2864: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1e2864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1e2868:
    // 0x1e2868: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_1e286c:
    if (ctx->pc == 0x1E286Cu) {
        ctx->pc = 0x1E286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2868u;
        // 0x1e286c: 0xa5230000  sh          $v1, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2870u;
        goto label_1e2870;
    }
    ctx->pc = 0x1E2868u;
    {
        const bool branch_taken_0x1e2868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2868u;
        // 0x1e286c: 0xa5230000  sh          $v1, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2868) {
            ctx->pc = 0x1E2814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2814;
        }
    }
    ctx->pc = 0x1E2870u;
label_1e2870:
    // 0x1e2870: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1e2870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
label_1e2874:
    // 0x1e2874: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1e2874u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1e2878:
    // 0x1e2878: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x1e2878u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1e287c:
    // 0x1e287c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e2880:
    if (ctx->pc == 0x1E2880u) {
        ctx->pc = 0x1E2884u;
        goto label_1e2884;
    }
    ctx->pc = 0x1E287Cu;
    {
        const bool branch_taken_0x1e287c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e287c) {
            ctx->pc = 0x1E28A4u;
            goto label_1e28a4;
        }
    }
    ctx->pc = 0x1E2884u;
label_1e2884:
    // 0x1e2884: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x1e2884u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1e2888:
    // 0x1e2888: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1e2888u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e288c:
    // 0x1e288c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e288cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1e2890:
    // 0x1e2890: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1e2890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1e2894:
    // 0x1e2894: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1e2894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1e2898:
    // 0x1e2898: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1e2898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_1e289c:
    // 0x1e289c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1e28a0:
    if (ctx->pc == 0x1E28A0u) {
        ctx->pc = 0x1E28A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E289Cu;
        // 0x1e28a0: 0xa5030000  sh          $v1, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E28A4u;
        goto label_1e28a4;
    }
    ctx->pc = 0x1E289Cu;
    {
        const bool branch_taken_0x1e289c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E28A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E289Cu;
        // 0x1e28a0: 0xa5030000  sh          $v1, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e289c) {
            ctx->pc = 0x1E2884u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2884;
        }
    }
    ctx->pc = 0x1E28A4u;
label_1e28a4:
    // 0x1e28a4: 0x0  nop
    ctx->pc = 0x1e28a4u;
    // NOP
label_1e28a8:
    // 0x1e28a8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1e28a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1e28ac:
    // 0x1e28ac: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1e28acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1e28b0:
    // 0x1e28b0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1e28b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1e28b4:
    // 0x1e28b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e28b8:
    // 0x1e28b8: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1e28b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_1e28bc:
    // 0x1e28bc: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e28bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e28c0:
    // 0x1e28c0: 0x50102f  dsubu       $v0, $v0, $s0
    ctx->pc = 0x1e28c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 16));
label_1e28c4:
    // 0x1e28c4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1e28c8:
    if (ctx->pc == 0x1E28C8u) {
        ctx->pc = 0x1E28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28C4u;
        // 0x1e28c8: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E28CCu;
        goto label_1e28cc;
    }
    ctx->pc = 0x1E28C4u;
    {
        const bool branch_taken_0x1e28c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28C4u;
        // 0x1e28c8: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28c4) {
            ctx->pc = 0x1E292Cu;
            goto label_1e292c;
        }
    }
    ctx->pc = 0x1E28CCu;
label_1e28cc:
    // 0x1e28cc: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1e28ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1e28d0:
    // 0x1e28d0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1e28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1e28d4:
    // 0x1e28d4: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x1e28d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1e28d8:
    // 0x1e28d8: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e28d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e28dc:
    // 0x1e28dc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1e28e0:
    if (ctx->pc == 0x1E28E0u) {
        ctx->pc = 0x1E28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28DCu;
        // 0x1e28e0: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E28E4u;
        goto label_1e28e4;
    }
    ctx->pc = 0x1E28DCu;
    {
        const bool branch_taken_0x1e28dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28DCu;
        // 0x1e28e0: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28dc) {
            ctx->pc = 0x1E28F8u;
            goto label_1e28f8;
        }
    }
    ctx->pc = 0x1E28E4u;
label_1e28e4:
    // 0x1e28e4: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x1e28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1e28e8:
    // 0x1e28e8: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1e28e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_1e28ec:
    // 0x1e28ec: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1e28ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_1e28f0:
    // 0x1e28f0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e28f4:
    if (ctx->pc == 0x1E28F4u) {
        ctx->pc = 0x1E28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28F0u;
        // 0x1e28f4: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E28F8u;
        goto label_1e28f8;
    }
    ctx->pc = 0x1E28F0u;
    {
        const bool branch_taken_0x1e28f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28F0u;
        // 0x1e28f4: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28f0) {
            ctx->pc = 0x1E290Cu;
            goto label_1e290c;
        }
    }
    ctx->pc = 0x1E28F8u;
label_1e28f8:
    // 0x1e28f8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1e28f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e28fc:
    // 0x1e28fc: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1e28fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1e2900:
    // 0x1e2900: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e2900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e2904:
    // 0x1e2904: 0x320f809  jalr        $t9
label_1e2908:
    if (ctx->pc == 0x1E2908u) {
        ctx->pc = 0x1E2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2904u;
        // 0x1e2908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E290Cu;
        goto label_1e290c;
    }
    ctx->pc = 0x1E2904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E290Cu);
        ctx->pc = 0x1E2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2904u;
        // 0x1e2908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2904u, 0x1E290Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E290Cu;
label_1e290c:
    // 0x1e290c: 0x0  nop
    ctx->pc = 0x1e290cu;
    // NOP
label_1e2910:
    // 0x1e2910: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e2910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e2914:
    // 0x1e2914: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_1e2918:
    if (ctx->pc == 0x1E2918u) {
        ctx->pc = 0x1E291Cu;
        goto label_1e291c;
    }
    ctx->pc = 0x1E2914u;
    {
        const bool branch_taken_0x1e2914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e2914) {
            ctx->pc = 0x1E293Cu;
            goto label_1e293c;
        }
    }
    ctx->pc = 0x1E291Cu;
label_1e291c:
    // 0x1e291c: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e291cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2920:
    // 0x1e2920: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x1e2920u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
label_1e2924:
    // 0x1e2924: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x1e2924u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
label_1e2928:
    // 0x1e2928: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x1e2928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
label_1e292c:
    // 0x1e292c: 0x0  nop
    ctx->pc = 0x1e292cu;
    // NOP
label_1e2930:
    // 0x1e2930: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e2930u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2934:
    // 0x1e2934: 0x1c40ffe5  bgtz        $v0, . + 4 + (-0x1B << 2)
label_1e2938:
    if (ctx->pc == 0x1E2938u) {
        ctx->pc = 0x1E293Cu;
        goto label_1e293c;
    }
    ctx->pc = 0x1E2934u;
    {
        const bool branch_taken_0x1e2934 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e2934) {
            ctx->pc = 0x1E28CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e28cc;
        }
    }
    ctx->pc = 0x1E293Cu;
label_1e293c:
    // 0x1e293c: 0x0  nop
    ctx->pc = 0x1e293cu;
    // NOP
label_1e2940:
    // 0x1e2940: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e2940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2944:
    // 0x1e2944: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e2944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e2948:
    // 0x1e2948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e2948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e294c:
    // 0x1e294c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e294cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2950:
    // 0x1e2950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2954:
    // 0x1e2954: 0x3e00008  jr          $ra
label_1e2958:
    if (ctx->pc == 0x1E2958u) {
        ctx->pc = 0x1E2958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2954u;
        // 0x1e2958: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E295Cu;
        goto label_fallthrough_0x1e2954;
    }
    ctx->pc = 0x1E2954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2954u;
        // 0x1e2958: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e2954:
    ctx->pc = 0x1E295Cu;
}
