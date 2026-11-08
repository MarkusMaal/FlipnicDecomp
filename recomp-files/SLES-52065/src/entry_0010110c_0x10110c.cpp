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

// Function: entry_0010110c
// Address: 0x10110c - 0x1011c8
void entry_0010110c_0x10110c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010110c_0x10110c");
#endif

    switch (ctx->pc) {
        case 0x101184u: goto label_101184;
        default: break;
    }

    ctx->pc = 0x10110cu;

    // 0x10110c: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x10110cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x101110: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x101110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x101114: 0x502023  subu        $a0, $v0, $s0
    ctx->pc = 0x101114u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x101118: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x101118u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10111c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101120: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x101120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x101124: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x101124u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x101128: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x101128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10112c: 0x84830228  lh          $v1, 0x228($a0)
    ctx->pc = 0x10112cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x101130: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x101130u;
    {
        const bool branch_taken_0x101130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x101134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101130u;
        // 0x101134: 0x24870040  addiu       $a3, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101130) {
            ctx->pc = 0x1012E8u;
            return;
        }
    }
    ctx->pc = 0x101138u;
    // 0x101138: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x101138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10113c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x10113cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x101140: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x101140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x101144: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x101144u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x101148: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x101148u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10114c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x10114cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x101150: 0xf8c40030  sqc2        $vf4, 0x30($a2)
    ctx->pc = 0x101150u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x101154: 0xf8c50020  sqc2        $vf5, 0x20($a2)
    ctx->pc = 0x101154u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x101158: 0xf8c60010  sqc2        $vf6, 0x10($a2)
    ctx->pc = 0x101158u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10115c: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x10115cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x101160: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x101160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x101164: 0xc4e00060  lwc1        $f0, 0x60($a3)
    ctx->pc = 0x101164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101168: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x101168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x10116c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10116cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x101170: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x101170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x101174: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x101174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x101178: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x101178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x10117c: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x10117Cu;
    SET_GPR_U32(ctx, 31, 0x101184u);
    ctx->pc = 0x101180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10117Cu;
    // 0x101180: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x10117Cu, 0x101184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101184u;
label_101184:
    // 0x101184: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x101184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x101188: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x101188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x10118c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x10118cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101190: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x101190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x101194: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101198: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x101198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10119c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x10119cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1011a0: 0x906200ab  lbu         $v0, 0xAB($v1)
    ctx->pc = 0x1011a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 171)));
    // 0x1011a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1011A4u;
    {
        const bool branch_taken_0x1011a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1011a4) {
            ctx->pc = 0x1011C8u;
            return;
        }
    }
    ctx->pc = 0x1011ACu;
    // 0x1011ac: 0x246301f0  addiu       $v1, $v1, 0x1F0
    ctx->pc = 0x1011acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 496));
    // 0x1011b0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1011b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1011b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1011b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1011b8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1011b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1011bc: 0x4a200180  vaddx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x1011bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1011c0: 0x4bc521a8  vadd.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x1011c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1011c4: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1011c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    ctx->pc = 0x1011c8u;
}
