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

// Function: entry_001d5798
// Address: 0x1d5798 - 0x1d57a0
void entry_001d5798_0x1d5798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5798_0x1d5798");
#endif

    ctx->pc = 0x1d5798u;

    // 0x1d5798: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1d5798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d579c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d579cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d57a0u;
}
