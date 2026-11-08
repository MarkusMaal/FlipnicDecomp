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

// Function: entry_00172fd8
// Address: 0x172fd8 - 0x172ff0
void entry_00172fd8_0x172fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172fd8_0x172fd8");
#endif

    ctx->pc = 0x172fd8u;

    // 0x172fd8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x172fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172fdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x172fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x172fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172fe4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x172fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x172fe8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x172fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x172fec: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x172fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x172ff0u;
}
