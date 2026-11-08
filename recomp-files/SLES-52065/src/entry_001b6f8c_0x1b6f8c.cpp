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

// Function: entry_001b6f8c
// Address: 0x1b6f8c - 0x1b6f90
void entry_001b6f8c_0x1b6f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6f8c_0x1b6f8c");
#endif

    ctx->pc = 0x1b6f8cu;

    // 0x1b6f8c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x1b6f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x1b6f90u;
}
