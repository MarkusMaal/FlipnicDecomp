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

// Function: entry_0018d338
// Address: 0x18d338 - 0x18d33c
void entry_0018d338_0x18d338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d338_0x18d338");
#endif

    ctx->pc = 0x18d338u;

    // 0x18d338: 0xc64c0488  lwc1        $f12, 0x488($s2)
    ctx->pc = 0x18d338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x18d33cu;
}
