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

// Function: entry_001b61b8
// Address: 0x1b61b8 - 0x1b61bc
void entry_001b61b8_0x1b61b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b61b8_0x1b61b8");
#endif

    ctx->pc = 0x1b61b8u;

    // 0x1b61b8: 0xae440030  sw          $a0, 0x30($s2)
    ctx->pc = 0x1b61b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
    ctx->pc = 0x1b61bcu;
}
