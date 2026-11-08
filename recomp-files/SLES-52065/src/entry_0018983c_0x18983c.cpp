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

// Function: entry_0018983c
// Address: 0x18983c - 0x189844
void entry_0018983c_0x18983c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018983c_0x18983c");
#endif

    ctx->pc = 0x18983cu;

    // 0x18983c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18983cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189840: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x189840u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x20u));
    ctx->pc = 0x189844u;
}
