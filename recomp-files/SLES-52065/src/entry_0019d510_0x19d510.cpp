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

// Function: entry_0019d510
// Address: 0x19d510 - 0x19d518
void entry_0019d510_0x19d510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d510_0x19d510");
#endif

    ctx->pc = 0x19d510u;

    // 0x19d510: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x19d510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x19d514: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19d514u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x19d518u;
}
