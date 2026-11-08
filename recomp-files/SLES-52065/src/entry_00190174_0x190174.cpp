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

// Function: entry_00190174
// Address: 0x190174 - 0x190188
void entry_00190174_0x190174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190174_0x190174");
#endif

    ctx->pc = 0x190174u;

    // 0x190174: 0x0  nop
    ctx->pc = 0x190174u;
    // NOP
    // 0x190178: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x190178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19017c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x19017Cu;
    {
        const bool branch_taken_0x19017c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19017Cu;
        // 0x190180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19017c) {
            ctx->pc = 0x19013Cu;
            return;
        }
    }
    ctx->pc = 0x190184u;
    // 0x190184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x190188u;
}
