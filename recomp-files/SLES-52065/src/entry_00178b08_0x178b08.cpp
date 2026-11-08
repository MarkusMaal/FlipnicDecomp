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

// Function: entry_00178b08
// Address: 0x178b08 - 0x178b84
void entry_00178b08_0x178b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178b08_0x178b08");
#endif

    switch (ctx->pc) {
        case 0x178b10u: goto label_178b10;
        case 0x178b38u: goto label_178b38;
        case 0x178b44u: goto label_178b44;
        case 0x178b7cu: goto label_178b7c;
        default: break;
    }

    ctx->pc = 0x178b08u;

    // 0x178b08: 0xc07d308  jal         func_1F4C20
    ctx->pc = 0x178B08u;
    SET_GPR_U32(ctx, 31, 0x178B10u);
    ctx->pc = 0x178B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B08u;
    // 0x178b0c: 0x26250430  addiu       $a1, $s1, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C20u, 0x178B08u, 0x178B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B10u;
label_178b10:
    // 0x178b10: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x178b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
    // 0x178b14: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x178b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x178b18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x178b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178b1c: 0x0  nop
    ctx->pc = 0x178b1cu;
    // NOP
    // 0x178b20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x178b20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x178b24: 0x0  nop
    ctx->pc = 0x178b24u;
    // NOP
    // 0x178b28: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x178B28u;
    {
        const bool branch_taken_0x178b28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x178B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B28u;
        // 0x178b2c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b28) {
            ctx->pc = 0x178B84u;
            return;
        }
    }
    ctx->pc = 0x178B30u;
    // 0x178b30: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x178B30u;
    SET_GPR_U32(ctx, 31, 0x178B38u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x178B30u, 0x178B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B38u;
label_178b38:
    // 0x178b38: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x178b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x178b3c: 0xc05c550  jal         func_171540
    ctx->pc = 0x178B3Cu;
    SET_GPR_U32(ctx, 31, 0x178B44u);
    ctx->pc = 0x178B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B3Cu;
    // 0x178b40: 0x26250440  addiu       $a1, $s1, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x178B3Cu, 0x178B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B44u;
label_178b44:
    // 0x178b44: 0x26240430  addiu       $a0, $s1, 0x430
    ctx->pc = 0x178b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1072));
    // 0x178b48: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x178b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x178b4c: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x178b4cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178b50: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x178b50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178b54: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x178b54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x178b58: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x178b58u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x178b5c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x178b5cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x178b60: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x178b60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x178b64: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x178b64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x178b68: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x178b68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x178b6c: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x178b6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x178b70: 0xf8880000  sqc2        $vf8, 0x0($a0)
    ctx->pc = 0x178b70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x178b74: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x178B74u;
    SET_GPR_U32(ctx, 31, 0x178B7Cu);
    ctx->pc = 0x178B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B74u;
    // 0x178b78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x178B74u, 0x178B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B7Cu;
label_178b7c:
    // 0x178b7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178b80: 0xae22043c  sw          $v0, 0x43C($s1)
    ctx->pc = 0x178b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1084), GPR_U32(ctx, 2));
    ctx->pc = 0x178b84u;
}
