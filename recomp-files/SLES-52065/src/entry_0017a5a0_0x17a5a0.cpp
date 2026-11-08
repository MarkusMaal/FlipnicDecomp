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

// Function: entry_0017a5a0
// Address: 0x17a5a0 - 0x17a5b8
void entry_0017a5a0_0x17a5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a5a0_0x17a5a0");
#endif

    ctx->pc = 0x17a5a0u;

    // 0x17a5a0: 0xc52101c4  lwc1        $f1, 0x1C4($t1)
    ctx->pc = 0x17a5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a5a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17a5a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17a5a8: 0x0  nop
    ctx->pc = 0x17a5a8u;
    // NOP
    // 0x17a5ac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17A5ACu;
    {
        const bool branch_taken_0x17a5ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17a5ac) {
            ctx->pc = 0x17A5B8u;
            return;
        }
    }
    ctx->pc = 0x17A5B4u;
    // 0x17a5b4: 0xe52001c4  swc1        $f0, 0x1C4($t1)
    ctx->pc = 0x17a5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 452), bits); }
    ctx->pc = 0x17a5b8u;
}
