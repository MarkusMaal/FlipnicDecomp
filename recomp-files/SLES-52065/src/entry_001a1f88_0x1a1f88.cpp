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

// Function: entry_001a1f88
// Address: 0x1a1f88 - 0x1a1f94
void entry_001a1f88_0x1a1f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1f88_0x1a1f88");
#endif

    ctx->pc = 0x1a1f88u;

    // 0x1a1f88: 0x8e820c70  lw          $v0, 0xC70($s4)
    ctx->pc = 0x1a1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3184)));
    // 0x1a1f8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1f90: 0xae820c70  sw          $v0, 0xC70($s4)
    ctx->pc = 0x1a1f90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3184), GPR_U32(ctx, 2));
    ctx->pc = 0x1a1f94u;
}
