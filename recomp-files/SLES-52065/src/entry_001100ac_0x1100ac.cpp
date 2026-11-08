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

// Function: entry_001100ac
// Address: 0x1100ac - 0x1100d0
void entry_001100ac_0x1100ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001100ac_0x1100ac");
#endif

    ctx->pc = 0x1100acu;

    // 0x1100ac: 0x0  nop
    ctx->pc = 0x1100acu;
    // NOP
    // 0x1100b0: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1100b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1100b4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1100b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1100b8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1100B8u;
    {
        const bool branch_taken_0x1100b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1100b8) {
            ctx->pc = 0x11007Cu;
            return;
        }
    }
    ctx->pc = 0x1100C0u;
    // 0x1100c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1100c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1100c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1100c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1100c8: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1100C8u;
    {
        const bool branch_taken_0x1100c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1100CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100C8u;
        // 0x1100cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1100c8) {
            ctx->pc = 0x1102A4u;
            return;
        }
    }
    ctx->pc = 0x1100D0u;
}
