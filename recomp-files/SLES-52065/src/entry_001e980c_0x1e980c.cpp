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

// Function: entry_001e980c
// Address: 0x1e980c - 0x1e9814
void entry_001e980c_0x1e980c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e980c_0x1e980c");
#endif

    ctx->pc = 0x1e980cu;

    // 0x1e980c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e980cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9810: 0x27b1006c  addiu       $s1, $sp, 0x6C
    ctx->pc = 0x1e9810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->pc = 0x1e9814u;
}
