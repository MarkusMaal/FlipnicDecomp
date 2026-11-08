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

// Function: entry_00102280
// Address: 0x102280 - 0x102298
void entry_00102280_0x102280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102280_0x102280");
#endif

    ctx->pc = 0x102280u;

    // 0x102280: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x102280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102284: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x102284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102288: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x102288u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x10228c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10228cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x102290: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x102290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x102294: 0x0  nop
    ctx->pc = 0x102294u;
    // NOP
    ctx->pc = 0x102298u;
}
