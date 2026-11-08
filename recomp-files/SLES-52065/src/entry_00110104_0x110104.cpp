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

// Function: entry_00110104
// Address: 0x110104 - 0x110128
void entry_00110104_0x110104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110104_0x110104");
#endif

    ctx->pc = 0x110104u;

    // 0x110104: 0x0  nop
    ctx->pc = 0x110104u;
    // NOP
    // 0x110108: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x110108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11010c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x11010cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110110: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x110110u;
    {
        const bool branch_taken_0x110110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110110) {
            ctx->pc = 0x1100DCu;
            return;
        }
    }
    ctx->pc = 0x110118u;
    // 0x110118: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11011c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110120: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x110120u;
    {
        const bool branch_taken_0x110120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110120u;
        // 0x110124: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110120) {
            ctx->pc = 0x1102A4u;
            return;
        }
    }
    ctx->pc = 0x110128u;
}
