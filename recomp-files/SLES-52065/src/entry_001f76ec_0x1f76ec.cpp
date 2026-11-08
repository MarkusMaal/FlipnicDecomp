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

// Function: entry_001f76ec
// Address: 0x1f76ec - 0x1f76f0
void entry_001f76ec_0x1f76ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f76ec_0x1f76ec");
#endif

    ctx->pc = 0x1f76ecu;

    // 0x1f76ec: 0x2630ccd0  addiu       $s0, $s1, -0x3330
    ctx->pc = 0x1f76ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954192));
    ctx->pc = 0x1f76f0u;
}
