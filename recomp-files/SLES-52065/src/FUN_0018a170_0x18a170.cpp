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

// Function: FUN_0018a170
// Address: 0x18a170 - 0x18a178
void FUN_0018a170_0x18a170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a170_0x18a170");
#endif

    ctx->pc = 0x18a170u;

    // 0x18a170: 0x804b5f8  j           func_12D7E0
    ctx->pc = 0x18A170u;
    ctx->pc = 0x12D7E0u;
    FUN_0012d7e0_0x12d7e0(rdram, ctx, runtime); return;
    ctx->pc = 0x18A178u;
}
