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

// Function: entry_0011e4ec
// Address: 0x11e4ec - 0x11e4f0
void entry_0011e4ec_0x11e4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e4ec_0x11e4ec");
#endif

    ctx->pc = 0x11e4ecu;

    // 0x11e4ec: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x11e4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    ctx->pc = 0x11e4f0u;
}
