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

// Function: entry_001febc4
// Address: 0x1febc4 - 0x1febcc
void entry_001febc4_0x1febc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001febc4_0x1febc4");
#endif

    ctx->pc = 0x1febc4u;

    // 0x1febc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1febc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1febc8: 0x2203e  dsrl32      $a0, $v0, 0
    ctx->pc = 0x1febc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x1febccu;
}
