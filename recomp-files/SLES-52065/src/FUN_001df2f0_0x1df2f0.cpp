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

// Function: FUN_001df2f0
// Address: 0x1df2f0 - 0x1df35c
void FUN_001df2f0_0x1df2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001df2f0_0x1df2f0");
#endif

    switch (ctx->pc) {
        case 0x1df30cu: goto label_1df30c;
        case 0x1df320u: goto label_1df320;
        case 0x1df330u: goto label_1df330;
        default: break;
    }

    ctx->pc = 0x1df2f0u;

    // 0x1df2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df2f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1df2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1df2f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df2fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1df2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1df300: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1df300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1df304: 0xc07837a  jal         func_1E0DE8
    ctx->pc = 0x1DF304u;
    SET_GPR_U32(ctx, 31, 0x1DF30Cu);
    ctx->pc = 0x1DF308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF304u;
    // 0x1df308: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0DE8u, 0x1DF304u, 0x1DF30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF30Cu;
label_1df30c:
    // 0x1df30c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DF30Cu;
    {
        const bool branch_taken_0x1df30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF30Cu;
        // 0x1df310: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df30c) {
            ctx->pc = 0x1DF340u;
            goto label_1df340;
        }
    }
    ctx->pc = 0x1DF314u;
    // 0x1df314: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1df314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df318: 0x24519f00  addiu       $s1, $v0, -0x6100
    ctx->pc = 0x1df318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942464));
    // 0x1df31c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1df31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1df320:
    // 0x1df320: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF320u;
    {
        const bool branch_taken_0x1df320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1DF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF320u;
        // 0x1df324: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df320) {
            ctx->pc = 0x1DF330u;
            goto label_1df330;
        }
    }
    ctx->pc = 0x1DF328u;
    // 0x1df328: 0xc077ca6  jal         func_1DF298
    ctx->pc = 0x1DF328u;
    SET_GPR_U32(ctx, 31, 0x1DF330u);
    ctx->pc = 0x1DF32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF328u;
    // 0x1df32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF298u, 0x1DF328u, 0x1DF330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF330u;
label_1df330:
    // 0x1df330: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1df330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1df334: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1df334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1df338: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DF338u;
    {
        const bool branch_taken_0x1df338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df338) {
            ctx->pc = 0x1DF33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF338u;
            // 0x1df33c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df320;
        }
    }
    ctx->pc = 0x1DF340u;
label_1df340:
    // 0x1df340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df344: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df348: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1df348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df34c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1df34cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df350: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1df350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df354: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF354u;
        // 0x1df358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF35Cu;
}
