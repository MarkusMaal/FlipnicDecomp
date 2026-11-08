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

// Function: entry_001a1ddc
// Address: 0x1a1ddc - 0x1a1de4
void entry_001a1ddc_0x1a1ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ddc_0x1a1ddc");
#endif

    ctx->pc = 0x1a1ddcu;

    // 0x1a1ddc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a1ddcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1de0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a1de4u;
}
