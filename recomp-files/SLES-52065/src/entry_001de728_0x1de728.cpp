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

// Function: entry_001de728
// Address: 0x1de728 - 0x1de740
void entry_001de728_0x1de728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de728_0x1de728");
#endif

    ctx->pc = 0x1de728u;

    // 0x1de728: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x1de728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1de72c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE72Cu;
    {
        const bool branch_taken_0x1de72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de72c) {
            ctx->pc = 0x1DE730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE72Cu;
            // 0x1de730: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE740u;
            return;
        }
    }
    ctx->pc = 0x1DE734u;
    // 0x1de734: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x1de734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1de738: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1de738u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1de73c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1de73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->pc = 0x1de740u;
}
