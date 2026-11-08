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

// Function: entry_001f73a8
// Address: 0x1f73a8 - 0x1f73e0
void entry_001f73a8_0x1f73a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f73a8_0x1f73a8");
#endif

    switch (ctx->pc) {
        case 0x1f73bcu: goto label_1f73bc;
        case 0x1f73dcu: goto label_1f73dc;
        default: break;
    }

    ctx->pc = 0x1f73a8u;

    // 0x1f73a8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f73a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f73ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f73acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73b0: 0x34a50597  ori         $a1, $a1, 0x597
    ctx->pc = 0x1f73b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1431);
    // 0x1f73b4: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F73B4u;
    SET_GPR_U32(ctx, 31, 0x1F73BCu);
    ctx->pc = 0x1F73B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F73B4u;
    // 0x1f73b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F73B4u, 0x1F73BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F73BCu;
label_1f73bc:
    // 0x1f73bc: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F73BCu;
    {
        const bool branch_taken_0x1f73bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f73bc) {
            ctx->pc = 0x1F73C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F73BCu;
            // 0x1f73c0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F740Cu;
            return;
        }
    }
    ctx->pc = 0x1F73C4u;
    // 0x1f73c4: 0x8e82bb10  lw          $v0, -0x44F0($s4)
    ctx->pc = 0x1f73c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949648)));
    // 0x1f73c8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F73C8u;
    {
        const bool branch_taken_0x1f73c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73C8u;
        // 0x1f73cc: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73c8) {
            ctx->pc = 0x1F73E0u;
            return;
        }
    }
    ctx->pc = 0x1F73D0u;
    // 0x1f73d0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f73d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f73d4: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F73D4u;
    SET_GPR_U32(ctx, 31, 0x1F73DCu);
    ctx->pc = 0x1F73D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F73D4u;
    // 0x1f73d8: 0x24844688  addiu       $a0, $a0, 0x4688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F73D4u, 0x1F73DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F73DCu;
label_1f73dc:
    // 0x1f73dc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1f73dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    ctx->pc = 0x1f73e0u;
}
