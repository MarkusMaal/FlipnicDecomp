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

// Function: entry_00191f20
// Address: 0x191f20 - 0x191f3c
void entry_00191f20_0x191f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191f20_0x191f20");
#endif

    ctx->pc = 0x191f20u;

    // 0x191f20: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x191f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x191f24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x191f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191f28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191f2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191f30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x191f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191f34: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x191f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x191f38: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x191f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x191f3cu;
}
