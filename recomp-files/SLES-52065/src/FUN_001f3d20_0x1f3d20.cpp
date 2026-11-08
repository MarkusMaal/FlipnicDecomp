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

// Function: FUN_001f3d20
// Address: 0x1f3d20 - 0x1f3d50
void FUN_001f3d20_0x1f3d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f3d20_0x1f3d20");
#endif

    switch (ctx->pc) {
        case 0x1f3d44u: goto label_1f3d44;
        default: break;
    }

    ctx->pc = 0x1f3d20u;

    // 0x1f3d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f3d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f3d24: 0x2482fff3  addiu       $v0, $a0, -0xD
    ctx->pc = 0x1f3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
    // 0x1f3d28: 0x2c420023  sltiu       $v0, $v0, 0x23
    ctx->pc = 0x1f3d28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x1f3d2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3D2Cu;
    {
        const bool branch_taken_0x1f3d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D2Cu;
        // 0x1f3d30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d2c) {
            ctx->pc = 0x1F3D3Cu;
            goto label_1f3d3c;
        }
    }
    ctx->pc = 0x1F3D34u;
    // 0x1f3d34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3D34u;
    {
        const bool branch_taken_0x1f3d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D34u;
        // 0x1f3d38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d34) {
            ctx->pc = 0x1F3D44u;
            goto label_1f3d44;
        }
    }
    ctx->pc = 0x1F3D3Cu;
label_1f3d3c:
    // 0x1f3d3c: 0xc07cf44  jal         func_1F3D10
    ctx->pc = 0x1F3D3Cu;
    SET_GPR_U32(ctx, 31, 0x1F3D44u);
    ctx->pc = 0x1F3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3D10u, 0x1F3D3Cu, 0x1F3D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D44u;
label_1f3d44:
    // 0x1f3d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3d48: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D48u;
        // 0x1f3d4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3D50u;
}
