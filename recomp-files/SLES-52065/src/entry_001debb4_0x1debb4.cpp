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

// Function: entry_001debb4
// Address: 0x1debb4 - 0x1debe0
void entry_001debb4_0x1debb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001debb4_0x1debb4");
#endif

    switch (ctx->pc) {
        case 0x1debd8u: goto label_1debd8;
        default: break;
    }

    ctx->pc = 0x1debb4u;

    // 0x1debb4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1debb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1debb8: 0x245072f0  addiu       $s0, $v0, 0x72F0
    ctx->pc = 0x1debb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
    // 0x1debbc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1debbcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3872F0u));
    // 0x1debc0: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1debc0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3872F4u));
    // 0x1debc4: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x1debc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1debc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEBC8u;
    {
        const bool branch_taken_0x1debc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBC8u;
        // 0x1debcc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1debc8) {
            ctx->pc = 0x1DEBE0u;
            return;
        }
    }
    ctx->pc = 0x1DEBD0u;
    // 0x1debd0: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1DEBD0u;
    SET_GPR_U32(ctx, 31, 0x1DEBD8u);
    ctx->pc = 0x1DEBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEBD0u;
    // 0x1debd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1DEBD0u, 0x1DEBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBD8u;
label_1debd8:
    // 0x1debd8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1debd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1debdc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1debdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1debe0u;
}
