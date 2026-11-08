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

// Function: entry_00172f74
// Address: 0x172f74 - 0x172fd8
void entry_00172f74_0x172f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172f74_0x172f74");
#endif

    switch (ctx->pc) {
        case 0x172f7cu: goto label_172f7c;
        case 0x172f94u: goto label_172f94;
        default: break;
    }

    ctx->pc = 0x172f74u;

    // 0x172f74: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x172F74u;
    SET_GPR_U32(ctx, 31, 0x172F7Cu);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x172F74u, 0x172F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F7Cu;
label_172f7c:
    // 0x172f7c: 0x26231460  addiu       $v1, $s1, 0x1460
    ctx->pc = 0x172f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5216));
    // 0x172f80: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x172f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x172f84: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x172f84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172f88: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x172f88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x172f8c: 0xc05ccac  jal         func_1732B0
    ctx->pc = 0x172F8Cu;
    SET_GPR_U32(ctx, 31, 0x172F94u);
    ctx->pc = 0x172F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F8Cu;
    // 0x172f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1732B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1732B0u, 0x172F8Cu, 0x172F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F94u;
label_172f94:
    // 0x172f94: 0x26221480  addiu       $v0, $s1, 0x1480
    ctx->pc = 0x172f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5248));
    // 0x172f98: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x172f98u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172f9c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x172f9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x172fa0: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x172fa0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x172fa4: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x172fa4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x172fa8: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x172fa8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x172fac: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x172facu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x172fb0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x172fb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x172fb4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x172fb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x172fb8: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x172fb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x172fbc: 0xf8480000  sqc2        $vf8, 0x0($v0)
    ctx->pc = 0x172fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x172fc0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x172fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x172fc4: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x172fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x172fc8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x172FC8u;
    {
        const bool branch_taken_0x172fc8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x172FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FC8u;
        // 0x172fcc: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fc8) {
            ctx->pc = 0x172FD8u;
            return;
        }
    }
    ctx->pc = 0x172FD0u;
    // 0x172fd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x172FD0u;
    {
        const bool branch_taken_0x172fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FD0u;
        // 0x172fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fd0) {
            ctx->pc = 0x172FF0u;
            return;
        }
    }
    ctx->pc = 0x172FD8u;
}
