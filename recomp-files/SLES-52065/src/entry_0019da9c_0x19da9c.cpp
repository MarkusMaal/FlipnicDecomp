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

// Function: entry_0019da9c
// Address: 0x19da9c - 0x19dab0
void entry_0019da9c_0x19da9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019da9c_0x19da9c");
#endif

    ctx->pc = 0x19da9cu;

    // 0x19da9c: 0x0  nop
    ctx->pc = 0x19da9cu;
    // NOP
    // 0x19daa0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19daa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19daa4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x19daa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x19daa8: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x19daa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x19daac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19daacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x19dab0u;
}
