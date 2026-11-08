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

// Function: entry_0017645c
// Address: 0x17645c - 0x1764a4
void entry_0017645c_0x17645c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017645c_0x17645c");
#endif

    switch (ctx->pc) {
        case 0x17649cu: goto label_17649c;
        default: break;
    }

    ctx->pc = 0x17645cu;

label_17645c:
    // 0x17645c: 0x0  nop
    ctx->pc = 0x17645cu;
    // NOP
label_176460:
    // 0x176460: 0x8e620c20  lw          $v0, 0xC20($s3)
    ctx->pc = 0x176460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
label_176464:
    // 0x176464: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x176464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_176468:
    // 0x176468: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
label_17646c:
    if (ctx->pc == 0x17646Cu) {
        ctx->pc = 0x17646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176468u;
        // 0x17646c: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176470u;
        goto label_176470;
    }
    ctx->pc = 0x176468u;
    {
        const bool branch_taken_0x176468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176468u;
        // 0x17646c: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176468) {
            ctx->pc = 0x1762C0u;
            return;
        }
    }
    ctx->pc = 0x176470u;
label_176470:
    // 0x176470: 0x14a60190  bne         $a1, $a2, . + 4 + (0x190 << 2)
label_176474:
    if (ctx->pc == 0x176474u) {
        ctx->pc = 0x176478u;
        goto label_176478;
    }
    ctx->pc = 0x176470u;
    {
        const bool branch_taken_0x176470 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x176470) {
            ctx->pc = 0x176AB4u;
            return;
        }
    }
    ctx->pc = 0x176478u;
label_176478:
    // 0x176478: 0x8e620c28  lw          $v0, 0xC28($s3)
    ctx->pc = 0x176478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3112)));
label_17647c:
    // 0x17647c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17647cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_176480:
    // 0x176480: 0x441018c  bgez        $v0, . + 4 + (0x18C << 2)
label_176484:
    if (ctx->pc == 0x176484u) {
        ctx->pc = 0x176484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176480u;
        // 0x176484: 0xae620c28  sw          $v0, 0xC28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176488u;
        goto label_176488;
    }
    ctx->pc = 0x176480u;
    {
        const bool branch_taken_0x176480 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x176484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176480u;
        // 0x176484: 0xae620c28  sw          $v0, 0xC28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176480) {
            ctx->pc = 0x176AB4u;
            return;
        }
    }
    ctx->pc = 0x176488u;
label_176488:
    // 0x176488: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x176488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_17648c:
    // 0x17648c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17648cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_176490:
    // 0x176490: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x176490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_176494:
    // 0x176494: 0x320f809  jalr        $t9
label_176498:
    if (ctx->pc == 0x176498u) {
        ctx->pc = 0x176498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176494u;
        // 0x176498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17649Cu;
        goto label_17649c;
    }
    ctx->pc = 0x176494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17649Cu);
        ctx->pc = 0x176498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176494u;
        // 0x176498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176494u, 0x17649Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17649Cu;
label_17649c:
    // 0x17649c: 0x10000186  b           . + 4 + (0x186 << 2)
label_1764a0:
    if (ctx->pc == 0x1764A0u) {
        ctx->pc = 0x1764A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17649Cu;
        // 0x1764a0: 0x8e620c20  lw          $v0, 0xC20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1764A4u;
        goto label_fallthrough_0x17649c;
    }
    ctx->pc = 0x17649Cu;
    {
        const bool branch_taken_0x17649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1764A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17649Cu;
        // 0x1764a0: 0x8e620c20  lw          $v0, 0xC20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17649c) {
            ctx->pc = 0x176AB8u;
            return;
        }
    }
label_fallthrough_0x17649c:
    ctx->pc = 0x1764A4u;
}
