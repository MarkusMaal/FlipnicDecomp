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

// Function: entry_0016fae4
// Address: 0x16fae4 - 0x16fb40
void entry_0016fae4_0x16fae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fae4_0x16fae4");
#endif

    switch (ctx->pc) {
        case 0x16fb38u: goto label_16fb38;
        default: break;
    }

    ctx->pc = 0x16fae4u;

    // 0x16fae4: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x16fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x16fae8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16fae8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16faec: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x16faecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16faf0: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x16faf0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16faf4: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x16faf4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x16faf8: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x16faf8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16fafc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16fafcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16fb00: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16fb00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16fb04: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16fb04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16fb08: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x16fb08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x16fb0c: 0xf8690000  sqc2        $vf9, 0x0($v1)
    ctx->pc = 0x16fb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x16fb10: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x16fb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fb14: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16fb14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fb18: 0x0  nop
    ctx->pc = 0x16fb18u;
    // NOP
    // 0x16fb1c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x16FB1Cu;
    {
        const bool branch_taken_0x16fb1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB1Cu;
        // 0x16fb20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb1c) {
            ctx->pc = 0x16FB40u;
            return;
        }
    }
    ctx->pc = 0x16FB24u;
    // 0x16fb24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16fb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb28: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16fb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb2c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16fb2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x16fb30: 0xc054f5c  jal         func_153D70
    ctx->pc = 0x16FB30u;
    SET_GPR_U32(ctx, 31, 0x16FB38u);
    ctx->pc = 0x16FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB30u;
    // 0x16fb34: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153D70u, 0x16FB30u, 0x16FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB38u;
label_16fb38:
    // 0x16fb38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16FB38u;
    {
        const bool branch_taken_0x16fb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB38u;
        // 0x16fb3c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb38) {
            ctx->pc = 0x16FB54u;
            return;
        }
    }
    ctx->pc = 0x16FB40u;
}
