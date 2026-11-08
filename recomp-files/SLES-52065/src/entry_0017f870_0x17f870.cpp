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

// Function: entry_0017f870
// Address: 0x17f870 - 0x17f894
void entry_0017f870_0x17f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f870_0x17f870");
#endif

    switch (ctx->pc) {
        case 0x17f888u: goto label_17f888;
        default: break;
    }

    ctx->pc = 0x17f870u;

    // 0x17f870: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x17f870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17f874: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17f874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17f878: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x17f878u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x17f87c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x17f87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x17f880: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x17F880u;
    SET_GPR_U32(ctx, 31, 0x17F888u);
    ctx->pc = 0x17F884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F880u;
    // 0x17f884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x17F880u, 0x17F888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F888u;
label_17f888:
    // 0x17f888: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F888u;
    {
        const bool branch_taken_0x17f888 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F888u;
        // 0x17f88c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f888) {
            ctx->pc = 0x17F894u;
            return;
        }
    }
    ctx->pc = 0x17F890u;
    // 0x17f890: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x17f890u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
    ctx->pc = 0x17f894u;
}
