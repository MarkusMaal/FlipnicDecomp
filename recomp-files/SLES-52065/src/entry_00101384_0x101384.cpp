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

// Function: entry_00101384
// Address: 0x101384 - 0x10139c
void entry_00101384_0x101384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101384_0x101384");
#endif

    ctx->pc = 0x101384u;

    // 0x101384: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x101384u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x101388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10138c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10138cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101390: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x101394: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x101394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x101398: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x101398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x10139cu;
}
