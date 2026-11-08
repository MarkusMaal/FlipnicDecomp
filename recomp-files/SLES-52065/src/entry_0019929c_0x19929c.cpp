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

// Function: entry_0019929c
// Address: 0x19929c - 0x1992ac
void entry_0019929c_0x19929c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019929c_0x19929c");
#endif

    ctx->pc = 0x19929cu;

    // 0x19929c: 0x0  nop
    ctx->pc = 0x19929cu;
    // NOP
    // 0x1992a0: 0x2516002c  addiu       $s6, $t0, 0x2C
    ctx->pc = 0x1992a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 44));
    // 0x1992a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1992a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1992a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1992a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1992acu;
}
