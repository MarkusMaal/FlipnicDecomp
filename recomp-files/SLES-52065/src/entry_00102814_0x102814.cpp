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

// Function: entry_00102814
// Address: 0x102814 - 0x102830
void entry_00102814_0x102814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102814_0x102814");
#endif

    ctx->pc = 0x102814u;

    // 0x102814: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x102814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102818: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x102818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10281c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x10281cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x102820: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x102824: 0x84710008  lh          $s1, 0x8($v1)
    ctx->pc = 0x102824u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x102828: 0x0  nop
    ctx->pc = 0x102828u;
    // NOP
    // 0x10282c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x102830u;
}
