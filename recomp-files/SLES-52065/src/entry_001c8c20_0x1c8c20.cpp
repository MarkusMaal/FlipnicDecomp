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

// Function: entry_001c8c20
// Address: 0x1c8c20 - 0x1c8c58
void entry_001c8c20_0x1c8c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8c20_0x1c8c20");
#endif

    switch (ctx->pc) {
        case 0x1c8c44u: goto label_1c8c44;
        case 0x1c8c50u: goto label_1c8c50;
        default: break;
    }

    ctx->pc = 0x1c8c20u;

    // 0x1c8c20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8c24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c8c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8c28: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c8c28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c8c2c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8C2Cu;
    {
        const bool branch_taken_0x1c8c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C2Cu;
        // 0x1c8c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c2c) {
            ctx->pc = 0x1C8C58u;
            return;
        }
    }
    ctx->pc = 0x1C8C34u;
    // 0x1c8c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c8c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8c3c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8C3Cu;
    SET_GPR_U32(ctx, 31, 0x1C8C44u);
    ctx->pc = 0x1C8C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C3Cu;
    // 0x1c8c40: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8C3Cu, 0x1C8C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C44u;
label_1c8c44:
    // 0x1c8c44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c8c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c48: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1C8C48u;
    SET_GPR_U32(ctx, 31, 0x1C8C50u);
    ctx->pc = 0x1C8C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C48u;
    // 0x1c8c4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1C8C48u, 0x1C8C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C50u;
label_1c8c50:
    // 0x1c8c50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8C50u;
    {
        const bool branch_taken_0x1c8c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C50u;
        // 0x1c8c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c50) {
            ctx->pc = 0x1C8C74u;
            return;
        }
    }
    ctx->pc = 0x1C8C58u;
}
