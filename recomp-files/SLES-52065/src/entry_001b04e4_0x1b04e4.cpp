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

// Function: entry_001b04e4
// Address: 0x1b04e4 - 0x1b04ec
void entry_001b04e4_0x1b04e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b04e4_0x1b04e4");
#endif

    ctx->pc = 0x1b04e4u;

    // 0x1b04e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b04e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b04e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b04ecu;
}
