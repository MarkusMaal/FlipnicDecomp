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

// Function: entry_0011446c
// Address: 0x11446c - 0x114490
void entry_0011446c_0x11446c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011446c_0x11446c");
#endif

    ctx->pc = 0x11446cu;

    // 0x11446c: 0xc6400280  lwc1        $f0, 0x280($s2)
    ctx->pc = 0x11446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114470: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x114470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x114474: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x114474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114478: 0x0  nop
    ctx->pc = 0x114478u;
    // NOP
    // 0x11447c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x11447cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114480: 0x0  nop
    ctx->pc = 0x114480u;
    // NOP
    // 0x114484: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x114484u;
    {
        const bool branch_taken_0x114484 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x114484) {
            ctx->pc = 0x114490u;
            return;
        }
    }
    ctx->pc = 0x11448Cu;
    // 0x11448c: 0xe6410280  swc1        $f1, 0x280($s2)
    ctx->pc = 0x11448cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 640), bits); }
    ctx->pc = 0x114490u;
}
