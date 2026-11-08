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

// Function: caseD_8
// Address: 0x1ba89c - 0x1ba8bc
void caseD_8_0x1ba89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1ba89c");
#endif

    ctx->pc = 0x1ba89cu;

    // 0x1ba89c: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba8a0: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1ba8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba8a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba8a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba8a8: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1ba8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ba8ac: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba8b0: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x1ba8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba8b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba8b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba8b8: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x1ba8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    ctx->pc = 0x1ba8bcu;
}
