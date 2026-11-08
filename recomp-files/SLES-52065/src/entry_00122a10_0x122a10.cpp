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

// Function: entry_00122a10
// Address: 0x122a10 - 0x122a20
void entry_00122a10_0x122a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122a10_0x122a10");
#endif

    ctx->pc = 0x122a10u;

    // 0x122a10: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x122a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a14: 0x8e730004  lw          $s3, 0x4($s3)
    ctx->pc = 0x122a14u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x122a18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x122a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a1c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x122a1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x122a20u;
}
