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

// Function: entry_0016f6ec
// Address: 0x16f6ec - 0x16f6f4
void entry_0016f6ec_0x16f6ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f6ec_0x16f6ec");
#endif

    ctx->pc = 0x16f6ecu;

    // 0x16f6ec: 0x0  nop
    ctx->pc = 0x16f6ecu;
    // NOP
    // 0x16f6f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16f6f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16f6f4u;
}
