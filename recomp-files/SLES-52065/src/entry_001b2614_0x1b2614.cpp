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

// Function: entry_001b2614
// Address: 0x1b2614 - 0x1b2638
void entry_001b2614_0x1b2614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2614_0x1b2614");
#endif

    ctx->pc = 0x1b2614u;

    // 0x1b2614: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1b2614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1b2618: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x1b2618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1b261c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b261cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2620: 0x2643ffa0  addiu       $v1, $s2, -0x60
    ctx->pc = 0x1b2620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967200));
    // 0x1b2624: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1b2624u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b2628: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2628u;
    {
        const bool branch_taken_0x1b2628 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2628u;
        // 0x1b262c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2628) {
            ctx->pc = 0x1B2638u;
            return;
        }
    }
    ctx->pc = 0x1B2630u;
    // 0x1b2630: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b2634: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1b2634u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1b2638u;
}
