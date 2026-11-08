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

// Function: FUN_00164450
// Address: 0x164450 - 0x164918
void FUN_00164450_0x164450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00164450_0x164450");
#endif

    switch (ctx->pc) {
        case 0x164534u: goto label_164534;
        case 0x16459cu: goto label_16459c;
        case 0x1645b8u: goto label_1645b8;
        case 0x164704u: goto label_164704;
        case 0x164720u: goto label_164720;
        case 0x1647fcu: goto label_1647fc;
        case 0x164864u: goto label_164864;
        default: break;
    }

    ctx->pc = 0x164450u;

    // 0x164450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x164450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x164454: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x164454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x164458: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x164458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16445c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16445cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x164460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x164464: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x164464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16446c: 0xc4a002f0  lwc1        $f0, 0x2F0($a1)
    ctx->pc = 0x16446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164470: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x164470u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164474: 0x0  nop
    ctx->pc = 0x164474u;
    // NOP
    // 0x164478: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x164478u;
    {
        const bool branch_taken_0x164478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164478u;
        // 0x16447c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164478) {
            ctx->pc = 0x164488u;
            goto label_164488;
        }
    }
    ctx->pc = 0x164480u;
    // 0x164480: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x164480u;
    {
        const bool branch_taken_0x164480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164480u;
        // 0x164484: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164480) {
            ctx->pc = 0x164900u;
            goto label_164900;
        }
    }
    ctx->pc = 0x164488u;
label_164488:
    // 0x164488: 0x862201ea  lh          $v0, 0x1EA($s1)
    ctx->pc = 0x164488u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 490)));
    // 0x16448c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16448Cu;
    {
        const bool branch_taken_0x16448c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16448Cu;
        // 0x164490: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16448c) {
            ctx->pc = 0x16449Cu;
            goto label_16449c;
        }
    }
    ctx->pc = 0x164494u;
    // 0x164494: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x164494u;
    {
        const bool branch_taken_0x164494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164494u;
        // 0x164498: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164494) {
            ctx->pc = 0x164904u;
            goto label_164904;
        }
    }
    ctx->pc = 0x16449Cu;
label_16449c:
    // 0x16449c: 0x8e440244  lw          $a0, 0x244($s2)
    ctx->pc = 0x16449cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 580)));
    // 0x1644a0: 0x10910058  beq         $a0, $s1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1644A0u;
    {
        const bool branch_taken_0x1644a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x1644A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644A0u;
        // 0x1644a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644a0) {
            ctx->pc = 0x164604u;
            goto label_164604;
        }
    }
    ctx->pc = 0x1644A8u;
    // 0x1644a8: 0x8e4201d4  lw          $v0, 0x1D4($s2)
    ctx->pc = 0x1644a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
    // 0x1644ac: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x1644ACu;
    {
        const bool branch_taken_0x1644ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1644ac) {
            ctx->pc = 0x164714u;
            goto label_164714;
        }
    }
    ctx->pc = 0x1644B4u;
    // 0x1644b4: 0x1480004d  bnez        $a0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1644B4u;
    {
        const bool branch_taken_0x1644b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1644b4) {
            ctx->pc = 0x1645ECu;
            goto label_1645ec;
        }
    }
    ctx->pc = 0x1644BCu;
    // 0x1644bc: 0x862201e8  lh          $v0, 0x1E8($s1)
    ctx->pc = 0x1644bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1644c0: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1644C0u;
    {
        const bool branch_taken_0x1644c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1644C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644C0u;
        // 0x1644c4: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644c0) {
            ctx->pc = 0x1645ECu;
            goto label_1645ec;
        }
    }
    ctx->pc = 0x1644C8u;
    // 0x1644c8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1644c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1644cc: 0x84430218  lh          $v1, 0x218($v0)
    ctx->pc = 0x1644ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x1644d0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1644d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1644d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1644D4u;
    {
        const bool branch_taken_0x1644d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1644d4) {
            ctx->pc = 0x1644E8u;
            goto label_1644e8;
        }
    }
    ctx->pc = 0x1644DCu;
    // 0x1644dc: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x1644dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1644e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1644E0u;
    {
        const bool branch_taken_0x1644e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1644e0) {
            ctx->pc = 0x164508u;
            goto label_164508;
        }
    }
    ctx->pc = 0x1644E8u;
label_1644e8:
    // 0x1644e8: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1644e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1644ec: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1644ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1644f0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1644f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1644f4: 0x84630218  lh          $v1, 0x218($v1)
    ctx->pc = 0x1644f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
    // 0x1644f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1644F8u;
    {
        const bool branch_taken_0x1644f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1644FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644F8u;
        // 0x1644fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644f8) {
            ctx->pc = 0x164508u;
            goto label_164508;
        }
    }
    ctx->pc = 0x164500u;
    // 0x164500: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x164500u;
    {
        const bool branch_taken_0x164500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164500) {
            ctx->pc = 0x164900u;
            goto label_164900;
        }
    }
    ctx->pc = 0x164508u;
label_164508:
    // 0x164508: 0x864301f4  lh          $v1, 0x1F4($s2)
    ctx->pc = 0x164508u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x16450c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16450cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164510: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x164510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x164514: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x164514u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x164518: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x164518u;
    {
        const bool branch_taken_0x164518 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164518u;
        // 0x16451c: 0x3c024023  lui         $v0, 0x4023 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16419 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164518) {
            ctx->pc = 0x164524u;
            goto label_164524;
        }
    }
    ctx->pc = 0x164520u;
    // 0x164520: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x164520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_164524:
    // 0x164524: 0x3442d70b  ori         $v0, $v0, 0xD70B
    ctx->pc = 0x164524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55051);
    // 0x164528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16452c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x16452Cu;
    {
        const bool branch_taken_0x16452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16452Cu;
        // 0x164530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16452c) {
            ctx->pc = 0x1645D4u;
            goto label_1645d4;
        }
    }
    ctx->pc = 0x164534u;
label_164534:
    // 0x164534: 0x8e4201f0  lw          $v0, 0x1F0($s2)
    ctx->pc = 0x164534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x164538: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x164538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x16453c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164540: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x164540u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164544: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x164544u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164548: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x164548u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16454c: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x16454cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164550: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x164550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164554: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x164554u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164558: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x164558u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16455c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16455cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164560: 0x0  nop
    ctx->pc = 0x164560u;
    // NOP
    // 0x164564: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x164564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164568: 0x0  nop
    ctx->pc = 0x164568u;
    // NOP
    // 0x16456c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x16456Cu;
    {
        const bool branch_taken_0x16456c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16456c) {
            ctx->pc = 0x1645D0u;
            goto label_1645d0;
        }
    }
    ctx->pc = 0x164574u;
    // 0x164574: 0x922201f4  lbu         $v0, 0x1F4($s1)
    ctx->pc = 0x164574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x164578: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164578u;
    {
        const bool branch_taken_0x164578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164578u;
        // 0x16457c: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164578) {
            ctx->pc = 0x16458Cu;
            goto label_16458c;
        }
    }
    ctx->pc = 0x164580u;
    // 0x164580: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x164580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164584: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x164584u;
    {
        const bool branch_taken_0x164584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164584u;
        // 0x164588: 0xa62301ea  sh          $v1, 0x1EA($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 490), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164584) {
            ctx->pc = 0x164900u;
            goto label_164900;
        }
    }
    ctx->pc = 0x16458Cu;
label_16458c:
    // 0x16458c: 0x0  nop
    ctx->pc = 0x16458cu;
    // NOP
    // 0x164590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164594: 0xc0561d4  jal         func_158750
    ctx->pc = 0x164594u;
    SET_GPR_U32(ctx, 31, 0x16459Cu);
    ctx->pc = 0x164598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164594u;
    // 0x164598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x164594u, 0x16459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16459Cu;
label_16459c:
    // 0x16459c: 0x86430242  lh          $v1, 0x242($s2)
    ctx->pc = 0x16459cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 578)));
    // 0x1645a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1645a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1645a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1645a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645a8: 0xa6430240  sh          $v1, 0x240($s2)
    ctx->pc = 0x1645a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 576), (uint16_t)GPR_U32(ctx, 3));
    // 0x1645ac: 0xae2002f0  sw          $zero, 0x2F0($s1)
    ctx->pc = 0x1645acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 0));
    // 0x1645b0: 0xc055c40  jal         func_157100
    ctx->pc = 0x1645B0u;
    SET_GPR_U32(ctx, 31, 0x1645B8u);
    ctx->pc = 0x1645B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1645B0u;
    // 0x1645b4: 0xae4201d4  sw          $v0, 0x1D4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1645B0u, 0x1645B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1645B8u;
label_1645b8:
    // 0x1645b8: 0x8e4201f0  lw          $v0, 0x1F0($s2)
    ctx->pc = 0x1645b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x1645bc: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x1645bcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1645c0: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x1645c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x1645c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1645c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1645c8: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x1645C8u;
    {
        const bool branch_taken_0x1645c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1645CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645C8u;
        // 0x1645cc: 0xae510244  sw          $s1, 0x244($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 580), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645c8) {
            ctx->pc = 0x164900u;
            goto label_164900;
        }
    }
    ctx->pc = 0x1645D0u;
label_1645d0:
    // 0x1645d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1645d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1645d4:
    // 0x1645d4: 0x0  nop
    ctx->pc = 0x1645d4u;
    // NOP
    // 0x1645d8: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x1645d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1645dc: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1645DCu;
    {
        const bool branch_taken_0x1645dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1645E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645DCu;
        // 0x1645e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645dc) {
            ctx->pc = 0x164534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164534;
        }
    }
    ctx->pc = 0x1645E4u;
    // 0x1645e4: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x1645E4u;
    {
        const bool branch_taken_0x1645e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1645e4) {
            ctx->pc = 0x164900u;
            goto label_164900;
        }
    }
    ctx->pc = 0x1645ECu;
label_1645ec:
    // 0x1645ec: 0x862301e8  lh          $v1, 0x1E8($s1)
    ctx->pc = 0x1645ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1645f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1645f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1645f4: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1645F4u;
    {
        const bool branch_taken_0x1645f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1645F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645F4u;
        // 0x1645f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645f4) {
            ctx->pc = 0x164718u;
            goto label_164718;
        }
    }
    ctx->pc = 0x1645FCu;
    // 0x1645fc: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x1645FCu;
    {
        const bool branch_taken_0x1645fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645FCu;
        // 0x164600: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645fc) {
            ctx->pc = 0x164900u;
            goto label_164900;
        }
    }
    ctx->pc = 0x164604u;
label_164604:
    // 0x164604: 0x14910043  bne         $a0, $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x164604u;
    {
        const bool branch_taken_0x164604 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x164604) {
            ctx->pc = 0x164714u;
            goto label_164714;
        }
    }
    ctx->pc = 0x16460Cu;
    // 0x16460c: 0x8e4301d4  lw          $v1, 0x1D4($s2)
    ctx->pc = 0x16460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
    // 0x164610: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x164610u;
    {
        const bool branch_taken_0x164610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164610u;
        // 0x164614: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164610) {
            ctx->pc = 0x164714u;
            goto label_164714;
        }
    }
    ctx->pc = 0x164618u;
    // 0x164618: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x164618u;
    {
        const bool branch_taken_0x164618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164618) {
            ctx->pc = 0x164644u;
            goto label_164644;
        }
    }
    ctx->pc = 0x164620u;
    // 0x164620: 0x10910003  beq         $a0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164620u;
    {
        const bool branch_taken_0x164620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x164620) {
            ctx->pc = 0x164630u;
            goto label_164630;
        }
    }
    ctx->pc = 0x164628u;
    // 0x164628: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x164628u;
    {
        const bool branch_taken_0x164628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164628u;
        // 0x16462c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164628) {
            ctx->pc = 0x164900u;
            goto label_164900;
        }
    }
    ctx->pc = 0x164630u;
label_164630:
    // 0x164630: 0x8e4301f0  lw          $v1, 0x1F0($s2)
    ctx->pc = 0x164630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x164634: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x164634u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164638: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x164638u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x16463c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x16463Cu;
    {
        const bool branch_taken_0x16463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16463Cu;
        // 0x164640: 0xe62d0280  swc1        $f13, 0x280($s1) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 640), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16463c) {
            ctx->pc = 0x164900u;
            goto label_164900;
        }
    }
    ctx->pc = 0x164644u;
label_164644:
    // 0x164644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164648: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x164648u;
    {
        const bool branch_taken_0x164648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164648) {
            ctx->pc = 0x164714u;
            goto label_164714;
        }
    }
    ctx->pc = 0x164650u;
    // 0x164650: 0x10910003  beq         $a0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164650u;
    {
        const bool branch_taken_0x164650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x164654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164650u;
        // 0x164654: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164650) {
            ctx->pc = 0x164660u;
            goto label_164660;
        }
    }
    ctx->pc = 0x164658u;
    // 0x164658: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x164658u;
    {
        const bool branch_taken_0x164658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164658) {
            ctx->pc = 0x164900u;
            goto label_164900;
        }
    }
    ctx->pc = 0x164660u;
label_164660:
    // 0x164660: 0x8e4401f0  lw          $a0, 0x1F0($s2)
    ctx->pc = 0x164660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x164664: 0x26220290  addiu       $v0, $s1, 0x290
    ctx->pc = 0x164664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x164668: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x164668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x16466c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16466cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164670: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x164670u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164674: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x164674u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164678: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x164678u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16467c: 0x8e4301f0  lw          $v1, 0x1F0($s2)
    ctx->pc = 0x16467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x164680: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x164680u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164684: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x164684u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x164688: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x164688u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16468c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16468cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164690: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x164690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164694: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x164694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164698: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x164698u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16469c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16469cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1646a0: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1646a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1646a4: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1646a4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1646a8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1646a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1646ac: 0x4a0003bf  vwaitq
    ctx->pc = 0x1646acu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1646b0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1646b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1646b4: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1646b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1646b8: 0x26230300  addiu       $v1, $s1, 0x300
    ctx->pc = 0x1646b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x1646bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1646bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1646c0: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x1646c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1646c4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1646c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1646c8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1646c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1646cc: 0x0  nop
    ctx->pc = 0x1646ccu;
    // NOP
    // 0x1646d0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1646d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1646d4: 0x4a200180  vaddx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x1646d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1646d8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1646d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1646dc: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1646dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1646e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1646e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1646e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1646e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1646e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1646e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1646ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646f0: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x1646f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1646f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1646f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1646f8: 0xe62002f0  swc1        $f0, 0x2F0($s1)
    ctx->pc = 0x1646f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 752), bits); }
    // 0x1646fc: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x1646FCu;
    SET_GPR_U32(ctx, 31, 0x164704u);
    ctx->pc = 0x164700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1646FCu;
    // 0x164700: 0xe62d02e8  swc1        $f13, 0x2E8($s1) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x1646FCu, 0x164704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164704u;
label_164704:
    // 0x164704: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x164704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164708: 0xa6420240  sh          $v0, 0x240($s2)
    ctx->pc = 0x164708u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 576), (uint16_t)GPR_U32(ctx, 2));
    // 0x16470c: 0xae4001d4  sw          $zero, 0x1D4($s2)
    ctx->pc = 0x16470cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 0));
    // 0x164710: 0xae400244  sw          $zero, 0x244($s2)
    ctx->pc = 0x164710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 580), GPR_U32(ctx, 0));
label_164714:
    // 0x164714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x164714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_164718:
    // 0x164718: 0xc058e84  jal         func_163A10
    ctx->pc = 0x164718u;
    SET_GPR_U32(ctx, 31, 0x164720u);
    ctx->pc = 0x16471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164718u;
    // 0x16471c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163A10u, 0x164718u, 0x164720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164720u;
label_164720:
    // 0x164720: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x164720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x164724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164728: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x164728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x16472c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x16472cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x164730: 0x93828488  lbu         $v0, -0x7B78($gp)
    ctx->pc = 0x164730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x164734: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x164734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x164738: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x164738u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16473c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x16473cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x164740: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x164740u;
    {
        const bool branch_taken_0x164740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164740u;
        // 0x164744: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164740) {
            ctx->pc = 0x16475Cu;
            goto label_16475c;
        }
    }
    ctx->pc = 0x164748u;
    // 0x164748: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x164748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x16474c: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x16474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
    // 0x164750: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x164750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x164754: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x164754u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164758: 0x0  nop
    ctx->pc = 0x164758u;
    // NOP
label_16475c:
    // 0x16475c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16475Cu;
    {
        const bool branch_taken_0x16475c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x164760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16475Cu;
        // 0x164760: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16475c) {
            ctx->pc = 0x16476Cu;
            goto label_16476c;
        }
    }
    ctx->pc = 0x164764u;
    // 0x164764: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x164764u;
    {
        const bool branch_taken_0x164764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164764u;
        // 0x164768: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164764) {
            ctx->pc = 0x16478Cu;
            goto label_16478c;
        }
    }
    ctx->pc = 0x16476Cu;
label_16476c:
    // 0x16476c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16476cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164774: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x164774u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x164778: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164778u;
    {
        const bool branch_taken_0x164778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x164778) {
            ctx->pc = 0x164788u;
            goto label_164788;
        }
    }
    ctx->pc = 0x164780u;
    // 0x164780: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164780u;
    {
        const bool branch_taken_0x164780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164780) {
            ctx->pc = 0x16478Cu;
            goto label_16478c;
        }
    }
    ctx->pc = 0x164788u;
label_164788:
    // 0x164788: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x164788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16478c:
    // 0x16478c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x16478Cu;
    {
        const bool branch_taken_0x16478c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16478c) {
            ctx->pc = 0x1647B8u;
            goto label_1647b8;
        }
    }
    ctx->pc = 0x164794u;
    // 0x164794: 0x862203c4  lh          $v0, 0x3C4($s1)
    ctx->pc = 0x164794u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 964)));
    // 0x164798: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164798u;
    {
        const bool branch_taken_0x164798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164798) {
            ctx->pc = 0x1647B8u;
            goto label_1647b8;
        }
    }
    ctx->pc = 0x1647A0u;
    // 0x1647a0: 0x862303c6  lh          $v1, 0x3C6($s1)
    ctx->pc = 0x1647a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 966)));
    // 0x1647a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1647a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1647a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1647A8u;
    {
        const bool branch_taken_0x1647a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1647a8) {
            ctx->pc = 0x1647B8u;
            goto label_1647b8;
        }
    }
    ctx->pc = 0x1647B0u;
    // 0x1647b0: 0xa62203c6  sh          $v0, 0x3C6($s1)
    ctx->pc = 0x1647b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 966), (uint16_t)GPR_U32(ctx, 2));
    // 0x1647b4: 0xae2003c0  sw          $zero, 0x3C0($s1)
    ctx->pc = 0x1647b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 960), GPR_U32(ctx, 0));
label_1647b8:
    // 0x1647b8: 0x862303c6  lh          $v1, 0x3C6($s1)
    ctx->pc = 0x1647b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 966)));
    // 0x1647bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1647bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1647c0: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1647C0u;
    {
        const bool branch_taken_0x1647c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1647C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647C0u;
        // 0x1647c4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647c0) {
            ctx->pc = 0x164844u;
            goto label_164844;
        }
    }
    ctx->pc = 0x1647C8u;
    // 0x1647c8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1647c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1647cc: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1647ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1647d0: 0x4a802103  vaddw.y     $vf4, $vf4, $vf0w
    ctx->pc = 0x1647d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1647d4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1647d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1647d8: 0xc62102a0  lwc1        $f1, 0x2A0($s1)
    ctx->pc = 0x1647d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1647dc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1647dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1647e0: 0xc62003c0  lwc1        $f0, 0x3C0($s1)
    ctx->pc = 0x1647e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1647e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1647e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1647e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1647e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1647ec: 0xe62003c0  swc1        $f0, 0x3C0($s1)
    ctx->pc = 0x1647ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 960), bits); }
    // 0x1647f0: 0xc62e03c0  lwc1        $f14, 0x3C0($s1)
    ctx->pc = 0x1647f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1647f4: 0xc05be24  jal         func_16F890
    ctx->pc = 0x1647F4u;
    SET_GPR_U32(ctx, 31, 0x1647FCu);
    ctx->pc = 0x1647F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647F4u;
    // 0x1647f8: 0xc62d03c8  lwc1        $f13, 0x3C8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F890u, 0x1647F4u, 0x1647FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647FCu;
label_1647fc:
    // 0x1647fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1647fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164800: 0x0  nop
    ctx->pc = 0x164800u;
    // NOP
    // 0x164804: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x164804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164808: 0x0  nop
    ctx->pc = 0x164808u;
    // NOP
    // 0x16480c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16480Cu;
    {
        const bool branch_taken_0x16480c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x164810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16480Cu;
        // 0x164810: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16480c) {
            ctx->pc = 0x164820u;
            goto label_164820;
        }
    }
    ctx->pc = 0x164814u;
    // 0x164814: 0xa62003c6  sh          $zero, 0x3C6($s1)
    ctx->pc = 0x164814u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 966), (uint16_t)GPR_U32(ctx, 0));
    // 0x164818: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x164818u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x16481c: 0xe62103c0  swc1        $f1, 0x3C0($s1)
    ctx->pc = 0x16481cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 960), bits); }
label_164820:
    // 0x164820: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x164820u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164824: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x164824u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164828: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x164828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16482c: 0x0  nop
    ctx->pc = 0x16482cu;
    // NOP
    // 0x164830: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x164830u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x164834: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x164834u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164838: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x164838u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16483c: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x16483cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164840: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x164840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_164844:
    // 0x164844: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164844u;
    {
        const bool branch_taken_0x164844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x164848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164844u;
        // 0x164848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164844) {
            ctx->pc = 0x164858u;
            goto label_164858;
        }
    }
    ctx->pc = 0x16484Cu;
    // 0x16484c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16484cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164850: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x164850u;
    {
        const bool branch_taken_0x164850 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x164850) {
            ctx->pc = 0x16487Cu;
            goto label_16487c;
        }
    }
    ctx->pc = 0x164858u;
label_164858:
    // 0x164858: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x164858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16485c: 0xc058d4c  jal         func_163530
    ctx->pc = 0x16485Cu;
    SET_GPR_U32(ctx, 31, 0x164864u);
    ctx->pc = 0x164860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16485Cu;
    // 0x164860: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163530u, 0x16485Cu, 0x164864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164864u;
label_164864:
    // 0x164864: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164864u;
    {
        const bool branch_taken_0x164864 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x164868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164864u;
        // 0x164868: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164864) {
            ctx->pc = 0x164874u;
            goto label_164874;
        }
    }
    ctx->pc = 0x16486Cu;
    // 0x16486c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x16486Cu;
    {
        const bool branch_taken_0x16486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16486Cu;
        // 0x164870: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16486c) {
            ctx->pc = 0x164900u;
            goto label_164900;
        }
    }
    ctx->pc = 0x164874u;
label_164874:
    // 0x164874: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x164874u;
    {
        const bool branch_taken_0x164874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164874) {
            ctx->pc = 0x164900u;
            goto label_164900;
        }
    }
    ctx->pc = 0x16487Cu;
label_16487c:
    // 0x16487c: 0xa62201e8  sh          $v0, 0x1E8($s1)
    ctx->pc = 0x16487cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 488), (uint16_t)GPR_U32(ctx, 2));
    // 0x164880: 0x8e240340  lw          $a0, 0x340($s1)
    ctx->pc = 0x164880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x164884: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x164884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x164888: 0x8e43021c  lw          $v1, 0x21C($s2)
    ctx->pc = 0x164888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 540)));
    // 0x16488c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16488cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164890: 0xc6240344  lwc1        $f4, 0x344($s1)
    ctx->pc = 0x164890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x164894: 0xc6420228  lwc1        $f2, 0x228($s2)
    ctx->pc = 0x164894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x164898: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x164898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x16489c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16489cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1648a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1648a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1648a4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1648a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1648a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1648a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1648ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1648acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1648b0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1648b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1648b4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1648b4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1648b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1648b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1648bc: 0xe6200348  swc1        $f0, 0x348($s1)
    ctx->pc = 0x1648bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 840), bits); }
    // 0x1648c0: 0xc620034c  lwc1        $f0, 0x34C($s1)
    ctx->pc = 0x1648c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1648c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1648c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1648c8: 0x0  nop
    ctx->pc = 0x1648c8u;
    // NOP
    // 0x1648cc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1648CCu;
    {
        const bool branch_taken_0x1648cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1648cc) {
            ctx->pc = 0x1648F4u;
            goto label_1648f4;
        }
    }
    ctx->pc = 0x1648D4u;
    // 0x1648d4: 0xc6200348  lwc1        $f0, 0x348($s1)
    ctx->pc = 0x1648d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1648d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1648d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1648dc: 0x0  nop
    ctx->pc = 0x1648dcu;
    // NOP
    // 0x1648e0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1648E0u;
    {
        const bool branch_taken_0x1648e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1648e0) {
            ctx->pc = 0x1648F4u;
            goto label_1648f4;
        }
    }
    ctx->pc = 0x1648E8u;
    // 0x1648e8: 0x8e420234  lw          $v0, 0x234($s2)
    ctx->pc = 0x1648e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
    // 0x1648ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1648ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1648f0: 0xae420234  sw          $v0, 0x234($s2)
    ctx->pc = 0x1648f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 2));
label_1648f4:
    // 0x1648f4: 0xc6200348  lwc1        $f0, 0x348($s1)
    ctx->pc = 0x1648f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1648f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1648f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1648fc: 0xe620034c  swc1        $f0, 0x34C($s1)
    ctx->pc = 0x1648fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 844), bits); }
label_164900:
    // 0x164900: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x164900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_164904:
    // 0x164904: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16490c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16490cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164910: 0x3e00008  jr          $ra
    ctx->pc = 0x164910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164910u;
        // 0x164914: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164918u;
}
