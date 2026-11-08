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

// Function: FUN_001497a0
// Address: 0x1497a0 - 0x149848
void FUN_001497a0_0x1497a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001497a0_0x1497a0");
#endif

    ctx->pc = 0x1497a0u;

    // 0x1497a0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1497a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1497a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1497a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1497a8: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1497a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1497ac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1497acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1497b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1497b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1497b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1497b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1497b8: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1497B8u;
    {
        const bool branch_taken_0x1497b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1497b8) {
            ctx->pc = 0x1497CCu;
            goto label_1497cc;
        }
    }
    ctx->pc = 0x1497C0u;
    // 0x1497c0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1497c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1497c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1497C4u;
    {
        const bool branch_taken_0x1497c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1497C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497C4u;
        // 0x1497c8: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497c4) {
            ctx->pc = 0x149840u;
            goto label_149840;
        }
    }
    ctx->pc = 0x1497CCu;
label_1497cc:
    // 0x1497cc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1497ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1497d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1497d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1497d4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1497D4u;
    {
        const bool branch_taken_0x1497d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1497D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497D4u;
        // 0x1497d8: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497d4) {
            ctx->pc = 0x1497E4u;
            goto label_1497e4;
        }
    }
    ctx->pc = 0x1497DCu;
    // 0x1497dc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1497dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1497e0: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x1497e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_1497e4:
    // 0x1497e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1497e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1497e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1497e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1497ec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1497ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1497f0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1497f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1497f4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1497f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1497f8: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1497f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1497fc: 0x14460005  bne         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1497FCu;
    {
        const bool branch_taken_0x1497fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1497fc) {
            ctx->pc = 0x149814u;
            goto label_149814;
        }
    }
    ctx->pc = 0x149804u;
    // 0x149804: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x149804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149808: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x149808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14980c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x14980cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x149810: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x149810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_149814:
    // 0x149814: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x149814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x149818: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x149818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14981c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x14981cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x149820: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x149820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x149824: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x149824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x149828: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14982c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149830: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x149830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x149834: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x149834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x149838: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x149838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x14983c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x14983cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_149840:
    // 0x149840: 0x3e00008  jr          $ra
    ctx->pc = 0x149840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149840u;
        // 0x149844: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149848u;
}
