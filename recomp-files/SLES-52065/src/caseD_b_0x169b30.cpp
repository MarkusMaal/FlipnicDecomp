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

// Function: caseD_b
// Address: 0x169b30 - 0x169b44
void caseD_b_0x169b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x169b30");
#endif

    ctx->pc = 0x169b30u;

    // 0x169b30: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x169b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x169b34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169B34u;
    {
        const bool branch_taken_0x169b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B34u;
        // 0x169b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b34) {
            ctx->pc = 0x169B44u;
            return;
        }
    }
    ctx->pc = 0x169B3Cu;
    // 0x169b3c: 0xc05a798  jal         func_169E60
    ctx->pc = 0x169B3Cu;
    SET_GPR_U32(ctx, 31, 0x169B44u);
    ctx->pc = 0x169E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E60u, 0x169B3Cu, 0x169B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B44u;
}
