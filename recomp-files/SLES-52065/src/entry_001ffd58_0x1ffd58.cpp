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

// Function: entry_001ffd58
// Address: 0x1ffd58 - 0x1ffd5c
void entry_001ffd58_0x1ffd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffd58_0x1ffd58");
#endif

    ctx->pc = 0x1ffd58u;

    // 0x1ffd58: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x1ffd58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    ctx->pc = 0x1ffd5cu;
}
