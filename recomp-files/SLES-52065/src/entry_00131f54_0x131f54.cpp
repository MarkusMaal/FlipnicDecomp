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

// Function: entry_00131f54
// Address: 0x131f54 - 0x131f64
void entry_00131f54_0x131f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131f54_0x131f54");
#endif

    ctx->pc = 0x131f54u;

    // 0x131f54: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x131f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131f58: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x131f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x131f5c: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x131f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131f60: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x131f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    ctx->pc = 0x131f64u;
}
