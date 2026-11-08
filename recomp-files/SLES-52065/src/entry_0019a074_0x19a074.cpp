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

// Function: entry_0019a074
// Address: 0x19a074 - 0x19a080
void entry_0019a074_0x19a074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a074_0x19a074");
#endif

    ctx->pc = 0x19a074u;

    // 0x19a074: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19a074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19a078: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x19a078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
    // 0x19a07c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x19a07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    ctx->pc = 0x19a080u;
}
