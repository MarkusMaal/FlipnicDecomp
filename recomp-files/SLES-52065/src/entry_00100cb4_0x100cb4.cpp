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

// Function: entry_00100cb4
// Address: 0x100cb4 - 0x100ccc
void entry_00100cb4_0x100cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100cb4_0x100cb4");
#endif

    ctx->pc = 0x100cb4u;

    // 0x100cb4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x100cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x100cb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x100cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x100cbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x100cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x100cc0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x100cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x100cc4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x100cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x100cc8: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x100cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    ctx->pc = 0x100cccu;
}
