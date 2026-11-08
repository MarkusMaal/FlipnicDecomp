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

// Function: FUN_001871d0
// Address: 0x1871d0 - 0x18728c
void FUN_001871d0_0x1871d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001871d0_0x1871d0");
#endif

    switch (ctx->pc) {
        case 0x18725cu: goto label_18725c;
        case 0x187278u: goto label_187278;
        default: break;
    }

    ctx->pc = 0x1871d0u;

    // 0x1871d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1871d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1871d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1871d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1871d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1871d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1871dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1871dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1871e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1871e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1871e4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1871e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1871e8: 0x4bfc81bc  vmulax.xyzw $ACC, $vf16, $vf28x
    ctx->pc = 0x1871e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1871ec: 0x4bfc88bd  vmadday.xyzw $ACC, $vf17, $vf28y
    ctx->pc = 0x1871ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1871f0: 0x4bfc90be  vmaddaz.xyzw $ACC, $vf18, $vf28z
    ctx->pc = 0x1871f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1871f4: 0x4bfc990b  vmaddw.xyzw $vf4, $vf19, $vf28w
    ctx->pc = 0x1871f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1871f8: 0x4bfd81bc  vmulax.xyzw $ACC, $vf16, $vf29x
    ctx->pc = 0x1871f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1871fc: 0x4bfd88bd  vmadday.xyzw $ACC, $vf17, $vf29y
    ctx->pc = 0x1871fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x187200: 0x4bfd90be  vmaddaz.xyzw $ACC, $vf18, $vf29z
    ctx->pc = 0x187200u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x187204: 0x4bfd994b  vmaddw.xyzw $vf5, $vf19, $vf29w
    ctx->pc = 0x187204u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x187208: 0x4bfe81bc  vmulax.xyzw $ACC, $vf16, $vf30x
    ctx->pc = 0x187208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18720c: 0x4bfe88bd  vmadday.xyzw $ACC, $vf17, $vf30y
    ctx->pc = 0x18720cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x187210: 0x4bfe90be  vmaddaz.xyzw $ACC, $vf18, $vf30z
    ctx->pc = 0x187210u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x187214: 0x4bfe998b  vmaddw.xyzw $vf6, $vf19, $vf30w
    ctx->pc = 0x187214u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x187218: 0x4be081bc  vmulax.xyzw $ACC, $vf16, $vf0x
    ctx->pc = 0x187218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18721c: 0x4be088bd  vmadday.xyzw $ACC, $vf17, $vf0y
    ctx->pc = 0x18721cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x187220: 0x4be090be  vmaddaz.xyzw $ACC, $vf18, $vf0z
    ctx->pc = 0x187220u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x187224: 0x4be099cb  vmaddw.xyzw $vf7, $vf19, $vf0w
    ctx->pc = 0x187224u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x187228: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x187228u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18722c: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x18722cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x187230: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x187230u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x187234: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x187234u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x187238: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x187238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18723c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18723cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187240: 0x0  nop
    ctx->pc = 0x187240u;
    // NOP
    // 0x187244: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x187244u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x187248: 0x0  nop
    ctx->pc = 0x187248u;
    // NOP
    // 0x18724c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x18724Cu;
    {
        const bool branch_taken_0x18724c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18724c) {
            ctx->pc = 0x187278u;
            goto label_187278;
        }
    }
    ctx->pc = 0x187254u;
    // 0x187254: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x187254u;
    SET_GPR_U32(ctx, 31, 0x18725Cu);
    ctx->pc = 0x187258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187254u;
    // 0x187258: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x187254u, 0x18725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18725Cu;
label_18725c:
    // 0x18725c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18725cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187264: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x187264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x187268: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x187268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18726c: 0xe7b40044  swc1        $f20, 0x44($sp)
    ctx->pc = 0x18726cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x187270: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x187270u;
    SET_GPR_U32(ctx, 31, 0x187278u);
    ctx->pc = 0x187274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187270u;
    // 0x187274: 0xe7b40058  swc1        $f20, 0x58($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x187270u, 0x187278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187278u;
label_187278:
    // 0x187278: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18727c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x187280: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x187280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187284: 0x3e00008  jr          $ra
    ctx->pc = 0x187284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187284u;
        // 0x187288: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18728Cu;
}
