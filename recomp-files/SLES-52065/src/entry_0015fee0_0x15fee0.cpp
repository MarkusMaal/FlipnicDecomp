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

// Function: entry_0015fee0
// Address: 0x15fee0 - 0x15ff0c
void entry_0015fee0_0x15fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fee0_0x15fee0");
#endif

    ctx->pc = 0x15fee0u;

    // 0x15fee0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x15fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15fee4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15fee8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15feec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15feecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15fef0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15fef4: 0x84630228  lh          $v1, 0x228($v1)
    ctx->pc = 0x15fef4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 552)));
    // 0x15fef8: 0x2861ffff  slti        $at, $v1, -0x1
    ctx->pc = 0x15fef8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x15fefc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15FEFCu;
    {
        const bool branch_taken_0x15fefc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fefc) {
            ctx->pc = 0x15FF0Cu;
            return;
        }
    }
    ctx->pc = 0x15FF04u;
    // 0x15ff04: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x15FF04u;
    {
        const bool branch_taken_0x15ff04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ff04) {
            ctx->pc = 0x15FFD4u;
            return;
        }
    }
    ctx->pc = 0x15FF0Cu;
}
