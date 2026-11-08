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

// Function: entry_001d0428
// Address: 0x1d0428 - 0x1d0438
void entry_001d0428_0x1d0428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0428_0x1d0428");
#endif

    ctx->pc = 0x1d0428u;

    // 0x1d0428: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d0428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d042c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d042cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0434: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1d0434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    ctx->pc = 0x1d0438u;
}
