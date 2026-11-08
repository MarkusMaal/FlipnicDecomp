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

// Function: entry_0013e918
// Address: 0x13e918 - 0x13e930
void entry_0013e918_0x13e918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e918_0x13e918");
#endif

    ctx->pc = 0x13e918u;

    // 0x13e918: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x13e918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x13e91c: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x13e91cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13e920: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E920u;
    {
        const bool branch_taken_0x13e920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E920u;
        // 0x13e924: 0x2a020008  slti        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e920) {
            ctx->pc = 0x13E930u;
            return;
        }
    }
    ctx->pc = 0x13E928u;
    // 0x13e928: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13E928u;
    {
        const bool branch_taken_0x13e928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e928) {
            ctx->pc = 0x13E914u;
            return;
        }
    }
    ctx->pc = 0x13E930u;
}
