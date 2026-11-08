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

// Function: FUN_001b68e0
// Address: 0x1b68e0 - 0x1b695c
void FUN_001b68e0_0x1b68e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b68e0_0x1b68e0");
#endif

    switch (ctx->pc) {
        case 0x1b68f4u: goto label_1b68f4;
        default: break;
    }

    ctx->pc = 0x1b68e0u;

    // 0x1b68e0: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x1b68e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1b68e4: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B68E4u;
    {
        const bool branch_taken_0x1b68e4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B68E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68E4u;
        // 0x1b68e8: 0x24a90004  addiu       $t1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b68e4) {
            ctx->pc = 0x1B6920u;
            goto label_1b6920;
        }
    }
    ctx->pc = 0x1B68ECu;
    // 0x1b68ec: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1b68ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b68f0: 0x0  nop
    ctx->pc = 0x1b68f0u;
    // NOP
label_1b68f4:
    // 0x1b68f4: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1b68f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1b68f8: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x1b68f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1b68fc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B68FCu;
    {
        const bool branch_taken_0x1b68fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b68fc) {
            ctx->pc = 0x1B6910u;
            goto label_1b6910;
        }
    }
    ctx->pc = 0x1B6904u;
    // 0x1b6904: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1b6904u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6908: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6908u;
    {
        const bool branch_taken_0x1b6908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6908u;
        // 0x1b690c: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6908) {
            ctx->pc = 0x1B6918u;
            goto label_1b6918;
        }
    }
    ctx->pc = 0x1B6910u;
label_1b6910:
    // 0x1b6910: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x1b6910u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1b6914: 0x0  nop
    ctx->pc = 0x1b6914u;
    // NOP
label_1b6918:
    // 0x1b6918: 0x1500fff6  bnez        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B6918u;
    {
        const bool branch_taken_0x1b6918 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6918) {
            ctx->pc = 0x1B68F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b68f4;
        }
    }
    ctx->pc = 0x1B6920u;
label_1b6920:
    // 0x1b6920: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1b6920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1b6924: 0x11230007  beq         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6924u;
    {
        const bool branch_taken_0x1b6924 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B6928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6924u;
        // 0x1b6928: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6924) {
            ctx->pc = 0x1B6944u;
            goto label_1b6944;
        }
    }
    ctx->pc = 0x1B692Cu;
    // 0x1b692c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1b692cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b6930: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x1b6930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1b6934: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x1b6934u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b6938: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6938u;
    {
        const bool branch_taken_0x1b6938 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6938) {
            ctx->pc = 0x1B6950u;
            goto label_1b6950;
        }
    }
    ctx->pc = 0x1B6940u;
    // 0x1b6940: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1b6940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1b6944:
    // 0x1b6944: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b6944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6948: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6948u;
    {
        const bool branch_taken_0x1b6948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6948u;
        // 0x1b694c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6948) {
            ctx->pc = 0x1B6954u;
            goto label_1b6954;
        }
    }
    ctx->pc = 0x1B6950u;
label_1b6950:
    // 0x1b6950: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1b6950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_1b6954:
    // 0x1b6954: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B695Cu;
}
