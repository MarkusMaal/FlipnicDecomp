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

// Function: FUN_002092f0
// Address: 0x2092f0 - 0x20937c
void FUN_002092f0_0x2092f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002092f0_0x2092f0");
#endif

    switch (ctx->pc) {
        case 0x209308u: goto label_209308;
        case 0x209320u: goto label_209320;
        default: break;
    }

    ctx->pc = 0x2092f0u;

    // 0x2092f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2092f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2092f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2092f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2092f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2092f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2092fc: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2092fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x209300: 0xc08227c  jal         func_2089F0
    ctx->pc = 0x209300u;
    SET_GPR_U32(ctx, 31, 0x209308u);
    ctx->pc = 0x209304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209300u;
    // 0x209304: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2089F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2089F0u, 0x209300u, 0x209308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209308u;
label_209308:
    // 0x209308: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x209308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20930c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x20930cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x209310: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x209310u;
    {
        const bool branch_taken_0x209310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209310u;
        // 0x209314: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209310) {
            ctx->pc = 0x209320u;
            goto label_209320;
        }
    }
    ctx->pc = 0x209318u;
    // 0x209318: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x209318u;
    {
        const bool branch_taken_0x209318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209318u;
        // 0x20931c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209318) {
            ctx->pc = 0x209328u;
            goto label_209328;
        }
    }
    ctx->pc = 0x209320u;
label_209320:
    // 0x209320: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x209320u;
    {
        const bool branch_taken_0x209320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209320u;
        // 0x209324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209320) {
            ctx->pc = 0x209370u;
            goto label_209370;
        }
    }
    ctx->pc = 0x209328u;
label_209328:
    // 0x209328: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209328u;
    {
        const bool branch_taken_0x209328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209328u;
        // 0x20932c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209328) {
            ctx->pc = 0x209340u;
            goto label_209340;
        }
    }
    ctx->pc = 0x209330u;
    // 0x209330: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x209330u;
    {
        const bool branch_taken_0x209330 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x209334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209330u;
        // 0x209334: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209330) {
            ctx->pc = 0x209320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209320;
        }
    }
    ctx->pc = 0x209338u;
    // 0x209338: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x209338u;
    {
        const bool branch_taken_0x209338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209338u;
        // 0x20933c: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209338) {
            ctx->pc = 0x209358u;
            goto label_209358;
        }
    }
    ctx->pc = 0x209340u;
label_209340:
    // 0x209340: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x209340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x209344: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x209344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x209348: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x209348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20934c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x20934cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x209350: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x209350u;
    {
        const bool branch_taken_0x209350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209350u;
        // 0x209354: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209350) {
            ctx->pc = 0x209370u;
            goto label_209370;
        }
    }
    ctx->pc = 0x209358u;
label_209358:
    // 0x209358: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x209358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x20935c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x20935cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x209360: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x209360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x209364: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x209364u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x209368: 0x22023  negu        $a0, $v0
    ctx->pc = 0x209368u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x20936c: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x20936cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_209370:
    // 0x209370: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x209370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209374: 0x3e00008  jr          $ra
    ctx->pc = 0x209374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209374u;
        // 0x209378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20937Cu;
}
