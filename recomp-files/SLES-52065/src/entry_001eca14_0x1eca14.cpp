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

// Function: entry_001eca14
// Address: 0x1eca14 - 0x1eca48
void entry_001eca14_0x1eca14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eca14_0x1eca14");
#endif

    switch (ctx->pc) {
        case 0x1eca28u: goto label_1eca28;
        case 0x1eca40u: goto label_1eca40;
        default: break;
    }

    ctx->pc = 0x1eca14u;

    // 0x1eca14: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1eca14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1eca18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1eca18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1eca1c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1eca1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1eca20: 0xc07b1e0  jal         func_1EC780
    ctx->pc = 0x1ECA20u;
    SET_GPR_U32(ctx, 31, 0x1ECA28u);
    ctx->pc = 0x1ECA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECA20u;
    // 0x1eca24: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC780u, 0x1ECA20u, 0x1ECA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECA28u;
label_1eca28:
    // 0x1eca28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eca28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca2c: 0x4a30006  bgezl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECA2Cu;
    {
        const bool branch_taken_0x1eca2c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1eca2c) {
            ctx->pc = 0x1ECA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ECA2Cu;
            // 0x1eca30: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECA48u;
            return;
        }
    }
    ctx->pc = 0x1ECA34u;
    // 0x1eca34: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1eca34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1eca38: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1ECA38u;
    SET_GPR_U32(ctx, 31, 0x1ECA40u);
    ctx->pc = 0x1ECA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECA38u;
    // 0x1eca3c: 0x24844240  addiu       $a0, $a0, 0x4240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1ECA38u, 0x1ECA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECA40u;
label_1eca40:
    // 0x1eca40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1ECA40u;
    {
        const bool branch_taken_0x1eca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eca40) {
            ctx->pc = 0x1ECA80u;
            return;
        }
    }
    ctx->pc = 0x1ECA48u;
}
