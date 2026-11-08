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

// Function: entry_001a0624
// Address: 0x1a0624 - 0x1a0640
void entry_001a0624_0x1a0624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0624_0x1a0624");
#endif

    ctx->pc = 0x1a0624u;

    // 0x1a0624: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a0624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a0628: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a0628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a062c: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1a062cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a0630: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0630u;
    {
        const bool branch_taken_0x1a0630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a0630) {
            ctx->pc = 0x1A0640u;
            return;
        }
    }
    ctx->pc = 0x1A0638u;
    // 0x1a0638: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0638u;
    {
        const bool branch_taken_0x1a0638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0638) {
            ctx->pc = 0x1A0644u;
            return;
        }
    }
    ctx->pc = 0x1A0640u;
}
