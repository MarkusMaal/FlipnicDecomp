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

// Function: entry_001e3c0c
// Address: 0x1e3c0c - 0x1e3c14
void entry_001e3c0c_0x1e3c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3c0c_0x1e3c0c");
#endif

    ctx->pc = 0x1e3c0cu;

    // 0x1e3c0c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1e3c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1e3c10: 0x601027  not         $v0, $v1
    ctx->pc = 0x1e3c10u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    ctx->pc = 0x1e3c14u;
}
