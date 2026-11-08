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

// Function: entry_001754dc
// Address: 0x1754dc - 0x1754f8
void entry_001754dc_0x1754dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001754dc_0x1754dc");
#endif

    ctx->pc = 0x1754dcu;

    // 0x1754dc: 0x0  nop
    ctx->pc = 0x1754dcu;
    // NOP
    // 0x1754e0: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1754e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1754e4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1754e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1754e8: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x1754E8u;
    {
        const bool branch_taken_0x1754e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1754e8) {
            ctx->pc = 0x175370u;
            return;
        }
    }
    ctx->pc = 0x1754F0u;
    // 0x1754f0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1754F0u;
    {
        const bool branch_taken_0x1754f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1754F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754F0u;
        // 0x1754f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754f0) {
            ctx->pc = 0x175664u;
            return;
        }
    }
    ctx->pc = 0x1754F8u;
}
