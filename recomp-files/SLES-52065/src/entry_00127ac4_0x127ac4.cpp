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

// Function: entry_00127ac4
// Address: 0x127ac4 - 0x127b08
void entry_00127ac4_0x127ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127ac4_0x127ac4");
#endif

    switch (ctx->pc) {
        case 0x127ad0u: goto label_127ad0;
        case 0x127ae0u: goto label_127ae0;
        case 0x127b00u: goto label_127b00;
        default: break;
    }

    ctx->pc = 0x127ac4u;

    // 0x127ac4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x127ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x127ac8: 0xc049a0c  jal         func_126830
    ctx->pc = 0x127AC8u;
    SET_GPR_U32(ctx, 31, 0x127AD0u);
    ctx->pc = 0x127ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127AC8u;
    // 0x127acc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126830u, 0x127AC8u, 0x127AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127AD0u;
label_127ad0:
    // 0x127ad0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x127AD0u;
    {
        const bool branch_taken_0x127ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AD0u;
        // 0x127ad4: 0x2624002c  addiu       $a0, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ad0) {
            ctx->pc = 0x127B08u;
            return;
        }
    }
    ctx->pc = 0x127AD8u;
    // 0x127ad8: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x127AD8u;
    SET_GPR_U32(ctx, 31, 0x127AE0u);
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x127AD8u, 0x127AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127AE0u;
label_127ae0:
    // 0x127ae0: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x127ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x127ae4: 0x2624002c  addiu       $a0, $s1, 0x2C
    ctx->pc = 0x127ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x127ae8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x127ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127aec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x127aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127af0: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x127af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x127af4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x127af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x127af8: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x127AF8u;
    SET_GPR_U32(ctx, 31, 0x127B00u);
    ctx->pc = 0x127AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127AF8u;
    // 0x127afc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x127AF8u, 0x127B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127B00u;
label_127b00:
    // 0x127b00: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x127B00u;
    {
        const bool branch_taken_0x127b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B00u;
        // 0x127b04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b00) {
            ctx->pc = 0x127B28u;
            return;
        }
    }
    ctx->pc = 0x127B08u;
}
