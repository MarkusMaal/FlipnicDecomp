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

// Function: entry_0015c610
// Address: 0x15c610 - 0x15c62c
void entry_0015c610_0x15c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c610_0x15c610");
#endif

    ctx->pc = 0x15c610u;

    // 0x15c610: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x15c610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c614: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x15c614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c618: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15c618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c61c: 0x0  nop
    ctx->pc = 0x15c61cu;
    // NOP
    // 0x15c620: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x15C620u;
    {
        const bool branch_taken_0x15c620 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c620) {
            ctx->pc = 0x15C62Cu;
            return;
        }
    }
    ctx->pc = 0x15C628u;
    // 0x15c628: 0xe6810014  swc1        $f1, 0x14($s4)
    ctx->pc = 0x15c628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    ctx->pc = 0x15c62cu;
}
