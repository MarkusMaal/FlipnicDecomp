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

// Function: FUN_00168800
// Address: 0x168800 - 0x1688bc
void FUN_00168800_0x168800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168800_0x168800");
#endif

    ctx->pc = 0x168800u;

    // 0x168800: 0x93878488  lbu         $a3, -0x7B78($gp)
    ctx->pc = 0x168800u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x168804: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x168804u;
    {
        const bool branch_taken_0x168804 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x168808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168804u;
        // 0x168808: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168804) {
            ctx->pc = 0x168818u;
            goto label_168818;
        }
    }
    ctx->pc = 0x16880Cu;
    // 0x16880c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x16880cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x168810: 0x90232eb5  lbu         $v1, 0x2EB5($at)
    ctx->pc = 0x168810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EB5u));
    // 0x168814: 0x0  nop
    ctx->pc = 0x168814u;
    // NOP
label_168818:
    // 0x168818: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168818u;
    {
        const bool branch_taken_0x168818 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168818u;
        // 0x16881c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168818) {
            ctx->pc = 0x168828u;
            goto label_168828;
        }
    }
    ctx->pc = 0x168820u;
    // 0x168820: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x168820u;
    {
        const bool branch_taken_0x168820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168820) {
            ctx->pc = 0x16884Cu;
            goto label_16884c;
        }
    }
    ctx->pc = 0x168828u;
label_168828:
    // 0x168828: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x168828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16882c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16882cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168830: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x168830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x168834: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x168834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x168838: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x168838u;
    {
        const bool branch_taken_0x168838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x168838) {
            ctx->pc = 0x168848u;
            goto label_168848;
        }
    }
    ctx->pc = 0x168840u;
    // 0x168840: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x168840u;
    {
        const bool branch_taken_0x168840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168840) {
            ctx->pc = 0x16884Cu;
            goto label_16884c;
        }
    }
    ctx->pc = 0x168848u;
label_168848:
    // 0x168848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x168848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16884c:
    // 0x16884c: 0x14c00014  bnez        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x16884Cu;
    {
        const bool branch_taken_0x16884c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x168850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16884Cu;
        // 0x168850: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16884c) {
            ctx->pc = 0x1688A0u;
            goto label_1688a0;
        }
    }
    ctx->pc = 0x168854u;
    // 0x168854: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x168854u;
    {
        const bool branch_taken_0x168854 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x168858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168854u;
        // 0x168858: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168854) {
            ctx->pc = 0x168864u;
            goto label_168864;
        }
    }
    ctx->pc = 0x16885Cu;
    // 0x16885c: 0x90232ebf  lbu         $v1, 0x2EBF($at)
    ctx->pc = 0x16885cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11967)));
    // 0x168860: 0x0  nop
    ctx->pc = 0x168860u;
    // NOP
label_168864:
    // 0x168864: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168864u;
    {
        const bool branch_taken_0x168864 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x168868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168864u;
        // 0x168868: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168864) {
            ctx->pc = 0x168874u;
            goto label_168874;
        }
    }
    ctx->pc = 0x16886Cu;
    // 0x16886c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16886Cu;
    {
        const bool branch_taken_0x16886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16886c) {
            ctx->pc = 0x168898u;
            goto label_168898;
        }
    }
    ctx->pc = 0x168874u;
label_168874:
    // 0x168874: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x168874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x168878: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x168878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16887c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16887cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x168880: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x168880u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x168884: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x168884u;
    {
        const bool branch_taken_0x168884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x168884) {
            ctx->pc = 0x168894u;
            goto label_168894;
        }
    }
    ctx->pc = 0x16888Cu;
    // 0x16888c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16888Cu;
    {
        const bool branch_taken_0x16888c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16888c) {
            ctx->pc = 0x168898u;
            goto label_168898;
        }
    }
    ctx->pc = 0x168894u;
label_168894:
    // 0x168894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x168894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168898:
    // 0x168898: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x168898u;
    {
        const bool branch_taken_0x168898 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x168898) {
            ctx->pc = 0x1688B4u;
            goto label_1688b4;
        }
    }
    ctx->pc = 0x1688A0u;
label_1688a0:
    // 0x1688a0: 0x8c8501d4  lw          $a1, 0x1D4($a0)
    ctx->pc = 0x1688a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x1688a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1688a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1688a8: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1688A8u;
    {
        const bool branch_taken_0x1688a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1688ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1688A8u;
        // 0x1688ac: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1688a8) {
            ctx->pc = 0x1688B4u;
            goto label_1688b4;
        }
    }
    ctx->pc = 0x1688B0u;
    // 0x1688b0: 0xac8301d4  sw          $v1, 0x1D4($a0)
    ctx->pc = 0x1688b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 3));
label_1688b4:
    // 0x1688b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1688B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1688B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1688BCu;
}
