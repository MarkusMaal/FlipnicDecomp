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

// Function: entry_00163728
// Address: 0x163728 - 0x16373c
void entry_00163728_0x163728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163728_0x163728");
#endif

    ctx->pc = 0x163728u;

    // 0x163728: 0x862201ea  lh          $v0, 0x1EA($s1)
    ctx->pc = 0x163728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 490)));
    // 0x16372c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16372Cu;
    {
        const bool branch_taken_0x16372c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16372Cu;
        // 0x163730: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16372c) {
            ctx->pc = 0x16373Cu;
            return;
        }
    }
    ctx->pc = 0x163734u;
    // 0x163734: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x163734u;
    {
        const bool branch_taken_0x163734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163734u;
        // 0x163738: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163734) {
            ctx->pc = 0x1639F4u;
            return;
        }
    }
    ctx->pc = 0x16373Cu;
}
