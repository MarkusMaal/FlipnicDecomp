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

// Function: entry_0013ae60
// Address: 0x13ae60 - 0x13ae70
void entry_0013ae60_0x13ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ae60_0x13ae60");
#endif

    ctx->pc = 0x13ae60u;

    // 0x13ae60: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x13ae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae64: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x13ae64u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x13ae68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ae68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13ae6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13ae70u;
}
