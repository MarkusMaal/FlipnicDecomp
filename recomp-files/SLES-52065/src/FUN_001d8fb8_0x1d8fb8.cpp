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

// Function: FUN_001d8fb8
// Address: 0x1d8fb8 - 0x1d90c0
void FUN_001d8fb8_0x1d8fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d8fb8_0x1d8fb8");
#endif

    switch (ctx->pc) {
        case 0x1d8fe0u: goto label_1d8fe0;
        case 0x1d9058u: goto label_1d9058;
        case 0x1d9090u: goto label_1d9090;
        default: break;
    }

    ctx->pc = 0x1d8fb8u;

    // 0x1d8fb8: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1d8fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1d8fbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d8fbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8fc0: 0xffb00190  sd          $s0, 0x190($sp)
    ctx->pc = 0x1d8fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 16));
    // 0x1d8fc4: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1d8fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1d8fc8: 0x260266c0  addiu       $v0, $s0, 0x66C0
    ctx->pc = 0x1d8fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 26304));
    // 0x1d8fcc: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x1d8fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x1d8fd0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1d8fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d8fd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8fd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8fd8: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x1d8fd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8fdc: 0x0  nop
    ctx->pc = 0x1d8fdcu;
    // NOP
label_1d8fe0:
    // 0x1d8fe0: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x1d8fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x1d8fe4: 0x5444000d  bnel        $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8FE4u;
    {
        const bool branch_taken_0x1d8fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d8fe4) {
            ctx->pc = 0x1D8FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8FE4u;
            // 0x1d8fe8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D901Cu;
            goto label_1d901c;
        }
    }
    ctx->pc = 0x1D8FECu;
    // 0x1d8fec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d8ff0: 0x5445000a  bnel        $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D8FF0u;
    {
        const bool branch_taken_0x1d8ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d8ff0) {
            ctx->pc = 0x1D8FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8FF0u;
            // 0x1d8ff4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D901Cu;
            goto label_1d901c;
        }
    }
    ctx->pc = 0x1D8FF8u;
    // 0x1d8ff8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1d8ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d8ffc: 0x54460007  bnel        $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8FFCu;
    {
        const bool branch_taken_0x1d8ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1d8ffc) {
            ctx->pc = 0x1D9000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8FFCu;
            // 0x1d9000: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D901Cu;
            goto label_1d901c;
        }
    }
    ctx->pc = 0x1D9004u;
    // 0x1d9004: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x1d9004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x1d9008: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d9008u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d900c: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x1d900cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x1d9010: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x1d9010u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x1d9014: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x1d9014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x1d9018: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d901c:
    // 0x1d901c: 0x29020020  slti        $v0, $t0, 0x20
    ctx->pc = 0x1d901cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d9020: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D9020u;
    {
        const bool branch_taken_0x1d9020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9020u;
        // 0x1d9024: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9020) {
            ctx->pc = 0x1D8FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8fe0;
        }
    }
    ctx->pc = 0x1D9028u;
    // 0x1d9028: 0xea102b  sltu        $v0, $a3, $t2
    ctx->pc = 0x1d9028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1d902c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D902Cu;
    {
        const bool branch_taken_0x1d902c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d902c) {
            ctx->pc = 0x1D9030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D902Cu;
            // 0x1d9030: 0xdfb00190  ld          $s0, 0x190($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D90B4u;
            goto label_1d90b4;
        }
    }
    ctx->pc = 0x1D9034u;
    // 0x1d9034: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d9034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9038: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d9038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d903c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1d903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d9040: 0x10a202b  sltu        $a0, $t0, $t2
    ctx->pc = 0x1d9040u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1d9044: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1d9044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1d9048: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D9048u;
    {
        const bool branch_taken_0x1d9048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9048u;
        // 0x1d904c: 0xafa30184  sw          $v1, 0x184($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9048) {
            ctx->pc = 0x1D9088u;
            goto label_1d9088;
        }
    }
    ctx->pc = 0x1D9050u;
    // 0x1d9050: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x1d9050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1d9054: 0x0  nop
    ctx->pc = 0x1d9054u;
    // NOP
label_1d9058:
    // 0x1d9058: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d9058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d905c: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x1d905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1d9060: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1d9060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d9064: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9064u;
    {
        const bool branch_taken_0x1d9064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9064u;
        // 0x1d9068: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9064) {
            ctx->pc = 0x1D907Cu;
            goto label_1d907c;
        }
    }
    ctx->pc = 0x1D906Cu;
    // 0x1d906c: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x1d906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x1d9070: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1d9070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1d9074: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d9074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d9078: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x1d9078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
label_1d907c:
    // 0x1d907c: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x1d907cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1d9080: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D9080u;
    {
        const bool branch_taken_0x1d9080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9080u;
        // 0x1d9084: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9080) {
            ctx->pc = 0x1D9058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9058;
        }
    }
    ctx->pc = 0x1D9088u;
label_1d9088:
    // 0x1d9088: 0xc0764ea  jal         func_1D93A8
    ctx->pc = 0x1D9088u;
    SET_GPR_U32(ctx, 31, 0x1D9090u);
    ctx->pc = 0x1D908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9088u;
    // 0x1d908c: 0x8fa40180  lw          $a0, 0x180($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D93A8u, 0x1D9088u, 0x1D9090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9090u;
label_1d9090:
    // 0x1d9090: 0x260566c0  addiu       $a1, $s0, 0x66C0
    ctx->pc = 0x1d9090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 26304));
    // 0x1d9094: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9098: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d9098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d909c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1d909cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d90a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d90a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d90a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d90ac: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x1d90acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x1d90b0: 0xdfb00190  ld          $s0, 0x190($sp)
    ctx->pc = 0x1d90b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_1d90b4:
    // 0x1d90b4: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x1d90b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1d90b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D90B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D90BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90B8u;
        // 0x1d90bc: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D90B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D90C0u;
}
