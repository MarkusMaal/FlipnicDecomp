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

// Function: entry_001b49fc
// Address: 0x1b49fc - 0x1b4a08
void entry_001b49fc_0x1b49fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b49fc_0x1b49fc");
#endif

    ctx->pc = 0x1b49fcu;

    // 0x1b49fc: 0x0  nop
    ctx->pc = 0x1b49fcu;
    // NOP
    // 0x1b4a00: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1b4a00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1b4a04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b4a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1b4a08u;
}
