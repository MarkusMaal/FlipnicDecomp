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

// Function: FUN_0010a4c0
// Address: 0x10a4c0 - 0x10a928
void FUN_0010a4c0_0x10a4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010a4c0_0x10a4c0");
#endif

    switch (ctx->pc) {
        case 0x10a4fcu: goto label_10a4fc;
        case 0x10a55cu: goto label_10a55c;
        case 0x10a5bcu: goto label_10a5bc;
        case 0x10a67cu: goto label_10a67c;
        case 0x10a6c4u: goto label_10a6c4;
        case 0x10a7a4u: goto label_10a7a4;
        case 0x10a7ecu: goto label_10a7ec;
        case 0x10a82cu: goto label_10a82c;
        case 0x10a894u: goto label_10a894;
        case 0x10a8b8u: goto label_10a8b8;
        default: break;
    }

    ctx->pc = 0x10a4c0u;

    // 0x10a4c0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x10a4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x10a4c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10a4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10a4c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10a4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10a4cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10a4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10a4d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10a4d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10a4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10a4d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10a4d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x10a4dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x10a4e0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x10a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x10a4e4: 0x1460007c  bnez        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x10A4E4u;
    {
        const bool branch_taken_0x10a4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4E4u;
        // 0x10a4e8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a4e4) {
            ctx->pc = 0x10A6D8u;
            goto label_10a6d8;
        }
    }
    ctx->pc = 0x10A4ECu;
    // 0x10a4ec: 0x16000078  bnez        $s0, . + 4 + (0x78 << 2)
    ctx->pc = 0x10A4ECu;
    {
        const bool branch_taken_0x10a4ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4ECu;
        // 0x10a4f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a4ec) {
            ctx->pc = 0x10A6D0u;
            goto label_10a6d0;
        }
    }
    ctx->pc = 0x10A4F4u;
    // 0x10a4f4: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x10A4F4u;
    SET_GPR_U32(ctx, 31, 0x10A4FCu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10A4F4u, 0x10A4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A4FCu;
label_10a4fc:
    // 0x10a4fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10a4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a500: 0x0  nop
    ctx->pc = 0x10a500u;
    // NOP
    // 0x10a504: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10a504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10a508: 0x3c0242ca  lui         $v0, 0x42CA
    ctx->pc = 0x10a508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17098 << 16));
    // 0x10a50c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a510: 0x0  nop
    ctx->pc = 0x10a510u;
    // NOP
    // 0x10a514: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x10a514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10a518: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x10a518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x10a51c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a520: 0x0  nop
    ctx->pc = 0x10a520u;
    // NOP
    // 0x10a524: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10a524u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10a528: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10a528u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10a52c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10a52cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10a530: 0x0  nop
    ctx->pc = 0x10a530u;
    // NOP
    // 0x10a534: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x10a534u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x10a538: 0x10200064  beqz        $at, . + 4 + (0x64 << 2)
    ctx->pc = 0x10A538u;
    {
        const bool branch_taken_0x10a538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a538) {
            ctx->pc = 0x10A6CCu;
            goto label_10a6cc;
        }
    }
    ctx->pc = 0x10A540u;
    // 0x10a540: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10a540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10a544: 0x8042002c  lb          $v0, 0x2C($v0)
    ctx->pc = 0x10a544u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x10a548: 0x18400060  blez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x10A548u;
    {
        const bool branch_taken_0x10a548 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A548u;
        // 0x10a54c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a548) {
            ctx->pc = 0x10A6CCu;
            goto label_10a6cc;
        }
    }
    ctx->pc = 0x10A550u;
    // 0x10a550: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x10a550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x10a554: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x10A554u;
    SET_GPR_U32(ctx, 31, 0x10A55Cu);
    ctx->pc = 0x10A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A554u;
    // 0x10a558: 0x8e50002c  lw          $s0, 0x2C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10A554u, 0x10A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A55Cu;
label_10a55c:
    // 0x10a55c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x10a55cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a560: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x10a560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x10a564: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x10a564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10a568: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a56c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10a56cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10a570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10a570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a574: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10a574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a578: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x10a578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x10a57c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x10a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x10a580: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x10a580u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x10a584: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x10a584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x10a588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10a588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a58c: 0x0  nop
    ctx->pc = 0x10a58cu;
    // NOP
    // 0x10a590: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10a590u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10a594: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10a594u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10a598: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10a598u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10a59c: 0x0  nop
    ctx->pc = 0x10a59cu;
    // NOP
    // 0x10a5a0: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x10a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x10a5a4: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x10a5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x10a5a8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x10a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x10a5ac: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10a5b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10a5b4: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x10A5B4u;
    SET_GPR_U32(ctx, 31, 0x10A5BCu);
    ctx->pc = 0x10A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A5B4u;
    // 0x10a5b8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x10A5B4u, 0x10A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A5BCu;
label_10a5bc:
    // 0x10a5bc: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x10a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x10a5c0: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x10a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10a5c4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x10a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10a5c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10a5cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10a5d0: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x10a5d0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a5d4: 0x7e460000  sq          $a2, 0x0($s2)
    ctx->pc = 0x10a5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 6));
    // 0x10a5d8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x10a5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x10a5dc: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x10a5dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10a5e0: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x10a5e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10a5e4: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x10a5e4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a5e8: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x10a5e8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10a5ec: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x10a5ecu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x10a5f0: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x10a5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a5f4: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x10a5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a5f8: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x10a5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10a5fc: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x10a5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x10a600: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x10a600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x10a604: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x10a604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10a608: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x10a608u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10a60c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x10a60cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a610: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x10a610u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10a614: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x10a614u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10a618: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10a618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10a61c: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x10a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x10a620: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x10a620u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10a624: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x10a624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a628: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x10a628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a62c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x10a62cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a630: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x10a630u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x10a634: 0x4a0003bf  vwaitq
    ctx->pc = 0x10a634u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10a638: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x10a638u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a63c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10a63cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a640: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x10a640u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x10a644: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x10a644u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10a648: 0x4a0003bf  vwaitq
    ctx->pc = 0x10a648u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10a64c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x10a64cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10a650: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x10a650u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10a654: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10a654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a658: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10a658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10a65c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x10a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x10a660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a664: 0x0  nop
    ctx->pc = 0x10a664u;
    // NOP
    // 0x10a668: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x10a668u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10a66c: 0x0  nop
    ctx->pc = 0x10a66cu;
    // NOP
    // 0x10a670: 0x0  nop
    ctx->pc = 0x10a670u;
    // NOP
    // 0x10a674: 0xc054924  jal         func_152490
    ctx->pc = 0x10A674u;
    SET_GPR_U32(ctx, 31, 0x10A67Cu);
    ctx->pc = 0x152490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152490u, 0x10A674u, 0x10A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A67Cu;
label_10a67c:
    // 0x10a67c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x10a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x10a680: 0x7a260030  lq          $a2, 0x30($s1)
    ctx->pc = 0x10a680u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x10a684: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x10a684u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x10a688: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x10a688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x10a68c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10a68cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a690: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x10a690u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x10a694: 0x0  nop
    ctx->pc = 0x10a694u;
    // NOP
    // 0x10a698: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x10a698u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x10a69c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x10a69cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10a6a0: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10a6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a6a4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x10a6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x10a6a8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x10a6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a6ac: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x10a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x10a6b0: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10a6b4: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x10a6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x10a6b8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10a6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10a6bc: 0xc0466e4  jal         func_119B90
    ctx->pc = 0x10A6BCu;
    SET_GPR_U32(ctx, 31, 0x10A6C4u);
    ctx->pc = 0x10A6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6BCu;
    // 0x10a6c0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B90u, 0x10A6BCu, 0x10A6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6C4u;
label_10a6c4:
    // 0x10a6c4: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x10A6C4u;
    {
        const bool branch_taken_0x10a6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6C4u;
        // 0x10a6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6c4) {
            ctx->pc = 0x10A90Cu;
            goto label_10a90c;
        }
    }
    ctx->pc = 0x10A6CCu;
label_10a6cc:
    // 0x10a6cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a6d0:
    // 0x10a6d0: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x10A6D0u;
    {
        const bool branch_taken_0x10a6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6D0u;
        // 0x10a6d4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6d0) {
            ctx->pc = 0x10A910u;
            goto label_10a910;
        }
    }
    ctx->pc = 0x10A6D8u;
label_10a6d8:
    // 0x10a6d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a6dc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A6DCu;
    {
        const bool branch_taken_0x10a6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6DCu;
        // 0x10a6e0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6dc) {
            ctx->pc = 0x10A704u;
            goto label_10a704;
        }
    }
    ctx->pc = 0x10A6E4u;
    // 0x10a6e4: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x10a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10a6e8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x10a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10a6ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10a6f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10a6f4: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x10a6f4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a6f8: 0x7e460000  sq          $a2, 0x0($s2)
    ctx->pc = 0x10a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 6));
    // 0x10a6fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10a700: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x10a700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_10a704:
    // 0x10a704: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x10a704u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10a708: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x10a708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10a70c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x10a70cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a710: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x10a710u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10a714: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x10a714u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x10a718: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x10a718u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a71c: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x10a71cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a720: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x10a720u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10a724: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x10a724u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x10a728: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x10a728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x10a72c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x10a72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x10a730: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x10a730u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10a734: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x10a734u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a738: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x10a738u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10a73c: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x10a73cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10a740: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10a740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10a744: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x10a744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x10a748: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x10a748u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10a74c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x10a74cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a750: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x10a750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a754: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x10a754u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a758: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x10a758u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x10a75c: 0x4a0003bf  vwaitq
    ctx->pc = 0x10a75cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10a760: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x10a760u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a764: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10a764u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a768: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x10a768u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x10a76c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x10a76cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10a770: 0x4a0003bf  vwaitq
    ctx->pc = 0x10a770u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10a774: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x10a774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10a778: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x10a778u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10a77c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10a77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a780: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10a780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10a784: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x10a784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x10a788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a78c: 0x0  nop
    ctx->pc = 0x10a78cu;
    // NOP
    // 0x10a790: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x10a790u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10a794: 0x0  nop
    ctx->pc = 0x10a794u;
    // NOP
    // 0x10a798: 0x0  nop
    ctx->pc = 0x10a798u;
    // NOP
    // 0x10a79c: 0xc054924  jal         func_152490
    ctx->pc = 0x10A79Cu;
    SET_GPR_U32(ctx, 31, 0x10A7A4u);
    ctx->pc = 0x152490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152490u, 0x10A79Cu, 0x10A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7A4u;
label_10a7a4:
    // 0x10a7a4: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x10a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x10a7a8: 0x7a260030  lq          $a2, 0x30($s1)
    ctx->pc = 0x10a7a8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x10a7ac: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x10a7acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x10a7b0: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x10a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x10a7b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10a7b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a7b8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x10a7b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x10a7bc: 0x0  nop
    ctx->pc = 0x10a7bcu;
    // NOP
    // 0x10a7c0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x10a7c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x10a7c4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x10a7c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10a7c8: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10a7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a7cc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x10a7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x10a7d0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x10a7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a7d4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x10a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x10a7d8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10a7dc: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x10a7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x10a7e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10a7e4: 0xc0466e4  jal         func_119B90
    ctx->pc = 0x10A7E4u;
    SET_GPR_U32(ctx, 31, 0x10A7ECu);
    ctx->pc = 0x10A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7E4u;
    // 0x10a7e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B90u, 0x10A7E4u, 0x10A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7ECu;
label_10a7ec:
    // 0x10a7ec: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x10a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x10a7f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a7f4: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x10A7F4u;
    {
        const bool branch_taken_0x10a7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10a7f4) {
            ctx->pc = 0x10A908u;
            goto label_10a908;
        }
    }
    ctx->pc = 0x10A7FCu;
    // 0x10a7fc: 0x1600001c  bnez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x10A7FCu;
    {
        const bool branch_taken_0x10a7fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a7fc) {
            ctx->pc = 0x10A870u;
            goto label_10a870;
        }
    }
    ctx->pc = 0x10A804u;
    // 0x10a804: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x10a804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10a808: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x10a808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x10a80c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a810: 0x0  nop
    ctx->pc = 0x10a810u;
    // NOP
    // 0x10a814: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x10a814u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10a818: 0x0  nop
    ctx->pc = 0x10a818u;
    // NOP
    // 0x10a81c: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x10A81Cu;
    {
        const bool branch_taken_0x10a81c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10a81c) {
            ctx->pc = 0x10A8CCu;
            goto label_10a8cc;
        }
    }
    ctx->pc = 0x10A824u;
    // 0x10a824: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x10A824u;
    SET_GPR_U32(ctx, 31, 0x10A82Cu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10A824u, 0x10A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A82Cu;
label_10a82c:
    // 0x10a82c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10a82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a830: 0x0  nop
    ctx->pc = 0x10a830u;
    // NOP
    // 0x10a834: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10a834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10a838: 0x3c0242ca  lui         $v0, 0x42CA
    ctx->pc = 0x10a838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17098 << 16));
    // 0x10a83c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a840: 0x0  nop
    ctx->pc = 0x10a840u;
    // NOP
    // 0x10a844: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x10a844u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10a848: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x10a848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x10a84c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a850: 0x0  nop
    ctx->pc = 0x10a850u;
    // NOP
    // 0x10a854: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10a854u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10a858: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10a858u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10a85c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10a85cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10a860: 0x0  nop
    ctx->pc = 0x10a860u;
    // NOP
    // 0x10a864: 0x2841005b  slti        $at, $v0, 0x5B
    ctx->pc = 0x10a864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x10a868: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x10A868u;
    {
        const bool branch_taken_0x10a868 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a868) {
            ctx->pc = 0x10A8CCu;
            goto label_10a8cc;
        }
    }
    ctx->pc = 0x10A870u;
label_10a870:
    // 0x10a870: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x10a870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x10a874: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x10a874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x10a878: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A878u;
    {
        const bool branch_taken_0x10a878 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x10a878) {
            ctx->pc = 0x10A894u;
            goto label_10a894;
        }
    }
    ctx->pc = 0x10A880u;
    // 0x10a880: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x10a880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x10a884: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10a884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10a888: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10a888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10a88c: 0xc046744  jal         func_119D10
    ctx->pc = 0x10A88Cu;
    SET_GPR_U32(ctx, 31, 0x10A894u);
    ctx->pc = 0x10A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A88Cu;
    // 0x10a890: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10A88Cu, 0x10A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A894u;
label_10a894:
    // 0x10a894: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x10a894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x10a898: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x10A898u;
    {
        const bool branch_taken_0x10a898 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x10A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A898u;
        // 0x10a89c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a898) {
            ctx->pc = 0x10A8C4u;
            goto label_10a8c4;
        }
    }
    ctx->pc = 0x10A8A0u;
    // 0x10a8a0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x10a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x10a8a4: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10a8a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10a8ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10a8b0: 0xc046744  jal         func_119D10
    ctx->pc = 0x10A8B0u;
    SET_GPR_U32(ctx, 31, 0x10A8B8u);
    ctx->pc = 0x10A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A8B0u;
    // 0x10a8b4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10A8B0u, 0x10A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8B8u;
label_10a8b8:
    // 0x10a8b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a8bc: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x10a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x10a8c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a8c4:
    // 0x10a8c4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10A8C4u;
    {
        const bool branch_taken_0x10a8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a8c4) {
            ctx->pc = 0x10A90Cu;
            goto label_10a90c;
        }
    }
    ctx->pc = 0x10A8CCu;
label_10a8cc:
    // 0x10a8cc: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x10a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10a8d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10a8d4: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x10a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x10a8d8: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x10a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10a8dc: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x10a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x10a8e0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x10a8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10a8e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10A8E4u;
    {
        const bool branch_taken_0x10a8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a8e4) {
            ctx->pc = 0x10A8F0u;
            goto label_10a8f0;
        }
    }
    ctx->pc = 0x10A8ECu;
    // 0x10a8ec: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x10a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_10a8f0:
    // 0x10a8f0: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x10a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10a8f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10a8f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a8f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a8fc: 0x0  nop
    ctx->pc = 0x10a8fcu;
    // NOP
    // 0x10a900: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10a900u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x10a904: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x10a904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_10a908:
    // 0x10a908: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10a908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a90c:
    // 0x10a90c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10a90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10a910:
    // 0x10a910: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x10a910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10a914: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10a914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a918: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10a918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a91c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10a91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a920: 0x3e00008  jr          $ra
    ctx->pc = 0x10A920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A920u;
        // 0x10a924: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A928u;
}
