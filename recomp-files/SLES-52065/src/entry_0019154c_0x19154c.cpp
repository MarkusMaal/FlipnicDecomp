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

// Function: entry_0019154c
// Address: 0x19154c - 0x191564
void entry_0019154c_0x19154c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019154c_0x19154c");
#endif

    ctx->pc = 0x19154cu;

    // 0x19154c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19154cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x191550: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x191550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x191554: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x191558: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x191558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19155c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19155cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x191560: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x191560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    ctx->pc = 0x191564u;
}
