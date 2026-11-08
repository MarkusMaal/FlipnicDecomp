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

// Function: entry_001502d4
// Address: 0x1502d4 - 0x1502e0
void entry_001502d4_0x1502d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001502d4_0x1502d4");
#endif

    ctx->pc = 0x1502d4u;

    // 0x1502d4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1502d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1502d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1502d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1502dc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1502dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->pc = 0x1502e0u;
}
