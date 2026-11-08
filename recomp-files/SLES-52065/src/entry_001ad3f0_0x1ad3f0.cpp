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

// Function: entry_001ad3f0
// Address: 0x1ad3f0 - 0x1ad3f8
void entry_001ad3f0_0x1ad3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad3f0_0x1ad3f0");
#endif

    ctx->pc = 0x1ad3f0u;

    // 0x1ad3f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad3f4: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ad3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x1ad3f8u;
}
