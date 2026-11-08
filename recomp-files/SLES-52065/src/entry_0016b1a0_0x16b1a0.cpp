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

// Function: entry_0016b1a0
// Address: 0x16b1a0 - 0x16b1f8
void entry_0016b1a0_0x16b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b1a0_0x16b1a0");
#endif

    ctx->pc = 0x16b1a0u;

    // 0x16b1a0: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x16b1a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b1a4: 0x0  nop
    ctx->pc = 0x16b1a4u;
    // NOP
    // 0x16b1a8: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x16B1A8u;
    {
        const bool branch_taken_0x16b1a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b1a8) {
            ctx->pc = 0x16B280u;
            return;
        }
    }
    ctx->pc = 0x16B1B0u;
    // 0x16b1b0: 0xc6210240  lwc1        $f1, 0x240($s1)
    ctx->pc = 0x16b1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b1b4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x16b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x16b1b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16b1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16b1bc: 0xc6230238  lwc1        $f3, 0x238($s1)
    ctx->pc = 0x16b1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16b1c0: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x16b1c0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x16b1c4: 0x0  nop
    ctx->pc = 0x16b1c4u;
    // NOP
    // 0x16b1c8: 0x0  nop
    ctx->pc = 0x16b1c8u;
    // NOP
    // 0x16b1cc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x16b1ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b1d0: 0x0  nop
    ctx->pc = 0x16b1d0u;
    // NOP
    // 0x16b1d4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x16B1D4u;
    {
        const bool branch_taken_0x16b1d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b1d4) {
            ctx->pc = 0x16B1F8u;
            return;
        }
    }
    ctx->pc = 0x16B1DCu;
    // 0x16b1dc: 0x0  nop
    ctx->pc = 0x16b1dcu;
    // NOP
    // 0x16b1e0: 0x0  nop
    ctx->pc = 0x16b1e0u;
    // NOP
    // 0x16b1e4: 0x46040b03  div.s       $f12, $f1, $f4
    ctx->pc = 0x16b1e4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x16b1e8: 0x0  nop
    ctx->pc = 0x16b1e8u;
    // NOP
    // 0x16b1ec: 0x0  nop
    ctx->pc = 0x16b1ecu;
    // NOP
    // 0x16b1f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16B1F0u;
    {
        const bool branch_taken_0x16b1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b1f0) {
            ctx->pc = 0x16B234u;
            return;
        }
    }
    ctx->pc = 0x16B1F8u;
}
