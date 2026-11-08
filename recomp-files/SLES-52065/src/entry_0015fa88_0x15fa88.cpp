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

// Function: entry_0015fa88
// Address: 0x15fa88 - 0x15faa4
void entry_0015fa88_0x15fa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fa88_0x15fa88");
#endif

    ctx->pc = 0x15fa88u;

    // 0x15fa88: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x15fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x15fa8c: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x15fa90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15fa94: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x15fa98: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15fa9c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15faa0: 0xa470022c  sh          $s0, 0x22C($v1)
    ctx->pc = 0x15faa0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 556), (uint16_t)GPR_U32(ctx, 16));
    ctx->pc = 0x15faa4u;
}
