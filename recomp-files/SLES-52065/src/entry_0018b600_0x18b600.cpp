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

// Function: entry_0018b600
// Address: 0x18b600 - 0x18b618
void entry_0018b600_0x18b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b600_0x18b600");
#endif

    ctx->pc = 0x18b600u;

    // 0x18b600: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x18b600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b604: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x18b604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b608: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18b608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18b60c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b610: 0x84740008  lh          $s4, 0x8($v1)
    ctx->pc = 0x18b610u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18b614: 0x0  nop
    ctx->pc = 0x18b614u;
    // NOP
    ctx->pc = 0x18b618u;
}
