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

// Function: entry_0013df24
// Address: 0x13df24 - 0x13df28
void entry_0013df24_0x13df24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013df24_0x13df24");
#endif

    ctx->pc = 0x13df24u;

    // 0x13df24: 0xae200174  sw          $zero, 0x174($s1)
    ctx->pc = 0x13df24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 0));
    ctx->pc = 0x13df28u;
}
