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

// Function: FUN_00159800
// Address: 0x159800 - 0x159adc
void FUN_00159800_0x159800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00159800_0x159800");
#endif

    switch (ctx->pc) {
        case 0x159850u: goto label_159850;
        case 0x15985cu: goto label_15985c;
        case 0x15989cu: goto label_15989c;
        case 0x1598dcu: goto label_1598dc;
        case 0x159a80u: goto label_159a80;
        case 0x159aa4u: goto label_159aa4;
        case 0x159abcu: goto label_159abc;
        default: break;
    }

    ctx->pc = 0x159800u;

    // 0x159800: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x159800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x159804: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x159804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x159808: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x159808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15980c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15980cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x159810: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x159810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x159814: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x159814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159818: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x159818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15981c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15981cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159820: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x159820u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x159824: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x159824u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x159828: 0x8ca3033c  lw          $v1, 0x33C($a1)
    ctx->pc = 0x159828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 828)));
    // 0x15982c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x15982cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x159830: 0x9070000f  lbu         $s0, 0xF($v1)
    ctx->pc = 0x159830u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x159834: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x159834u;
    {
        const bool branch_taken_0x159834 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x159838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159834u;
        // 0x159838: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159834) {
            ctx->pc = 0x159864u;
            goto label_159864;
        }
    }
    ctx->pc = 0x15983Cu;
    // 0x15983c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x159840: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x159840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x159844: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x159844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x159848: 0xc0425a4  jal         func_109690
    ctx->pc = 0x159848u;
    SET_GPR_U32(ctx, 31, 0x159850u);
    ctx->pc = 0x15984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159848u;
    // 0x15984c: 0x8065002b  lb          $a1, 0x2B($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x159848u, 0x159850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159850u;
label_159850:
    // 0x159850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x159850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159854: 0xc042118  jal         func_108460
    ctx->pc = 0x159854u;
    SET_GPR_U32(ctx, 31, 0x15985Cu);
    ctx->pc = 0x159858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159854u;
    // 0x159858: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x159854u, 0x15985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15985Cu;
label_15985c:
    // 0x15985c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x15985Cu;
    {
        const bool branch_taken_0x15985c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15985Cu;
        // 0x159860: 0x8e2802e8  lw          $t0, 0x2E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15985c) {
            ctx->pc = 0x1598ECu;
            goto label_1598ec;
        }
    }
    ctx->pc = 0x159864u;
label_159864:
    // 0x159864: 0x24020099  addiu       $v0, $zero, 0x99
    ctx->pc = 0x159864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x159868: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x159868u;
    {
        const bool branch_taken_0x159868 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x159868) {
            ctx->pc = 0x1598B0u;
            goto label_1598b0;
        }
    }
    ctx->pc = 0x159870u;
    // 0x159870: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x159870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159874: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x159874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x159878: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x159878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15987c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15987cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159880: 0x0  nop
    ctx->pc = 0x159880u;
    // NOP
    // 0x159884: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x159884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159888: 0x0  nop
    ctx->pc = 0x159888u;
    // NOP
    // 0x15988c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15988Cu;
    {
        const bool branch_taken_0x15988c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15988Cu;
        // 0x159890: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15988c) {
            ctx->pc = 0x1598A0u;
            goto label_1598a0;
        }
    }
    ctx->pc = 0x159894u;
    // 0x159894: 0xc042118  jal         func_108460
    ctx->pc = 0x159894u;
    SET_GPR_U32(ctx, 31, 0x15989Cu);
    ctx->pc = 0x159898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159894u;
    // 0x159898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x159894u, 0x15989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15989Cu;
label_15989c:
    // 0x15989c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x15989cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1598a0:
    // 0x1598a0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1598a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1598a4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1598a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1598a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1598A8u;
    {
        const bool branch_taken_0x1598a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1598a8) {
            ctx->pc = 0x1598E8u;
            goto label_1598e8;
        }
    }
    ctx->pc = 0x1598B0u;
label_1598b0:
    // 0x1598b0: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x1598b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1598b4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1598b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1598b8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1598b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1598bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1598bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1598c0: 0x0  nop
    ctx->pc = 0x1598c0u;
    // NOP
    // 0x1598c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1598c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1598c8: 0x0  nop
    ctx->pc = 0x1598c8u;
    // NOP
    // 0x1598cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1598CCu;
    {
        const bool branch_taken_0x1598cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1598D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598CCu;
        // 0x1598d0: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598cc) {
            ctx->pc = 0x1598E0u;
            goto label_1598e0;
        }
    }
    ctx->pc = 0x1598D4u;
    // 0x1598d4: 0xc042118  jal         func_108460
    ctx->pc = 0x1598D4u;
    SET_GPR_U32(ctx, 31, 0x1598DCu);
    ctx->pc = 0x1598D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598D4u;
    // 0x1598d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1598D4u, 0x1598DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598DCu;
label_1598dc:
    // 0x1598dc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1598dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_1598e0:
    // 0x1598e0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1598e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1598e4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1598e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1598e8:
    // 0x1598e8: 0x8e2802e8  lw          $t0, 0x2E8($s1)
    ctx->pc = 0x1598e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 744)));
label_1598ec:
    // 0x1598ec: 0x26230300  addiu       $v1, $s1, 0x300
    ctx->pc = 0x1598ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x1598f0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1598f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1598f4: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x1598f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1598f8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1598f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1598fc: 0x0  nop
    ctx->pc = 0x1598fcu;
    // NOP
    // 0x159900: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x159900u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x159904: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x159904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159908: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x159908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15990c: 0xf8a50000  sqc2        $vf5, 0x0($a1)
    ctx->pc = 0x15990cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x159910: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x159910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159914: 0x8e22033c  lw          $v0, 0x33C($s1)
    ctx->pc = 0x159914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
    // 0x159918: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x159918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15991c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x159920: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x159920u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159924: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x159924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x159928: 0xd8e60000  lqc2        $vf6, 0x0($a3)
    ctx->pc = 0x159928u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15992c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15992cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159930: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x159930u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159934: 0x4bc4296c  vsub.xyz    $vf5, $vf5, $vf4
    ctx->pc = 0x159934u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159938: 0x4bc6212c  vsub.xyz    $vf4, $vf4, $vf6
    ctx->pc = 0x159938u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15993c: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x15993cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x159940: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x159940u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159944: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x159944u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159948: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x159948u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15994c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x15994cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159950: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x159950u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159954: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x159954u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159958: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x159958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15995c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x15995cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x159960: 0x4a0003bf  vwaitq
    ctx->pc = 0x159960u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x159964: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x159964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159968: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x159968u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x15996c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x15996cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159970: 0x4a0003bf  vwaitq
    ctx->pc = 0x159970u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x159974: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x159974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159978: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x159978u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15997c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15997cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159980: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x159980u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159984: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x159984u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159988: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x159988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15998c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15998cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159990: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x159990u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x159994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159998: 0x4be7233c  vmove.xyzw  $vf7, $vf4
    ctx->pc = 0x159998u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x15999c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x15999cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1599a0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1599a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1599a4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1599a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1599a8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1599a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1599ac: 0x0  nop
    ctx->pc = 0x1599acu;
    // NOP
    // 0x1599b0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1599b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1599b4: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x1599b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1599b8: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x1599b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1599bc: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1599bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1599c0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1599c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1599c4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1599c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1599c8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1599c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1599cc: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1599ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1599d0: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1599d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1599d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1599d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1599d8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1599d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1599dc: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1599dcu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1599e0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1599e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1599e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1599e4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1599e8: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1599e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1599ec: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1599ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1599f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1599f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1599f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1599f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1599f8: 0x0  nop
    ctx->pc = 0x1599f8u;
    // NOP
    // 0x1599fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1599fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x159a00: 0x26220290  addiu       $v0, $s1, 0x290
    ctx->pc = 0x159a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x159a04: 0xd8670000  lqc2        $vf7, 0x0($v1)
    ctx->pc = 0x159a04u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159a08: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x159a08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159a0c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x159a0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x159a10: 0x0  nop
    ctx->pc = 0x159a10u;
    // NOP
    // 0x159a14: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x159a14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x159a18: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x159a18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159a1c: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x159a1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159a20: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x159a20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x159a24: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x159a24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159a28: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x159a28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159a2c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x159a2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159a30: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x159a30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159a34: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x159a34u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x159a38: 0x4a0003bf  vwaitq
    ctx->pc = 0x159a38u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x159a3c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x159a3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159a40: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x159a40u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x159a44: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x159a44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159a48: 0x4a0003bf  vwaitq
    ctx->pc = 0x159a48u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x159a4c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x159a4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159a50: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x159a50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x159a54: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x159a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x159a58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x159a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a5c: 0x24660020  addiu       $a2, $v1, 0x20
    ctx->pc = 0x159a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x159a60: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x159a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x159a64: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x159a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x159a68: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x159a68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159a6c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x159a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x159a70: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x159a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x159a74: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x159a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x159a78: 0xc0425d4  jal         func_109750
    ctx->pc = 0x159A78u;
    SET_GPR_U32(ctx, 31, 0x159A80u);
    ctx->pc = 0x159A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A78u;
    // 0x159a7c: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x159A78u, 0x159A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A80u;
label_159a80:
    // 0x159a80: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x159a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x159a84: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x159a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x159a88: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x159A88u;
    {
        const bool branch_taken_0x159a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A88u;
        // 0x159a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a88) {
            ctx->pc = 0x159AA8u;
            goto label_159aa8;
        }
    }
    ctx->pc = 0x159A90u;
    // 0x159a90: 0x8e25033c  lw          $a1, 0x33C($s1)
    ctx->pc = 0x159a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
    // 0x159a94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x159a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a98: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x159a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x159a9c: 0xc056590  jal         func_159640
    ctx->pc = 0x159A9Cu;
    SET_GPR_U32(ctx, 31, 0x159AA4u);
    ctx->pc = 0x159AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A9Cu;
    // 0x159aa0: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159640u, 0x159A9Cu, 0x159AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159AA4u;
label_159aa4:
    // 0x159aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_159aa8:
    // 0x159aa8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x159aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x159aac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x159aacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x159ab0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x159ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159ab4: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x159AB4u;
    SET_GPR_U32(ctx, 31, 0x159ABCu);
    ctx->pc = 0x159AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159AB4u;
    // 0x159ab8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x159AB4u, 0x159ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159ABCu;
label_159abc:
    // 0x159abc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x159abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159ac0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x159ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x159ac4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x159ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159ac8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x159ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x159acc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x159accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159ad0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x159ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x159AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AD4u;
        // 0x159ad8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159ADCu;
}
