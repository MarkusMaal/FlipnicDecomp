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

// Function: entry_001792d4
// Address: 0x1792d4 - 0x17933c
void entry_001792d4_0x1792d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001792d4_0x1792d4");
#endif

    ctx->pc = 0x1792d4u;

    // 0x1792d4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1792d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1792d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1792d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1792dc: 0x0  nop
    ctx->pc = 0x1792dcu;
    // NOP
    // 0x1792e0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1792e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1792e4: 0x0  nop
    ctx->pc = 0x1792e4u;
    // NOP
    // 0x1792e8: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1792E8u;
    {
        const bool branch_taken_0x1792e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1792ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792E8u;
        // 0x1792ec: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792e8) {
            ctx->pc = 0x17933Cu;
            return;
        }
    }
    ctx->pc = 0x1792F0u;
    // 0x1792f0: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x1792f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1792f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1792f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1792f8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1792f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1792fc: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1792fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179300: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x179300u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x179304: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x179304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x179308: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x179308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x17930c: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x17930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179310: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x179310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179314: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x179314u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x179318: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x179318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17931c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x17931cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x179320: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x179320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179324: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x179324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179328: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x179328u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17932c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x17932cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x179330: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x179330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x179334: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x179334u;
    {
        const bool branch_taken_0x179334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179334u;
        // 0x179338: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179334) {
            ctx->pc = 0x17934Cu;
            return;
        }
    }
    ctx->pc = 0x17933Cu;
}
