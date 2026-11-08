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

// Function: entry_001c5b0c
// Address: 0x1c5b0c - 0x1c5b14
void entry_001c5b0c_0x1c5b0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5b0c_0x1c5b0c");
#endif

    ctx->pc = 0x1c5b0cu;

    // 0x1c5b0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c5b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b10: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1c5b10u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x20u));
    ctx->pc = 0x1c5b14u;
}
