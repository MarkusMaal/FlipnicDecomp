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

// Function: FUN_001236a0
// Address: 0x1236a0 - 0x123798
void FUN_001236a0_0x1236a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001236a0_0x1236a0");
#endif

    switch (ctx->pc) {
        case 0x1236dcu: goto label_1236dc;
        case 0x1236fcu: goto label_1236fc;
        case 0x123704u: goto label_123704;
        case 0x12373cu: goto label_12373c;
        case 0x12375cu: goto label_12375c;
        case 0x123764u: goto label_123764;
        case 0x12377cu: goto label_12377c;
        default: break;
    }

    ctx->pc = 0x1236a0u;

    // 0x1236a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1236a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1236a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1236a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1236a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1236a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1236ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1236acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1236b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1236b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1236b4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1236b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1236b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1236B8u;
    {
        const bool branch_taken_0x1236b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1236BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236B8u;
        // 0x1236bc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236b8) {
            ctx->pc = 0x1236D4u;
            goto label_1236d4;
        }
    }
    ctx->pc = 0x1236C0u;
    // 0x1236c0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1236c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1236c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1236c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1236c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1236cc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1236CCu;
    {
        const bool branch_taken_0x1236cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1236D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236CCu;
        // 0x1236d0: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236cc) {
            ctx->pc = 0x123780u;
            goto label_123780;
        }
    }
    ctx->pc = 0x1236D4u;
label_1236d4:
    // 0x1236d4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1236D4u;
    SET_GPR_U32(ctx, 31, 0x1236DCu);
    ctx->pc = 0x1236D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236D4u;
    // 0x1236d8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1236D4u, 0x1236DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236DCu;
label_1236dc:
    // 0x1236dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1236dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236e0: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1236E0u;
    {
        const bool branch_taken_0x1236e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1236E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236E0u;
        // 0x1236e4: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236e0) {
            ctx->pc = 0x123704u;
            goto label_123704;
        }
    }
    ctx->pc = 0x1236E8u;
    // 0x1236e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1236e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1236ec: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1236ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1236f0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1236f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1236f4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1236F4u;
    SET_GPR_U32(ctx, 31, 0x1236FCu);
    ctx->pc = 0x1236F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236F4u;
    // 0x1236f8: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1236F4u, 0x1236FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236FCu;
label_1236fc:
    // 0x1236fc: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1236FCu;
    SET_GPR_U32(ctx, 31, 0x123704u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1236FCu, 0x123704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123704u;
label_123704:
    // 0x123704: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x123704u;
    {
        const bool branch_taken_0x123704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x123708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123704u;
        // 0x123708: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123704) {
            ctx->pc = 0x123780u;
            goto label_123780;
        }
    }
    ctx->pc = 0x12370Cu;
    // 0x12370c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12370cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123714: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x123714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x123718: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x123718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12371c: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x12371cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x123720: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x123720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x123724: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x123724u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x123728: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x123728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x12372c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12372cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x123730: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x123730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x123734: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x123734u;
    SET_GPR_U32(ctx, 31, 0x12373Cu);
    ctx->pc = 0x123738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123734u;
    // 0x123738: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x123734u, 0x12373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12373Cu;
label_12373c:
    // 0x12373c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12373cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123740: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x123740u;
    {
        const bool branch_taken_0x123740 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x123744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123740u;
        // 0x123744: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123740) {
            ctx->pc = 0x123764u;
            goto label_123764;
        }
    }
    ctx->pc = 0x123748u;
    // 0x123748: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x123748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12374c: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x12374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x123750: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x123750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x123754: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x123754u;
    SET_GPR_U32(ctx, 31, 0x12375Cu);
    ctx->pc = 0x123758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123754u;
    // 0x123758: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x123754u, 0x12375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12375Cu;
label_12375c:
    // 0x12375c: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x12375Cu;
    SET_GPR_U32(ctx, 31, 0x123764u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x12375Cu, 0x123764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123764u;
label_123764:
    // 0x123764: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x123764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x123768: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x123768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12376c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x12376cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x123770: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x123770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x123774: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x123774u;
    SET_GPR_U32(ctx, 31, 0x12377Cu);
    ctx->pc = 0x123778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123774u;
    // 0x123778: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x123774u, 0x12377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12377Cu;
label_12377c:
    // 0x12377c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12377cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123780:
    // 0x123780: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x123780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123784: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x123784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x123788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12378c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12378cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123790: 0x3e00008  jr          $ra
    ctx->pc = 0x123790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123790u;
        // 0x123794: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123798u;
}
