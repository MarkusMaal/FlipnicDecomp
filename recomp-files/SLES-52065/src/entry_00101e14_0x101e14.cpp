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

// Function: entry_00101e14
// Address: 0x101e14 - 0x101e40
void entry_00101e14_0x101e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101e14_0x101e14");
#endif

    ctx->pc = 0x101e14u;

    // 0x101e14: 0x0  nop
    ctx->pc = 0x101e14u;
    // NOP
    // 0x101e18: 0x1671821  addu        $v1, $t3, $a3
    ctx->pc = 0x101e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x101e1c: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x101e1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101e20: 0x1691821  addu        $v1, $t3, $t1
    ctx->pc = 0x101e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x101e24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x101e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x101e28: 0x1a36021  addu        $t4, $t5, $v1
    ctx->pc = 0x101e28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x101e2c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x101e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x101e30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x101e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x101e34: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x101e34u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101e38: 0x7d860000  sq          $a2, 0x0($t4)
    ctx->pc = 0x101e38u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 6));
    // 0x101e3c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x101e3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    ctx->pc = 0x101e40u;
}
