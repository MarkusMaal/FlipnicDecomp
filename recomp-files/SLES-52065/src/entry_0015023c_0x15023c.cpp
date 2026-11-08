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

// Function: entry_0015023c
// Address: 0x15023c - 0x150244
void entry_0015023c_0x15023c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015023c_0x15023c");
#endif

    ctx->pc = 0x15023cu;

    // 0x15023c: 0x0  nop
    ctx->pc = 0x15023cu;
    // NOP
    // 0x150240: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x150240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x150244u;
}
