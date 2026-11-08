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

// Function: entry_001573ec
// Address: 0x1573ec - 0x157408
void entry_001573ec_0x1573ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001573ec_0x1573ec");
#endif

    ctx->pc = 0x1573ecu;

    // 0x1573ec: 0xc48001d4  lwc1        $f0, 0x1D4($a0)
    ctx->pc = 0x1573ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1573f0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1573f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1573f4: 0x0  nop
    ctx->pc = 0x1573f4u;
    // NOP
    // 0x1573f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1573F8u;
    {
        const bool branch_taken_0x1573f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1573f8) {
            ctx->pc = 0x157408u;
            return;
        }
    }
    ctx->pc = 0x157400u;
    // 0x157400: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x157400u;
    {
        const bool branch_taken_0x157400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157400) {
            ctx->pc = 0x157410u;
            return;
        }
    }
    ctx->pc = 0x157408u;
}
