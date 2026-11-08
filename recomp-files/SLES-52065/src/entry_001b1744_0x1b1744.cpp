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

// Function: entry_001b1744
// Address: 0x1b1744 - 0x1b1770
void entry_001b1744_0x1b1744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1744_0x1b1744");
#endif

    ctx->pc = 0x1b1744u;

    // 0x1b1744: 0xc5400058  lwc1        $f0, 0x58($t2)
    ctx->pc = 0x1b1744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1748: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1b1748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b174c: 0x0  nop
    ctx->pc = 0x1b174cu;
    // NOP
    // 0x1b1750: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1750u;
    {
        const bool branch_taken_0x1b1750 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1750u;
        // 0x1b1754: 0x25480058  addiu       $t0, $t2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1750) {
            ctx->pc = 0x1B1770u;
            return;
        }
    }
    ctx->pc = 0x1B1758u;
    // 0x1b1758: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b1758u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b175c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b175cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1760: 0x0  nop
    ctx->pc = 0x1b1760u;
    // NOP
    // 0x1b1764: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1764u;
    {
        const bool branch_taken_0x1b1764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1764u;
        // 0x1b1768: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1764) {
            ctx->pc = 0x1B1770u;
            return;
        }
    }
    ctx->pc = 0x1B176Cu;
    // 0x1b176c: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x1b176cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    ctx->pc = 0x1b1770u;
}
