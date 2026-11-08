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

// Function: entry_001f204c
// Address: 0x1f204c - 0x1f2050
void entry_001f204c_0x1f204c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f204c_0x1f204c");
#endif

    ctx->pc = 0x1f204cu;

    // 0x1f204c: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x1f204cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    ctx->pc = 0x1f2050u;
}
