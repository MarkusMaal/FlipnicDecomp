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

// Function: entry_00138c4c
// Address: 0x138c4c - 0x138c58
void entry_00138c4c_0x138c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138c4c_0x138c4c");
#endif

    ctx->pc = 0x138c4cu;

    // 0x138c4c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x138c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x138c50: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x138c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x138c54: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x138c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    ctx->pc = 0x138c58u;
}
