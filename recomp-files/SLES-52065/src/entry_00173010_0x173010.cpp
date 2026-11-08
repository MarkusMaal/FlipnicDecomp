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

// Function: entry_00173010
// Address: 0x173010 - 0x17302c
void entry_00173010_0x173010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173010_0x173010");
#endif

    ctx->pc = 0x173010u;

    // 0x173010: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x173010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x173014: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x173014u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173018: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x173018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17301c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173020: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x173020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173024: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x173024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173028: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x173028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x17302cu;
}
