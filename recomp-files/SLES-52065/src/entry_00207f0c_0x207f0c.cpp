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

// Function: entry_00207f0c
// Address: 0x207f0c - 0x207f18
void entry_00207f0c_0x207f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207f0c_0x207f0c");
#endif

    ctx->pc = 0x207f0cu;

    // 0x207f0c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x207f0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f10: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x207f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x207f14: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x207f14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x207f18u;
}
