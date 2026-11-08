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

// Function: entry_0013b99c
// Address: 0x13b99c - 0x13b9a0
void entry_0013b99c_0x13b99c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b99c_0x13b99c");
#endif

    ctx->pc = 0x13b99cu;

    // 0x13b99c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x13b99cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x13b9a0u;
}
