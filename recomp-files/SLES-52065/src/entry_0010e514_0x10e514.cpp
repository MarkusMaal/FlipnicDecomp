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

// Function: entry_0010e514
// Address: 0x10e514 - 0x10e51c
void entry_0010e514_0x10e514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e514_0x10e514");
#endif

    ctx->pc = 0x10e514u;

    // 0x10e514: 0x0  nop
    ctx->pc = 0x10e514u;
    // NOP
    // 0x10e518: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10e518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10e51cu;
}
