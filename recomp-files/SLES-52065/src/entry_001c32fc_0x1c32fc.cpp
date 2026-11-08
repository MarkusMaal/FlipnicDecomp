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

// Function: entry_001c32fc
// Address: 0x1c32fc - 0x1c33c4
void entry_001c32fc_0x1c32fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c32fc_0x1c32fc");
#endif

    switch (ctx->pc) {
        case 0x1c3304u: goto label_1c3304;
        case 0x1c3310u: goto label_1c3310;
        default: break;
    }

    ctx->pc = 0x1c32fcu;

    // 0x1c32fc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C32FCu;
    SET_GPR_U32(ctx, 31, 0x1C3304u);
    ctx->pc = 0x1C3300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32FCu;
    // 0x1c3300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C32FCu, 0x1C3304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3304u;
label_1c3304:
    // 0x1c3304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3308: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3308u;
    SET_GPR_U32(ctx, 31, 0x1C3310u);
    ctx->pc = 0x1C330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3308u;
    // 0x1c330c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3308u, 0x1C3310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3310u;
label_1c3310:
    // 0x1c3310: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1c3310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1c3314: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1c3314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1c3318: 0x10620070  beq         $v1, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x1C3318u;
    {
        const bool branch_taken_0x1c3318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3318u;
        // 0x1c331c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3318) {
            ctx->pc = 0x1C34DCu;
            return;
        }
    }
    ctx->pc = 0x1C3320u;
    // 0x1c3320: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c3320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c3324: 0x10620069  beq         $v1, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1C3324u;
    {
        const bool branch_taken_0x1c3324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3324u;
        // 0x1c3328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3324) {
            ctx->pc = 0x1C34CCu;
            return;
        }
    }
    ctx->pc = 0x1C332Cu;
    // 0x1c332c: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c3330: 0x1062005f  beq         $v1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1C3330u;
    {
        const bool branch_taken_0x1c3330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3330u;
        // 0x1c3334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3330) {
            ctx->pc = 0x1C34B0u;
            return;
        }
    }
    ctx->pc = 0x1C3338u;
    // 0x1c3338: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c3338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c333c: 0x10650058  beq         $v1, $a1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1C333Cu;
    {
        const bool branch_taken_0x1c333c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C3340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C333Cu;
        // 0x1c3340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c333c) {
            ctx->pc = 0x1C34A0u;
            return;
        }
    }
    ctx->pc = 0x1C3344u;
    // 0x1c3344: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1c3344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1c3348: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C3348u;
    {
        const bool branch_taken_0x1c3348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3348u;
        // 0x1c334c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3348) {
            ctx->pc = 0x1C3484u;
            return;
        }
    }
    ctx->pc = 0x1C3350u;
    // 0x1c3350: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1c3350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c3354: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1C3354u;
    {
        const bool branch_taken_0x1c3354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3354u;
        // 0x1c3358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3354) {
            ctx->pc = 0x1C3468u;
            return;
        }
    }
    ctx->pc = 0x1C335Cu;
    // 0x1c335c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1c335cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1c3360: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1C3360u;
    {
        const bool branch_taken_0x1c3360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3360u;
        // 0x1c3364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3360) {
            ctx->pc = 0x1C344Cu;
            return;
        }
    }
    ctx->pc = 0x1C3368u;
    // 0x1c3368: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1c3368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1c336c: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1C336Cu;
    {
        const bool branch_taken_0x1c336c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C336Cu;
        // 0x1c3370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c336c) {
            ctx->pc = 0x1C342Cu;
            return;
        }
    }
    ctx->pc = 0x1C3374u;
    // 0x1c3374: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1c3374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c3378: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C3378u;
    {
        const bool branch_taken_0x1c3378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3378u;
        // 0x1c337c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3378) {
            ctx->pc = 0x1C3430u;
            return;
        }
    }
    ctx->pc = 0x1C3380u;
    // 0x1c3380: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x1c3380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1c3384: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C3384u;
    {
        const bool branch_taken_0x1c3384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3384u;
        // 0x1c3388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3384) {
            ctx->pc = 0x1C3410u;
            return;
        }
    }
    ctx->pc = 0x1C338Cu;
    // 0x1c338c: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1c338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c3390: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C3390u;
    {
        const bool branch_taken_0x1c3390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3390u;
        // 0x1c3394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3390) {
            ctx->pc = 0x1C33F4u;
            return;
        }
    }
    ctx->pc = 0x1C3398u;
    // 0x1c3398: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c3398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c339c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C339Cu;
    {
        const bool branch_taken_0x1c339c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C339Cu;
        // 0x1c33a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c339c) {
            ctx->pc = 0x1C33E4u;
            return;
        }
    }
    ctx->pc = 0x1C33A4u;
    // 0x1c33a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c33a8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C33A8u;
    {
        const bool branch_taken_0x1c33a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33A8u;
        // 0x1c33ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33a8) {
            ctx->pc = 0x1C33D4u;
            return;
        }
    }
    ctx->pc = 0x1C33B0u;
    // 0x1c33b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c33b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C33B4u;
    {
        const bool branch_taken_0x1c33b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C33B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33B4u;
        // 0x1c33b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33b4) {
            ctx->pc = 0x1C33C4u;
            return;
        }
    }
    ctx->pc = 0x1C33BCu;
    // 0x1c33bc: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1C33BCu;
    {
        const bool branch_taken_0x1c33bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33BCu;
        // 0x1c33c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33bc) {
            ctx->pc = 0x1C34F4u;
            return;
        }
    }
    ctx->pc = 0x1C33C4u;
}
