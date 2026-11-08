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

// Function: entry_00110e0c
// Address: 0x110e0c - 0x110e30
void entry_00110e0c_0x110e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110e0c_0x110e0c");
#endif

    ctx->pc = 0x110e0cu;

    // 0x110e0c: 0x0  nop
    ctx->pc = 0x110e0cu;
    // NOP
    // 0x110e10: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x110e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110e14: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x110e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110e18: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x110E18u;
    {
        const bool branch_taken_0x110e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110e18) {
            ctx->pc = 0x110DE4u;
            return;
        }
    }
    ctx->pc = 0x110E20u;
    // 0x110e20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110e24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110e28: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x110E28u;
    {
        const bool branch_taken_0x110e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E28u;
        // 0x110e2c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e28) {
            ctx->pc = 0x111008u;
            return;
        }
    }
    ctx->pc = 0x110E30u;
}
