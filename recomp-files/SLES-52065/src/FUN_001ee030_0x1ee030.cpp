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

// Function: FUN_001ee030
// Address: 0x1ee030 - 0x1ee0d8
void FUN_001ee030_0x1ee030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee030_0x1ee030");
#endif

    switch (ctx->pc) {
        case 0x1ee048u: goto label_1ee048;
        case 0x1ee060u: goto label_1ee060;
        case 0x1ee0a4u: goto label_1ee0a4;
        case 0x1ee0c0u: goto label_1ee0c0;
        default: break;
    }

    ctx->pc = 0x1ee030u;

    // 0x1ee030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ee034: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ee034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ee038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ee038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ee03c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ee03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ee040: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EE040u;
    SET_GPR_U32(ctx, 31, 0x1EE048u);
    ctx->pc = 0x1EE044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE040u;
    // 0x1ee044: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EE040u, 0x1EE048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE048u;
label_1ee048:
    // 0x1ee048: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1ee048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ee04c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ee04cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee050: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EE050u;
    {
        const bool branch_taken_0x1ee050 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1EE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE050u;
        // 0x1ee054: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee050) {
            ctx->pc = 0x1EE0B8u;
            goto label_1ee0b8;
        }
    }
    ctx->pc = 0x1EE058u;
    // 0x1ee058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ee058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee05c: 0x0  nop
    ctx->pc = 0x1ee05cu;
    // NOP
label_1ee060:
    // 0x1ee060: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ee060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ee064: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ee064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ee068: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EE068u;
    {
        const bool branch_taken_0x1ee068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee068) {
            ctx->pc = 0x1EE06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE068u;
            // 0x1ee06c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE0ACu;
            goto label_1ee0ac;
        }
    }
    ctx->pc = 0x1EE070u;
    // 0x1ee070: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1ee070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1ee074: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x1ee074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x1ee078: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1ee078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1ee07c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ee07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ee080: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1ee080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ee084: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE084u;
    {
        const bool branch_taken_0x1ee084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1EE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE084u;
        // 0x1ee088: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee084) {
            ctx->pc = 0x1EE098u;
            goto label_1ee098;
        }
    }
    ctx->pc = 0x1EE08Cu;
    // 0x1ee08c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1ee08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1ee090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee094: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ee094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ee098:
    // 0x1ee098: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1ee098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x1ee09c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EE09Cu;
    SET_GPR_U32(ctx, 31, 0x1EE0A4u);
    ctx->pc = 0x1EE0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE09Cu;
    // 0x1ee0a0: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EE09Cu, 0x1EE0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE0A4u;
label_1ee0a4:
    // 0x1ee0a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE0A4u;
    {
        const bool branch_taken_0x1ee0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0A4u;
        // 0x1ee0a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0a4) {
            ctx->pc = 0x1EE0C4u;
            goto label_1ee0c4;
        }
    }
    ctx->pc = 0x1EE0ACu;
label_1ee0ac:
    // 0x1ee0ac: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1ee0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ee0b0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1EE0B0u;
    {
        const bool branch_taken_0x1ee0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0B0u;
        // 0x1ee0b4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0b0) {
            ctx->pc = 0x1EE060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee060;
        }
    }
    ctx->pc = 0x1EE0B8u;
label_1ee0b8:
    // 0x1ee0b8: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EE0B8u;
    SET_GPR_U32(ctx, 31, 0x1EE0C0u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EE0B8u, 0x1EE0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE0C0u;
label_1ee0c0:
    // 0x1ee0c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ee0c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee0c4:
    // 0x1ee0c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ee0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee0c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ee0c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee0cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ee0ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0D0u;
        // 0x1ee0d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE0D8u;
}
