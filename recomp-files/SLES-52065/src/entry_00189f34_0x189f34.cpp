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

// Function: entry_00189f34
// Address: 0x189f34 - 0x189f40
void entry_00189f34_0x189f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189f34_0x189f34");
#endif

    ctx->pc = 0x189f34u;

    // 0x189f34: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x189f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x189f38: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x189f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189f3c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x189f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x189f40u;
}
