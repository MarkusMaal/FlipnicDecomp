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

// Function: FUN_001658b0
// Address: 0x1658b0 - 0x165a1c
void FUN_001658b0_0x1658b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001658b0_0x1658b0");
#endif

    switch (ctx->pc) {
        case 0x165998u: goto label_165998;
        case 0x1659c0u: goto label_1659c0;
        case 0x1659d8u: goto label_1659d8;
        case 0x1659ecu: goto label_1659ec;
        case 0x1659f8u: goto label_1659f8;
        case 0x165a08u: goto label_165a08;
        default: break;
    }

    ctx->pc = 0x1658b0u;

    // 0x1658b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1658b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1658b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1658b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1658b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1658b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1658bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1658bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1658c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1658c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1658c4: 0x808201d0  lb          $v0, 0x1D0($a0)
    ctx->pc = 0x1658c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x1658c8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1658C8u;
    {
        const bool branch_taken_0x1658c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1658CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658C8u;
        // 0x1658cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658c8) {
            ctx->pc = 0x1658D8u;
            goto label_1658d8;
        }
    }
    ctx->pc = 0x1658D0u;
    // 0x1658d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1658d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1658d4: 0xa22201d0  sb          $v0, 0x1D0($s1)
    ctx->pc = 0x1658d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 464), (uint8_t)GPR_U32(ctx, 2));
label_1658d8:
    // 0x1658d8: 0x86220226  lh          $v0, 0x226($s1)
    ctx->pc = 0x1658d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
    // 0x1658dc: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1658DCu;
    {
        const bool branch_taken_0x1658dc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1658E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658DCu;
        // 0x1658e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658dc) {
            ctx->pc = 0x1658F4u;
            goto label_1658f4;
        }
    }
    ctx->pc = 0x1658E4u;
    // 0x1658e4: 0x86220222  lh          $v0, 0x222($s1)
    ctx->pc = 0x1658e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x1658e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1658E8u;
    {
        const bool branch_taken_0x1658e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658e8) {
            ctx->pc = 0x1658FCu;
            goto label_1658fc;
        }
    }
    ctx->pc = 0x1658F0u;
    // 0x1658f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1658f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1658f4:
    // 0x1658f4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1658F4u;
    {
        const bool branch_taken_0x1658f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1658F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658F4u;
        // 0x1658f8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658f4) {
            ctx->pc = 0x165A0Cu;
            goto label_165a0c;
        }
    }
    ctx->pc = 0x1658FCu;
label_1658fc:
    // 0x1658fc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1658fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165900: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x165900u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165904: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x165904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165908: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x165908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16590c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16590cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x165910: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x165910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165914: 0xc60201c0  lwc1        $f2, 0x1C0($s0)
    ctx->pc = 0x165914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x165918: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x165918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16591c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x16591cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x165920: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x165920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x165924: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x165924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165928: 0x0  nop
    ctx->pc = 0x165928u;
    // NOP
    // 0x16592c: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x16592Cu;
    {
        const bool branch_taken_0x16592c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x165930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16592Cu;
        // 0x165930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16592c) {
            ctx->pc = 0x165A00u;
            goto label_165a00;
        }
    }
    ctx->pc = 0x165934u;
    // 0x165934: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x165934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
    // 0x165938: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x165938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16593c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x16593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165940: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x165940u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165944: 0x0  nop
    ctx->pc = 0x165944u;
    // NOP
    // 0x165948: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x165948u;
    {
        const bool branch_taken_0x165948 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165948u;
        // 0x16594c: 0x26020290  addiu       $v0, $s0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165948) {
            ctx->pc = 0x165964u;
            goto label_165964;
        }
    }
    ctx->pc = 0x165950u;
    // 0x165950: 0x26020290  addiu       $v0, $s0, 0x290
    ctx->pc = 0x165950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x165954: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x165954u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x165958: 0x4b002103  vaddw.x     $vf4, $vf4, $vf0w
    ctx->pc = 0x165958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16595c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16595Cu;
    {
        const bool branch_taken_0x16595c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16595Cu;
        // 0x165960: 0xf8440000  sqc2        $vf4, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16595c) {
            ctx->pc = 0x165970u;
            goto label_165970;
        }
    }
    ctx->pc = 0x165964u;
label_165964:
    // 0x165964: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x165964u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x165968: 0x4b002107  vsubw.x     $vf4, $vf4, $vf0w
    ctx->pc = 0x165968u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16596c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16596cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_165970:
    // 0x165970: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x165970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x165974: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x165974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x165978: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x165978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16597c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x16597cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x165980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x165980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165988: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x165988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16598c: 0xc46c004c  lwc1        $f12, 0x4C($v1)
    ctx->pc = 0x16598cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x165990: 0xc056194  jal         func_158650
    ctx->pc = 0x165990u;
    SET_GPR_U32(ctx, 31, 0x165998u);
    ctx->pc = 0x165994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165990u;
    // 0x165994: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x165990u, 0x165998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165998u;
label_165998:
    // 0x165998: 0x822201d1  lb          $v0, 0x1D1($s1)
    ctx->pc = 0x165998u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 465)));
    // 0x16599c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16599Cu;
    {
        const bool branch_taken_0x16599c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16599c) {
            ctx->pc = 0x1659C0u;
            goto label_1659c0;
        }
    }
    ctx->pc = 0x1659A4u;
    // 0x1659a4: 0x822201d0  lb          $v0, 0x1D0($s1)
    ctx->pc = 0x1659a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x1659a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1659A8u;
    {
        const bool branch_taken_0x1659a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1659ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659A8u;
        // 0x1659ac: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1659a8) {
            ctx->pc = 0x1659C0u;
            goto label_1659c0;
        }
    }
    ctx->pc = 0x1659B0u;
    // 0x1659b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1659b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1659b4: 0xa22201d0  sb          $v0, 0x1D0($s1)
    ctx->pc = 0x1659b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 464), (uint8_t)GPR_U32(ctx, 2));
    // 0x1659b8: 0xc042118  jal         func_108460
    ctx->pc = 0x1659B8u;
    SET_GPR_U32(ctx, 31, 0x1659C0u);
    ctx->pc = 0x1659BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1659B8u;
    // 0x1659bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1659B8u, 0x1659C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1659C0u;
label_1659c0:
    // 0x1659c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1659c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1659c4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1659c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1659c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1659c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1659cc: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x1659ccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x1659d0: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1659D0u;
    SET_GPR_U32(ctx, 31, 0x1659D8u);
    ctx->pc = 0x1659D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1659D0u;
    // 0x1659d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1659D0u, 0x1659D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1659D8u;
label_1659d8:
    // 0x1659d8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1659d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1659dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1659dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1659e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1659e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1659e4: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x1659E4u;
    SET_GPR_U32(ctx, 31, 0x1659ECu);
    ctx->pc = 0x1659E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1659E4u;
    // 0x1659e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x1659E4u, 0x1659ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1659ECu;
label_1659ec:
    // 0x1659ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1659ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1659f0: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x1659F0u;
    SET_GPR_U32(ctx, 31, 0x1659F8u);
    ctx->pc = 0x1659F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1659F0u;
    // 0x1659f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x1659F0u, 0x1659F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1659F8u;
label_1659f8:
    // 0x1659f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1659F8u;
    {
        const bool branch_taken_0x1659f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1659FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659F8u;
        // 0x1659fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1659f8) {
            ctx->pc = 0x165A08u;
            goto label_165a08;
        }
    }
    ctx->pc = 0x165A00u;
label_165a00:
    // 0x165a00: 0xc059990  jal         func_166640
    ctx->pc = 0x165A00u;
    SET_GPR_U32(ctx, 31, 0x165A08u);
    ctx->pc = 0x165A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165A00u;
    // 0x165a04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x165A00u, 0x165A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A08u;
label_165a08:
    // 0x165a08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x165a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_165a0c:
    // 0x165a0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165a10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165a14: 0x3e00008  jr          $ra
    ctx->pc = 0x165A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A14u;
        // 0x165a18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165A1Cu;
}
