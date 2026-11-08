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

// Function: entry_0019ece0
// Address: 0x19ece0 - 0x19ed00
void entry_0019ece0_0x19ece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ece0_0x19ece0");
#endif

    ctx->pc = 0x19ece0u;

    // 0x19ece0: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x19ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x19ece4: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x19ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x19ece8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19ecec: 0xac8228e4  sw          $v0, 0x28E4($a0)
    ctx->pc = 0x19ececu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10468), GPR_U32(ctx, 2));
    // 0x19ecf0: 0x8e830664  lw          $v1, 0x664($s4)
    ctx->pc = 0x19ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x19ecf4: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19ecf8: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x19ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x19ecfc: 0xac4328f0  sw          $v1, 0x28F0($v0)
    ctx->pc = 0x19ecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10480), GPR_U32(ctx, 3));
    ctx->pc = 0x19ed00u;
}
