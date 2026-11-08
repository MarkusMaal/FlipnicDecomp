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

// Function: entry_001e7964
// Address: 0x1e7964 - 0x1e796c
void entry_001e7964_0x1e7964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7964_0x1e7964");
#endif

    ctx->pc = 0x1e7964u;

    // 0x1e7964: 0x0  nop
    ctx->pc = 0x1e7964u;
    // NOP
    // 0x1e7968: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e7968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e796cu;
}
