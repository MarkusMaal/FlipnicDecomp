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

// Function: entry_0013b428
// Address: 0x13b428 - 0x13b458
void entry_0013b428_0x13b428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b428_0x13b428");
#endif

    ctx->pc = 0x13b428u;

    // 0x13b428: 0x2529ffa0  addiu       $t1, $t1, -0x60
    ctx->pc = 0x13b428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967200));
    // 0x13b42c: 0x2484ffa0  addiu       $a0, $a0, -0x60
    ctx->pc = 0x13b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967200));
    // 0x13b430: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x13b430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13b434: 0x25280010  addiu       $t0, $t1, 0x10
    ctx->pc = 0x13b434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13b438: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x13b438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13b43c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x13b43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13b440: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13b440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x13b444: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x13b444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x13b448: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x13b448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x13b44c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x13b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x13b450: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x13b450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x13b454: 0x0  nop
    ctx->pc = 0x13b454u;
    // NOP
    ctx->pc = 0x13b458u;
}
