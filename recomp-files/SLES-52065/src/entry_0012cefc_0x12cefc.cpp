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

// Function: entry_0012cefc
// Address: 0x12cefc - 0x12cf08
void entry_0012cefc_0x12cefc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cefc_0x12cefc");
#endif

    ctx->pc = 0x12cefcu;

    // 0x12cefc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x12cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12cf00: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x12cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12cf04: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x12cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x12cf08u;
}
