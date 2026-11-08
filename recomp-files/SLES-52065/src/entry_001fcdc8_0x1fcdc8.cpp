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

// Function: entry_001fcdc8
// Address: 0x1fcdc8 - 0x1fcdf4
void entry_001fcdc8_0x1fcdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcdc8_0x1fcdc8");
#endif

    switch (ctx->pc) {
        case 0x1fcdd4u: goto label_1fcdd4;
        case 0x1fcdf0u: goto label_1fcdf0;
        default: break;
    }

    ctx->pc = 0x1fcdc8u;

    // 0x1fcdc8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcdcc: 0xc07ffc0  jal         func_1FFF00
    ctx->pc = 0x1FCDCCu;
    SET_GPR_U32(ctx, 31, 0x1FCDD4u);
    ctx->pc = 0x1FCDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDCCu;
    // 0x1fcdd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF00u, 0x1FCDCCu, 0x1FCDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDD4u;
label_1fcdd4:
    // 0x1fcdd4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1fcdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1fcdd8: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCDD8u;
    {
        const bool branch_taken_0x1fcdd8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1FCDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDD8u;
        // 0x1fcddc: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdd8) {
            ctx->pc = 0x1FCDF4u;
            return;
        }
    }
    ctx->pc = 0x1FCDE0u;
    // 0x1fcde0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fcde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcde4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcde8: 0xc08005a  jal         func_200168
    ctx->pc = 0x1FCDE8u;
    SET_GPR_U32(ctx, 31, 0x1FCDF0u);
    ctx->pc = 0x1FCDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDE8u;
    // 0x1fcdec: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200168u, 0x1FCDE8u, 0x1FCDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDF0u;
label_1fcdf0:
    // 0x1fcdf0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1fcdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    ctx->pc = 0x1fcdf4u;
}
