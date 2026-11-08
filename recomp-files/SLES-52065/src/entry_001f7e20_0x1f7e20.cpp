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

// Function: entry_001f7e20
// Address: 0x1f7e20 - 0x1f7e58
void entry_001f7e20_0x1f7e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7e20_0x1f7e20");
#endif

    switch (ctx->pc) {
        case 0x1f7e34u: goto label_1f7e34;
        case 0x1f7e54u: goto label_1f7e54;
        default: break;
    }

    ctx->pc = 0x1f7e20u;

    // 0x1f7e20: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f7e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f7e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e28: 0x34a5059c  ori         $a1, $a1, 0x59C
    ctx->pc = 0x1f7e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1436);
    // 0x1f7e2c: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F7E2Cu;
    SET_GPR_U32(ctx, 31, 0x1F7E34u);
    ctx->pc = 0x1F7E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E2Cu;
    // 0x1f7e30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F7E2Cu, 0x1F7E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E34u;
label_1f7e34:
    // 0x1f7e34: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F7E34u;
    {
        const bool branch_taken_0x1f7e34 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f7e34) {
            ctx->pc = 0x1F7E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7E34u;
            // 0x1f7e38: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7E84u;
            return;
        }
    }
    ctx->pc = 0x1F7E3Cu;
    // 0x1f7e3c: 0x8ec2bb10  lw          $v0, -0x44F0($s6)
    ctx->pc = 0x1f7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949648)));
    // 0x1f7e40: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7E40u;
    {
        const bool branch_taken_0x1f7e40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E40u;
        // 0x1f7e44: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e40) {
            ctx->pc = 0x1F7E58u;
            return;
        }
    }
    ctx->pc = 0x1F7E48u;
    // 0x1f7e48: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f7e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7e4c: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7E4Cu;
    SET_GPR_U32(ctx, 31, 0x1F7E54u);
    ctx->pc = 0x1F7E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E4Cu;
    // 0x1f7e50: 0x248447e0  addiu       $a0, $a0, 0x47E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7E4Cu, 0x1F7E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E54u;
label_1f7e54:
    // 0x1f7e54: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1f7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    ctx->pc = 0x1f7e58u;
}
