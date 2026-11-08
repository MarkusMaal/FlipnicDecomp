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

// Function: entry_00170638
// Address: 0x170638 - 0x170660
void entry_00170638_0x170638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170638_0x170638");
#endif

    ctx->pc = 0x170638u;

    // 0x170638: 0x90830263  lbu         $v1, 0x263($a0)
    ctx->pc = 0x170638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 611)));
    // 0x17063c: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x17063Cu;
    {
        const bool branch_taken_0x17063c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17063c) {
            ctx->pc = 0x1706ACu;
            return;
        }
    }
    ctx->pc = 0x170644u;
    // 0x170644: 0x8c830234  lw          $v1, 0x234($a0)
    ctx->pc = 0x170644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x170648: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x170648u;
    {
        const bool branch_taken_0x170648 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x170648) {
            ctx->pc = 0x170660u;
            return;
        }
    }
    ctx->pc = 0x170650u;
    // 0x170650: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x170650u;
    {
        const bool branch_taken_0x170650 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x170650) {
            ctx->pc = 0x17066Cu;
            return;
        }
    }
    ctx->pc = 0x170658u;
    // 0x170658: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x170658u;
    {
        const bool branch_taken_0x170658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170658u;
        // 0x17065c: 0xac800234  sw          $zero, 0x234($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170658) {
            ctx->pc = 0x17066Cu;
            return;
        }
    }
    ctx->pc = 0x170660u;
}
