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

// Function: entry_0019923c
// Address: 0x19923c - 0x199270
void entry_0019923c_0x19923c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019923c_0x19923c");
#endif

    ctx->pc = 0x19923cu;

    // 0x19923c: 0x0  nop
    ctx->pc = 0x19923cu;
    // NOP
    // 0x199240: 0x8e820674  lw          $v0, 0x674($s4)
    ctx->pc = 0x199240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1652)));
    // 0x199244: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x199244u;
    {
        const bool branch_taken_0x199244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199244) {
            ctx->pc = 0x199284u;
            return;
        }
    }
    ctx->pc = 0x19924Cu;
    // 0x19924c: 0x8e820678  lw          $v0, 0x678($s4)
    ctx->pc = 0x19924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
    // 0x199250: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x199254: 0xae820678  sw          $v0, 0x678($s4)
    ctx->pc = 0x199254u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1656), GPR_U32(ctx, 2));
    // 0x199258: 0x8e840810  lw          $a0, 0x810($s4)
    ctx->pc = 0x199258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2064)));
    // 0x19925c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19925Cu;
    {
        const bool branch_taken_0x19925c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19925c) {
            ctx->pc = 0x199270u;
            return;
        }
    }
    ctx->pc = 0x199264u;
    // 0x199264: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x199264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x199268: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x199268u;
    SET_GPR_U32(ctx, 31, 0x199270u);
    ctx->pc = 0x19926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199268u;
    // 0x19926c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x199268u, 0x199270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199270u;
}
