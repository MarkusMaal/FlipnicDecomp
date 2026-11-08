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

// Function: entry_0011065c
// Address: 0x11065c - 0x110680
void entry_0011065c_0x11065c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011065c_0x11065c");
#endif

    ctx->pc = 0x11065cu;

    // 0x11065c: 0x0  nop
    ctx->pc = 0x11065cu;
    // NOP
    // 0x110660: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x110660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x110664: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x110664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110668: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x110668u;
    {
        const bool branch_taken_0x110668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110668) {
            ctx->pc = 0x110634u;
            return;
        }
    }
    ctx->pc = 0x110670u;
    // 0x110670: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110678: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x110678u;
    {
        const bool branch_taken_0x110678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110678u;
        // 0x11067c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110678) {
            ctx->pc = 0x110924u;
            return;
        }
    }
    ctx->pc = 0x110680u;
}
