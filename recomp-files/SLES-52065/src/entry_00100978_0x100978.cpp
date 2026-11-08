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

// Function: entry_00100978
// Address: 0x100978 - 0x1009d4
void entry_00100978_0x100978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100978_0x100978");
#endif

    switch (ctx->pc) {
        case 0x1009d0u: goto label_1009d0;
        default: break;
    }

    ctx->pc = 0x100978u;

    // 0x100978: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x100978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x10097c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10097Cu;
    {
        const bool branch_taken_0x10097c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10097c) {
            ctx->pc = 0x100960u;
            return;
        }
    }
    ctx->pc = 0x100984u;
    // 0x100984: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x100984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x100988: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x100988u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10098c: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x10098cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x100990: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x100990u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x100994: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x100994u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x100998: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x100998u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x10099c: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x10099cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1009a0: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x1009a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1009a4: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x1009a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1009a8: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x1009a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1009ac: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1009acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1009b0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1009b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1009b4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1009b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1009b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1009b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1009bc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1009bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1009c0: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1009c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1009c4: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1009c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1009c8: 0xc04cda4  jal         func_133690
    ctx->pc = 0x1009C8u;
    SET_GPR_U32(ctx, 31, 0x1009D0u);
    ctx->pc = 0x1009CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1009C8u;
    // 0x1009cc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133690u, 0x1009C8u, 0x1009D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1009D0u;
label_1009d0:
    // 0x1009d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1009d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x1009d4u;
}
