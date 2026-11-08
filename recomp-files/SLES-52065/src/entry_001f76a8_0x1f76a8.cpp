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

// Function: entry_001f76a8
// Address: 0x1f76a8 - 0x1f76c8
void entry_001f76a8_0x1f76a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f76a8_0x1f76a8");
#endif

    switch (ctx->pc) {
        case 0x1f76b0u: goto label_1f76b0;
        default: break;
    }

    ctx->pc = 0x1f76a8u;

    // 0x1f76a8: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x1F76A8u;
    SET_GPR_U32(ctx, 31, 0x1F76B0u);
    ctx->pc = 0x1F76ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F76A8u;
    // 0x1f76ac: 0x3c120022  lui         $s2, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x1F76A8u, 0x1F76B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F76B0u;
label_1f76b0:
    // 0x1f76b0: 0x8e42bb3c  lw          $v0, -0x44C4($s2)
    ctx->pc = 0x1f76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949692)));
    // 0x1f76b4: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1F76B4u;
    {
        const bool branch_taken_0x1f76b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76B4u;
        // 0x1f76b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76b4) {
            ctx->pc = 0x1F7760u;
            return;
        }
    }
    ctx->pc = 0x1F76BCu;
    // 0x1f76bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F76BCu;
    {
        const bool branch_taken_0x1f76bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76BCu;
        // 0x1f76c0: 0x3c110022  lui         $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76bc) {
            ctx->pc = 0x1F76ECu;
            return;
        }
    }
    ctx->pc = 0x1F76C4u;
    // 0x1f76c4: 0x0  nop
    ctx->pc = 0x1f76c4u;
    // NOP
    ctx->pc = 0x1f76c8u;
}
