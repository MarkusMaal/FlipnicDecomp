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

// Function: entry_00173e10
// Address: 0x173e10 - 0x173e20
void entry_00173e10_0x173e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173e10_0x173e10");
#endif

    ctx->pc = 0x173e10u;

    // 0x173e10: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x173e10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x173e14: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x173e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173e18: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x173e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x173e1c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x173e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->pc = 0x173e20u;
}
