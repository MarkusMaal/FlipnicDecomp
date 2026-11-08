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

// Function: entry_001094c4
// Address: 0x1094c4 - 0x1094dc
void entry_001094c4_0x1094c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001094c4_0x1094c4");
#endif

    ctx->pc = 0x1094c4u;

    // 0x1094c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1094c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1094c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1094c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1094cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1094ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1094d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1094d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1094d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1094d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1094d8: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1094d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1094dcu;
}
