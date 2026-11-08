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

// Function: entry_00192234
// Address: 0x192234 - 0x19223c
void entry_00192234_0x192234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192234_0x192234");
#endif

    ctx->pc = 0x192234u;

    // 0x192234: 0x0  nop
    ctx->pc = 0x192234u;
    // NOP
    // 0x192238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19223cu;
}
