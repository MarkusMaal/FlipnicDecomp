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

// Function: entry_001e89b4
// Address: 0x1e89b4 - 0x1e89bc
void entry_001e89b4_0x1e89b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e89b4_0x1e89b4");
#endif

    ctx->pc = 0x1e89b4u;

    // 0x1e89b4: 0x0  nop
    ctx->pc = 0x1e89b4u;
    // NOP
    // 0x1e89b8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e89b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e89bcu;
}
