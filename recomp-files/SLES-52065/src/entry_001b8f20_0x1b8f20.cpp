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

// Function: entry_001b8f20
// Address: 0x1b8f20 - 0x1b8f28
void entry_001b8f20_0x1b8f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8f20_0x1b8f20");
#endif

    ctx->pc = 0x1b8f20u;

    // 0x1b8f20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8f24: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x1b8f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    ctx->pc = 0x1b8f28u;
}
