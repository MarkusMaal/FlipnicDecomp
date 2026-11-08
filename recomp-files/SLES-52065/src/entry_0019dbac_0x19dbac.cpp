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

// Function: entry_0019dbac
// Address: 0x19dbac - 0x19dbc0
void entry_0019dbac_0x19dbac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dbac_0x19dbac");
#endif

    ctx->pc = 0x19dbacu;

    // 0x19dbac: 0x0  nop
    ctx->pc = 0x19dbacu;
    // NOP
    // 0x19dbb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dbb4: 0xae420784  sw          $v0, 0x784($s2)
    ctx->pc = 0x19dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1924), GPR_U32(ctx, 2));
    // 0x19dbb8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19dbb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x19dbbc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19dbbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x19dbc0u;
}
