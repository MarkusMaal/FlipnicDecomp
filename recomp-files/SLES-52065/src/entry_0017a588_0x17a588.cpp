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

// Function: entry_0017a588
// Address: 0x17a588 - 0x17a5a0
void entry_0017a588_0x17a588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a588_0x17a588");
#endif

    ctx->pc = 0x17a588u;

    // 0x17a588: 0xc52101c4  lwc1        $f1, 0x1C4($t1)
    ctx->pc = 0x17a588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a58c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x17a58cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17a590: 0x0  nop
    ctx->pc = 0x17a590u;
    // NOP
    // 0x17a594: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x17A594u;
    {
        const bool branch_taken_0x17a594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17a594) {
            ctx->pc = 0x17A5A0u;
            return;
        }
    }
    ctx->pc = 0x17A59Cu;
    // 0x17a59c: 0xe52201c4  swc1        $f2, 0x1C4($t1)
    ctx->pc = 0x17a59cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 452), bits); }
    ctx->pc = 0x17a5a0u;
}
