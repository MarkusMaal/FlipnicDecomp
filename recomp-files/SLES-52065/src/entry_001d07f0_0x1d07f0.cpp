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

// Function: entry_001d07f0
// Address: 0x1d07f0 - 0x1d0818
void entry_001d07f0_0x1d07f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d07f0_0x1d07f0");
#endif

    ctx->pc = 0x1d07f0u;

    // 0x1d07f0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d07f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d07f4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d07f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d07f8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1d07f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d07fc: 0xc42099c8  lwc1        $f0, -0x6638($at)
    ctx->pc = 0x1d07fcu;
    { uint32_t bits = FAST_READ32(0x2199C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0800: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d0800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0804: 0x0  nop
    ctx->pc = 0x1d0804u;
    // NOP
    // 0x1d0808: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0808u;
    {
        const bool branch_taken_0x1d0808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0808) {
            ctx->pc = 0x1D0818u;
            return;
        }
    }
    ctx->pc = 0x1D0810u;
    // 0x1d0810: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0810u;
    {
        const bool branch_taken_0x1d0810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0810u;
        // 0x1d0814: 0x24c20014  addiu       $v0, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0810) {
            ctx->pc = 0x1D0820u;
            return;
        }
    }
    ctx->pc = 0x1D0818u;
}
