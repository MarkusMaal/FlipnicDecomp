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

// Function: entry_00108f20
// Address: 0x108f20 - 0x108f3c
void entry_00108f20_0x108f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108f20_0x108f20");
#endif

    ctx->pc = 0x108f20u;

    // 0x108f20: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x108f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x108f24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x108f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108f28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108f2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108f30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x108f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x108f34: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x108f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x108f38: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x108f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x108f3cu;
}
