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

// Function: entry_0013cef4
// Address: 0x13cef4 - 0x13cf10
void entry_0013cef4_0x13cef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cef4_0x13cef4");
#endif

    ctx->pc = 0x13cef4u;

    // 0x13cef4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13cef8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13cefc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cf00: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x13cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x13cf04: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x13cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x13cf08: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x13cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x13cf0c: 0x0  nop
    ctx->pc = 0x13cf0cu;
    // NOP
    ctx->pc = 0x13cf10u;
}
