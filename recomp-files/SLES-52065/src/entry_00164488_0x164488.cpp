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

// Function: entry_00164488
// Address: 0x164488 - 0x16449c
void entry_00164488_0x164488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164488_0x164488");
#endif

    ctx->pc = 0x164488u;

    // 0x164488: 0x862201ea  lh          $v0, 0x1EA($s1)
    ctx->pc = 0x164488u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 490)));
    // 0x16448c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16448Cu;
    {
        const bool branch_taken_0x16448c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16448Cu;
        // 0x164490: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16448c) {
            ctx->pc = 0x16449Cu;
            return;
        }
    }
    ctx->pc = 0x164494u;
    // 0x164494: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x164494u;
    {
        const bool branch_taken_0x164494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164494u;
        // 0x164498: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164494) {
            ctx->pc = 0x164904u;
            return;
        }
    }
    ctx->pc = 0x16449Cu;
}
