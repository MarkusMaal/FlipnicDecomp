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

// Function: FUN_00209380
// Address: 0x209380 - 0x209418
void FUN_00209380_0x209380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209380_0x209380");
#endif

    switch (ctx->pc) {
        case 0x209398u: goto label_209398;
        case 0x2093b0u: goto label_2093b0;
        default: break;
    }

    ctx->pc = 0x209380u;

    // 0x209380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x209384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x209384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x209388: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x209388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20938c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x20938cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x209390: 0xc08227c  jal         func_2089F0
    ctx->pc = 0x209390u;
    SET_GPR_U32(ctx, 31, 0x209398u);
    ctx->pc = 0x209394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209390u;
    // 0x209394: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2089F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2089F0u, 0x209390u, 0x209398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209398u;
label_209398:
    // 0x209398: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x209398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20939c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x20939cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2093a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2093A0u;
    {
        const bool branch_taken_0x2093a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093A0u;
        // 0x2093a4: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093a0) {
            ctx->pc = 0x2093B0u;
            goto label_2093b0;
        }
    }
    ctx->pc = 0x2093A8u;
    // 0x2093a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2093A8u;
    {
        const bool branch_taken_0x2093a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093A8u;
        // 0x2093ac: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093a8) {
            ctx->pc = 0x2093B8u;
            goto label_2093b8;
        }
    }
    ctx->pc = 0x2093B0u;
label_2093b0:
    // 0x2093b0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2093B0u;
    {
        const bool branch_taken_0x2093b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093B0u;
        // 0x2093b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093b0) {
            ctx->pc = 0x20940Cu;
            goto label_20940c;
        }
    }
    ctx->pc = 0x2093B8u;
label_2093b8:
    // 0x2093b8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2093B8u;
    {
        const bool branch_taken_0x2093b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2093BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093B8u;
        // 0x2093bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093b8) {
            ctx->pc = 0x20940Cu;
            goto label_20940c;
        }
    }
    ctx->pc = 0x2093C0u;
    // 0x2093c0: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x2093c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2093c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2093C4u;
    {
        const bool branch_taken_0x2093c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093C4u;
        // 0x2093c8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093c4) {
            ctx->pc = 0x2093DCu;
            goto label_2093dc;
        }
    }
    ctx->pc = 0x2093CCu;
    // 0x2093cc: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2093CCu;
    {
        const bool branch_taken_0x2093cc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2093D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093CCu;
        // 0x2093d0: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093cc) {
            ctx->pc = 0x2093B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2093b0;
        }
    }
    ctx->pc = 0x2093D4u;
    // 0x2093d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2093D4u;
    {
        const bool branch_taken_0x2093d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2093d4) {
            ctx->pc = 0x2093D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2093D4u;
            // 0x2093d8: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2093E8u;
            goto label_2093e8;
        }
    }
    ctx->pc = 0x2093DCu;
label_2093dc:
    // 0x2093dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2093dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2093e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2093E0u;
    {
        const bool branch_taken_0x2093e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093E0u;
        // 0x2093e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093e0) {
            ctx->pc = 0x20940Cu;
            goto label_20940c;
        }
    }
    ctx->pc = 0x2093E8u;
label_2093e8:
    // 0x2093e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2093E8u;
    {
        const bool branch_taken_0x2093e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2093e8) {
            ctx->pc = 0x2093ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2093E8u;
            // 0x2093ec: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209400u;
            goto label_209400;
        }
    }
    ctx->pc = 0x2093F0u;
    // 0x2093f0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2093f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2093f4: 0x2482ffe2  addiu       $v0, $a0, -0x1E
    ctx->pc = 0x2093f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x2093f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2093F8u;
    {
        const bool branch_taken_0x2093f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093F8u;
        // 0x2093fc: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093f8) {
            ctx->pc = 0x20940Cu;
            goto label_20940c;
        }
    }
    ctx->pc = 0x209400u;
label_209400:
    // 0x209400: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x209400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x209404: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x209404u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x209408: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x209408u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_20940c:
    // 0x20940c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20940cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209410: 0x3e00008  jr          $ra
    ctx->pc = 0x209410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209410u;
        // 0x209414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209418u;
}
