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

// Function: entry_00181e88
// Address: 0x181e88 - 0x181e8c
void entry_00181e88_0x181e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181e88_0x181e88");
#endif

    ctx->pc = 0x181e88u;

    // 0x181e88: 0xaf808660  sw          $zero, -0x79A0($gp)
    ctx->pc = 0x181e88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936160), GPR_U32(ctx, 0));
    ctx->pc = 0x181e8cu;
}
