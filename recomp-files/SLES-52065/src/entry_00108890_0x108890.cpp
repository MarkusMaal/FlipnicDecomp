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

// Function: entry_00108890
// Address: 0x108890 - 0x1088a8
void entry_00108890_0x108890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108890_0x108890");
#endif

    ctx->pc = 0x108890u;

    // 0x108890: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x108890u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x108894: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x108894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x108898: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x108898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10889c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10889cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1088a0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1088a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1088a4: 0x24700040  addiu       $s0, $v1, 0x40
    ctx->pc = 0x1088a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    ctx->pc = 0x1088a8u;
}
