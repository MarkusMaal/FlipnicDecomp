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

// Function: entry_0020437c
// Address: 0x20437c - 0x204380
void entry_0020437c_0x20437c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020437c_0x20437c");
#endif

    ctx->pc = 0x20437cu;

    // 0x20437c: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x20437cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    ctx->pc = 0x204380u;
}
