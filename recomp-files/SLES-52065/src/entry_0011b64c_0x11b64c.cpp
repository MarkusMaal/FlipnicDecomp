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

// Function: entry_0011b64c
// Address: 0x11b64c - 0x11b664
void entry_0011b64c_0x11b64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b64c_0x11b64c");
#endif

    ctx->pc = 0x11b64cu;

    // 0x11b64c: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x11b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x11b650: 0x80690000  lb          $t1, 0x0($v1)
    ctx->pc = 0x11b650u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b654: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B654u;
    {
        const bool branch_taken_0x11b654 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B654u;
        // 0x11b658: 0x29230061  slti        $v1, $t1, 0x61 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)97) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b654) {
            ctx->pc = 0x11B664u;
            return;
        }
    }
    ctx->pc = 0x11B65Cu;
    // 0x11b65c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x11B65Cu;
    {
        const bool branch_taken_0x11b65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B65Cu;
        // 0x11b660: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b65c) {
            ctx->pc = 0x11B6F8u;
            return;
        }
    }
    ctx->pc = 0x11B664u;
}
