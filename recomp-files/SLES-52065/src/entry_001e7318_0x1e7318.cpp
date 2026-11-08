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

// Function: entry_001e7318
// Address: 0x1e7318 - 0x1e7324
void entry_001e7318_0x1e7318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7318_0x1e7318");
#endif

    ctx->pc = 0x1e7318u;

    // 0x1e7318: 0x5363c  dsll32      $a2, $a1, 24
    ctx->pc = 0x1e7318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 24));
    // 0x1e731c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1e731cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1e7320: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1e7320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e7324u;
}
