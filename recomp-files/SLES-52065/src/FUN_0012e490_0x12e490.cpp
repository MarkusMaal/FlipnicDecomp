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

// Function: FUN_0012e490
// Address: 0x12e490 - 0x12e50c
void FUN_0012e490_0x12e490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012e490_0x12e490");
#endif

    switch (ctx->pc) {
        case 0x12e4a4u: goto label_12e4a4;
        default: break;
    }

    ctx->pc = 0x12e490u;

    // 0x12e490: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x12e490u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12e494: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x12E494u;
    {
        const bool branch_taken_0x12e494 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E494u;
        // 0x12e498: 0x24a90004  addiu       $t1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e494) {
            ctx->pc = 0x12E4D0u;
            goto label_12e4d0;
        }
    }
    ctx->pc = 0x12E49Cu;
    // 0x12e49c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x12e49cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12e4a0: 0x0  nop
    ctx->pc = 0x12e4a0u;
    // NOP
label_12e4a4:
    // 0x12e4a4: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x12e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x12e4a8: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x12e4a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x12e4ac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E4ACu;
    {
        const bool branch_taken_0x12e4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e4ac) {
            ctx->pc = 0x12E4C0u;
            goto label_12e4c0;
        }
    }
    ctx->pc = 0x12E4B4u;
    // 0x12e4b4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x12e4b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12E4B8u;
    {
        const bool branch_taken_0x12e4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4B8u;
        // 0x12e4bc: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4b8) {
            ctx->pc = 0x12E4C8u;
            goto label_12e4c8;
        }
    }
    ctx->pc = 0x12E4C0u;
label_12e4c0:
    // 0x12e4c0: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x12e4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x12e4c4: 0x0  nop
    ctx->pc = 0x12e4c4u;
    // NOP
label_12e4c8:
    // 0x12e4c8: 0x1500fff6  bnez        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12E4C8u;
    {
        const bool branch_taken_0x12e4c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e4c8) {
            ctx->pc = 0x12E4A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e4a4;
        }
    }
    ctx->pc = 0x12E4D0u;
label_12e4d0:
    // 0x12e4d0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x12e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12e4d4: 0x11230007  beq         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E4D4u;
    {
        const bool branch_taken_0x12e4d4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x12E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4D4u;
        // 0x12e4d8: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4d4) {
            ctx->pc = 0x12E4F4u;
            goto label_12e4f4;
        }
    }
    ctx->pc = 0x12E4DCu;
    // 0x12e4dc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x12e4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12e4e0: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x12e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x12e4e4: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x12e4e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12e4e8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E4E8u;
    {
        const bool branch_taken_0x12e4e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e4e8) {
            ctx->pc = 0x12E500u;
            goto label_12e500;
        }
    }
    ctx->pc = 0x12E4F0u;
    // 0x12e4f0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x12e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_12e4f4:
    // 0x12e4f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12e4f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12E4F8u;
    {
        const bool branch_taken_0x12e4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4F8u;
        // 0x12e4fc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4f8) {
            ctx->pc = 0x12E504u;
            goto label_12e504;
        }
    }
    ctx->pc = 0x12E500u;
label_12e500:
    // 0x12e500: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x12e500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_12e504:
    // 0x12e504: 0x3e00008  jr          $ra
    ctx->pc = 0x12E504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E50Cu;
}
