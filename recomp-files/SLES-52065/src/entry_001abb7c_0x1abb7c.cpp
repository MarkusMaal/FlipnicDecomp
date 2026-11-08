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

// Function: entry_001abb7c
// Address: 0x1abb7c - 0x1abb80
void entry_001abb7c_0x1abb7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abb7c_0x1abb7c");
#endif

    ctx->pc = 0x1abb7cu;

    // 0x1abb7c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1abb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x1abb80u;
}
