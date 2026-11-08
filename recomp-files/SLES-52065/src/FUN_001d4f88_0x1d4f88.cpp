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

// Function: FUN_001d4f88
// Address: 0x1d4f88 - 0x1d5024
void FUN_001d4f88_0x1d4f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4f88_0x1d4f88");
#endif

    switch (ctx->pc) {
        case 0x1d4fb8u: goto label_1d4fb8;
        case 0x1d4fd0u: goto label_1d4fd0;
        case 0x1d4fdcu: goto label_1d4fdc;
        case 0x1d5004u: goto label_1d5004;
        default: break;
    }

    ctx->pc = 0x1d4f88u;

    // 0x1d4f88: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d4f8c: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d4f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1d4f90: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1d4f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d4f94: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1d4f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1d4f98: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1d4f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1d4f9c: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1d4f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1d4fa0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d4fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d4fa4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1d4fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d4fa8: 0x8ca5055c  lw          $a1, 0x55C($a1)
    ctx->pc = 0x1d4fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1372)));
    // 0x1d4fac: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1d4facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1d4fb0: 0xc0772f8  jal         func_1DCBE0
    ctx->pc = 0x1D4FB0u;
    SET_GPR_U32(ctx, 31, 0x1D4FB8u);
    ctx->pc = 0x1D4FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4FB0u;
    // 0x1d4fb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1D4FB0u, 0x1D4FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4FB8u;
label_1d4fb8:
    // 0x1d4fb8: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x1d4fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d4fbc: 0x6200013  bltz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D4FBCu;
    {
        const bool branch_taken_0x1d4fbc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1D4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FBCu;
        // 0x1d4fc0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4fbc) {
            ctx->pc = 0x1D500Cu;
            goto label_1d500c;
        }
    }
    ctx->pc = 0x1D4FC4u;
    // 0x1d4fc4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d4fc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4fc8: 0x5d8021  addu        $s0, $v0, $sp
    ctx->pc = 0x1d4fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d4fcc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d4fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4fd0:
    // 0x1d4fd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4fd4: 0xc077506  jal         func_1DD418
    ctx->pc = 0x1D4FD4u;
    SET_GPR_U32(ctx, 31, 0x1D4FDCu);
    ctx->pc = 0x1D4FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4FD4u;
    // 0x1d4fd8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD418u, 0x1D4FD4u, 0x1D4FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4FDCu;
label_1d4fdc:
    // 0x1d4fdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d4fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d4fe0: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x1d4fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1d4fe4: 0x28430018  slti        $v1, $v0, 0x18
    ctx->pc = 0x1d4fe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d4fe8: 0x2446ffe8  addiu       $a2, $v0, -0x18
    ctx->pc = 0x1d4fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x1d4fec: 0x522804  sllv        $a1, $s2, $v0
    ctx->pc = 0x1d4fecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4ff0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4FF0u;
    {
        const bool branch_taken_0x1d4ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FF0u;
        // 0x1d4ff4: 0x38640001  xori        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ff0) {
            ctx->pc = 0x1D4FFCu;
            goto label_1d4ffc;
        }
    }
    ctx->pc = 0x1D4FF8u;
    // 0x1d4ff8: 0xd22804  sllv        $a1, $s2, $a2
    ctx->pc = 0x1d4ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 6) & 0x1F));
label_1d4ffc:
    // 0x1d4ffc: 0xc077818  jal         func_1DE060
    ctx->pc = 0x1D4FFCu;
    SET_GPR_U32(ctx, 31, 0x1D5004u);
    ctx->pc = 0x1D5000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4FFCu;
    // 0x1d5000: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE060u, 0x1D4FFCu, 0x1D5004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5004u;
label_1d5004:
    // 0x1d5004: 0x623fff2  bgezl       $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D5004u;
    {
        const bool branch_taken_0x1d5004 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1d5004) {
            ctx->pc = 0x1D5008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5004u;
            // 0x1d5008: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4fd0;
        }
    }
    ctx->pc = 0x1D500Cu;
label_1d500c:
    // 0x1d500c: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1d500cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d5010: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1d5010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d5014: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1d5014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d5018: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1d5018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d501c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D501Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D501Cu;
        // 0x1d5020: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D501Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5024u;
}
