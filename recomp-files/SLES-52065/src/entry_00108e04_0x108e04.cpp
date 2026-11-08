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

// Function: entry_00108e04
// Address: 0x108e04 - 0x108e1c
void entry_00108e04_0x108e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108e04_0x108e04");
#endif

    ctx->pc = 0x108e04u;

    // 0x108e04: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x108e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108e08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108e0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108e10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x108e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x108e14: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x108e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x108e18: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x108e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x108e1cu;
}
