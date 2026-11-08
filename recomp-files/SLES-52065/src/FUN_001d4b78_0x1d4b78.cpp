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

// Function: FUN_001d4b78
// Address: 0x1d4b78 - 0x1d4c4c
void FUN_001d4b78_0x1d4b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4b78_0x1d4b78");
#endif

    switch (ctx->pc) {
        case 0x1d4b78u: goto label_1d4b78;
        case 0x1d4b7cu: goto label_1d4b7c;
        case 0x1d4b80u: goto label_1d4b80;
        case 0x1d4b84u: goto label_1d4b84;
        case 0x1d4b88u: goto label_1d4b88;
        case 0x1d4b8cu: goto label_1d4b8c;
        case 0x1d4b90u: goto label_1d4b90;
        case 0x1d4b94u: goto label_1d4b94;
        case 0x1d4b98u: goto label_1d4b98;
        case 0x1d4b9cu: goto label_1d4b9c;
        case 0x1d4ba0u: goto label_1d4ba0;
        case 0x1d4ba4u: goto label_1d4ba4;
        case 0x1d4ba8u: goto label_1d4ba8;
        case 0x1d4bacu: goto label_1d4bac;
        case 0x1d4bb0u: goto label_1d4bb0;
        case 0x1d4bb4u: goto label_1d4bb4;
        case 0x1d4bb8u: goto label_1d4bb8;
        case 0x1d4bbcu: goto label_1d4bbc;
        case 0x1d4bc0u: goto label_1d4bc0;
        case 0x1d4bc4u: goto label_1d4bc4;
        case 0x1d4bc8u: goto label_1d4bc8;
        case 0x1d4bccu: goto label_1d4bcc;
        case 0x1d4bd0u: goto label_1d4bd0;
        case 0x1d4bd4u: goto label_1d4bd4;
        case 0x1d4bd8u: goto label_1d4bd8;
        case 0x1d4bdcu: goto label_1d4bdc;
        case 0x1d4be0u: goto label_1d4be0;
        case 0x1d4be4u: goto label_1d4be4;
        case 0x1d4be8u: goto label_1d4be8;
        case 0x1d4becu: goto label_1d4bec;
        case 0x1d4bf0u: goto label_1d4bf0;
        case 0x1d4bf4u: goto label_1d4bf4;
        case 0x1d4bf8u: goto label_1d4bf8;
        case 0x1d4bfcu: goto label_1d4bfc;
        case 0x1d4c00u: goto label_1d4c00;
        case 0x1d4c04u: goto label_1d4c04;
        case 0x1d4c08u: goto label_1d4c08;
        case 0x1d4c0cu: goto label_1d4c0c;
        case 0x1d4c10u: goto label_1d4c10;
        case 0x1d4c14u: goto label_1d4c14;
        case 0x1d4c18u: goto label_1d4c18;
        case 0x1d4c1cu: goto label_1d4c1c;
        case 0x1d4c20u: goto label_1d4c20;
        case 0x1d4c24u: goto label_1d4c24;
        case 0x1d4c28u: goto label_1d4c28;
        case 0x1d4c2cu: goto label_1d4c2c;
        case 0x1d4c30u: goto label_1d4c30;
        case 0x1d4c34u: goto label_1d4c34;
        case 0x1d4c38u: goto label_1d4c38;
        case 0x1d4c3cu: goto label_1d4c3c;
        case 0x1d4c40u: goto label_1d4c40;
        case 0x1d4c44u: goto label_1d4c44;
        case 0x1d4c48u: goto label_1d4c48;
        default: break;
    }

    ctx->pc = 0x1d4b78u;

label_1d4b78:
    // 0x1d4b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d4b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d4b7c:
    // 0x1d4b7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d4b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d4b80:
    // 0x1d4b80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d4b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b84:
    // 0x1d4b84: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d4b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1d4b88:
    // 0x1d4b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d4b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d4b8c:
    // 0x1d4b8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d4b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d4b90:
    // 0x1d4b90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d4b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d4b94:
    // 0x1d4b94: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d4b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1d4b98:
    // 0x1d4b98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d4b9c:
    // 0x1d4b9c: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1d4b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d4ba0:
    // 0x1d4ba0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d4ba4:
    if (ctx->pc == 0x1D4BA4u) {
        ctx->pc = 0x1D4BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BA0u;
        // 0x1d4ba4: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BA8u;
        goto label_1d4ba8;
    }
    ctx->pc = 0x1D4BA0u;
    {
        const bool branch_taken_0x1d4ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BA0u;
        // 0x1d4ba4: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ba0) {
            ctx->pc = 0x1D4BB0u;
            goto label_1d4bb0;
        }
    }
    ctx->pc = 0x1D4BA8u;
label_1d4ba8:
    // 0x1d4ba8: 0xc07512c  jal         func_1D44B0
label_1d4bac:
    if (ctx->pc == 0x1D4BACu) {
        ctx->pc = 0x1D4BB0u;
        goto label_1d4bb0;
    }
    ctx->pc = 0x1D4BA8u;
    SET_GPR_U32(ctx, 31, 0x1D4BB0u);
    ctx->pc = 0x1D44B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D44B0u, 0x1D4BA8u, 0x1D4BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BB0u;
label_1d4bb0:
    // 0x1d4bb0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1d4bb4:
    // 0x1d4bb4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d4bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1d4bb8:
    // 0x1d4bb8: 0x24520480  addiu       $s2, $v0, 0x480
    ctx->pc = 0x1d4bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
label_1d4bbc:
    // 0x1d4bbc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d4bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4bc0:
    // 0x1d4bc0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1d4bc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4bc4:
    // 0x1d4bc4: 0x0  nop
    ctx->pc = 0x1d4bc4u;
    // NOP
label_1d4bc8:
    // 0x1d4bc8: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1d4bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
label_1d4bcc:
    // 0x1d4bcc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d4bccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1d4bd0:
    // 0x1d4bd0: 0xde2200a0  ld          $v0, 0xA0($s1)
    ctx->pc = 0x1d4bd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 160)));
label_1d4bd4:
    // 0x1d4bd4: 0x931814  dsllv       $v1, $s3, $a0
    ctx->pc = 0x1d4bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (GPR_U32(ctx, 4) & 0x3F));
label_1d4bd8:
    // 0x1d4bd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1d4bdc:
    // 0x1d4bdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d4be0:
    if (ctx->pc == 0x1D4BE0u) {
        ctx->pc = 0x1D4BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BDCu;
        // 0x1d4be0: 0x66100001  daddiu      $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BE4u;
        goto label_1d4be4;
    }
    ctx->pc = 0x1D4BDCu;
    {
        const bool branch_taken_0x1d4bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BDCu;
        // 0x1d4be0: 0x66100001  daddiu      $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bdc) {
            ctx->pc = 0x1D4BF0u;
            goto label_1d4bf0;
        }
    }
    ctx->pc = 0x1D4BE4u;
label_1d4be4:
    // 0x1d4be4: 0xc07827a  jal         func_1E09E8
label_1d4be8:
    if (ctx->pc == 0x1D4BE8u) {
        ctx->pc = 0x1D4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BE4u;
        // 0x1d4be8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BECu;
        goto label_1d4bec;
    }
    ctx->pc = 0x1D4BE4u;
    SET_GPR_U32(ctx, 31, 0x1D4BECu);
    ctx->pc = 0x1D4BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4BE4u;
    // 0x1d4be8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E09E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E09E8u, 0x1D4BE4u, 0x1D4BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BECu;
label_1d4bec:
    // 0x1d4bec: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x1d4becu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_1d4bf0:
    // 0x1d4bf0: 0x2e020030  sltiu       $v0, $s0, 0x30
    ctx->pc = 0x1d4bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
label_1d4bf4:
    // 0x1d4bf4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1d4bf8:
    if (ctx->pc == 0x1D4BF8u) {
        ctx->pc = 0x1D4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BF4u;
        // 0x1d4bf8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BFCu;
        goto label_1d4bfc;
    }
    ctx->pc = 0x1D4BF4u;
    {
        const bool branch_taken_0x1d4bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BF4u;
        // 0x1d4bf8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bf4) {
            ctx->pc = 0x1D4BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4bc8;
        }
    }
    ctx->pc = 0x1D4BFCu;
label_1d4bfc:
    // 0x1d4bfc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d4c00:
    // 0x1d4c00: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1d4c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1d4c04:
    // 0x1d4c04: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1d4c08:
    if (ctx->pc == 0x1D4C08u) {
        ctx->pc = 0x1D4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C04u;
        // 0x1d4c08: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C0Cu;
        goto label_1d4c0c;
    }
    ctx->pc = 0x1D4C04u;
    {
        const bool branch_taken_0x1d4c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C04u;
        // 0x1d4c08: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c04) {
            ctx->pc = 0x1D4C2Cu;
            goto label_1d4c2c;
        }
    }
    ctx->pc = 0x1D4C0Cu;
label_1d4c0c:
    // 0x1d4c0c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d4c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1d4c10:
    // 0x1d4c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c14:
    // 0x1d4c14: 0x8c620540  lw          $v0, 0x540($v1)
    ctx->pc = 0x1d4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1344)));
label_1d4c18:
    // 0x1d4c18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d4c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d4c1c:
    // 0x1d4c1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c20:
    // 0x1d4c20: 0x40f809  jalr        $v0
label_1d4c24:
    if (ctx->pc == 0x1D4C24u) {
        ctx->pc = 0x1D4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C20u;
        // 0x1d4c24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C28u;
        goto label_1d4c28;
    }
    ctx->pc = 0x1D4C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4C28u);
        ctx->pc = 0x1D4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C20u;
        // 0x1d4c24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4C20u, 0x1D4C28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4C28u;
label_1d4c28:
    // 0x1d4c28: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1d4c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c2c:
    // 0x1d4c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d4c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4c30:
    // 0x1d4c30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d4c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d4c34:
    // 0x1d4c34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d4c34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4c38:
    // 0x1d4c38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d4c38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d4c3c:
    // 0x1d4c3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d4c3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d4c40:
    // 0x1d4c40: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d4c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d4c44:
    // 0x1d4c44: 0x3e00008  jr          $ra
label_1d4c48:
    if (ctx->pc == 0x1D4C48u) {
        ctx->pc = 0x1D4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C44u;
        // 0x1d4c48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C4Cu;
        goto label_fallthrough_0x1d4c44;
    }
    ctx->pc = 0x1D4C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C44u;
        // 0x1d4c48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d4c44:
    ctx->pc = 0x1D4C4Cu;
}
