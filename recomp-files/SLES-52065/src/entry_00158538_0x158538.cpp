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

// Function: entry_00158538
// Address: 0x158538 - 0x158550
void entry_00158538_0x158538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158538_0x158538");
#endif

    ctx->pc = 0x158538u;

    // 0x158538: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x158538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x15853c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x158540: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x158540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x158544: 0x78460390  lq          $a2, 0x390($v0)
    ctx->pc = 0x158544u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 912)));
    // 0x158548: 0x7c660270  sq          $a2, 0x270($v1)
    ctx->pc = 0x158548u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 624), GPR_VEC(ctx, 6));
    // 0x15854c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15854cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x158550u;
}
