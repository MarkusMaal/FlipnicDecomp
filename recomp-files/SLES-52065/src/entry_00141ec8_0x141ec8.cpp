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

// Function: entry_00141ec8
// Address: 0x141ec8 - 0x141f20
void entry_00141ec8_0x141ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141ec8_0x141ec8");
#endif

    switch (ctx->pc) {
        case 0x141ed0u: goto label_141ed0;
        case 0x141ef0u: goto label_141ef0;
        case 0x141f00u: goto label_141f00;
        default: break;
    }

    ctx->pc = 0x141ec8u;

    // 0x141ec8: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x141EC8u;
    SET_GPR_U32(ctx, 31, 0x141ED0u);
    ctx->pc = 0x141ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141EC8u;
    // 0x141ecc: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x141EC8u, 0x141ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141ED0u;
label_141ed0:
    // 0x141ed0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x141ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x141ed4: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x141ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x141ed8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141edc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x141edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141ee0: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x141ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x141ee4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x141ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141ee8: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x141EE8u;
    SET_GPR_U32(ctx, 31, 0x141EF0u);
    ctx->pc = 0x141EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141EE8u;
    // 0x141eec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x141EE8u, 0x141EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141EF0u;
label_141ef0:
    // 0x141ef0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x141EF0u;
    {
        const bool branch_taken_0x141ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x141EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141EF0u;
        // 0x141ef4: 0x2624003c  addiu       $a0, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ef0) {
            ctx->pc = 0x141F20u;
            return;
        }
    }
    ctx->pc = 0x141EF8u;
    // 0x141ef8: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x141EF8u;
    SET_GPR_U32(ctx, 31, 0x141F00u);
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x141EF8u, 0x141F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141F00u;
label_141f00:
    // 0x141f00: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x141f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x141f04: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x141f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x141f08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141f0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x141f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141f10: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x141f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x141f14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x141f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141f18: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x141F18u;
    SET_GPR_U32(ctx, 31, 0x141F20u);
    ctx->pc = 0x141F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141F18u;
    // 0x141f1c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x141F18u, 0x141F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141F20u;
}
