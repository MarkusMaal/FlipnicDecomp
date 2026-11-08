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

// Function: entry_001eac44
// Address: 0x1eac44 - 0x1eac4c
void entry_001eac44_0x1eac44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eac44_0x1eac44");
#endif

    ctx->pc = 0x1eac44u;

    // 0x1eac44: 0x0  nop
    ctx->pc = 0x1eac44u;
    // NOP
    // 0x1eac48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eac48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1eac4cu;
}
