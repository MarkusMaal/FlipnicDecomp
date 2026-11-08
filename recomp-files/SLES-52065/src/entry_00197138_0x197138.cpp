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

// Function: entry_00197138
// Address: 0x197138 - 0x19713c
void entry_00197138_0x197138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197138_0x197138");
#endif

    ctx->pc = 0x197138u;

    // 0x197138: 0xaeb006d0  sw          $s0, 0x6D0($s5)
    ctx->pc = 0x197138u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1744), GPR_U32(ctx, 16));
    ctx->pc = 0x19713cu;
}
