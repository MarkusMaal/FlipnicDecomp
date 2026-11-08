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

// Function: entry_001c10c0
// Address: 0x1c10c0 - 0x1c10c8
void entry_001c10c0_0x1c10c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c10c0_0x1c10c0");
#endif

    ctx->pc = 0x1c10c0u;

    // 0x1c10c0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1c10c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c10c4: 0xaea30074  sw          $v1, 0x74($s5)
    ctx->pc = 0x1c10c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 3));
    ctx->pc = 0x1c10c8u;
}
