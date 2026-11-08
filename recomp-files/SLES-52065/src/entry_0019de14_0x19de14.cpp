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

// Function: entry_0019de14
// Address: 0x19de14 - 0x19de40
void entry_0019de14_0x19de14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019de14_0x19de14");
#endif

    ctx->pc = 0x19de14u;

    // 0x19de14: 0x0  nop
    ctx->pc = 0x19de14u;
    // NOP
    // 0x19de18: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x19de18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x19de1c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x19de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19de20: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19de20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x19de24: 0x8c630684  lw          $v1, 0x684($v1)
    ctx->pc = 0x19de24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1668)));
    // 0x19de28: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19de28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x19de2c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19de30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19de30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19de34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19de38: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x19de38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x19de3c: 0xa04001f9  sb          $zero, 0x1F9($v0)
    ctx->pc = 0x19de3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 505), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x19de40u;
}
