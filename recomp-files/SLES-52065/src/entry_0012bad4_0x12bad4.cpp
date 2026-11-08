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

// Function: entry_0012bad4
// Address: 0x12bad4 - 0x12bae0
void entry_0012bad4_0x12bad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bad4_0x12bad4");
#endif

    ctx->pc = 0x12bad4u;

    // 0x12bad4: 0x0  nop
    ctx->pc = 0x12bad4u;
    // NOP
    // 0x12bad8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12bad8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12badc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12badcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12bae0u;
}
