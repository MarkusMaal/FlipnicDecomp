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

// Function: entry_001a0e24
// Address: 0x1a0e24 - 0x1a0e38
void entry_001a0e24_0x1a0e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0e24_0x1a0e24");
#endif

    ctx->pc = 0x1a0e24u;

    // 0x1a0e24: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x1a0e24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0e28: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a0e28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a0e2c: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x1a0e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a0e30: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1a0e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1a0e34: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1a0e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    ctx->pc = 0x1a0e38u;
}
