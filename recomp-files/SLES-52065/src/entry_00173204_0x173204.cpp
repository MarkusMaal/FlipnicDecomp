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

// Function: entry_00173204
// Address: 0x173204 - 0x17321c
void entry_00173204_0x173204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173204_0x173204");
#endif

    ctx->pc = 0x173204u;

    // 0x173204: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x173204u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173208: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x173208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17320c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17320cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173210: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x173210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173214: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x173214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173218: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x173218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x17321cu;
}
