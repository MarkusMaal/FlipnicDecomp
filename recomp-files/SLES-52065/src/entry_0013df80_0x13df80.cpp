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

// Function: entry_0013df80
// Address: 0x13df80 - 0x13df84
void entry_0013df80_0x13df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013df80_0x13df80");
#endif

    ctx->pc = 0x13df80u;

    // 0x13df80: 0xae200174  sw          $zero, 0x174($s1)
    ctx->pc = 0x13df80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 0));
    ctx->pc = 0x13df84u;
}
