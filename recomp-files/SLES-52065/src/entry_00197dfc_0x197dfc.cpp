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

// Function: entry_00197dfc
// Address: 0x197dfc - 0x197e14
void entry_00197dfc_0x197dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197dfc_0x197dfc");
#endif

    ctx->pc = 0x197dfcu;

    // 0x197dfc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x197dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197e00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x197e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x197e04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197e08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x197e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x197e0c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x197e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x197e10: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x197e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x197e14u;
}
