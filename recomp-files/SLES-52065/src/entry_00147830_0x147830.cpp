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

// Function: entry_00147830
// Address: 0x147830 - 0x147854
void entry_00147830_0x147830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147830_0x147830");
#endif

    ctx->pc = 0x147830u;

    // 0x147830: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x147830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147834: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x147834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147838: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x147838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14783c: 0xae830030  sw          $v1, 0x30($s4)
    ctx->pc = 0x14783cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 3));
    // 0x147840: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x147840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147844: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147844u;
    {
        const bool branch_taken_0x147844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x147848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147844u;
        // 0x147848: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147844) {
            ctx->pc = 0x147854u;
            return;
        }
    }
    ctx->pc = 0x14784Cu;
    // 0x14784c: 0xae800030  sw          $zero, 0x30($s4)
    ctx->pc = 0x14784cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 0));
    // 0x147850: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x147850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->pc = 0x147854u;
}
