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

// Function: entry_001cd61c
// Address: 0x1cd61c - 0x1cd628
void entry_001cd61c_0x1cd61c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd61c_0x1cd61c");
#endif

    ctx->pc = 0x1cd61cu;

    // 0x1cd61c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cd61cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd620: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1cd620u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cd628u;
}
