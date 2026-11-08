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

// Function: entry_001777d0
// Address: 0x1777d0 - 0x1777ec
void entry_001777d0_0x1777d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001777d0_0x1777d0");
#endif

    ctx->pc = 0x1777d0u;

    // 0x1777d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1777d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1777d4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1777d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1777d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1777d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1777dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1777dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1777e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1777e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1777e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1777e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1777e8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1777e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x1777ecu;
}
