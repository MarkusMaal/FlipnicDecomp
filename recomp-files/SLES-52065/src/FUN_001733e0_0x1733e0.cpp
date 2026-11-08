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

// Function: FUN_001733e0
// Address: 0x1733e0 - 0x1736c4
void FUN_001733e0_0x1733e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001733e0_0x1733e0");
#endif

    switch (ctx->pc) {
        case 0x1734e4u: goto label_1734e4;
        case 0x173520u: goto label_173520;
        case 0x1735a8u: goto label_1735a8;
        case 0x173674u: goto label_173674;
        default: break;
    }

    ctx->pc = 0x1733e0u;

    // 0x1733e0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1733e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1733e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1733e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1733e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1733e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1733ec: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1733ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1733f0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1733f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1733f4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1733f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1733f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1733f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1733fc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1733fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173400: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x173400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x173404: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x173404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173408: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x173408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17340c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x17340cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173410: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x173410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x173414: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x173414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173418: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x173418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17341c: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x17341cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x173420: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x173420u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x173424: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x173424u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x173428: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x173428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17342c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x17342cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173430: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x173430u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x173434: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173434u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173438: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x173438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17343c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x17343cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x173440: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x173440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173444: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x173444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173448: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173448u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17344c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17344cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x173450: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x173450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x173454: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x173454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173458: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x173458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17345c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17345cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173460: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x173460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x173464: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x173464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x173468: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x173468u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17346c: 0xf9010000  sqc2        $vf1, 0x0($t0)
    ctx->pc = 0x17346cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x173470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173474: 0x0  nop
    ctx->pc = 0x173474u;
    // NOP
    // 0x173478: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x173478u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17347c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x17347cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x173480: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x173480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x173484: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x173484u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x173488: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x173488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17348c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17348cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x173490: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x173490u;
    {
        const bool branch_taken_0x173490 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x173494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173490u;
        // 0x173494: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173490) {
            ctx->pc = 0x1734DCu;
            goto label_1734dc;
        }
    }
    ctx->pc = 0x173498u;
    // 0x173498: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x173498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17349c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x17349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1734a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1734a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1734a4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1734a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1734a8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1734a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1734ac: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1734acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1734b0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1734b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1734b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1734b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1734b8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1734b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1734bc: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1734bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1734c0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1734c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1734c4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1734c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1734c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1734c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1734cc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1734ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1734d0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1734d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1734d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1734D4u;
    {
        const bool branch_taken_0x1734d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1734D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1734D4u;
        // 0x1734d8: 0xe483001c  swc1        $f3, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1734d4) {
            ctx->pc = 0x1734E4u;
            goto label_1734e4;
        }
    }
    ctx->pc = 0x1734DCu;
label_1734dc:
    // 0x1734dc: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1734DCu;
    SET_GPR_U32(ctx, 31, 0x1734E4u);
    ctx->pc = 0x1734E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1734DCu;
    // 0x1734e0: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1734DCu, 0x1734E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1734E4u;
label_1734e4:
    // 0x1734e4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1734e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1734e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1734e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1734ec: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1734ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1734f0: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1734f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1734f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1734f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1734f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1734f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1734fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1734fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x173500: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x173500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x173504: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x173504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
    // 0x173508: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x173508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17350c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17350cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x173510: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x173510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x173514: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x173514u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x173518: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x173518u;
    {
        const bool branch_taken_0x173518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173518u;
        // 0x17351c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173518) {
            ctx->pc = 0x1735D8u;
            goto label_1735d8;
        }
    }
    ctx->pc = 0x173520u;
label_173520:
    // 0x173520: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x173520u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x173524: 0x4bc110a8  vadd.xyz    $vf2, $vf2, $vf1
    ctx->pc = 0x173524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x173528: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x173528u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x17352c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17352cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173530: 0x0  nop
    ctx->pc = 0x173530u;
    // NOP
    // 0x173534: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x173534u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173538: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x173538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17353c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x17353cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x173540: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x173540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x173544: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x173544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x173548: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x173548u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17354c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x17354Cu;
    {
        const bool branch_taken_0x17354c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x173550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17354Cu;
        // 0x173550: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17354c) {
            ctx->pc = 0x17359Cu;
            goto label_17359c;
        }
    }
    ctx->pc = 0x173554u;
    // 0x173554: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x173554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173558: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x173558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17355c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x17355cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173560: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173564: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x173564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x173568: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x173568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x17356c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x17356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173570: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x173570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173574: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173574u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173578: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x173578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17357c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x17357cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x173580: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x173580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173584: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x173584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173588: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173588u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17358c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x17358cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x173590: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x173590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x173594: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x173594u;
    {
        const bool branch_taken_0x173594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173594u;
        // 0x173598: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173594) {
            ctx->pc = 0x1735A8u;
            goto label_1735a8;
        }
    }
    ctx->pc = 0x17359Cu;
label_17359c:
    // 0x17359c: 0x0  nop
    ctx->pc = 0x17359cu;
    // NOP
    // 0x1735a0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1735A0u;
    SET_GPR_U32(ctx, 31, 0x1735A8u);
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1735A0u, 0x1735A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1735A8u;
label_1735a8:
    // 0x1735a8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1735a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1735ac: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1735acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1735b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1735b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1735b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1735b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1735b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1735b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1735bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1735bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1735c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1735c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1735c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1735c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1735c8: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x1735c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
    // 0x1735cc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1735ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1735d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1735d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1735d4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1735d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1735d8:
    // 0x1735d8: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x1735d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1735dc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1735dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1735e0: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1735E0u;
    {
        const bool branch_taken_0x1735e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1735E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735E0u;
        // 0x1735e4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735e0) {
            ctx->pc = 0x173520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173520;
        }
    }
    ctx->pc = 0x1735E8u;
    // 0x1735e8: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1735E8u;
    {
        const bool branch_taken_0x1735e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1735ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735E8u;
        // 0x1735ec: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735e8) {
            ctx->pc = 0x1736A0u;
            goto label_1736a0;
        }
    }
    ctx->pc = 0x1735F0u;
    // 0x1735f0: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1735f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1735f4: 0x4bc110a8  vadd.xyz    $vf2, $vf2, $vf1
    ctx->pc = 0x1735f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1735f8: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1735f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1735fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1735fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173600: 0x0  nop
    ctx->pc = 0x173600u;
    // NOP
    // 0x173604: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x173604u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173608: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x173608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17360c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x17360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x173610: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x173610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x173614: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x173614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x173618: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x173618u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17361c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x17361Cu;
    {
        const bool branch_taken_0x17361c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x173620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17361Cu;
        // 0x173620: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17361c) {
            ctx->pc = 0x17366Cu;
            goto label_17366c;
        }
    }
    ctx->pc = 0x173624u;
    // 0x173624: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x173624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173628: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x173628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17362c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x17362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173630: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173630u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173634: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x173634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x173638: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x173638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x17363c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x17363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173640: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x173640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173644: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173648: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x173648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17364c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x17364cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x173650: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x173650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173654: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x173654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173658: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173658u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17365c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x17365cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x173660: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x173660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x173664: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x173664u;
    {
        const bool branch_taken_0x173664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173664u;
        // 0x173668: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173664) {
            ctx->pc = 0x173674u;
            goto label_173674;
        }
    }
    ctx->pc = 0x17366Cu;
label_17366c:
    // 0x17366c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x17366Cu;
    SET_GPR_U32(ctx, 31, 0x173674u);
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x17366Cu, 0x173674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173674u;
label_173674:
    // 0x173674: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x173674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x173678: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x173678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17367c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x17367cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x173680: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x173680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x173684: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x173684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173688: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x173688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17368c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17368cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x173690: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x173690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
    // 0x173694: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x173694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x173698: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x173698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17369c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x17369cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1736a0:
    // 0x1736a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1736a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1736a4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1736a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1736a8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1736a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1736ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1736acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1736b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1736b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1736b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1736b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1736b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1736b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1736bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1736BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1736C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736BCu;
        // 0x1736c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1736BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1736C4u;
}
