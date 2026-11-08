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

// Function: entry_001d8e28
// Address: 0x1d8e28 - 0x1d8e30
void entry_001d8e28_0x1d8e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8e28_0x1d8e28");
#endif

    ctx->pc = 0x1d8e28u;

    // 0x1d8e28: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x1d8e28u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x1d8e2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d8e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1d8e30u;
}
