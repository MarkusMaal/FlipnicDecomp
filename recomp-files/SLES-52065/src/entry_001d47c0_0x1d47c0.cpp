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

// Function: entry_001d47c0
// Address: 0x1d47c0 - 0x1d47c8
void entry_001d47c0_0x1d47c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d47c0_0x1d47c0");
#endif

    ctx->pc = 0x1d47c0u;

    // 0x1d47c0: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x1d47c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d47c4: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x1d47c4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1d47c8u;
}
