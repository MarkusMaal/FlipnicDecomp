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

// Function: FUN_001f8fb8
// Address: 0x1f8fb8 - 0x1f903c
void FUN_001f8fb8_0x1f8fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f8fb8_0x1f8fb8");
#endif

    switch (ctx->pc) {
        case 0x1f8fecu: goto label_1f8fec;
        case 0x1f9000u: goto label_1f9000;
        case 0x1f901cu: goto label_1f901c;
        default: break;
    }

    ctx->pc = 0x1f8fb8u;

    // 0x1f8fb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f8fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f8fbc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f8fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f8fc0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f8fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f8fc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f8fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8fc8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f8fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f8fcc: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F8FCCu;
    {
        const bool branch_taken_0x1f8fcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FCCu;
        // 0x1f8fd0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fcc) {
            ctx->pc = 0x1F9024u;
            goto label_1f9024;
        }
    }
    ctx->pc = 0x1F8FD4u;
    // 0x1f8fd4: 0x3c120039  lui         $s2, 0x39
    ctx->pc = 0x1f8fd4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57 << 16));
    // 0x1f8fd8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1f8fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1f8fdc: 0x26431bc0  addiu       $v1, $s2, 0x1BC0
    ctx->pc = 0x1f8fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 7104));
    // 0x1f8fe0: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1f8fe0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f8fe4: 0xc080748  jal         func_201D20
    ctx->pc = 0x1F8FE4u;
    SET_GPR_U32(ctx, 31, 0x1F8FECu);
    ctx->pc = 0x1F8FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8FE4u;
    // 0x1f8fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1F8FE4u, 0x1F8FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8FECu;
label_1f8fec:
    // 0x1f8fec: 0x2c420400  sltiu       $v0, $v0, 0x400
    ctx->pc = 0x1f8fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f8ff0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8FF0u;
    {
        const bool branch_taken_0x1f8ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8ff0) {
            ctx->pc = 0x1F8FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8FF0u;
            // 0x1f8ff4: 0x241003ff  addiu       $s0, $zero, 0x3FF (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9004u;
            goto label_1f9004;
        }
    }
    ctx->pc = 0x1F8FF8u;
    // 0x1f8ff8: 0xc080748  jal         func_201D20
    ctx->pc = 0x1F8FF8u;
    SET_GPR_U32(ctx, 31, 0x1F9000u);
    ctx->pc = 0x1F8FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8FF8u;
    // 0x1f8ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1F8FF8u, 0x1F9000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9000u;
label_1f9000:
    // 0x1f9000: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9004:
    // 0x1f9004: 0x26421bc0  addiu       $v0, $s2, 0x1BC0
    ctx->pc = 0x1f9004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 7104));
    // 0x1f9008: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1f9008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1f900c: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1f900cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1f9010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9014: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1F9014u;
    SET_GPR_U32(ctx, 31, 0x1F901Cu);
    ctx->pc = 0x1F9018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9014u;
    // 0x1f9018: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1F9014u, 0x1F901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F901Cu;
label_1f901c:
    // 0x1f901c: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x1f901cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1f9020: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1f9020u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1f9024:
    // 0x1f9024: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f9024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9028: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f9028u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f902c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f902cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9034: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9034u;
        // 0x1f9038: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F903Cu;
}
