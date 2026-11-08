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

// Function: entry_0010e834
// Address: 0x10e834 - 0x10e83c
void entry_0010e834_0x10e834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e834_0x10e834");
#endif

    ctx->pc = 0x10e834u;

    // 0x10e834: 0x0  nop
    ctx->pc = 0x10e834u;
    // NOP
    // 0x10e838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10e838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10e83cu;
}
