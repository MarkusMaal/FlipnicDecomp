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

// Function: entry_00203ed0
// Address: 0x203ed0 - 0x203ed4
void entry_00203ed0_0x203ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203ed0_0x203ed0");
#endif

    ctx->pc = 0x203ed0u;

    // 0x203ed0: 0x33c20008  andi        $v0, $fp, 0x8
    ctx->pc = 0x203ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8);
    ctx->pc = 0x203ed4u;
}
