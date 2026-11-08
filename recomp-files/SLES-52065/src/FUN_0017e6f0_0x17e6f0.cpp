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

// Function: FUN_0017e6f0
// Address: 0x17e6f0 - 0x17e7fc
void FUN_0017e6f0_0x17e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017e6f0_0x17e6f0");
#endif

    switch (ctx->pc) {
        case 0x17e718u: goto label_17e718;
        case 0x17e770u: goto label_17e770;
        case 0x17e798u: goto label_17e798;
        case 0x17e7c0u: goto label_17e7c0;
        default: break;
    }

    ctx->pc = 0x17e6f0u;

    // 0x17e6f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e6f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17e6f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17e6fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17e700: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17e700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e704: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17e704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e708: 0x8c861020  lw          $a2, 0x1020($a0)
    ctx->pc = 0x17e708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4128)));
    // 0x17e70c: 0x8c871024  lw          $a3, 0x1024($a0)
    ctx->pc = 0x17e70cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4132)));
    // 0x17e710: 0xc05fb00  jal         func_17EC00
    ctx->pc = 0x17E710u;
    SET_GPR_U32(ctx, 31, 0x17E718u);
    ctx->pc = 0x17E714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E710u;
    // 0x17e714: 0x8c85101c  lw          $a1, 0x101C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC00u, 0x17E710u, 0x17E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E718u;
label_17e718:
    // 0x17e718: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E718u;
    {
        const bool branch_taken_0x17e718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E718u;
        // 0x17e71c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e718) {
            ctx->pc = 0x17E72Cu;
            goto label_17e72c;
        }
    }
    ctx->pc = 0x17E720u;
    // 0x17e720: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17e720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17e724: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x17E724u;
    {
        const bool branch_taken_0x17e724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E724u;
        // 0x17e728: 0x2442f8c8  addiu       $v0, $v0, -0x738 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e724) {
            ctx->pc = 0x17E7E8u;
            goto label_17e7e8;
        }
    }
    ctx->pc = 0x17E72Cu;
label_17e72c:
    // 0x17e72c: 0x1223001c  beq         $s1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x17E72Cu;
    {
        const bool branch_taken_0x17e72c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e72c) {
            ctx->pc = 0x17E7A0u;
            goto label_17e7a0;
        }
    }
    ctx->pc = 0x17E734u;
    // 0x17e734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e738: 0x1223000f  beq         $s1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x17E738u;
    {
        const bool branch_taken_0x17e738 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e738) {
            ctx->pc = 0x17E778u;
            goto label_17e778;
        }
    }
    ctx->pc = 0x17E740u;
    // 0x17e740: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E740u;
    {
        const bool branch_taken_0x17e740 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e740) {
            ctx->pc = 0x17E750u;
            goto label_17e750;
        }
    }
    ctx->pc = 0x17E748u;
    // 0x17e748: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x17E748u;
    {
        const bool branch_taken_0x17e748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E748u;
        // 0x17e74c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e748) {
            ctx->pc = 0x17E7E4u;
            goto label_17e7e4;
        }
    }
    ctx->pc = 0x17E750u;
label_17e750:
    // 0x17e750: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x17e750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e754: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E754u;
    {
        const bool branch_taken_0x17e754 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E754u;
        // 0x17e758: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e754) {
            ctx->pc = 0x17E768u;
            goto label_17e768;
        }
    }
    ctx->pc = 0x17E75Cu;
    // 0x17e75c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17e760: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E760u;
    {
        const bool branch_taken_0x17e760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E760u;
        // 0x17e764: 0x2442f8c8  addiu       $v0, $v0, -0x738 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e760) {
            ctx->pc = 0x17E770u;
            goto label_17e770;
        }
    }
    ctx->pc = 0x17E768u;
label_17e768:
    // 0x17e768: 0xc05f560  jal         func_17D580
    ctx->pc = 0x17E768u;
    SET_GPR_U32(ctx, 31, 0x17E770u);
    ctx->pc = 0x17D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D580u, 0x17E768u, 0x17E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E770u;
label_17e770:
    // 0x17e770: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x17E770u;
    {
        const bool branch_taken_0x17e770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E770u;
        // 0x17e774: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e770) {
            ctx->pc = 0x17E7ECu;
            goto label_17e7ec;
        }
    }
    ctx->pc = 0x17E778u;
label_17e778:
    // 0x17e778: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x17e778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e77c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E77Cu;
    {
        const bool branch_taken_0x17e77c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E77Cu;
        // 0x17e780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e77c) {
            ctx->pc = 0x17E790u;
            goto label_17e790;
        }
    }
    ctx->pc = 0x17E784u;
    // 0x17e784: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17e784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17e788: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E788u;
    {
        const bool branch_taken_0x17e788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E788u;
        // 0x17e78c: 0x2442f8c8  addiu       $v0, $v0, -0x738 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e788) {
            ctx->pc = 0x17E798u;
            goto label_17e798;
        }
    }
    ctx->pc = 0x17E790u;
label_17e790:
    // 0x17e790: 0xc05f568  jal         func_17D5A0
    ctx->pc = 0x17E790u;
    SET_GPR_U32(ctx, 31, 0x17E798u);
    ctx->pc = 0x17D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D5A0u, 0x17E790u, 0x17E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E798u;
label_17e798:
    // 0x17e798: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17E798u;
    {
        const bool branch_taken_0x17e798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e798) {
            ctx->pc = 0x17E7E8u;
            goto label_17e7e8;
        }
    }
    ctx->pc = 0x17E7A0u;
label_17e7a0:
    // 0x17e7a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17e7a4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E7A4u;
    {
        const bool branch_taken_0x17e7a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7A4u;
        // 0x17e7a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e7a4) {
            ctx->pc = 0x17E7B8u;
            goto label_17e7b8;
        }
    }
    ctx->pc = 0x17E7ACu;
    // 0x17e7ac: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17e7b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17E7B0u;
    {
        const bool branch_taken_0x17e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7B0u;
        // 0x17e7b4: 0x2442f8c8  addiu       $v0, $v0, -0x738 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e7b0) {
            ctx->pc = 0x17E7E8u;
            goto label_17e7e8;
        }
    }
    ctx->pc = 0x17E7B8u;
label_17e7b8:
    // 0x17e7b8: 0xc051198  jal         func_144660
    ctx->pc = 0x17E7B8u;
    SET_GPR_U32(ctx, 31, 0x17E7C0u);
    ctx->pc = 0x144660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144660u, 0x17E7B8u, 0x17E7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E7C0u;
label_17e7c0:
    // 0x17e7c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E7C0u;
    {
        const bool branch_taken_0x17e7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e7c0) {
            ctx->pc = 0x17E7D4u;
            goto label_17e7d4;
        }
    }
    ctx->pc = 0x17E7C8u;
    // 0x17e7c8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17e7cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E7CCu;
    {
        const bool branch_taken_0x17e7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7CCu;
        // 0x17e7d0: 0x2442f8c8  addiu       $v0, $v0, -0x738 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e7cc) {
            ctx->pc = 0x17E7DCu;
            goto label_17e7dc;
        }
    }
    ctx->pc = 0x17E7D4u;
label_17e7d4:
    // 0x17e7d4: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x17e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x17e7d8: 0x0  nop
    ctx->pc = 0x17e7d8u;
    // NOP
label_17e7dc:
    // 0x17e7dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17E7DCu;
    {
        const bool branch_taken_0x17e7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e7dc) {
            ctx->pc = 0x17E7E8u;
            goto label_17e7e8;
        }
    }
    ctx->pc = 0x17E7E4u;
label_17e7e4:
    // 0x17e7e4: 0x2442f8c8  addiu       $v0, $v0, -0x738
    ctx->pc = 0x17e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965448));
label_17e7e8:
    // 0x17e7e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17e7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17e7ec:
    // 0x17e7ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e7ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e7f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x17E7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7F4u;
        // 0x17e7f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E7FCu;
}
