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

// Function: entry_0019a404
// Address: 0x19a404 - 0x19a410
void entry_0019a404_0x19a404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a404_0x19a404");
#endif

    ctx->pc = 0x19a404u;

    // 0x19a404: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a408: 0xac4004d0  sw          $zero, 0x4D0($v0)
    ctx->pc = 0x19a408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
    // 0x19a40c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x19a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x19a410u;
}
