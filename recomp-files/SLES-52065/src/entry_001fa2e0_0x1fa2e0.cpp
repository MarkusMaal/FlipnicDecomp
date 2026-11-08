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

// Function: entry_001fa2e0
// Address: 0x1fa2e0 - 0x1fa2e4
void entry_001fa2e0_0x1fa2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa2e0_0x1fa2e0");
#endif

    ctx->pc = 0x1fa2e0u;

    // 0x1fa2e0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1fa2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x1fa2e4u;
}
