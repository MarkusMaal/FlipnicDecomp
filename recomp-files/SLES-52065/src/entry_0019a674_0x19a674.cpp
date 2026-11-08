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

// Function: entry_0019a674
// Address: 0x19a674 - 0x19a680
void entry_0019a674_0x19a674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a674_0x19a674");
#endif

    ctx->pc = 0x19a674u;

    // 0x19a674: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a678: 0xac4004d0  sw          $zero, 0x4D0($v0)
    ctx->pc = 0x19a678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
    // 0x19a67c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x19a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x19a680u;
}
