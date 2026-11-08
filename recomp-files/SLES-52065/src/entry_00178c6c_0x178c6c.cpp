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

// Function: entry_00178c6c
// Address: 0x178c6c - 0x178ce0
void entry_00178c6c_0x178c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178c6c_0x178c6c");
#endif

    ctx->pc = 0x178c6cu;

    // 0x178c6c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x178c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x178c70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x178c70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178c74: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x178c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x178c78: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x178c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x178c7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x178c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x178c80: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x178c80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x178c84: 0x0  nop
    ctx->pc = 0x178c84u;
    // NOP
    // 0x178c88: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x178C88u;
    {
        const bool branch_taken_0x178c88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x178C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C88u;
        // 0x178c8c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c88) {
            ctx->pc = 0x178CE0u;
            return;
        }
    }
    ctx->pc = 0x178C90u;
    // 0x178c90: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x178c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x178c94: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x178c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x178c98: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x178c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178c9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178ca0: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x178ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178ca4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x178ca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x178ca8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x178ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x178cac: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x178cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x178cb0: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x178cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178cb4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x178cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178cb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x178cb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x178cbc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x178cbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x178cc0: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x178cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x178cc4: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x178cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178cc8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x178cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178ccc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x178cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x178cd0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x178cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x178cd4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x178cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x178cd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x178CD8u;
    {
        const bool branch_taken_0x178cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CD8u;
        // 0x178cdc: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178cd8) {
            ctx->pc = 0x178CF0u;
            return;
        }
    }
    ctx->pc = 0x178CE0u;
}
