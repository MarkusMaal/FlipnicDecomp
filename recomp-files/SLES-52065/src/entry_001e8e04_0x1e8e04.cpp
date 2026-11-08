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

// Function: entry_001e8e04
// Address: 0x1e8e04 - 0x1e8e30
void entry_001e8e04_0x1e8e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8e04_0x1e8e04");
#endif

    switch (ctx->pc) {
        case 0x1e8e18u: goto label_1e8e18;
        case 0x1e8e28u: goto label_1e8e28;
        default: break;
    }

    ctx->pc = 0x1e8e04u;

    // 0x1e8e04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E8E04u;
    {
        const bool branch_taken_0x1e8e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E04u;
        // 0x1e8e08: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e04) {
            ctx->pc = 0x1E8E30u;
            return;
        }
    }
    ctx->pc = 0x1E8E0Cu;
    // 0x1e8e0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e8e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e8e10: 0xc0483d8  jal         func_120F60
    ctx->pc = 0x1E8E10u;
    SET_GPR_U32(ctx, 31, 0x1E8E18u);
    ctx->pc = 0x1E8E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E10u;
    // 0x1e8e14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120F60u, 0x1E8E10u, 0x1E8E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E18u;
label_1e8e18:
    // 0x1e8e18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e8e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e20: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E8E20u;
    SET_GPR_U32(ctx, 31, 0x1E8E28u);
    ctx->pc = 0x1E8E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E20u;
    // 0x1e8e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E8E20u, 0x1E8E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E28u;
label_1e8e28:
    // 0x1e8e28: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E8E28u;
    SET_GPR_U32(ctx, 31, 0x1E8E30u);
    ctx->pc = 0x1E8E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E28u;
    // 0x1e8e2c: 0x27c40030  addiu       $a0, $fp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E8E28u, 0x1E8E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E30u;
}
