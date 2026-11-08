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

// Function: entry_001c32ac
// Address: 0x1c32ac - 0x1c32b0
void entry_001c32ac_0x1c32ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c32ac_0x1c32ac");
#endif

    ctx->pc = 0x1c32acu;

    // 0x1c32ac: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x1c32acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    ctx->pc = 0x1c32b0u;
}
