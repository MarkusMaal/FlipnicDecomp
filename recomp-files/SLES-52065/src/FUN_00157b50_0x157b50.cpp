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

// Function: FUN_00157b50
// Address: 0x157b50 - 0x157e7c
void FUN_00157b50_0x157b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157b50_0x157b50");
#endif

    switch (ctx->pc) {
        case 0x157b64u: goto label_157b64;
        case 0x157b74u: goto label_157b74;
        case 0x157be0u: goto label_157be0;
        case 0x157c78u: goto label_157c78;
        case 0x157c8cu: goto label_157c8c;
        case 0x157cb0u: goto label_157cb0;
        case 0x157cc4u: goto label_157cc4;
        case 0x157ce8u: goto label_157ce8;
        case 0x157cfcu: goto label_157cfc;
        case 0x157dd4u: goto label_157dd4;
        default: break;
    }

    ctx->pc = 0x157b50u;

    // 0x157b50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x157b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x157b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x157b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157b5c: 0xc05619c  jal         func_158670
    ctx->pc = 0x157B5Cu;
    SET_GPR_U32(ctx, 31, 0x157B64u);
    ctx->pc = 0x157B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B5Cu;
    // 0x157b60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158670u, 0x157B5Cu, 0x157B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B64u;
label_157b64:
    // 0x157b64: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x157b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x157b68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x157b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x157B6Cu;
    {
        const bool branch_taken_0x157b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B6Cu;
        // 0x157b70: 0x34437cee  ori         $v1, $v0, 0x7CEE (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31982);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b6c) {
            ctx->pc = 0x157B94u;
            goto label_157b94;
        }
    }
    ctx->pc = 0x157B74u;
label_157b74:
    // 0x157b74: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x157b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x157b78: 0x24450270  addiu       $a1, $v0, 0x270
    ctx->pc = 0x157b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x157b7c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157b7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157b80: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x157b80u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157b84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x157b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x157b88: 0xac400280  sw          $zero, 0x280($v0)
    ctx->pc = 0x157b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 0));
    // 0x157b8c: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x157b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
    // 0x157b90: 0xac430288  sw          $v1, 0x288($v0)
    ctx->pc = 0x157b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 648), GPR_U32(ctx, 3));
label_157b94:
    // 0x157b94: 0x0  nop
    ctx->pc = 0x157b94u;
    // NOP
    // 0x157b98: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x157b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x157b9c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x157B9Cu;
    {
        const bool branch_taken_0x157b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B9Cu;
        // 0x157ba0: 0x41140  sll         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b9c) {
            ctx->pc = 0x157B74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157b74;
        }
    }
    ctx->pc = 0x157BA4u;
    // 0x157ba4: 0x3c0244fe  lui         $v0, 0x44FE
    ctx->pc = 0x157ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17662 << 16));
    // 0x157ba8: 0x344240cc  ori         $v0, $v0, 0x40CC
    ctx->pc = 0x157ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16588);
    // 0x157bac: 0xae0201c8  sw          $v0, 0x1C8($s0)
    ctx->pc = 0x157bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 2));
    // 0x157bb0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157bb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157bb4: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x157bb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157bb8: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x157bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157bbc: 0x260201b0  addiu       $v0, $s0, 0x1B0
    ctx->pc = 0x157bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x157bc0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157bc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157bc4: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x157bc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157bc8: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157bcc: 0x26020260  addiu       $v0, $s0, 0x260
    ctx->pc = 0x157bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x157bd0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157bd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157bd4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157bd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157BD8u;
    {
        const bool branch_taken_0x157bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BD8u;
        // 0x157bdc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bd8) {
            ctx->pc = 0x157BECu;
            goto label_157bec;
        }
    }
    ctx->pc = 0x157BE0u;
label_157be0:
    // 0x157be0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x157be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x157be4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x157be8: 0xac400280  sw          $zero, 0x280($v0)
    ctx->pc = 0x157be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 0));
label_157bec:
    // 0x157bec: 0x0  nop
    ctx->pc = 0x157becu;
    // NOP
    // 0x157bf0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x157bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x157bf4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x157BF4u;
    {
        const bool branch_taken_0x157bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BF4u;
        // 0x157bf8: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bf4) {
            ctx->pc = 0x157BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157be0;
        }
    }
    ctx->pc = 0x157BFCu;
    // 0x157bfc: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x157bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x157c00: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157c00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157c04: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157c04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157c08: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x157c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157c0c: 0xae0002f0  sw          $zero, 0x2F0($s0)
    ctx->pc = 0x157c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 0));
    // 0x157c10: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157c10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157c14: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157c14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157c18: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x157c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x157c1c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x157c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x157c20: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x157c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x157c24: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157c24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157c28: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x157c28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157c2c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x157c2cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157c30: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x157c30u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157c34: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x157c34u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x157c38: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x157c38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157c3c: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x157c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x157c40: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x157c40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157c44: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x157c44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x157c48: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x157c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x157c4c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157c4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157c50: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x157c50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157c54: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x157c54u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157c58: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x157c58u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157c5c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x157c5cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x157c60: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x157c60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157c64: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x157c64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x157c68: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x157c68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157c6c: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x157c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x157c70: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x157C70u;
    SET_GPR_U32(ctx, 31, 0x157C78u);
    ctx->pc = 0x157C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C70u;
    // 0x157c74: 0xc60c0260  lwc1        $f12, 0x260($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x157C70u, 0x157C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C78u;
label_157c78:
    // 0x157c78: 0xe6000260  swc1        $f0, 0x260($s0)
    ctx->pc = 0x157c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x157c7c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x157c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x157c80: 0xc60c0260  lwc1        $f12, 0x260($s0)
    ctx->pc = 0x157c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157c84: 0xc07d3fe  jal         func_1F4FF8
    ctx->pc = 0x157C84u;
    SET_GPR_U32(ctx, 31, 0x157C8Cu);
    ctx->pc = 0x157C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C84u;
    // 0x157c88: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x157C84u, 0x157C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C8Cu;
label_157c8c:
    // 0x157c8c: 0xc60c0268  lwc1        $f12, 0x268($s0)
    ctx->pc = 0x157c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157c90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157c94: 0x0  nop
    ctx->pc = 0x157c94u;
    // NOP
    // 0x157c98: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x157c98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157c9c: 0x0  nop
    ctx->pc = 0x157c9cu;
    // NOP
    // 0x157ca0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x157CA0u;
    {
        const bool branch_taken_0x157ca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x157ca0) {
            ctx->pc = 0x157CC4u;
            goto label_157cc4;
        }
    }
    ctx->pc = 0x157CA8u;
    // 0x157ca8: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x157CA8u;
    SET_GPR_U32(ctx, 31, 0x157CB0u);
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x157CA8u, 0x157CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CB0u;
label_157cb0:
    // 0x157cb0: 0xe6000268  swc1        $f0, 0x268($s0)
    ctx->pc = 0x157cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x157cb4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x157cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x157cb8: 0xc60c0268  lwc1        $f12, 0x268($s0)
    ctx->pc = 0x157cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157cbc: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x157CBCu;
    SET_GPR_U32(ctx, 31, 0x157CC4u);
    ctx->pc = 0x157CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CBCu;
    // 0x157cc0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x157CBCu, 0x157CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CC4u;
label_157cc4:
    // 0x157cc4: 0xc60c0264  lwc1        $f12, 0x264($s0)
    ctx->pc = 0x157cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157cc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157ccc: 0x0  nop
    ctx->pc = 0x157cccu;
    // NOP
    // 0x157cd0: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x157cd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157cd4: 0x0  nop
    ctx->pc = 0x157cd4u;
    // NOP
    // 0x157cd8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x157CD8u;
    {
        const bool branch_taken_0x157cd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x157CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CD8u;
        // 0x157cdc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cd8) {
            ctx->pc = 0x157D00u;
            goto label_157d00;
        }
    }
    ctx->pc = 0x157CE0u;
    // 0x157ce0: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x157CE0u;
    SET_GPR_U32(ctx, 31, 0x157CE8u);
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x157CE0u, 0x157CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CE8u;
label_157ce8:
    // 0x157ce8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x157ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x157cec: 0xe6000264  swc1        $f0, 0x264($s0)
    ctx->pc = 0x157cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
    // 0x157cf0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x157cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157cf4: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x157CF4u;
    SET_GPR_U32(ctx, 31, 0x157CFCu);
    ctx->pc = 0x157CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CF4u;
    // 0x157cf8: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x157CF4u, 0x157CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CFCu;
label_157cfc:
    // 0x157cfc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x157cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_157d00:
    // 0x157d00: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x157d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157d04: 0x26050270  addiu       $a1, $s0, 0x270
    ctx->pc = 0x157d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x157d08: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x157d08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157d0c: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x157d0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x157d10: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x157d10u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x157d14: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x157d14u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x157d18: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x157d18u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157d1c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x157d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157d20: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x157d20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157d24: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x157d24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157d28: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x157d28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x157d2c: 0xf8a90000  sqc2        $vf9, 0x0($a1)
    ctx->pc = 0x157d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x157d30: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x157d30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x157d34: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x157d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157d38: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x157d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157d3c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x157d3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157d40: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x157d40u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x157d44: 0x4a0003bf  vwaitq
    ctx->pc = 0x157d44u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x157d48: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x157d48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157d4c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x157d4cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x157d50: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x157d50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157d54: 0x4a0003bf  vwaitq
    ctx->pc = 0x157d54u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x157d58: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x157d58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157d5c: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x157d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157d60: 0x3c033d1e  lui         $v1, 0x3D1E
    ctx->pc = 0x157d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15646 << 16));
    // 0x157d64: 0x3463611c  ori         $v1, $v1, 0x611C
    ctx->pc = 0x157d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24860);
    // 0x157d68: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x157d68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x157d6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x157d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157d70: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x157d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157d74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x157d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d78: 0xc600026c  lwc1        $f0, 0x26C($s0)
    ctx->pc = 0x157d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157d7c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x157d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x157d80: 0x3466cccd  ori         $a2, $v1, 0xCCCD
    ctx->pc = 0x157d80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x157d84: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x157d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x157d88: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x157d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x157d8c: 0xc60201c0  lwc1        $f2, 0x1C0($s0)
    ctx->pc = 0x157d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157d90: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x157d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x157d94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x157d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157d98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x157d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157d9c: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x157d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x157da0: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x157da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x157da4: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x157da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x157da8: 0xae0701c0  sw          $a3, 0x1C0($s0)
    ctx->pc = 0x157da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 7));
    // 0x157dac: 0xae070060  sw          $a3, 0x60($s0)
    ctx->pc = 0x157dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
    // 0x157db0: 0xae0601d8  sw          $a2, 0x1D8($s0)
    ctx->pc = 0x157db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 6));
    // 0x157db4: 0xae0501dc  sw          $a1, 0x1DC($s0)
    ctx->pc = 0x157db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 5));
    // 0x157db8: 0xa60001ea  sh          $zero, 0x1EA($s0)
    ctx->pc = 0x157db8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 490), (uint16_t)GPR_U32(ctx, 0));
    // 0x157dbc: 0xa60001e8  sh          $zero, 0x1E8($s0)
    ctx->pc = 0x157dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 488), (uint16_t)GPR_U32(ctx, 0));
    // 0x157dc0: 0xa60401ec  sh          $a0, 0x1EC($s0)
    ctx->pc = 0x157dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 492), (uint16_t)GPR_U32(ctx, 4));
    // 0x157dc4: 0xa60401ee  sh          $a0, 0x1EE($s0)
    ctx->pc = 0x157dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 494), (uint16_t)GPR_U32(ctx, 4));
    // 0x157dc8: 0xae040340  sw          $a0, 0x340($s0)
    ctx->pc = 0x157dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 4));
    // 0x157dcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157DCCu;
    {
        const bool branch_taken_0x157dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DCCu;
        // 0x157dd0: 0xae030344  sw          $v1, 0x344($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157dcc) {
            ctx->pc = 0x157DE0u;
            goto label_157de0;
        }
    }
    ctx->pc = 0x157DD4u;
label_157dd4:
    // 0x157dd4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x157dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x157dd8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x157dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x157ddc: 0xac67021c  sw          $a3, 0x21C($v1)
    ctx->pc = 0x157ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 7));
label_157de0:
    // 0x157de0: 0x29030005  slti        $v1, $t0, 0x5
    ctx->pc = 0x157de0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x157de4: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x157DE4u;
    {
        const bool branch_taken_0x157de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DE4u;
        // 0x157de8: 0x81900  sll         $v1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157de4) {
            ctx->pc = 0x157DD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157dd4;
        }
    }
    ctx->pc = 0x157DECu;
    // 0x157dec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x157decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157df0: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x157df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x157df4: 0xae050200  sw          $a1, 0x200($s0)
    ctx->pc = 0x157df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 5));
    // 0x157df8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x157df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x157dfc: 0xae050204  sw          $a1, 0x204($s0)
    ctx->pc = 0x157dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 5));
    // 0x157e00: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x157e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x157e04: 0xae0502e0  sw          $a1, 0x2E0($s0)
    ctx->pc = 0x157e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 5));
    // 0x157e08: 0xae0502d8  sw          $a1, 0x2D8($s0)
    ctx->pc = 0x157e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 5));
    // 0x157e0c: 0xae0502dc  sw          $a1, 0x2DC($s0)
    ctx->pc = 0x157e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 5));
    // 0x157e10: 0xae0401e0  sw          $a0, 0x1E0($s0)
    ctx->pc = 0x157e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 4));
    // 0x157e14: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x157e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
    // 0x157e18: 0xa60001f8  sh          $zero, 0x1F8($s0)
    ctx->pc = 0x157e18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 504), (uint16_t)GPR_U32(ctx, 0));
    // 0x157e1c: 0xa20001f4  sb          $zero, 0x1F4($s0)
    ctx->pc = 0x157e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 500), (uint8_t)GPR_U32(ctx, 0));
    // 0x157e20: 0xa20001f3  sb          $zero, 0x1F3($s0)
    ctx->pc = 0x157e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 499), (uint8_t)GPR_U32(ctx, 0));
    // 0x157e24: 0xae000310  sw          $zero, 0x310($s0)
    ctx->pc = 0x157e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
    // 0x157e28: 0xae040314  sw          $a0, 0x314($s0)
    ctx->pc = 0x157e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 4));
    // 0x157e2c: 0xae000318  sw          $zero, 0x318($s0)
    ctx->pc = 0x157e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 0));
    // 0x157e30: 0xae00031c  sw          $zero, 0x31C($s0)
    ctx->pc = 0x157e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 0));
    // 0x157e34: 0xae000320  sw          $zero, 0x320($s0)
    ctx->pc = 0x157e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
    // 0x157e38: 0xae000324  sw          $zero, 0x324($s0)
    ctx->pc = 0x157e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 0));
    // 0x157e3c: 0xae040328  sw          $a0, 0x328($s0)
    ctx->pc = 0x157e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 4));
    // 0x157e40: 0xae00032c  sw          $zero, 0x32C($s0)
    ctx->pc = 0x157e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 0));
    // 0x157e44: 0xa60001e8  sh          $zero, 0x1E8($s0)
    ctx->pc = 0x157e44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 488), (uint16_t)GPR_U32(ctx, 0));
    // 0x157e48: 0xa60001ea  sh          $zero, 0x1EA($s0)
    ctx->pc = 0x157e48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 490), (uint16_t)GPR_U32(ctx, 0));
    // 0x157e4c: 0xa60501f0  sh          $a1, 0x1F0($s0)
    ctx->pc = 0x157e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 496), (uint16_t)GPR_U32(ctx, 5));
    // 0x157e50: 0xae0302e4  sw          $v1, 0x2E4($s0)
    ctx->pc = 0x157e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 3));
    // 0x157e54: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x157e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
    // 0x157e58: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x157e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x157e5c: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x157e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x157e60: 0xae0002f0  sw          $zero, 0x2F0($s0)
    ctx->pc = 0x157e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 0));
    // 0x157e64: 0xae0002ec  sw          $zero, 0x2EC($s0)
    ctx->pc = 0x157e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 0));
    // 0x157e68: 0xaf808604  sw          $zero, -0x79FC($gp)
    ctx->pc = 0x157e68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936068), GPR_U32(ctx, 0));
    // 0x157e6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x157e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157e70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157e74: 0x3e00008  jr          $ra
    ctx->pc = 0x157E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E74u;
        // 0x157e78: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157E7Cu;
}
