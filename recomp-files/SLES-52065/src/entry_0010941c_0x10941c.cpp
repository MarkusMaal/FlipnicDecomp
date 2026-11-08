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

// Function: entry_0010941c
// Address: 0x10941c - 0x109434
void entry_0010941c_0x10941c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010941c_0x10941c");
#endif

    ctx->pc = 0x10941cu;

    // 0x10941c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x10941cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x109420: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x109420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x109424: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x109424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x109428: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x109428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10942c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x10942cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x109430: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x109430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    ctx->pc = 0x109434u;
}
