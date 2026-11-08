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

// Function: entry_0015ef28
// Address: 0x15ef28 - 0x15ef3c
void entry_0015ef28_0x15ef28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ef28_0x15ef28");
#endif

    ctx->pc = 0x15ef28u;

    // 0x15ef28: 0xf1182a  slt         $v1, $a3, $s1
    ctx->pc = 0x15ef28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15ef2c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x15EF2Cu;
    {
        const bool branch_taken_0x15ef2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF2Cu;
        // 0x15ef30: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef2c) {
            ctx->pc = 0x15EEF8u;
            return;
        }
    }
    ctx->pc = 0x15EF34u;
    // 0x15ef34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15EF34u;
    {
        const bool branch_taken_0x15ef34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ef34) {
            ctx->pc = 0x15EF48u;
            return;
        }
    }
    ctx->pc = 0x15EF3Cu;
}
