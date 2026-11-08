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

// Function: entry_00144e18
// Address: 0x144e18 - 0x144e4c
void entry_00144e18_0x144e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144e18_0x144e18");
#endif

    switch (ctx->pc) {
        case 0x144e34u: goto label_144e34;
        case 0x144e40u: goto label_144e40;
        default: break;
    }

    ctx->pc = 0x144e18u;

label_144e18:
    // 0x144e18: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x144e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x144e1c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x144e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x144e20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x144e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x144e24: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x144e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x144e28: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x144e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x144e2c: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x144E2Cu;
    SET_GPR_U32(ctx, 31, 0x144E34u);
    ctx->pc = 0x144E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E2Cu;
    // 0x144e30: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x144E2Cu, 0x144E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E34u;
label_144e34:
    // 0x144e34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x144e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144e38: 0xc0401a4  jal         func_100690
    ctx->pc = 0x144E38u;
    SET_GPR_U32(ctx, 31, 0x144E40u);
    ctx->pc = 0x144E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E38u;
    // 0x144e3c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x144E38u, 0x144E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E40u;
label_144e40:
    // 0x144e40: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x144e40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x144e44: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x144E44u;
    {
        const bool branch_taken_0x144e44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x144E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E44u;
        // 0x144e48: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e44) {
            ctx->pc = 0x144E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144e18;
        }
    }
    ctx->pc = 0x144E4Cu;
}
