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

// Function: entry_001d079c
// Address: 0x1d079c - 0x1d07e4
void entry_001d079c_0x1d079c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d079c_0x1d079c");
#endif

    ctx->pc = 0x1d079cu;

    // 0x1d079c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d079cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d07a0: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x1d07a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1d07a4: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x1d07a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d07a8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d07a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d07ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d07acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d07b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d07b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d07b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1d07b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1d07b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d07b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d07bc: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1d07bcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1d07c0: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x1d07c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x1d07c4: 0xc42199c0  lwc1        $f1, -0x6640($at)
    ctx->pc = 0x1d07c4u;
    { uint32_t bits = FAST_READ32(0x2199C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d07c8: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x1d07c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d07cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d07ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d07d0: 0x0  nop
    ctx->pc = 0x1d07d0u;
    // NOP
    // 0x1d07d4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D07D4u;
    {
        const bool branch_taken_0x1d07d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07D4u;
        // 0x1d07d8: 0x24c30014  addiu       $v1, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07d4) {
            ctx->pc = 0x1D07E4u;
            return;
        }
    }
    ctx->pc = 0x1D07DCu;
    // 0x1d07dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D07DCu;
    {
        const bool branch_taken_0x1d07dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07DCu;
        // 0x1d07e0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07dc) {
            ctx->pc = 0x1D07F0u;
            return;
        }
    }
    ctx->pc = 0x1D07E4u;
}
