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

// Function: entry_001f9d34
// Address: 0x1f9d34 - 0x1f9d38
void entry_001f9d34_0x1f9d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9d34_0x1f9d34");
#endif

    ctx->pc = 0x1f9d34u;

    // 0x1f9d34: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x1f9d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    ctx->pc = 0x1f9d38u;
}
