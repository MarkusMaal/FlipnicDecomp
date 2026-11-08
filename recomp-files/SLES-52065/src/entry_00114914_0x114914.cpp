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

// Function: entry_00114914
// Address: 0x114914 - 0x114924
void entry_00114914_0x114914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114914_0x114914");
#endif

    ctx->pc = 0x114914u;

    // 0x114914: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114914u;
    {
        const bool branch_taken_0x114914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114914u;
        // 0x114918: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114914) {
            ctx->pc = 0x114924u;
            return;
        }
    }
    ctx->pc = 0x11491Cu;
    // 0x11491c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11491Cu;
    {
        const bool branch_taken_0x11491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11491Cu;
        // 0x114920: 0xae420278  sw          $v0, 0x278($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11491c) {
            ctx->pc = 0x114948u;
            return;
        }
    }
    ctx->pc = 0x114924u;
}
