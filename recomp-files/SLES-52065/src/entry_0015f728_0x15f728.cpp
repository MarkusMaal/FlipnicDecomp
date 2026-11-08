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

// Function: entry_0015f728
// Address: 0x15f728 - 0x15f744
void entry_0015f728_0x15f728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f728_0x15f728");
#endif

    ctx->pc = 0x15f728u;

    // 0x15f728: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x15f728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x15f72c: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x15f730: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15f734: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x15f738: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15f73c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15f740: 0xa470022c  sh          $s0, 0x22C($v1)
    ctx->pc = 0x15f740u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 556), (uint16_t)GPR_U32(ctx, 16));
    ctx->pc = 0x15f744u;
}
