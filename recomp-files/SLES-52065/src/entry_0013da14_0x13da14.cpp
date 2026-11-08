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

// Function: entry_0013da14
// Address: 0x13da14 - 0x13da18
void entry_0013da14_0x13da14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013da14_0x13da14");
#endif

    ctx->pc = 0x13da14u;

    // 0x13da14: 0xac830180  sw          $v1, 0x180($a0)
    ctx->pc = 0x13da14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 3));
    ctx->pc = 0x13da18u;
}
