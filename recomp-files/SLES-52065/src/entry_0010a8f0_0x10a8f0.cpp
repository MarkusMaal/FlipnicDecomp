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

// Function: entry_0010a8f0
// Address: 0x10a8f0 - 0x10a908
void entry_0010a8f0_0x10a8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a8f0_0x10a8f0");
#endif

    ctx->pc = 0x10a8f0u;

    // 0x10a8f0: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x10a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10a8f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10a8f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a8f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a8fc: 0x0  nop
    ctx->pc = 0x10a8fcu;
    // NOP
    // 0x10a900: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10a900u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x10a904: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x10a904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    ctx->pc = 0x10a908u;
}
