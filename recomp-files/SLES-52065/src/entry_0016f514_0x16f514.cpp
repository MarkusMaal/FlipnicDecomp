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

// Function: entry_0016f514
// Address: 0x16f514 - 0x16f51c
void entry_0016f514_0x16f514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f514_0x16f514");
#endif

    ctx->pc = 0x16f514u;

    // 0x16f514: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f518: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x16f518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16f51cu;
}
