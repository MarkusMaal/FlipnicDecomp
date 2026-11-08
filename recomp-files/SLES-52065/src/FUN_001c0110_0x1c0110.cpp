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

// Function: FUN_001c0110
// Address: 0x1c0110 - 0x1c0188
void FUN_001c0110_0x1c0110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c0110_0x1c0110");
#endif

    switch (ctx->pc) {
        case 0x1c0160u: goto label_1c0160;
        default: break;
    }

    ctx->pc = 0x1c0110u;

    // 0x1c0110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0114: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c011c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0120: 0x8c24f4f8  lw          $a0, -0xB08($at)
    ctx->pc = 0x1c0120u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1c0124: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C0124u;
    {
        const bool branch_taken_0x1c0124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0124u;
        // 0x1c0128: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0124) {
            ctx->pc = 0x1C0178u;
            goto label_1c0178;
        }
    }
    ctx->pc = 0x1C012Cu;
    // 0x1c012c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C012Cu;
    {
        const bool branch_taken_0x1c012c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C012Cu;
        // 0x1c0130: 0x8c23f4f0  lw          $v1, -0xB10($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c012c) {
            ctx->pc = 0x1C013Cu;
            goto label_1c013c;
        }
    }
    ctx->pc = 0x1C0134u;
    // 0x1c0134: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0134u;
    {
        const bool branch_taken_0x1c0134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0134u;
        // 0x1c0138: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0134) {
            ctx->pc = 0x1C0148u;
            goto label_1c0148;
        }
    }
    ctx->pc = 0x1C013Cu;
label_1c013c:
    // 0x1c013c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c013cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c0140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0144: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1c0144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1c0148:
    // 0x1c0148: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c0148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c014c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c014cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c0150: 0x24421430  addiu       $v0, $v0, 0x1430
    ctx->pc = 0x1c0150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5168));
    // 0x1c0154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0158: 0xc072e58  jal         func_1CB960
    ctx->pc = 0x1C0158u;
    SET_GPR_U32(ctx, 31, 0x1C0160u);
    ctx->pc = 0x1C015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0158u;
    // 0x1c015c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB960u, 0x1C0158u, 0x1C0160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0160u;
label_1c0160:
    // 0x1c0160: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c0160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c0164: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c0164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c0168: 0x24421460  addiu       $v0, $v0, 0x1460
    ctx->pc = 0x1c0168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5216));
    // 0x1c016c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c016cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0170: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0170u;
    {
        const bool branch_taken_0x1c0170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0170u;
        // 0x1c0174: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0170) {
            ctx->pc = 0x1C017Cu;
            goto label_1c017c;
        }
    }
    ctx->pc = 0x1C0178u;
label_1c0178:
    // 0x1c0178: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c0178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c017c:
    // 0x1c017c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c017cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0180: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0180u;
        // 0x1c0184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0188u;
}
