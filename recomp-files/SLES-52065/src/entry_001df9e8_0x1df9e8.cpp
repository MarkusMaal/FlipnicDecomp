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

// Function: entry_001df9e8
// Address: 0x1df9e8 - 0x1df9f0
void entry_001df9e8_0x1df9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df9e8_0x1df9e8");
#endif

    ctx->pc = 0x1df9e8u;

    // 0x1df9e8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1df9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df9ec: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1df9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->pc = 0x1df9f0u;
}
