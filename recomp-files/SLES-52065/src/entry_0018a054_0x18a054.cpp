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

// Function: entry_0018a054
// Address: 0x18a054 - 0x18a060
void entry_0018a054_0x18a054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a054_0x18a054");
#endif

    ctx->pc = 0x18a054u;

    // 0x18a054: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18a058: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18a058u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a05c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x18a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x18a060u;
}
