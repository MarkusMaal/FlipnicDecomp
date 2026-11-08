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

// Function: entry_001e1e08
// Address: 0x1e1e08 - 0x1e1e50
void entry_001e1e08_0x1e1e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1e08_0x1e1e08");
#endif

    switch (ctx->pc) {
        case 0x1e1e38u: goto label_1e1e38;
        default: break;
    }

    ctx->pc = 0x1e1e08u;

    // 0x1e1e08: 0x8f838728  lw          $v1, -0x78D8($gp)
    ctx->pc = 0x1e1e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936360)));
    // 0x1e1e0c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e1e10: 0x1460005f  bnez        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x1E1E10u;
    {
        const bool branch_taken_0x1e1e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E10u;
        // 0x1e1e14: 0xaf828728  sw          $v0, -0x78D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e10) {
            ctx->pc = 0x1E1F90u;
            return;
        }
    }
    ctx->pc = 0x1E1E18u;
    // 0x1e1e18: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1e1e1c: 0x2484b630  addiu       $a0, $a0, -0x49D0
    ctx->pc = 0x1e1e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948400));
    // 0x1e1e20: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1E20u;
    {
        const bool branch_taken_0x1e1e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E20u;
        // 0x1e1e24: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e20) {
            ctx->pc = 0x1E1E50u;
            return;
        }
    }
    ctx->pc = 0x1E1E28u;
    // 0x1e1e28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e1e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1e2c: 0x24c6b8f0  addiu       $a2, $a2, -0x4710
    ctx->pc = 0x1e1e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949104));
    // 0x1e1e30: 0xc078b58  jal         func_1E2D60
    ctx->pc = 0x1E1E30u;
    SET_GPR_U32(ctx, 31, 0x1E1E38u);
    ctx->pc = 0x1E1E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E30u;
    // 0x1e1e34: 0xafdd0044  sw          $sp, 0x44($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2D60u, 0x1E1E30u, 0x1E1E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E38u;
label_1e1e38:
    // 0x1e1e38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1E38u;
    {
        const bool branch_taken_0x1e1e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e38) {
            ctx->pc = 0x1E1E50u;
            return;
        }
    }
    ctx->pc = 0x1E1E40u;
    // 0x1e1e40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1e48: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E1E48u;
    SET_GPR_U32(ctx, 31, 0x1E1E50u);
    ctx->pc = 0x1E1E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E48u;
    // 0x1e1e4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E1E48u, 0x1E1E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E50u;
}
