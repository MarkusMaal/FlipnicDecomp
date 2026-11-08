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

// Function: entry_001bb7e0
// Address: 0x1bb7e0 - 0x1bb7f0
void entry_001bb7e0_0x1bb7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb7e0_0x1bb7e0");
#endif

    ctx->pc = 0x1bb7e0u;

    // 0x1bb7e0: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1bb7e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7e4: 0x8e730004  lw          $s3, 0x4($s3)
    ctx->pc = 0x1bb7e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1bb7e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bb7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bb7ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bb7f0u;
}
