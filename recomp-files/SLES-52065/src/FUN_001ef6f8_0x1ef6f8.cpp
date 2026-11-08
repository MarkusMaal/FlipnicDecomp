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

// Function: FUN_001ef6f8
// Address: 0x1ef6f8 - 0x1ef784
void FUN_001ef6f8_0x1ef6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ef6f8_0x1ef6f8");
#endif

    switch (ctx->pc) {
        case 0x1ef734u: goto label_1ef734;
        case 0x1ef74cu: goto label_1ef74c;
        case 0x1ef760u: goto label_1ef760;
        default: break;
    }

    ctx->pc = 0x1ef6f8u;

    // 0x1ef6f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ef6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ef6fc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ef6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ef700: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ef700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ef704: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ef704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ef708: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ef708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ef70c: 0x2453a3ac  addiu       $s3, $v0, -0x5C54
    ctx->pc = 0x1ef70cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943660));
    // 0x1ef710: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ef710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ef714: 0x2471f928  addiu       $s1, $v1, -0x6D8
    ctx->pc = 0x1ef714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965544));
    // 0x1ef718: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ef718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ef71c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ef71cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ef724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef728: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ef728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef72c: 0xc07fdd8  jal         func_1FF760
    ctx->pc = 0x1EF72Cu;
    SET_GPR_U32(ctx, 31, 0x1EF734u);
    ctx->pc = 0x1EF730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF72Cu;
    // 0x1ef730: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF760u, 0x1EF72Cu, 0x1EF734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF734u;
label_1ef734:
    // 0x1ef734: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EF734u;
    {
        const bool branch_taken_0x1ef734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF734u;
        // 0x1ef738: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef734) {
            ctx->pc = 0x1EF764u;
            goto label_1ef764;
        }
    }
    ctx->pc = 0x1EF73Cu;
    // 0x1ef73c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ef73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef740: 0x8e05a470  lw          $a1, -0x5B90($s0)
    ctx->pc = 0x1ef740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943856)));
    // 0x1ef744: 0xc07fdd8  jal         func_1FF760
    ctx->pc = 0x1EF744u;
    SET_GPR_U32(ctx, 31, 0x1EF74Cu);
    ctx->pc = 0x1EF748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF744u;
    // 0x1ef748: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF760u, 0x1EF744u, 0x1EF74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF74Cu;
label_1ef74c:
    // 0x1ef74c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF74Cu;
    {
        const bool branch_taken_0x1ef74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF74Cu;
        // 0x1ef750: 0x8e05a470  lw          $a1, -0x5B90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef74c) {
            ctx->pc = 0x1EF764u;
            goto label_1ef764;
        }
    }
    ctx->pc = 0x1EF754u;
    // 0x1ef754: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ef754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef758: 0xc07fdd8  jal         func_1FF760
    ctx->pc = 0x1EF758u;
    SET_GPR_U32(ctx, 31, 0x1EF760u);
    ctx->pc = 0x1EF75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF758u;
    // 0x1ef75c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF760u, 0x1EF758u, 0x1EF760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF760u;
label_1ef760:
    // 0x1ef760: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1ef760u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ef764:
    // 0x1ef764: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1ef764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef768: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ef768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef76c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ef76cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef770: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ef770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef774: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ef774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef77c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF77Cu;
        // 0x1ef780: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF784u;
}
