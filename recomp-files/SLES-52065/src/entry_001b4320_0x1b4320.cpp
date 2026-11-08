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

// Function: entry_001b4320
// Address: 0x1b4320 - 0x1b4324
void entry_001b4320_0x1b4320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4320_0x1b4320");
#endif

    ctx->pc = 0x1b4320u;

    // 0x1b4320: 0xae310008  sw          $s1, 0x8($s1)
    ctx->pc = 0x1b4320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 17));
    ctx->pc = 0x1b4324u;
}
