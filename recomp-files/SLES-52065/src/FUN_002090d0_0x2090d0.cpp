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

// Function: FUN_002090d0
// Address: 0x2090d0 - 0x2091e4
void FUN_002090d0_0x2090d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002090d0_0x2090d0");
#endif

    switch (ctx->pc) {
        case 0x209118u: goto label_209118;
        case 0x209188u: goto label_209188;
        case 0x2091b4u: goto label_2091b4;
        default: break;
    }

    ctx->pc = 0x2090d0u;

    // 0x2090d0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2090d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2090d4: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x2090d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2090d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2090D8u;
    {
        const bool branch_taken_0x2090d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2090d8) {
            ctx->pc = 0x2090F0u;
            goto label_2090f0;
        }
    }
    ctx->pc = 0x2090E0u;
    // 0x2090e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2090e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2090e4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2090e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2090e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2090E8u;
    {
        const bool branch_taken_0x2090e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2090ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090E8u;
        // 0x2090ec: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090e8) {
            ctx->pc = 0x2090F8u;
            goto label_2090f8;
        }
    }
    ctx->pc = 0x2090F0u;
label_2090f0:
    // 0x2090f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2090F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2090F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090F0u;
        // 0x2090f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2090F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2090F8u;
label_2090f8:
    // 0x2090f8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2090F8u;
    {
        const bool branch_taken_0x2090f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2090FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090F8u;
        // 0x2090fc: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090f8) {
            ctx->pc = 0x209128u;
            goto label_209128;
        }
    }
    ctx->pc = 0x209100u;
    // 0x209100: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x209100u;
    {
        const bool branch_taken_0x209100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209100) {
            ctx->pc = 0x209104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209100u;
            // 0x209104: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209118u;
            goto label_209118;
        }
    }
    ctx->pc = 0x209108u;
    // 0x209108: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x209108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20910c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x20910cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x209110: 0x3e00008  jr          $ra
    ctx->pc = 0x209110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209110u;
        // 0x209114: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209118u;
label_209118:
    // 0x209118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20911c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209120: 0x3e00008  jr          $ra
    ctx->pc = 0x209120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209120u;
        // 0x209124: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209128u;
label_209128:
    // 0x209128: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x209128u;
    {
        const bool branch_taken_0x209128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209128) {
            ctx->pc = 0x20912Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209128u;
            // 0x20912c: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x209144u;
            goto label_209144;
        }
    }
    ctx->pc = 0x209130u;
    // 0x209130: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x209130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x209134: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x209134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20913c: 0x3e00008  jr          $ra
    ctx->pc = 0x20913Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20913Cu;
        // 0x209140: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20913Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209144u;
label_209144:
    // 0x209144: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x209144u;
    {
        const bool branch_taken_0x209144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209144u;
        // 0x209148: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209144) {
            ctx->pc = 0x20916Cu;
            goto label_20916c;
        }
    }
    ctx->pc = 0x20914Cu;
    // 0x20914c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20914Cu;
    {
        const bool branch_taken_0x20914c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20914c) {
            ctx->pc = 0x209150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20914Cu;
            // 0x209150: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20915Cu;
            goto label_20915c;
        }
    }
    ctx->pc = 0x209154u;
    // 0x209154: 0x3e00008  jr          $ra
    ctx->pc = 0x209154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209154u;
        // 0x209158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20915Cu;
label_20915c:
    // 0x20915c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20915cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209160: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x209160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209164: 0x3e00008  jr          $ra
    ctx->pc = 0x209164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209164u;
        // 0x209168: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20916Cu;
label_20916c:
    // 0x20916c: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x20916Cu;
    {
        const bool branch_taken_0x20916c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20916c) {
            ctx->pc = 0x209170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20916Cu;
            // 0x209170: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209118;
        }
    }
    ctx->pc = 0x209174u;
    // 0x209174: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x209174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x209178: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x209178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20917c: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20917Cu;
    {
        const bool branch_taken_0x20917c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x20917c) {
            ctx->pc = 0x209180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20917Cu;
            // 0x209180: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209194u;
            goto label_209194;
        }
    }
    ctx->pc = 0x209184u;
    // 0x209184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209188:
    // 0x209188: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x209188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20918c: 0x3e00008  jr          $ra
    ctx->pc = 0x20918Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20918Cu;
        // 0x209190: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20918Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209194u;
label_209194:
    // 0x209194: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x209194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x209198: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x209198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x20919c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20919Cu;
    {
        const bool branch_taken_0x20919c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20919c) {
            ctx->pc = 0x2091A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20919Cu;
            // 0x2091a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209188;
        }
    }
    ctx->pc = 0x2091A4u;
    // 0x2091a4: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2091a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2091a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2091A8u;
    {
        const bool branch_taken_0x2091a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2091a8) {
            ctx->pc = 0x2091ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2091A8u;
            // 0x2091ac: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2091C0u;
            goto label_2091c0;
        }
    }
    ctx->pc = 0x2091B0u;
    // 0x2091b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2091b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2091b4:
    // 0x2091b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2091b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2091b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2091B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2091BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091B8u;
        // 0x2091bc: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2091B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2091C0u;
label_2091c0:
    // 0x2091c0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2091c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2091c4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2091c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2091c8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2091C8u;
    {
        const bool branch_taken_0x2091c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2091c8) {
            ctx->pc = 0x2091CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2091C8u;
            // 0x2091cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209188;
        }
    }
    ctx->pc = 0x2091D0u;
    // 0x2091d0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2091d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2091d4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2091D4u;
    {
        const bool branch_taken_0x2091d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2091D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091D4u;
        // 0x2091d8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2091d4) {
            ctx->pc = 0x2091B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2091b4;
        }
    }
    ctx->pc = 0x2091DCu;
    // 0x2091dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2091DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2091E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091DCu;
        // 0x2091e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2091DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2091E4u;
}
