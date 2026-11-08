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

// Function: entry_0011839c
// Address: 0x11839c - 0x1183b8
void entry_0011839c_0x11839c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011839c_0x11839c");
#endif

    ctx->pc = 0x11839cu;

    // 0x11839c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x11839cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1183a0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1183a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1183a4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1183a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1183a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1183a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1183ac: 0x84720008  lh          $s2, 0x8($v1)
    ctx->pc = 0x1183acu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1183b0: 0x0  nop
    ctx->pc = 0x1183b0u;
    // NOP
    // 0x1183b4: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1183b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    ctx->pc = 0x1183b8u;
}
