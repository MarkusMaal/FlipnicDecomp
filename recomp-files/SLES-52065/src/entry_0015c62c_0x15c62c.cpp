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

// Function: entry_0015c62c
// Address: 0x15c62c - 0x15c648
void entry_0015c62c_0x15c62c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c62c_0x15c62c");
#endif

    ctx->pc = 0x15c62cu;

    // 0x15c62c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x15c62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c630: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x15c630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c634: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15c634u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c638: 0x0  nop
    ctx->pc = 0x15c638u;
    // NOP
    // 0x15c63c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x15C63Cu;
    {
        const bool branch_taken_0x15c63c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c63c) {
            ctx->pc = 0x15C648u;
            return;
        }
    }
    ctx->pc = 0x15C644u;
    // 0x15c644: 0xe6810018  swc1        $f1, 0x18($s4)
    ctx->pc = 0x15c644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    ctx->pc = 0x15c648u;
}
