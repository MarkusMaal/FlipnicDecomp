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

// Function: entry_00111ff0
// Address: 0x111ff0 - 0x111ff8
void entry_00111ff0_0x111ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111ff0_0x111ff0");
#endif

    ctx->pc = 0x111ff0u;

    // 0x111ff0: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x111ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x111ff4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x111ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x111ff8u;
}
