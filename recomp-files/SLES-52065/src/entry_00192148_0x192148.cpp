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

// Function: entry_00192148
// Address: 0x192148 - 0x192164
void entry_00192148_0x192148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192148_0x192148");
#endif

    ctx->pc = 0x192148u;

    // 0x192148: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x192148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19214c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19214cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192158: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19215c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x192160: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x192164u;
}
