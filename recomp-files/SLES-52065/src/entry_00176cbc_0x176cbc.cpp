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

// Function: entry_00176cbc
// Address: 0x176cbc - 0x176d20
void entry_00176cbc_0x176cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176cbc_0x176cbc");
#endif

    ctx->pc = 0x176cbcu;

    // 0x176cbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x176cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176cc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176cc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176cc4: 0x0  nop
    ctx->pc = 0x176cc4u;
    // NOP
    // 0x176cc8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x176cc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176ccc: 0x0  nop
    ctx->pc = 0x176cccu;
    // NOP
    // 0x176cd0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x176CD0u;
    {
        const bool branch_taken_0x176cd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x176CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176CD0u;
        // 0x176cd4: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176cd0) {
            ctx->pc = 0x176D20u;
            return;
        }
    }
    ctx->pc = 0x176CD8u;
    // 0x176cd8: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x176cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176cdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176ce0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x176ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176ce4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176ce4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176ce8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176ce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176cec: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x176cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x176cf0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x176cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176cf4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x176cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176cf8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176cf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176cfc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176cfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176d00: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x176d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x176d04: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x176d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176d08: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x176d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176d0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176d0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176d10: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176d14: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x176d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x176d18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x176D18u;
    {
        const bool branch_taken_0x176d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D18u;
        // 0x176d1c: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d18) {
            ctx->pc = 0x176D28u;
            return;
        }
    }
    ctx->pc = 0x176D20u;
}
