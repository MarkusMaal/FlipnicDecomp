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

// Function: entry_0017fa88
// Address: 0x17fa88 - 0x17fadc
void entry_0017fa88_0x17fa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fa88_0x17fa88");
#endif

    switch (ctx->pc) {
        case 0x17faa0u: goto label_17faa0;
        case 0x17fac0u: goto label_17fac0;
        case 0x17fad4u: goto label_17fad4;
        default: break;
    }

    ctx->pc = 0x17fa88u;

    // 0x17fa88: 0xafb20048  sw          $s2, 0x48($sp)
    ctx->pc = 0x17fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 18));
    // 0x17fa8c: 0x26430030  addiu       $v1, $s2, 0x30
    ctx->pc = 0x17fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x17fa90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fa94: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x17fa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17fa98: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x17FA98u;
    SET_GPR_U32(ctx, 31, 0x17FAA0u);
    ctx->pc = 0x17FA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA98u;
    // 0x17fa9c: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x17FA98u, 0x17FAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FAA0u;
label_17faa0:
    // 0x17faa0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17faa4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x17faa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17faa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17faac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17faacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fab0: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x17fab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x17fab4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17fab8: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x17FAB8u;
    SET_GPR_U32(ctx, 31, 0x17FAC0u);
    ctx->pc = 0x17FABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FAB8u;
    // 0x17fabc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x17FAB8u, 0x17FAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FAC0u;
label_17fac0:
    // 0x17fac0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17fac4: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x17fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x17fac8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17fac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17facc: 0xc04619c  jal         func_118670
    ctx->pc = 0x17FACCu;
    SET_GPR_U32(ctx, 31, 0x17FAD4u);
    ctx->pc = 0x17FAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FACCu;
    // 0x17fad0: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x17FACCu, 0x17FAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FAD4u;
label_17fad4:
    // 0x17fad4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17FAD4u;
    {
        const bool branch_taken_0x17fad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAD4u;
        // 0x17fad8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fad4) {
            ctx->pc = 0x17FAE8u;
            return;
        }
    }
    ctx->pc = 0x17FADCu;
}
