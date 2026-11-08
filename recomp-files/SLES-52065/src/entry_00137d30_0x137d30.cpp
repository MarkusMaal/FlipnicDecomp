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

// Function: entry_00137d30
// Address: 0x137d30 - 0x137d68
void entry_00137d30_0x137d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137d30_0x137d30");
#endif

    ctx->pc = 0x137d30u;

    // 0x137d30: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x137d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137d34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x137d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x137d38: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x137d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x137d3c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x137d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x137d40: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x137d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137d44: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x137d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x137d48: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x137d48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x137d4c: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x137d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137d50: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x137d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x137d54: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x137d54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x137d58: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x137d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137d5c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x137d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x137d60: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x137d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x137d64: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x137d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->pc = 0x137d68u;
}
