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

// Function: entry_00175680
// Address: 0x175680 - 0x1757bc
void entry_00175680_0x175680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175680_0x175680");
#endif

    switch (ctx->pc) {
        case 0x1756c0u: goto label_1756c0;
        case 0x1756ecu: goto label_1756ec;
        case 0x175724u: goto label_175724;
        default: break;
    }

    ctx->pc = 0x175680u;

    // 0x175680: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x175680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x175684: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x175684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x175688: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x175688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x17568c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x175690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175694: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x175694u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175698: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x175698u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17569c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x17569cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1756a0: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x1756a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1756a4: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x1756a4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1756a8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1756a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1756ac: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1756acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1756b0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1756b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1756b4: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x1756b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1756b8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1756B8u;
    SET_GPR_U32(ctx, 31, 0x1756C0u);
    ctx->pc = 0x1756BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756B8u;
    // 0x1756bc: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1756B8u, 0x1756C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756C0u;
label_1756c0:
    // 0x1756c0: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1756c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1756c4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1756c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1756c8: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1756c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1756cc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1756ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1756d0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1756d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1756d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1756d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1756d8: 0x0  nop
    ctx->pc = 0x1756d8u;
    // NOP
    // 0x1756dc: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x1756dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1756e0: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x1756e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1756e4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1756E4u;
    SET_GPR_U32(ctx, 31, 0x1756ECu);
    ctx->pc = 0x1756E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756E4u;
    // 0x1756e8: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1756E4u, 0x1756ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756ECu;
label_1756ec:
    // 0x1756ec: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1756ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1756f0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1756f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1756f4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1756f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1756f8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1756f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1756fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1756fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175700: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x175700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175704: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175704u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175708: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x175708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x17570c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17570cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175710: 0x0  nop
    ctx->pc = 0x175710u;
    // NOP
    // 0x175714: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x175714u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175718: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x175718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17571c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17571Cu;
    SET_GPR_U32(ctx, 31, 0x175724u);
    ctx->pc = 0x175720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17571Cu;
    // 0x175720: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17571Cu, 0x175724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175724u;
label_175724:
    // 0x175724: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x175724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175728: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x17572c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x17572cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175730: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175734: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175734u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175738: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17573c: 0x0  nop
    ctx->pc = 0x17573cu;
    // NOP
    // 0x175740: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175740u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175744: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175748: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x175748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17574c: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x17574cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175750: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x175750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175754: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x175754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x175758: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17575c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17575cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175760: 0x0  nop
    ctx->pc = 0x175760u;
    // NOP
    // 0x175764: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x175764u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175768: 0x0  nop
    ctx->pc = 0x175768u;
    // NOP
    // 0x17576c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x17576Cu;
    {
        const bool branch_taken_0x17576c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x175770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17576Cu;
        // 0x175770: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17576c) {
            ctx->pc = 0x1757BCu;
            return;
        }
    }
    ctx->pc = 0x175774u;
    // 0x175774: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x175774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175778: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17577c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x17577cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175780: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x175780u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x175784: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175788: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x175788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x17578c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x17578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175790: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x175790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175794: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175798: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17579c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x17579cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1757a0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1757a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1757a4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1757a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1757a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1757a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1757ac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1757acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1757b0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1757b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1757b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1757B4u;
    {
        const bool branch_taken_0x1757b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1757B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757B4u;
        // 0x1757b8: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757b4) {
            ctx->pc = 0x1757C8u;
            return;
        }
    }
    ctx->pc = 0x1757BCu;
}
