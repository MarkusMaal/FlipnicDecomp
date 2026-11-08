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

// Function: entry_001dc0ec
// Address: 0x1dc0ec - 0x1dc0f0
void entry_001dc0ec_0x1dc0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc0ec_0x1dc0ec");
#endif

    ctx->pc = 0x1dc0ecu;

    // 0x1dc0ec: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x1dc0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x1dc0f0u;
}
