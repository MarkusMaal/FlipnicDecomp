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

// Function: entry_00173b18
// Address: 0x173b18 - 0x173ba0
void entry_00173b18_0x173b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173b18_0x173b18");
#endif

    ctx->pc = 0x173b18u;

    // 0x173b18: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x173b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x173b1c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x173b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x173b20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x173b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173b24: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x173b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x173b28: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x173b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x173b2c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x173b2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173b30: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x173b30u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x173b34: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x173b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x173b38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x173b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x173b3c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x173b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173b40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173b44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x173b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173b48: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x173b48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173b4c: 0x0  nop
    ctx->pc = 0x173b4cu;
    // NOP
    // 0x173b50: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x173B50u;
    {
        const bool branch_taken_0x173b50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x173B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B50u;
        // 0x173b54: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b50) {
            ctx->pc = 0x173BA0u;
            return;
        }
    }
    ctx->pc = 0x173B58u;
    // 0x173b58: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x173b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173b5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173b60: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x173b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173b64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173b64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173b68: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173b6c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x173b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x173b70: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x173b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173b74: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x173b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173b78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173b78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173b7c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173b7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173b80: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x173b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x173b84: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x173b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173b88: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x173b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173b8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173b90: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173b90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173b94: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x173b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x173b98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x173B98u;
    {
        const bool branch_taken_0x173b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B98u;
        // 0x173b9c: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b98) {
            ctx->pc = 0x173BA8u;
            return;
        }
    }
    ctx->pc = 0x173BA0u;
}
