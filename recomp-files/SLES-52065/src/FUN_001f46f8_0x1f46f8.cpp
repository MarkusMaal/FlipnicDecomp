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

// Function: FUN_001f46f8
// Address: 0x1f46f8 - 0x1f47a4
void FUN_001f46f8_0x1f46f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f46f8_0x1f46f8");
#endif

    switch (ctx->pc) {
        case 0x1f4710u: goto label_1f4710;
        case 0x1f4730u: goto label_1f4730;
        case 0x1f4748u: goto label_1f4748;
        case 0x1f4750u: goto label_1f4750;
        case 0x1f4758u: goto label_1f4758;
        case 0x1f4764u: goto label_1f4764;
        case 0x1f4768u: goto label_1f4768;
        case 0x1f4770u: goto label_1f4770;
        case 0x1f4780u: goto label_1f4780;
        default: break;
    }

    ctx->pc = 0x1f46f8u;

    // 0x1f46f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f46f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f46fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f46fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f4700: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f4700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f4704: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f4704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f4708: 0xc07d1a4  jal         func_1F4690
    ctx->pc = 0x1F4708u;
    SET_GPR_U32(ctx, 31, 0x1F4710u);
    ctx->pc = 0x1F470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4708u;
    // 0x1f470c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4690u, 0x1F4708u, 0x1F4710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4710u;
label_1f4710:
    // 0x1f4710: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F4710u;
    {
        const bool branch_taken_0x1f4710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4710u;
        // 0x1f4714: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4710) {
            ctx->pc = 0x1F478Cu;
            goto label_1f478c;
        }
    }
    ctx->pc = 0x1F4718u;
    // 0x1f4718: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1f4718u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f471c: 0x2450b2a0  addiu       $s0, $v0, -0x4D60
    ctx->pc = 0x1f471cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947488));
    // 0x1f4720: 0x8c44b2a0  lw          $a0, -0x4D60($v0)
    ctx->pc = 0x1f4720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947488)));
    // 0x1f4724: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1f4724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f4728: 0xc07d18a  jal         func_1F4628
    ctx->pc = 0x1F4728u;
    SET_GPR_U32(ctx, 31, 0x1F4730u);
    ctx->pc = 0x1F472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4728u;
    // 0x1f472c: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4628u, 0x1F4728u, 0x1F4730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4730u;
label_1f4730:
    // 0x1f4730: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1f4730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1f4734: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x1f4734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x1f4738: 0x240607a8  addiu       $a2, $zero, 0x7A8
    ctx->pc = 0x1f4738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x1f473c: 0x24a5aaf8  addiu       $a1, $a1, -0x5508
    ctx->pc = 0x1f473cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945528));
    // 0x1f4740: 0xc07d18e  jal         func_1F4638
    ctx->pc = 0x1F4740u;
    SET_GPR_U32(ctx, 31, 0x1F4748u);
    ctx->pc = 0x1F4744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4740u;
    // 0x1f4744: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4638u, 0x1F4740u, 0x1F4748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4748u;
label_1f4748:
    // 0x1f4748: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1F4748u;
    SET_GPR_U32(ctx, 31, 0x1F4750u);
    ctx->pc = 0x1F474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4748u;
    // 0x1f474c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1F4748u, 0x1F4750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4750u;
label_1f4750:
    // 0x1f4750: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1F4750u;
    SET_GPR_U32(ctx, 31, 0x1F4758u);
    ctx->pc = 0x1F4754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4750u;
    // 0x1f4754: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1F4750u, 0x1F4758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4758u;
label_1f4758:
    // 0x1f4758: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1f4758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f475c: 0xc07d18a  jal         func_1F4628
    ctx->pc = 0x1F475Cu;
    SET_GPR_U32(ctx, 31, 0x1F4764u);
    ctx->pc = 0x1F4760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F475Cu;
    // 0x1f4760: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4628u, 0x1F475Cu, 0x1F4764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4764u;
label_1f4764:
    // 0x1f4764: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f4764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f4768:
    // 0x1f4768: 0xc07d1a0  jal         func_1F4680
    ctx->pc = 0x1F4768u;
    SET_GPR_U32(ctx, 31, 0x1F4770u);
    ctx->pc = 0x1F476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4768u;
    // 0x1f476c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4680u, 0x1F4768u, 0x1F4770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4770u;
label_1f4770:
    // 0x1f4770: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f4770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f4774: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4778: 0xc07d18a  jal         func_1F4628
    ctx->pc = 0x1F4778u;
    SET_GPR_U32(ctx, 31, 0x1F4780u);
    ctx->pc = 0x1F477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4778u;
    // 0x1f477c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4628u, 0x1F4778u, 0x1F4780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4780u;
label_1f4780:
    // 0x1f4780: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1f4780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f4784: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F4784u;
    {
        const bool branch_taken_0x1f4784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4784) {
            ctx->pc = 0x1F4788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4784u;
            // 0x1f4788: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4768;
        }
    }
    ctx->pc = 0x1F478Cu;
label_1f478c:
    // 0x1f478c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f478cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4790: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f4790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4794: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f4794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f4798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f479c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F479Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F47A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F479Cu;
        // 0x1f47a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F479Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F47A4u;
}
