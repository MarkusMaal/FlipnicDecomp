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

// Function: entry_0012dad4
// Address: 0x12dad4 - 0x12dae0
void entry_0012dad4_0x12dad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dad4_0x12dad4");
#endif

    ctx->pc = 0x12dad4u;

    // 0x12dad4: 0x0  nop
    ctx->pc = 0x12dad4u;
    // NOP
    // 0x12dad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12dadc: 0xa38284a4  sb          $v0, -0x7B5C($gp)
    ctx->pc = 0x12dadcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935716), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12dae0u;
}
