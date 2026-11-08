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

// Function: entry_0014d66c
// Address: 0x14d66c - 0x14d674
void entry_0014d66c_0x14d66c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d66c_0x14d66c");
#endif

    ctx->pc = 0x14d66cu;

    // 0x14d66c: 0x0  nop
    ctx->pc = 0x14d66cu;
    // NOP
    // 0x14d670: 0x34505555  ori         $s0, $v0, 0x5555
    ctx->pc = 0x14d670u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
    ctx->pc = 0x14d674u;
}
