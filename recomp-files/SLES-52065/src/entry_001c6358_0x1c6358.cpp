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

// Function: entry_001c6358
// Address: 0x1c6358 - 0x1c636c
void entry_001c6358_0x1c6358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6358_0x1c6358");
#endif

    ctx->pc = 0x1c6358u;

    // 0x1c6358: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x1c6358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1c635c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c635cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6360: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x1c6360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x1c6364: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x1c6364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1c6368: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x1c6368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
    ctx->pc = 0x1c636cu;
}
