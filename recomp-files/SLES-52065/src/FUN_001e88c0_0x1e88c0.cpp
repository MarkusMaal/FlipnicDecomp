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

// Function: FUN_001e88c0
// Address: 0x1e88c0 - 0x1e8938
void FUN_001e88c0_0x1e88c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e88c0_0x1e88c0");
#endif

    switch (ctx->pc) {
        case 0x1e88e0u: goto label_1e88e0;
        default: break;
    }

    ctx->pc = 0x1e88c0u;

    // 0x1e88c0: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x1e88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e88c4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E88C4u;
    {
        const bool branch_taken_0x1e88c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88C4u;
        // 0x1e88c8: 0x240c3  sra         $t0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e88c4) {
            ctx->pc = 0x1E88D4u;
            goto label_1e88d4;
        }
    }
    ctx->pc = 0x1E88CCu;
    // 0x1e88cc: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1e88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x1e88d0: 0x240c3  sra         $t0, $v0, 3
    ctx->pc = 0x1e88d0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 3));
label_1e88d4:
    // 0x1e88d4: 0x19000016  blez        $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E88D4u;
    {
        const bool branch_taken_0x1e88d4 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x1e88d4) {
            ctx->pc = 0x1E8930u;
            goto label_1e8930;
        }
    }
    ctx->pc = 0x1E88DCu;
    // 0x1e88dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e88dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e88e0:
    // 0x1e88e0: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E88E0u;
    {
        const bool branch_taken_0x1e88e0 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E88E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88E0u;
        // 0x1e88e4: 0x83843  sra         $a3, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e88e0) {
            ctx->pc = 0x1E88F0u;
            goto label_1e88f0;
        }
    }
    ctx->pc = 0x1E88E8u;
    // 0x1e88e8: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1e88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1e88ec: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x1e88ecu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_1e88f0:
    // 0x1e88f0: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1e88f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e88f4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1e88f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e88f8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1e88f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e88fc: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x1e88fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e8900: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e8900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e8904: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8904u;
    {
        const bool branch_taken_0x1e8904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8904u;
        // 0x1e8908: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8904) {
            ctx->pc = 0x1E891Cu;
            goto label_1e891c;
        }
    }
    ctx->pc = 0x1E890Cu;
    // 0x1e890c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e890cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e8910: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e8910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8914: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8914u;
    {
        const bool branch_taken_0x1e8914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8914u;
        // 0x1e8918: 0x1024023  subu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8914) {
            ctx->pc = 0x1E8924u;
            goto label_1e8924;
        }
    }
    ctx->pc = 0x1E891Cu;
label_1e891c:
    // 0x1e891c: 0x0  nop
    ctx->pc = 0x1e891cu;
    // NOP
    // 0x1e8920: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e8920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e8924:
    // 0x1e8924: 0x0  nop
    ctx->pc = 0x1e8924u;
    // NOP
    // 0x1e8928: 0x1d00ffed  bgtz        $t0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E8928u;
    {
        const bool branch_taken_0x1e8928 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x1E892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8928u;
        // 0x1e892c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8928) {
            ctx->pc = 0x1E88E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e88e0;
        }
    }
    ctx->pc = 0x1E8930u;
label_1e8930:
    // 0x1e8930: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8930u;
        // 0x1e8934: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8938u;
}
