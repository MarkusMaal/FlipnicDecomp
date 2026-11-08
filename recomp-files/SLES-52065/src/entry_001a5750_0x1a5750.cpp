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

// Function: entry_001a5750
// Address: 0x1a5750 - 0x1a5758
void entry_001a5750_0x1a5750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5750_0x1a5750");
#endif

    ctx->pc = 0x1a5750u;

    // 0x1a5750: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x1a5750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x1a5754: 0xace00060  sw          $zero, 0x60($a3)
    ctx->pc = 0x1a5754u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 0));
    ctx->pc = 0x1a5758u;
}
