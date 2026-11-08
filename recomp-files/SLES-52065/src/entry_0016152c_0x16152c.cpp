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

// Function: entry_0016152c
// Address: 0x16152c - 0x161538
void entry_0016152c_0x16152c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016152c_0x16152c");
#endif

    ctx->pc = 0x16152cu;

    // 0x16152c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x16152cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161530: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x161530u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161534: 0xcc4021  addu        $t0, $a2, $t4
    ctx->pc = 0x161534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    ctx->pc = 0x161538u;
}
