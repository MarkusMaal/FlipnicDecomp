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

// Function: entry_001f2464
// Address: 0x1f2464 - 0x1f2474
void entry_001f2464_0x1f2464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2464_0x1f2464");
#endif

    ctx->pc = 0x1f2464u;

    // 0x1f2464: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x1f2464u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f2468: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f2468u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f246c: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f246cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f2470: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f2470u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f2474u;
}
