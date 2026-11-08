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

// Function: entry_00100ce4
// Address: 0x100ce4 - 0x100d08
void entry_00100ce4_0x100ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100ce4_0x100ce4");
#endif

    ctx->pc = 0x100ce4u;

    // 0x100ce4: 0x8ca42cd0  lw          $a0, 0x2CD0($a1)
    ctx->pc = 0x100ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11472)));
    // 0x100ce8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x100ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x100cec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x100cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x100cf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x100cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x100cf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x100cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x100cf8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x100cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x100cfc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x100cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x100d00: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x100d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x100d04: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x100d04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
    ctx->pc = 0x100d08u;
}
