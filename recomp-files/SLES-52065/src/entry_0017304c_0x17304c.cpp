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

// Function: entry_0017304c
// Address: 0x17304c - 0x173068
void entry_0017304c_0x17304c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017304c_0x17304c");
#endif

    ctx->pc = 0x17304cu;

    // 0x17304c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17304cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x173050: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x173050u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173054: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x173054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x173058: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17305c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17305cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173060: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x173060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173064: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x173064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x173068u;
}
