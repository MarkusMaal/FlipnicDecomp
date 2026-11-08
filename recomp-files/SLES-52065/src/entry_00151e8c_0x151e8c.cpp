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

// Function: entry_00151e8c
// Address: 0x151e8c - 0x151ea4
void entry_00151e8c_0x151e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151e8c_0x151e8c");
#endif

    ctx->pc = 0x151e8cu;

    // 0x151e8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x151e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151e90: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x151e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x151e94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x151e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x151e98: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x151e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x151e9c: 0x84730008  lh          $s3, 0x8($v1)
    ctx->pc = 0x151e9cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x151ea0: 0x0  nop
    ctx->pc = 0x151ea0u;
    // NOP
    ctx->pc = 0x151ea4u;
}
