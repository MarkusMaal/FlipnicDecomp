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

// Function: FUN_001e7870
// Address: 0x1e7870 - 0x1e78e8
void FUN_001e7870_0x1e7870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e7870_0x1e7870");
#endif

    switch (ctx->pc) {
        case 0x1e7890u: goto label_1e7890;
        default: break;
    }

    ctx->pc = 0x1e7870u;

    // 0x1e7870: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x1e7870u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e7874: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7874u;
    {
        const bool branch_taken_0x1e7874 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E7878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7874u;
        // 0x1e7878: 0x240c3  sra         $t0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7874) {
            ctx->pc = 0x1E7884u;
            goto label_1e7884;
        }
    }
    ctx->pc = 0x1E787Cu;
    // 0x1e787c: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1e787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x1e7880: 0x240c3  sra         $t0, $v0, 3
    ctx->pc = 0x1e7880u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 3));
label_1e7884:
    // 0x1e7884: 0x19000016  blez        $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E7884u;
    {
        const bool branch_taken_0x1e7884 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x1e7884) {
            ctx->pc = 0x1E78E0u;
            goto label_1e78e0;
        }
    }
    ctx->pc = 0x1E788Cu;
    // 0x1e788c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e788cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e7890:
    // 0x1e7890: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7890u;
    {
        const bool branch_taken_0x1e7890 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7890u;
        // 0x1e7894: 0x83843  sra         $a3, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7890) {
            ctx->pc = 0x1E78A0u;
            goto label_1e78a0;
        }
    }
    ctx->pc = 0x1E7898u;
    // 0x1e7898: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1e7898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1e789c: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x1e789cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_1e78a0:
    // 0x1e78a0: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1e78a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e78a4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1e78a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e78a8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1e78a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e78ac: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x1e78acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e78b0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e78b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e78b4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E78B4u;
    {
        const bool branch_taken_0x1e78b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E78B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78B4u;
        // 0x1e78b8: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78b4) {
            ctx->pc = 0x1E78CCu;
            goto label_1e78cc;
        }
    }
    ctx->pc = 0x1E78BCu;
    // 0x1e78bc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e78bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e78c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e78c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E78C4u;
    {
        const bool branch_taken_0x1e78c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E78C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78C4u;
        // 0x1e78c8: 0x1024023  subu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78c4) {
            ctx->pc = 0x1E78D4u;
            goto label_1e78d4;
        }
    }
    ctx->pc = 0x1E78CCu;
label_1e78cc:
    // 0x1e78cc: 0x0  nop
    ctx->pc = 0x1e78ccu;
    // NOP
    // 0x1e78d0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e78d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e78d4:
    // 0x1e78d4: 0x0  nop
    ctx->pc = 0x1e78d4u;
    // NOP
    // 0x1e78d8: 0x1d00ffed  bgtz        $t0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E78D8u;
    {
        const bool branch_taken_0x1e78d8 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x1E78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78D8u;
        // 0x1e78dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78d8) {
            ctx->pc = 0x1E7890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7890;
        }
    }
    ctx->pc = 0x1E78E0u;
label_1e78e0:
    // 0x1e78e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E78E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78E0u;
        // 0x1e78e4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E78E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E78E8u;
}
