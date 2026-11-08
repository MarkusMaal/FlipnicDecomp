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

// Function: entry_001fe3d4
// Address: 0x1fe3d4 - 0x1fe3d8
void entry_001fe3d4_0x1fe3d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe3d4_0x1fe3d4");
#endif

    ctx->pc = 0x1fe3d4u;

    // 0x1fe3d4: 0x2e420401  sltiu       $v0, $s2, 0x401
    ctx->pc = 0x1fe3d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    ctx->pc = 0x1fe3d8u;
}
