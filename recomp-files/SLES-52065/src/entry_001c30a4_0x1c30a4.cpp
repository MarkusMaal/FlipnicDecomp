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

// Function: entry_001c30a4
// Address: 0x1c30a4 - 0x1c30a8
void entry_001c30a4_0x1c30a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c30a4_0x1c30a4");
#endif

    ctx->pc = 0x1c30a4u;

    // 0x1c30a4: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x1c30a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    ctx->pc = 0x1c30a8u;
}
