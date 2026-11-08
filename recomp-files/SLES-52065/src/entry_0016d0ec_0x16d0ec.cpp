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

// Function: entry_0016d0ec
// Address: 0x16d0ec - 0x16d0f4
void entry_0016d0ec_0x16d0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d0ec_0x16d0ec");
#endif

    ctx->pc = 0x16d0ecu;

    // 0x16d0ec: 0xc620022c  lwc1        $f0, 0x22C($s1)
    ctx->pc = 0x16d0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d0f0: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x16d0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    ctx->pc = 0x16d0f4u;
}
