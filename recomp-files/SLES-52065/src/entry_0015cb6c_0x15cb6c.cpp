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

// Function: entry_0015cb6c
// Address: 0x15cb6c - 0x15cb78
void entry_0015cb6c_0x15cb6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cb6c_0x15cb6c");
#endif

    ctx->pc = 0x15cb6cu;

    // 0x15cb6c: 0x0  nop
    ctx->pc = 0x15cb6cu;
    // NOP
    // 0x15cb70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15cb70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15cb74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15cb78u;
}
