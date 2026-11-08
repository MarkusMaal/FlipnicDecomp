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

// Function: entry_0019a1ec
// Address: 0x19a1ec - 0x19a1f0
void entry_0019a1ec_0x19a1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a1ec_0x19a1ec");
#endif

    ctx->pc = 0x19a1ecu;

    // 0x19a1ec: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x19a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    ctx->pc = 0x19a1f0u;
}
