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

// Function: entry_00189eb0
// Address: 0x189eb0 - 0x189eb8
void entry_00189eb0_0x189eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189eb0_0x189eb0");
#endif

    ctx->pc = 0x189eb0u;

    // 0x189eb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x189eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189eb4: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x189eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x20u));
    ctx->pc = 0x189eb8u;
}
