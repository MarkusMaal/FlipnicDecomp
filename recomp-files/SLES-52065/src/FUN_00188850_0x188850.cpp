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

// Function: FUN_00188850
// Address: 0x188850 - 0x1888ec
void FUN_00188850_0x188850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00188850_0x188850");
#endif

    switch (ctx->pc) {
        case 0x188858u: goto label_188858;
        default: break;
    }

    ctx->pc = 0x188850u;

    // 0x188850: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x188850u;
    {
        const bool branch_taken_0x188850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188850u;
        // 0x188854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188850) {
            ctx->pc = 0x1888C4u;
            goto label_1888c4;
        }
    }
    ctx->pc = 0x188858u;
label_188858:
    // 0x188858: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x188858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x18885c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18885Cu;
    {
        const bool branch_taken_0x18885c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18885c) {
            ctx->pc = 0x18886Cu;
            goto label_18886c;
        }
    }
    ctx->pc = 0x188864u;
    // 0x188864: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x188864u;
    {
        const bool branch_taken_0x188864 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x188868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188864u;
        // 0x188868: 0x2503ffd0  addiu       $v1, $t0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188864) {
            ctx->pc = 0x188878u;
            goto label_188878;
        }
    }
    ctx->pc = 0x18886Cu;
label_18886c:
    // 0x18886c: 0x0  nop
    ctx->pc = 0x18886cu;
    // NOP
    // 0x188870: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x188870u;
    {
        const bool branch_taken_0x188870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188870) {
            ctx->pc = 0x1888E4u;
            goto label_1888e4;
        }
    }
    ctx->pc = 0x188878u;
label_188878:
    // 0x188878: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x188878u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18887c: 0x5000003  bltz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18887Cu;
    {
        const bool branch_taken_0x18887c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x188880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18887Cu;
        // 0x188880: 0x2901000a  slti        $at, $t0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18887c) {
            ctx->pc = 0x18888Cu;
            goto label_18888c;
        }
    }
    ctx->pc = 0x188884u;
    // 0x188884: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x188884u;
    {
        const bool branch_taken_0x188884 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x188884) {
            ctx->pc = 0x188898u;
            goto label_188898;
        }
    }
    ctx->pc = 0x18888Cu;
label_18888c:
    // 0x18888c: 0x0  nop
    ctx->pc = 0x18888cu;
    // NOP
    // 0x188890: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x188890u;
    {
        const bool branch_taken_0x188890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188890) {
            ctx->pc = 0x1888E4u;
            goto label_1888e4;
        }
    }
    ctx->pc = 0x188898u;
label_188898:
    // 0x188898: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x188898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18889c: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x18889cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1888a0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1888a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1888a4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1888a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1888a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1888a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1888ac: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1888acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1888b0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1888b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1888b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1888b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1888b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1888b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1888bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1888bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1888c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1888c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1888c4:
    // 0x1888c4: 0x0  nop
    ctx->pc = 0x1888c4u;
    // NOP
    // 0x1888c8: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1888c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1888cc: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x1888ccu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1888d0: 0x1500ffe1  bnez        $t0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1888D0u;
    {
        const bool branch_taken_0x1888d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1888d0) {
            ctx->pc = 0x188858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188858;
        }
    }
    ctx->pc = 0x1888D8u;
    // 0x1888d8: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x1888d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1888dc: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1888DCu;
    {
        const bool branch_taken_0x1888dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1888dc) {
            ctx->pc = 0x188858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188858;
        }
    }
    ctx->pc = 0x1888E4u;
label_1888e4:
    // 0x1888e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1888E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1888E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1888ECu;
}
