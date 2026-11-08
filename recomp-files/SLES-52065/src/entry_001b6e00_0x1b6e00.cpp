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

// Function: entry_001b6e00
// Address: 0x1b6e00 - 0x1b6e10
void entry_001b6e00_0x1b6e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6e00_0x1b6e00");
#endif

    ctx->pc = 0x1b6e00u;

    // 0x1b6e00: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1b6e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e04: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x1b6e04u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1b6e08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b6e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b6e10u;
}
