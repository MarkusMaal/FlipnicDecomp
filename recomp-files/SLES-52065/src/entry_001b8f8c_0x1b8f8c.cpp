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

// Function: entry_001b8f8c
// Address: 0x1b8f8c - 0x1b8f94
void entry_001b8f8c_0x1b8f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8f8c_0x1b8f8c");
#endif

    ctx->pc = 0x1b8f8cu;

    // 0x1b8f8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8f90: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x1b8f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    ctx->pc = 0x1b8f94u;
}
