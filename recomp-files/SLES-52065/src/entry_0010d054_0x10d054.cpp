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

// Function: entry_0010d054
// Address: 0x10d054 - 0x10d06c
void entry_0010d054_0x10d054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d054_0x10d054");
#endif

    ctx->pc = 0x10d054u;

    // 0x10d054: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x10d054u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10d058: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10d058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10d05c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10d060: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10d060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10d064: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x10d064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10d068: 0x24700040  addiu       $s0, $v1, 0x40
    ctx->pc = 0x10d068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    ctx->pc = 0x10d06cu;
}
