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

// Function: FUN_00177310
// Address: 0x177310 - 0x1775dc
void FUN_00177310_0x177310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00177310_0x177310");
#endif

    switch (ctx->pc) {
        case 0x177404u: goto label_177404;
        case 0x177440u: goto label_177440;
        case 0x1774c8u: goto label_1774c8;
        case 0x177590u: goto label_177590;
        default: break;
    }

    ctx->pc = 0x177310u;

    // 0x177310: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x177310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x177314: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x177314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x177318: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x177318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17731c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x17731cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x177320: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x177320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x177324: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x177324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x177328: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x177328u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17732c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x177330: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x177330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177334: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x177334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x177338: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x177338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17733c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17733cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x177340: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x177340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x177344: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x177344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177348: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x177348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17734c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x17734cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x177350: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177354: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x177354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x177358: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x177358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x17735c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x17735cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177360: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x177360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177364: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177368: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x177368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17736c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x17736cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x177370: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x177370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177374: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x177374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177378: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177378u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17737c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17737cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x177380: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x177380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x177384: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x177384u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x177388: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x177388u;
    {
        const bool branch_taken_0x177388 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177388u;
        // 0x17738c: 0xf8a10000  sqc2        $vf1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177388) {
            ctx->pc = 0x177430u;
            goto label_177430;
        }
    }
    ctx->pc = 0x177390u;
    // 0x177390: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x177390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177394: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x177394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177398: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x177398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17739c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x17739cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1773a0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1773a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1773a4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1773a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1773a8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1773a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1773ac: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1773ACu;
    {
        const bool branch_taken_0x1773ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1773B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773ACu;
        // 0x1773b0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1773ac) {
            ctx->pc = 0x1773FCu;
            goto label_1773fc;
        }
    }
    ctx->pc = 0x1773B4u;
    // 0x1773b4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1773b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1773b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1773b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1773bc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1773bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1773c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1773c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1773c4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1773c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1773c8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1773c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1773cc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1773ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1773d0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1773d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1773d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1773d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1773d8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1773d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1773dc: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1773dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1773e0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1773e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1773e4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1773e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1773e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1773e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1773ec: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1773ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1773f0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1773f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1773f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1773F4u;
    {
        const bool branch_taken_0x1773f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1773F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773F4u;
        // 0x1773f8: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1773f4) {
            ctx->pc = 0x177404u;
            goto label_177404;
        }
    }
    ctx->pc = 0x1773FCu;
label_1773fc:
    // 0x1773fc: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1773FCu;
    SET_GPR_U32(ctx, 31, 0x177404u);
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1773FCu, 0x177404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177404u;
label_177404:
    // 0x177404: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x177404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177408: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x177408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17740c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x17740cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x177410: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x177410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x177414: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x177414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x177418: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x177418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17741c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17741cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x177420: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x177420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
    // 0x177424: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x177424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177428: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x177428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17742c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x17742cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_177430:
    // 0x177430: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x177430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x177434: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x177434u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177438: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x177438u;
    {
        const bool branch_taken_0x177438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177438u;
        // 0x17743c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177438) {
            ctx->pc = 0x1774F8u;
            goto label_1774f8;
        }
    }
    ctx->pc = 0x177440u;
label_177440:
    // 0x177440: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x177440u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x177444: 0x4bc110a8  vadd.xyz    $vf2, $vf2, $vf1
    ctx->pc = 0x177444u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x177448: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x177448u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x17744c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17744cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177450: 0x0  nop
    ctx->pc = 0x177450u;
    // NOP
    // 0x177454: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x177454u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177458: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x177458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17745c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x17745cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x177460: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x177460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x177464: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x177464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x177468: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x177468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17746c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x17746Cu;
    {
        const bool branch_taken_0x17746c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x177470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17746Cu;
        // 0x177470: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17746c) {
            ctx->pc = 0x1774BCu;
            goto label_1774bc;
        }
    }
    ctx->pc = 0x177474u;
    // 0x177474: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x177474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177478: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x177478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17747c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x17747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177480: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177484: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177488: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x177488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x17748c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x17748cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177490: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x177490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177494: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x177494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x177498: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17749c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x17749cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1774a0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1774a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1774a4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1774a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1774a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1774a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1774ac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1774acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1774b0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1774b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1774b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1774B4u;
    {
        const bool branch_taken_0x1774b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1774B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774B4u;
        // 0x1774b8: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774b4) {
            ctx->pc = 0x1774C8u;
            goto label_1774c8;
        }
    }
    ctx->pc = 0x1774BCu;
label_1774bc:
    // 0x1774bc: 0x0  nop
    ctx->pc = 0x1774bcu;
    // NOP
    // 0x1774c0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1774C0u;
    SET_GPR_U32(ctx, 31, 0x1774C8u);
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1774C0u, 0x1774C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774C8u;
label_1774c8:
    // 0x1774c8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1774c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1774cc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1774ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1774d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1774d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1774d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1774d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1774d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1774d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1774dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1774dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1774e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1774e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1774e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1774e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1774e8: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x1774e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
    // 0x1774ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1774ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1774f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1774f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1774f4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1774f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1774f8:
    // 0x1774f8: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x1774f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1774fc: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1774FCu;
    {
        const bool branch_taken_0x1774fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774FCu;
        // 0x177500: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774fc) {
            ctx->pc = 0x177440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177440;
        }
    }
    ctx->pc = 0x177504u;
    // 0x177504: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x177504u;
    {
        const bool branch_taken_0x177504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x177508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177504u;
        // 0x177508: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177504) {
            ctx->pc = 0x1775BCu;
            goto label_1775bc;
        }
    }
    ctx->pc = 0x17750Cu;
    // 0x17750c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x17750cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x177510: 0x4bc110a8  vadd.xyz    $vf2, $vf2, $vf1
    ctx->pc = 0x177510u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x177514: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x177514u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x177518: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x177518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17751c: 0x0  nop
    ctx->pc = 0x17751cu;
    // NOP
    // 0x177520: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x177520u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177524: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x177524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177528: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x177528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17752c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x17752cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x177530: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x177530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x177534: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x177534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x177538: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x177538u;
    {
        const bool branch_taken_0x177538 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177538u;
        // 0x17753c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177538) {
            ctx->pc = 0x177588u;
            goto label_177588;
        }
    }
    ctx->pc = 0x177540u;
    // 0x177540: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x177540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177544: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x177544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x177548: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x177548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17754c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17754cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177550: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177554: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x177554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x177558: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x177558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17755c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x17755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177560: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x177560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x177564: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177568: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x177568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x17756c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x17756cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177570: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x177570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177574: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x177574u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x177578: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17757c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x17757cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x177580: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x177580u;
    {
        const bool branch_taken_0x177580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177580u;
        // 0x177584: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177580) {
            ctx->pc = 0x177590u;
            goto label_177590;
        }
    }
    ctx->pc = 0x177588u;
label_177588:
    // 0x177588: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x177588u;
    SET_GPR_U32(ctx, 31, 0x177590u);
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x177588u, 0x177590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177590u;
label_177590:
    // 0x177590: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x177590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177594: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x177594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177598: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x177598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17759c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17759cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1775a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1775a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1775a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1775a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1775a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1775a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1775ac: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x1775acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
    // 0x1775b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1775b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1775b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1775b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1775b8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1775b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1775bc:
    // 0x1775bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1775bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1775c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1775c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1775c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1775c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1775c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1775c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1775cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1775ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1775d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1775d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1775d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1775D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1775D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775D4u;
        // 0x1775d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1775D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1775DCu;
}
