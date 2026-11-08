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

// Function: entry_00173e80
// Address: 0x173e80 - 0x173eec
void entry_00173e80_0x173e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173e80_0x173e80");
#endif

    ctx->pc = 0x173e80u;

    // 0x173e80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x173e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173e84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173e88: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x173e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x173e8c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x173e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x173e90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x173e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x173e94: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x173e94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173e98: 0x0  nop
    ctx->pc = 0x173e98u;
    // NOP
    // 0x173e9c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x173E9Cu;
    {
        const bool branch_taken_0x173e9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x173EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E9Cu;
        // 0x173ea0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e9c) {
            ctx->pc = 0x173EECu;
            return;
        }
    }
    ctx->pc = 0x173EA4u;
    // 0x173ea4: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x173ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173ea8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173eac: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x173eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173eb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173eb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173eb4: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173eb8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x173eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x173ebc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x173ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173ec0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x173ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173ec4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173ec4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173ec8: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173ecc: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x173eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x173ed0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x173ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173ed4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x173ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173ed8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173ed8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173edc: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173ee0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x173ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x173ee4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x173EE4u;
    {
        const bool branch_taken_0x173ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EE4u;
        // 0x173ee8: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ee4) {
            ctx->pc = 0x173EF8u;
            return;
        }
    }
    ctx->pc = 0x173EECu;
}
