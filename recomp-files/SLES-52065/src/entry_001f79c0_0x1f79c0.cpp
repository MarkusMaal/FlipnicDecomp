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

// Function: entry_001f79c0
// Address: 0x1f79c0 - 0x1f79e0
void entry_001f79c0_0x1f79c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f79c0_0x1f79c0");
#endif

    switch (ctx->pc) {
        case 0x1f79c8u: goto label_1f79c8;
        default: break;
    }

    ctx->pc = 0x1f79c0u;

    // 0x1f79c0: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x1F79C0u;
    SET_GPR_U32(ctx, 31, 0x1F79C8u);
    ctx->pc = 0x1F79C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F79C0u;
    // 0x1f79c4: 0x3c120022  lui         $s2, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x1F79C0u, 0x1F79C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F79C8u;
label_1f79c8:
    // 0x1f79c8: 0x8e42bb4c  lw          $v0, -0x44B4($s2)
    ctx->pc = 0x1f79c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949708)));
    // 0x1f79cc: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1F79CCu;
    {
        const bool branch_taken_0x1f79cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79CCu;
        // 0x1f79d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79cc) {
            ctx->pc = 0x1F7A78u;
            return;
        }
    }
    ctx->pc = 0x1F79D4u;
    // 0x1f79d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F79D4u;
    {
        const bool branch_taken_0x1f79d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79D4u;
        // 0x1f79d8: 0x3c110022  lui         $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79d4) {
            ctx->pc = 0x1F7A04u;
            return;
        }
    }
    ctx->pc = 0x1F79DCu;
    // 0x1f79dc: 0x0  nop
    ctx->pc = 0x1f79dcu;
    // NOP
    ctx->pc = 0x1f79e0u;
}
