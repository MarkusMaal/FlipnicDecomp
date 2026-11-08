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

// Function: FUN_002084c8
// Address: 0x2084c8 - 0x2085dc
void FUN_002084c8_0x2084c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002084c8_0x2084c8");
#endif

    switch (ctx->pc) {
        case 0x208510u: goto label_208510;
        case 0x208580u: goto label_208580;
        case 0x2085acu: goto label_2085ac;
        default: break;
    }

    ctx->pc = 0x2084c8u;

    // 0x2084c8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2084c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2084cc: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x2084ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2084d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2084D0u;
    {
        const bool branch_taken_0x2084d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2084d0) {
            ctx->pc = 0x2084E8u;
            goto label_2084e8;
        }
    }
    ctx->pc = 0x2084D8u;
    // 0x2084d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2084d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2084dc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2084dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2084e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2084E0u;
    {
        const bool branch_taken_0x2084e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2084E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084E0u;
        // 0x2084e4: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084e0) {
            ctx->pc = 0x2084F0u;
            goto label_2084f0;
        }
    }
    ctx->pc = 0x2084E8u;
label_2084e8:
    // 0x2084e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2084E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2084ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084E8u;
        // 0x2084ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2084E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2084F0u;
label_2084f0:
    // 0x2084f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2084F0u;
    {
        const bool branch_taken_0x2084f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2084F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084F0u;
        // 0x2084f4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084f0) {
            ctx->pc = 0x208520u;
            goto label_208520;
        }
    }
    ctx->pc = 0x2084F8u;
    // 0x2084f8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2084F8u;
    {
        const bool branch_taken_0x2084f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2084f8) {
            ctx->pc = 0x2084FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2084F8u;
            // 0x2084fc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208510u;
            goto label_208510;
        }
    }
    ctx->pc = 0x208500u;
    // 0x208500: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x208500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x208504: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x208504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x208508: 0x3e00008  jr          $ra
    ctx->pc = 0x208508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208508u;
        // 0x20850c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208510u;
label_208510:
    // 0x208510: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208514: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208518: 0x3e00008  jr          $ra
    ctx->pc = 0x208518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208518u;
        // 0x20851c: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208520u;
label_208520:
    // 0x208520: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x208520u;
    {
        const bool branch_taken_0x208520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208520) {
            ctx->pc = 0x208524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208520u;
            // 0x208524: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20853Cu;
            goto label_20853c;
        }
    }
    ctx->pc = 0x208528u;
    // 0x208528: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x208528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20852c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208534: 0x3e00008  jr          $ra
    ctx->pc = 0x208534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208534u;
        // 0x208538: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20853Cu;
label_20853c:
    // 0x20853c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20853Cu;
    {
        const bool branch_taken_0x20853c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20853Cu;
        // 0x208540: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20853c) {
            ctx->pc = 0x208564u;
            goto label_208564;
        }
    }
    ctx->pc = 0x208544u;
    // 0x208544: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x208544u;
    {
        const bool branch_taken_0x208544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208544) {
            ctx->pc = 0x208548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208544u;
            // 0x208548: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208554u;
            goto label_208554;
        }
    }
    ctx->pc = 0x20854Cu;
    // 0x20854c: 0x3e00008  jr          $ra
    ctx->pc = 0x20854Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20854Cu;
        // 0x208550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20854Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208554u;
label_208554:
    // 0x208554: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208558: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20855c: 0x3e00008  jr          $ra
    ctx->pc = 0x20855Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20855Cu;
        // 0x208560: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20855Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208564u;
label_208564:
    // 0x208564: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x208564u;
    {
        const bool branch_taken_0x208564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208564) {
            ctx->pc = 0x208568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208564u;
            // 0x208568: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208510;
        }
    }
    ctx->pc = 0x20856Cu;
    // 0x20856c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x20856cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x208570: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x208570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x208574: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208574u;
    {
        const bool branch_taken_0x208574 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x208574) {
            ctx->pc = 0x208578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208574u;
            // 0x208578: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20858Cu;
            goto label_20858c;
        }
    }
    ctx->pc = 0x20857Cu;
    // 0x20857c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20857cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208580:
    // 0x208580: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208584: 0x3e00008  jr          $ra
    ctx->pc = 0x208584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208584u;
        // 0x208588: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20858Cu;
label_20858c:
    // 0x20858c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x20858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x208590: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x208590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x208594: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x208594u;
    {
        const bool branch_taken_0x208594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208594) {
            ctx->pc = 0x208598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208594u;
            // 0x208598: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208580;
        }
    }
    ctx->pc = 0x20859Cu;
    // 0x20859c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x20859cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2085a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2085A0u;
    {
        const bool branch_taken_0x2085a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2085a0) {
            ctx->pc = 0x2085A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2085A0u;
            // 0x2085a4: 0xdc830010  ld          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2085B8u;
            goto label_2085b8;
        }
    }
    ctx->pc = 0x2085A8u;
    // 0x2085a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2085a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2085ac:
    // 0x2085ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2085acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2085b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2085B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2085B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085B0u;
        // 0x2085b4: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2085B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2085B8u;
label_2085b8:
    // 0x2085b8: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x2085b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2085bc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2085bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2085c0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2085C0u;
    {
        const bool branch_taken_0x2085c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2085c0) {
            ctx->pc = 0x2085C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2085C0u;
            // 0x2085c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208580;
        }
    }
    ctx->pc = 0x2085C8u;
    // 0x2085c8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2085c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2085cc: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2085CCu;
    {
        const bool branch_taken_0x2085cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2085D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085CCu;
        // 0x2085d0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085cc) {
            ctx->pc = 0x2085ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2085ac;
        }
    }
    ctx->pc = 0x2085D4u;
    // 0x2085d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2085D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2085D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085D4u;
        // 0x2085d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2085D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2085DCu;
}
