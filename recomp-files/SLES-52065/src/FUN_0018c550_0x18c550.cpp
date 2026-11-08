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

// Function: FUN_0018c550
// Address: 0x18c550 - 0x18c72c
void FUN_0018c550_0x18c550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018c550_0x18c550");
#endif

    switch (ctx->pc) {
        case 0x18c5bcu: goto label_18c5bc;
        case 0x18c610u: goto label_18c610;
        default: break;
    }

    ctx->pc = 0x18c550u;

    // 0x18c550: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18c550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18c554: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18c554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18c558: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18c558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18c55c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18c55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18c560: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18c560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18c564: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18c564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c568: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18c568u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18c56c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c570: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x18c570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c574: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x18c574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18c578: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x18c578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x18c57c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18c57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c580: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x18c580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c584: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x18c584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x18c588: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x18c588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x18c58c: 0xc48204d0  lwc1        $f2, 0x4D0($a0)
    ctx->pc = 0x18c58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c590: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x18c590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c594: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x18c594u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x18c598: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x18c598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x18c59c: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x18c59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c5a0: 0xc48304d8  lwc1        $f3, 0x4D8($a0)
    ctx->pc = 0x18c5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18c5a4: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x18c5a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x18c5a8: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x18c5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x18c5ac: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x18c5acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x18c5b0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x18c5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c5b4: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x18C5B4u;
    SET_GPR_U32(ctx, 31, 0x18C5BCu);
    ctx->pc = 0x18C5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C5B4u;
    // 0x18c5b8: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x18C5B4u, 0x18C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C5BCu;
label_18c5bc:
    // 0x18c5bc: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x18c5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18c5c0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x18c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18c5c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x18c5c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x18c5c8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18c5c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c5cc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x18c5ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c5d0: 0x4bc4296c  vsub.xyz    $vf5, $vf5, $vf4
    ctx->pc = 0x18c5d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c5d4: 0x4bc5292a  vmul.xyz    $vf4, $vf5, $vf5
    ctx->pc = 0x18c5d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18c5d8: 0x4b85233d  vmr32.xy    $vf5, $vf4
    ctx->pc = 0x18c5d8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c5dc: 0x4b062b3d  vmr32.x     $vf6, $vf5
    ctx->pc = 0x18c5dcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18c5e0: 0x4b0521e8  vadd.x      $vf7, $vf4, $vf5
    ctx->pc = 0x18c5e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18c5e4: 0x4b073168  vadd.x      $vf5, $vf6, $vf7
    ctx->pc = 0x18c5e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c5e8: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18c5e8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18c5ec: 0x4a0003bf  vwaitq
    ctx->pc = 0x18c5ecu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18c5f0: 0x4842b000  cfc2.ni     $v0, $vi22
    ctx->pc = 0x18c5f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18c5f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18c5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18c5f8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x18c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c5fc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18c5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x18c600: 0xc60104d4  lwc1        $f1, 0x4D4($s0)
    ctx->pc = 0x18c600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c604: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x18c604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c608: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x18C608u;
    SET_GPR_U32(ctx, 31, 0x18C610u);
    ctx->pc = 0x18C60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C608u;
    // 0x18c60c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x18C608u, 0x18C610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C610u;
label_18c610:
    // 0x18c610: 0xe6000530  swc1        $f0, 0x530($s0)
    ctx->pc = 0x18c610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1328), bits); }
    // 0x18c614: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x18c614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x18c618: 0xe6140534  swc1        $f20, 0x534($s0)
    ctx->pc = 0x18c618u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1332), bits); }
    // 0x18c61c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18c61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18c620: 0xc60204e0  lwc1        $f2, 0x4E0($s0)
    ctx->pc = 0x18c620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c624: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18c624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c628: 0x0  nop
    ctx->pc = 0x18c628u;
    // NOP
    // 0x18c62c: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x18c62cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x18c630: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x18c630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c634: 0x0  nop
    ctx->pc = 0x18c634u;
    // NOP
    // 0x18c638: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x18C638u;
    {
        const bool branch_taken_0x18c638 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C638u;
        // 0x18c63c: 0xe6020570  swc1        $f2, 0x570($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c638) {
            ctx->pc = 0x18C65Cu;
            goto label_18c65c;
        }
    }
    ctx->pc = 0x18C640u;
    // 0x18c640: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x18c640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x18c644: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18c644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18c648: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c64c: 0x0  nop
    ctx->pc = 0x18c64cu;
    // NOP
    // 0x18c650: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x18c650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x18c654: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18C654u;
    {
        const bool branch_taken_0x18c654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C654u;
        // 0x18c658: 0xe6000570  swc1        $f0, 0x570($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c654) {
            ctx->pc = 0x18C690u;
            goto label_18c690;
        }
    }
    ctx->pc = 0x18C65Cu;
label_18c65c:
    // 0x18c65c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x18c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x18c660: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18c660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18c664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c668: 0x0  nop
    ctx->pc = 0x18c668u;
    // NOP
    // 0x18c66c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x18c66cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c670: 0x0  nop
    ctx->pc = 0x18c670u;
    // NOP
    // 0x18c674: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x18C674u;
    {
        const bool branch_taken_0x18c674 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C674u;
        // 0x18c678: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c674) {
            ctx->pc = 0x18C690u;
            goto label_18c690;
        }
    }
    ctx->pc = 0x18C67Cu;
    // 0x18c67c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18c67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18c680: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c680u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c684: 0x0  nop
    ctx->pc = 0x18c684u;
    // NOP
    // 0x18c688: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x18c688u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x18c68c: 0xe6000570  swc1        $f0, 0x570($s0)
    ctx->pc = 0x18c68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1392), bits); }
label_18c690:
    // 0x18c690: 0xc60104e4  lwc1        $f1, 0x4E4($s0)
    ctx->pc = 0x18c690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c694: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x18c694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x18c698: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18c698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18c69c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c69cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c6a0: 0x0  nop
    ctx->pc = 0x18c6a0u;
    // NOP
    // 0x18c6a4: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x18c6a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x18c6a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18c6a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c6ac: 0x0  nop
    ctx->pc = 0x18c6acu;
    // NOP
    // 0x18c6b0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x18C6B0u;
    {
        const bool branch_taken_0x18c6b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6B0u;
        // 0x18c6b4: 0xe6010574  swc1        $f1, 0x574($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6b0) {
            ctx->pc = 0x18C6D4u;
            goto label_18c6d4;
        }
    }
    ctx->pc = 0x18C6B8u;
    // 0x18c6b8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x18c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x18c6bc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18c6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18c6c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c6c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c6c4: 0x0  nop
    ctx->pc = 0x18c6c4u;
    // NOP
    // 0x18c6c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18c6c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18c6cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18C6CCu;
    {
        const bool branch_taken_0x18c6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6CCu;
        // 0x18c6d0: 0xe6000574  swc1        $f0, 0x574($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6cc) {
            ctx->pc = 0x18C70Cu;
            goto label_18c70c;
        }
    }
    ctx->pc = 0x18C6D4u;
label_18c6d4:
    // 0x18c6d4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x18c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x18c6d8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18c6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18c6dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c6dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c6e0: 0x0  nop
    ctx->pc = 0x18c6e0u;
    // NOP
    // 0x18c6e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18c6e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c6e8: 0x0  nop
    ctx->pc = 0x18c6e8u;
    // NOP
    // 0x18c6ec: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x18C6ECu;
    {
        const bool branch_taken_0x18c6ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6ECu;
        // 0x18c6f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6ec) {
            ctx->pc = 0x18C710u;
            goto label_18c710;
        }
    }
    ctx->pc = 0x18C6F4u;
    // 0x18c6f4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x18c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x18c6f8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18c6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18c6fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c6fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c700: 0x0  nop
    ctx->pc = 0x18c700u;
    // NOP
    // 0x18c704: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c708: 0xe6000574  swc1        $f0, 0x574($s0)
    ctx->pc = 0x18c708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
label_18c70c:
    // 0x18c70c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c710:
    // 0x18c710: 0xae030560  sw          $v1, 0x560($s0)
    ctx->pc = 0x18c710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 3));
    // 0x18c714: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18c714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c718: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18c718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18c71c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18c71cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c720: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18c720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c724: 0x3e00008  jr          $ra
    ctx->pc = 0x18C724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C724u;
        // 0x18c728: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C72Cu;
}
