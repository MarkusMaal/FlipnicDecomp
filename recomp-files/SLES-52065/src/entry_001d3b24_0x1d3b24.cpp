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

// Function: entry_001d3b24
// Address: 0x1d3b24 - 0x1d3b30
void entry_001d3b24_0x1d3b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3b24_0x1d3b24");
#endif

    ctx->pc = 0x1d3b24u;

    // 0x1d3b24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d3b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b28: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1d3b28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d3b2c: 0x1380c0  sll         $s0, $s3, 3
    ctx->pc = 0x1d3b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    ctx->pc = 0x1d3b30u;
}
