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

// Function: FUN_00168960
// Address: 0x168960 - 0x168ac4
void FUN_00168960_0x168960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168960_0x168960");
#endif

    switch (ctx->pc) {
        case 0x168960u: goto label_168960;
        case 0x168964u: goto label_168964;
        case 0x168968u: goto label_168968;
        case 0x16896cu: goto label_16896c;
        case 0x168970u: goto label_168970;
        case 0x168974u: goto label_168974;
        case 0x168978u: goto label_168978;
        case 0x16897cu: goto label_16897c;
        case 0x168980u: goto label_168980;
        case 0x168984u: goto label_168984;
        case 0x168988u: goto label_168988;
        case 0x16898cu: goto label_16898c;
        case 0x168990u: goto label_168990;
        case 0x168994u: goto label_168994;
        case 0x168998u: goto label_168998;
        case 0x16899cu: goto label_16899c;
        case 0x1689a0u: goto label_1689a0;
        case 0x1689a4u: goto label_1689a4;
        case 0x1689a8u: goto label_1689a8;
        case 0x1689acu: goto label_1689ac;
        case 0x1689b0u: goto label_1689b0;
        case 0x1689b4u: goto label_1689b4;
        case 0x1689b8u: goto label_1689b8;
        case 0x1689bcu: goto label_1689bc;
        case 0x1689c0u: goto label_1689c0;
        case 0x1689c4u: goto label_1689c4;
        case 0x1689c8u: goto label_1689c8;
        case 0x1689ccu: goto label_1689cc;
        case 0x1689d0u: goto label_1689d0;
        case 0x1689d4u: goto label_1689d4;
        case 0x1689d8u: goto label_1689d8;
        case 0x1689dcu: goto label_1689dc;
        case 0x1689e0u: goto label_1689e0;
        case 0x1689e4u: goto label_1689e4;
        case 0x1689e8u: goto label_1689e8;
        case 0x1689ecu: goto label_1689ec;
        case 0x1689f0u: goto label_1689f0;
        case 0x1689f4u: goto label_1689f4;
        case 0x1689f8u: goto label_1689f8;
        case 0x1689fcu: goto label_1689fc;
        case 0x168a00u: goto label_168a00;
        case 0x168a04u: goto label_168a04;
        case 0x168a08u: goto label_168a08;
        case 0x168a0cu: goto label_168a0c;
        case 0x168a10u: goto label_168a10;
        case 0x168a14u: goto label_168a14;
        case 0x168a18u: goto label_168a18;
        case 0x168a1cu: goto label_168a1c;
        case 0x168a20u: goto label_168a20;
        case 0x168a24u: goto label_168a24;
        case 0x168a28u: goto label_168a28;
        case 0x168a2cu: goto label_168a2c;
        case 0x168a30u: goto label_168a30;
        case 0x168a34u: goto label_168a34;
        case 0x168a38u: goto label_168a38;
        case 0x168a3cu: goto label_168a3c;
        case 0x168a40u: goto label_168a40;
        case 0x168a44u: goto label_168a44;
        case 0x168a48u: goto label_168a48;
        case 0x168a4cu: goto label_168a4c;
        case 0x168a50u: goto label_168a50;
        case 0x168a54u: goto label_168a54;
        case 0x168a58u: goto label_168a58;
        case 0x168a5cu: goto label_168a5c;
        case 0x168a60u: goto label_168a60;
        case 0x168a64u: goto label_168a64;
        case 0x168a68u: goto label_168a68;
        case 0x168a6cu: goto label_168a6c;
        case 0x168a70u: goto label_168a70;
        case 0x168a74u: goto label_168a74;
        case 0x168a78u: goto label_168a78;
        case 0x168a7cu: goto label_168a7c;
        case 0x168a80u: goto label_168a80;
        case 0x168a84u: goto label_168a84;
        case 0x168a88u: goto label_168a88;
        case 0x168a8cu: goto label_168a8c;
        case 0x168a90u: goto label_168a90;
        case 0x168a94u: goto label_168a94;
        case 0x168a98u: goto label_168a98;
        case 0x168a9cu: goto label_168a9c;
        case 0x168aa0u: goto label_168aa0;
        case 0x168aa4u: goto label_168aa4;
        case 0x168aa8u: goto label_168aa8;
        case 0x168aacu: goto label_168aac;
        case 0x168ab0u: goto label_168ab0;
        case 0x168ab4u: goto label_168ab4;
        case 0x168ab8u: goto label_168ab8;
        case 0x168abcu: goto label_168abc;
        case 0x168ac0u: goto label_168ac0;
        default: break;
    }

    ctx->pc = 0x168960u;

label_168960:
    // 0x168960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x168960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_168964:
    // 0x168964: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x168964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_168968:
    // 0x168968: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x168968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_16896c:
    // 0x16896c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16896cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_168970:
    // 0x168970: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x168970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_168974:
    // 0x168974: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x168974u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_168978:
    // 0x168978: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x168978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_16897c:
    // 0x16897c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_168980:
    if (ctx->pc == 0x168980u) {
        ctx->pc = 0x168980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16897Cu;
        // 0x168980: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168984u;
        goto label_168984;
    }
    ctx->pc = 0x16897Cu;
    {
        const bool branch_taken_0x16897c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16897Cu;
        // 0x168980: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16897c) {
            ctx->pc = 0x1689A4u;
            goto label_1689a4;
        }
    }
    ctx->pc = 0x168984u;
label_168984:
    // 0x168984: 0x844301e8  lh          $v1, 0x1E8($v0)
    ctx->pc = 0x168984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 488)));
label_168988:
    // 0x168988: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16898c:
    // 0x16898c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_168990:
    if (ctx->pc == 0x168990u) {
        ctx->pc = 0x168994u;
        goto label_168994;
    }
    ctx->pc = 0x16898Cu;
    {
        const bool branch_taken_0x16898c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16898c) {
            ctx->pc = 0x1689A4u;
            goto label_1689a4;
        }
    }
    ctx->pc = 0x168994u;
label_168994:
    // 0x168994: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x168994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_168998:
    // 0x168998: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x168998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_16899c:
    // 0x16899c: 0x320f809  jalr        $t9
label_1689a0:
    if (ctx->pc == 0x1689A0u) {
        ctx->pc = 0x1689A4u;
        goto label_1689a4;
    }
    ctx->pc = 0x16899Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1689A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16899Cu, 0x1689A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1689A4u;
label_1689a4:
    // 0x1689a4: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x1689a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_1689a8:
    // 0x1689a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1689a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1689ac:
    // 0x1689ac: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1689b0:
    if (ctx->pc == 0x1689B0u) {
        ctx->pc = 0x1689B4u;
        goto label_1689b4;
    }
    ctx->pc = 0x1689ACu;
    {
        const bool branch_taken_0x1689ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1689ac) {
            ctx->pc = 0x1689C4u;
            goto label_1689c4;
        }
    }
    ctx->pc = 0x1689B4u;
label_1689b4:
    // 0x1689b4: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_1689b8:
    if (ctx->pc == 0x1689B8u) {
        ctx->pc = 0x1689B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689B4u;
        // 0x1689b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1689BCu;
        goto label_1689bc;
    }
    ctx->pc = 0x1689B4u;
    {
        const bool branch_taken_0x1689b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689B4u;
        // 0x1689b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689b4) {
            ctx->pc = 0x168AACu;
            goto label_168aac;
        }
    }
    ctx->pc = 0x1689BCu;
label_1689bc:
    // 0x1689bc: 0x10000028  b           . + 4 + (0x28 << 2)
label_1689c0:
    if (ctx->pc == 0x1689C0u) {
        ctx->pc = 0x1689C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689BCu;
        // 0x1689c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1689C4u;
        goto label_1689c4;
    }
    ctx->pc = 0x1689BCu;
    {
        const bool branch_taken_0x1689bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689BCu;
        // 0x1689c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689bc) {
            ctx->pc = 0x168A60u;
            goto label_168a60;
        }
    }
    ctx->pc = 0x1689C4u;
label_1689c4:
    // 0x1689c4: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x1689c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_1689c8:
    // 0x1689c8: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
label_1689cc:
    if (ctx->pc == 0x1689CCu) {
        ctx->pc = 0x1689CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689C8u;
        // 0x1689cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1689D0u;
        goto label_1689d0;
    }
    ctx->pc = 0x1689C8u;
    {
        const bool branch_taken_0x1689c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1689CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689C8u;
        // 0x1689cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689c8) {
            ctx->pc = 0x1689D8u;
            goto label_1689d8;
        }
    }
    ctx->pc = 0x1689D0u;
label_1689d0:
    // 0x1689d0: 0x10000037  b           . + 4 + (0x37 << 2)
label_1689d4:
    if (ctx->pc == 0x1689D4u) {
        ctx->pc = 0x1689D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689D0u;
        // 0x1689d4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1689D8u;
        goto label_1689d8;
    }
    ctx->pc = 0x1689D0u;
    {
        const bool branch_taken_0x1689d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689D0u;
        // 0x1689d4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689d0) {
            ctx->pc = 0x168AB0u;
            goto label_168ab0;
        }
    }
    ctx->pc = 0x1689D8u;
label_1689d8:
    // 0x1689d8: 0xc6340024  lwc1        $f20, 0x24($s1)
    ctx->pc = 0x1689d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1689dc:
    // 0x1689dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1689dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1689e0:
    // 0x1689e0: 0xc07eea2  jal         func_1FBA88
label_1689e4:
    if (ctx->pc == 0x1689E4u) {
        ctx->pc = 0x1689E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689E0u;
        // 0x1689e4: 0xae2001d4  sw          $zero, 0x1D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1689E8u;
        goto label_1689e8;
    }
    ctx->pc = 0x1689E0u;
    SET_GPR_U32(ctx, 31, 0x1689E8u);
    ctx->pc = 0x1689E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1689E0u;
    // 0x1689e4: 0xae2001d4  sw          $zero, 0x1D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1689E0u, 0x1689E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1689E8u;
label_1689e8:
    // 0x1689e8: 0xc07edc4  jal         func_1FB710
label_1689ec:
    if (ctx->pc == 0x1689ECu) {
        ctx->pc = 0x1689ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689E8u;
        // 0x1689ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1689F0u;
        goto label_1689f0;
    }
    ctx->pc = 0x1689E8u;
    SET_GPR_U32(ctx, 31, 0x1689F0u);
    ctx->pc = 0x1689ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1689E8u;
    // 0x1689ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x1689E8u, 0x1689F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1689F0u;
label_1689f0:
    // 0x1689f0: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x1689f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_1689f4:
    // 0x1689f4: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x1689f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
label_1689f8:
    // 0x1689f8: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1689f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1689fc:
    // 0x1689fc: 0x4a402107  vsubw.z     $vf4, $vf4, $vf0w
    ctx->pc = 0x1689fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_168a00:
    // 0x168a00: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x168a00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_168a04:
    // 0x168a04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x168a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168a08:
    // 0x168a08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x168a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_168a0c:
    // 0x168a0c: 0xc44d0054  lwc1        $f13, 0x54($v0)
    ctx->pc = 0x168a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_168a10:
    // 0x168a10: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x168a10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168a14:
    // 0x168a14: 0x0  nop
    ctx->pc = 0x168a14u;
    // NOP
label_168a18:
    // 0x168a18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_168a1c:
    if (ctx->pc == 0x168A1Cu) {
        ctx->pc = 0x168A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A18u;
        // 0x168a1c: 0x3c023f99  lui         $v0, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A20u;
        goto label_168a20;
    }
    ctx->pc = 0x168A18u;
    {
        const bool branch_taken_0x168a18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x168A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A18u;
        // 0x168a1c: 0x3c023f99  lui         $v0, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a18) {
            ctx->pc = 0x168A28u;
            goto label_168a28;
        }
    }
    ctx->pc = 0x168A20u;
label_168a20:
    // 0x168a20: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x168a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_168a24:
    // 0x168a24: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x168a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_168a28:
    // 0x168a28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x168a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_168a2c:
    // 0x168a2c: 0xc056194  jal         func_158650
label_168a30:
    if (ctx->pc == 0x168A30u) {
        ctx->pc = 0x168A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A2Cu;
        // 0x168a30: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A34u;
        goto label_168a34;
    }
    ctx->pc = 0x168A2Cu;
    SET_GPR_U32(ctx, 31, 0x168A34u);
    ctx->pc = 0x168A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A2Cu;
    // 0x168a30: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x168A2Cu, 0x168A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A34u;
label_168a34:
    // 0x168a34: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x168a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_168a38:
    // 0x168a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_168a3c:
    // 0x168a3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x168a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168a40:
    // 0x168a40: 0xa44001e8  sh          $zero, 0x1E8($v0)
    ctx->pc = 0x168a40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 488), (uint16_t)GPR_U32(ctx, 0));
label_168a44:
    // 0x168a44: 0xc042570  jal         func_1095C0
label_168a48:
    if (ctx->pc == 0x168A48u) {
        ctx->pc = 0x168A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A44u;
        // 0x168a48: 0xae200220  sw          $zero, 0x220($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A4Cu;
        goto label_168a4c;
    }
    ctx->pc = 0x168A44u;
    SET_GPR_U32(ctx, 31, 0x168A4Cu);
    ctx->pc = 0x168A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A44u;
    // 0x168a48: 0xae200220  sw          $zero, 0x220($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x168A44u, 0x168A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A4Cu;
label_168a4c:
    // 0x168a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_168a50:
    // 0x168a50: 0xc042118  jal         func_108460
label_168a54:
    if (ctx->pc == 0x168A54u) {
        ctx->pc = 0x168A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A50u;
        // 0x168a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A58u;
        goto label_168a58;
    }
    ctx->pc = 0x168A50u;
    SET_GPR_U32(ctx, 31, 0x168A58u);
    ctx->pc = 0x168A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A50u;
    // 0x168a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x168A50u, 0x168A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A58u;
label_168a58:
    // 0x168a58: 0x10000014  b           . + 4 + (0x14 << 2)
label_168a5c:
    if (ctx->pc == 0x168A5Cu) {
        ctx->pc = 0x168A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A58u;
        // 0x168a5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A60u;
        goto label_168a60;
    }
    ctx->pc = 0x168A58u;
    {
        const bool branch_taken_0x168a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A58u;
        // 0x168a5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a58) {
            ctx->pc = 0x168AACu;
            goto label_168aac;
        }
    }
    ctx->pc = 0x168A60u;
label_168a60:
    // 0x168a60: 0xc042570  jal         func_1095C0
label_168a64:
    if (ctx->pc == 0x168A64u) {
        ctx->pc = 0x168A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A60u;
        // 0x168a64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A68u;
        goto label_168a68;
    }
    ctx->pc = 0x168A60u;
    SET_GPR_U32(ctx, 31, 0x168A68u);
    ctx->pc = 0x168A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A60u;
    // 0x168a64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x168A60u, 0x168A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A68u;
label_168a68:
    // 0x168a68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x168a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_168a6c:
    // 0x168a6c: 0xae2201d4  sw          $v0, 0x1D4($s1)
    ctx->pc = 0x168a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 2));
label_168a70:
    // 0x168a70: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x168a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_168a74:
    // 0x168a74: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_168a78:
    if (ctx->pc == 0x168A78u) {
        ctx->pc = 0x168A7Cu;
        goto label_168a7c;
    }
    ctx->pc = 0x168A74u;
    {
        const bool branch_taken_0x168a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168a74) {
            ctx->pc = 0x168A80u;
            goto label_168a80;
        }
    }
    ctx->pc = 0x168A7Cu;
label_168a7c:
    // 0x168a7c: 0xae300220  sw          $s0, 0x220($s1)
    ctx->pc = 0x168a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 16));
label_168a80:
    // 0x168a80: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x168a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_168a84:
    // 0x168a84: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
label_168a88:
    if (ctx->pc == 0x168A88u) {
        ctx->pc = 0x168A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A84u;
        // 0x168a88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A8Cu;
        goto label_168a8c;
    }
    ctx->pc = 0x168A84u;
    {
        const bool branch_taken_0x168a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x168A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A84u;
        // 0x168a88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a84) {
            ctx->pc = 0x168AACu;
            goto label_168aac;
        }
    }
    ctx->pc = 0x168A8Cu;
label_168a8c:
    // 0x168a8c: 0x7a260010  lq          $a2, 0x10($s1)
    ctx->pc = 0x168a8cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_168a90:
    // 0x168a90: 0x7e060000  sq          $a2, 0x0($s0)
    ctx->pc = 0x168a90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 6));
label_168a94:
    // 0x168a94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x168a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_168a98:
    // 0x168a98: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x168a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_168a9c:
    // 0x168a9c: 0xc055c40  jal         func_157100
label_168aa0:
    if (ctx->pc == 0x168AA0u) {
        ctx->pc = 0x168AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A9Cu;
        // 0x168aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168AA4u;
        goto label_168aa4;
    }
    ctx->pc = 0x168A9Cu;
    SET_GPR_U32(ctx, 31, 0x168AA4u);
    ctx->pc = 0x168AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A9Cu;
    // 0x168aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x168A9Cu, 0x168AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168AA4u;
label_168aa4:
    // 0x168aa4: 0x10000001  b           . + 4 + (0x1 << 2)
label_168aa8:
    if (ctx->pc == 0x168AA8u) {
        ctx->pc = 0x168AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168AA4u;
        // 0x168aa8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168AACu;
        goto label_168aac;
    }
    ctx->pc = 0x168AA4u;
    {
        const bool branch_taken_0x168aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168AA4u;
        // 0x168aa8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168aa4) {
            ctx->pc = 0x168AACu;
            goto label_168aac;
        }
    }
    ctx->pc = 0x168AACu;
label_168aac:
    // 0x168aac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x168aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_168ab0:
    // 0x168ab0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x168ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_168ab4:
    // 0x168ab4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x168ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_168ab8:
    // 0x168ab8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x168ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_168abc:
    // 0x168abc: 0x3e00008  jr          $ra
label_168ac0:
    if (ctx->pc == 0x168AC0u) {
        ctx->pc = 0x168AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168ABCu;
        // 0x168ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168AC4u;
        goto label_fallthrough_0x168abc;
    }
    ctx->pc = 0x168ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168ABCu;
        // 0x168ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x168abc:
    ctx->pc = 0x168AC4u;
}
