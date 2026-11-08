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

// Function: entry_00175e0c
// Address: 0x175e0c - 0x175e28
void entry_00175e0c_0x175e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175e0c_0x175e0c");
#endif

    ctx->pc = 0x175e0cu;

    // 0x175e0c: 0x0  nop
    ctx->pc = 0x175e0cu;
    // NOP
    // 0x175e10: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x175e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x175e14: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x175e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175e18: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x175E18u;
    {
        const bool branch_taken_0x175e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175e18) {
            ctx->pc = 0x175CA0u;
            return;
        }
    }
    ctx->pc = 0x175E20u;
    // 0x175e20: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x175E20u;
    {
        const bool branch_taken_0x175e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E20u;
        // 0x175e24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175e20) {
            ctx->pc = 0x175F94u;
            return;
        }
    }
    ctx->pc = 0x175E28u;
}
