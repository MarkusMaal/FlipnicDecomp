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

// Function: entry_001e891c
// Address: 0x1e891c - 0x1e8924
void entry_001e891c_0x1e891c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e891c_0x1e891c");
#endif

    ctx->pc = 0x1e891cu;

    // 0x1e891c: 0x0  nop
    ctx->pc = 0x1e891cu;
    // NOP
    // 0x1e8920: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e8920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e8924u;
}
