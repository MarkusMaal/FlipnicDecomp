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

// Function: entry_001715d8
// Address: 0x1715d8 - 0x1715e4
void entry_001715d8_0x1715d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001715d8_0x1715d8");
#endif

    ctx->pc = 0x1715d8u;

    // 0x1715d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1715d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1715dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715e0: 0x2024021  addu        $t0, $s0, $v0
    ctx->pc = 0x1715e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1715e4u;
}
