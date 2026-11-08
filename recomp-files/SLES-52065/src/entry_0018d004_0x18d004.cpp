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

// Function: entry_0018d004
// Address: 0x18d004 - 0x18d024
void entry_0018d004_0x18d004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d004_0x18d004");
#endif

    ctx->pc = 0x18d004u;

    // 0x18d004: 0xc6400488  lwc1        $f0, 0x488($s2)
    ctx->pc = 0x18d004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d008: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18d008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d00c: 0x0  nop
    ctx->pc = 0x18d00cu;
    // NOP
    // 0x18d010: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18d010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d014: 0x0  nop
    ctx->pc = 0x18d014u;
    // NOP
    // 0x18d018: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18D018u;
    {
        const bool branch_taken_0x18d018 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d018) {
            ctx->pc = 0x18D024u;
            return;
        }
    }
    ctx->pc = 0x18D020u;
    // 0x18d020: 0xe6410488  swc1        $f1, 0x488($s2)
    ctx->pc = 0x18d020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1160), bits); }
    ctx->pc = 0x18d024u;
}
