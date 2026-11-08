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

// Function: entry_00194358
// Address: 0x194358 - 0x19436c
void entry_00194358_0x194358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194358_0x194358");
#endif

    ctx->pc = 0x194358u;

    // 0x194358: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x194358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x19435c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x19435Cu;
    {
        const bool branch_taken_0x19435c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19435c) {
            ctx->pc = 0x194328u;
            return;
        }
    }
    ctx->pc = 0x194364u;
    // 0x194364: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x194364u;
    {
        const bool branch_taken_0x194364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194364u;
        // 0x194368: 0x8e900664  lw          $s0, 0x664($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194364) {
            ctx->pc = 0x1943A4u;
            return;
        }
    }
    ctx->pc = 0x19436Cu;
}
