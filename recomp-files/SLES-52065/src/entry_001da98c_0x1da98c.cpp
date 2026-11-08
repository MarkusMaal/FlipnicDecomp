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

// Function: entry_001da98c
// Address: 0x1da98c - 0x1da9a0
void entry_001da98c_0x1da98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da98c_0x1da98c");
#endif

    ctx->pc = 0x1da98cu;

    // 0x1da98c: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x1da98cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1da990: 0x24110030  addiu       $s1, $zero, 0x30
    ctx->pc = 0x1da990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1da994: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x1da994u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1da998: 0x1010  mfhi        $v0
    ctx->pc = 0x1da998u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1da99c: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x1da99cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->pc = 0x1da9a0u;
}
