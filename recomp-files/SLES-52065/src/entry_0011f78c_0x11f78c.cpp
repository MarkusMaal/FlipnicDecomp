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

// Function: entry_0011f78c
// Address: 0x11f78c - 0x11f798
void entry_0011f78c_0x11f78c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f78c_0x11f78c");
#endif

    ctx->pc = 0x11f78cu;

    // 0x11f78c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11f78cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f790: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11f790u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f794: 0x892821  addu        $a1, $a0, $t1
    ctx->pc = 0x11f794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    ctx->pc = 0x11f798u;
}
