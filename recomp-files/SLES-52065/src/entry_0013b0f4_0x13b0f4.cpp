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

// Function: entry_0013b0f4
// Address: 0x13b0f4 - 0x13b118
void entry_0013b0f4_0x13b0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b0f4_0x13b0f4");
#endif

    ctx->pc = 0x13b0f4u;

    // 0x13b0f4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x13b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x13b0f8: 0x258a0010  addiu       $t2, $t4, 0x10
    ctx->pc = 0x13b0f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x13b0fc: 0x25a90010  addiu       $t1, $t5, 0x10
    ctx->pc = 0x13b0fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x13b100: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x13b100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13b104: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x13b104u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x13b108: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x13b108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x13b10c: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x13b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x13b110: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x13b110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x13b114: 0xada30008  sw          $v1, 0x8($t5)
    ctx->pc = 0x13b114u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x13b118u;
}
