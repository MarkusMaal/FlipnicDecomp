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

// Function: entry_00131908
// Address: 0x131908 - 0x131920
void entry_00131908_0x131908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131908_0x131908");
#endif

    ctx->pc = 0x131908u;

    // 0x131908: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x131908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13190c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13190cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131910: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x131910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x131914: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x131914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131918: 0x1450fff0  bne         $v0, $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x131918u;
    {
        const bool branch_taken_0x131918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x131918) {
            ctx->pc = 0x1318DCu;
            return;
        }
    }
    ctx->pc = 0x131920u;
}
