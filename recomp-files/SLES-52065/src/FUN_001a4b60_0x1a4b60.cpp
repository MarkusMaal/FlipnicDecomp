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

// Function: FUN_001a4b60
// Address: 0x1a4b60 - 0x1a4c04
void FUN_001a4b60_0x1a4b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4b60_0x1a4b60");
#endif

    switch (ctx->pc) {
        case 0x1a4b60u: goto label_1a4b60;
        case 0x1a4b64u: goto label_1a4b64;
        case 0x1a4b68u: goto label_1a4b68;
        case 0x1a4b6cu: goto label_1a4b6c;
        case 0x1a4b70u: goto label_1a4b70;
        case 0x1a4b74u: goto label_1a4b74;
        case 0x1a4b78u: goto label_1a4b78;
        case 0x1a4b7cu: goto label_1a4b7c;
        case 0x1a4b80u: goto label_1a4b80;
        case 0x1a4b84u: goto label_1a4b84;
        case 0x1a4b88u: goto label_1a4b88;
        case 0x1a4b8cu: goto label_1a4b8c;
        case 0x1a4b90u: goto label_1a4b90;
        case 0x1a4b94u: goto label_1a4b94;
        case 0x1a4b98u: goto label_1a4b98;
        case 0x1a4b9cu: goto label_1a4b9c;
        case 0x1a4ba0u: goto label_1a4ba0;
        case 0x1a4ba4u: goto label_1a4ba4;
        case 0x1a4ba8u: goto label_1a4ba8;
        case 0x1a4bacu: goto label_1a4bac;
        case 0x1a4bb0u: goto label_1a4bb0;
        case 0x1a4bb4u: goto label_1a4bb4;
        case 0x1a4bb8u: goto label_1a4bb8;
        case 0x1a4bbcu: goto label_1a4bbc;
        case 0x1a4bc0u: goto label_1a4bc0;
        case 0x1a4bc4u: goto label_1a4bc4;
        case 0x1a4bc8u: goto label_1a4bc8;
        case 0x1a4bccu: goto label_1a4bcc;
        case 0x1a4bd0u: goto label_1a4bd0;
        case 0x1a4bd4u: goto label_1a4bd4;
        case 0x1a4bd8u: goto label_1a4bd8;
        case 0x1a4bdcu: goto label_1a4bdc;
        case 0x1a4be0u: goto label_1a4be0;
        case 0x1a4be4u: goto label_1a4be4;
        case 0x1a4be8u: goto label_1a4be8;
        case 0x1a4becu: goto label_1a4bec;
        case 0x1a4bf0u: goto label_1a4bf0;
        case 0x1a4bf4u: goto label_1a4bf4;
        case 0x1a4bf8u: goto label_1a4bf8;
        case 0x1a4bfcu: goto label_1a4bfc;
        case 0x1a4c00u: goto label_1a4c00;
        default: break;
    }

    ctx->pc = 0x1a4b60u;

label_1a4b60:
    // 0x1a4b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a4b64:
    // 0x1a4b64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a4b68:
    // 0x1a4b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a4b6c:
    // 0x1a4b6c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_1a4b70:
    if (ctx->pc == 0x1A4B70u) {
        ctx->pc = 0x1A4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B6Cu;
        // 0x1a4b70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4B74u;
        goto label_1a4b74;
    }
    ctx->pc = 0x1A4B6Cu;
    {
        const bool branch_taken_0x1a4b6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B6Cu;
        // 0x1a4b70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b6c) {
            ctx->pc = 0x1A4BB8u;
            goto label_1a4bb8;
        }
    }
    ctx->pc = 0x1A4B74u;
label_1a4b74:
    // 0x1a4b74: 0x8e030680  lw          $v1, 0x680($s0)
    ctx->pc = 0x1a4b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
label_1a4b78:
    // 0x1a4b78: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_1a4b7c:
    if (ctx->pc == 0x1A4B7Cu) {
        ctx->pc = 0x1A4B80u;
        goto label_1a4b80;
    }
    ctx->pc = 0x1A4B78u;
    {
        const bool branch_taken_0x1a4b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4b78) {
            ctx->pc = 0x1A4BF4u;
            goto label_1a4bf4;
        }
    }
    ctx->pc = 0x1A4B80u;
label_1a4b80:
    // 0x1a4b80: 0x8e040684  lw          $a0, 0x684($s0)
    ctx->pc = 0x1a4b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1668)));
label_1a4b84:
    // 0x1a4b84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a4b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a4b88:
    // 0x1a4b88: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1a4b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1a4b8c:
    // 0x1a4b8c: 0x320f809  jalr        $t9
label_1a4b90:
    if (ctx->pc == 0x1A4B90u) {
        ctx->pc = 0x1A4B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B8Cu;
        // 0x1a4b90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4B94u;
        goto label_1a4b94;
    }
    ctx->pc = 0x1A4B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4B94u);
        ctx->pc = 0x1A4B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B8Cu;
        // 0x1a4b90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B8Cu, 0x1A4B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4B94u;
label_1a4b94:
    // 0x1a4b94: 0x8e040684  lw          $a0, 0x684($s0)
    ctx->pc = 0x1a4b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1668)));
label_1a4b98:
    // 0x1a4b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b9c:
    // 0x1a4b9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a4b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a4ba0:
    // 0x1a4ba0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a4ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a4ba4:
    // 0x1a4ba4: 0x320f809  jalr        $t9
label_1a4ba8:
    if (ctx->pc == 0x1A4BA8u) {
        ctx->pc = 0x1A4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BA4u;
        // 0x1a4ba8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BACu;
        goto label_1a4bac;
    }
    ctx->pc = 0x1A4BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4BACu);
        ctx->pc = 0x1A4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BA4u;
        // 0x1a4ba8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BA4u, 0x1A4BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4BACu;
label_1a4bac:
    // 0x1a4bac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4bb0:
    // 0x1a4bb0: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a4bb4:
    if (ctx->pc == 0x1A4BB4u) {
        ctx->pc = 0x1A4BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BB0u;
        // 0x1a4bb4: 0xae030680  sw          $v1, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BB8u;
        goto label_1a4bb8;
    }
    ctx->pc = 0x1A4BB0u;
    {
        const bool branch_taken_0x1a4bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BB0u;
        // 0x1a4bb4: 0xae030680  sw          $v1, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4bb0) {
            ctx->pc = 0x1A4BF4u;
            goto label_1a4bf4;
        }
    }
    ctx->pc = 0x1A4BB8u;
label_1a4bb8:
    // 0x1a4bb8: 0x8e030680  lw          $v1, 0x680($s0)
    ctx->pc = 0x1a4bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
label_1a4bbc:
    // 0x1a4bbc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1a4bc0:
    if (ctx->pc == 0x1A4BC0u) {
        ctx->pc = 0x1A4BC4u;
        goto label_1a4bc4;
    }
    ctx->pc = 0x1A4BBCu;
    {
        const bool branch_taken_0x1a4bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4bbc) {
            ctx->pc = 0x1A4BF4u;
            goto label_1a4bf4;
        }
    }
    ctx->pc = 0x1A4BC4u;
label_1a4bc4:
    // 0x1a4bc4: 0x8e040684  lw          $a0, 0x684($s0)
    ctx->pc = 0x1a4bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1668)));
label_1a4bc8:
    // 0x1a4bc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a4bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4bcc:
    // 0x1a4bcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a4bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a4bd0:
    // 0x1a4bd0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a4bd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a4bd4:
    // 0x1a4bd4: 0x320f809  jalr        $t9
label_1a4bd8:
    if (ctx->pc == 0x1A4BD8u) {
        ctx->pc = 0x1A4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BD4u;
        // 0x1a4bd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BDCu;
        goto label_1a4bdc;
    }
    ctx->pc = 0x1A4BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4BDCu);
        ctx->pc = 0x1A4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BD4u;
        // 0x1a4bd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BD4u, 0x1A4BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4BDCu;
label_1a4bdc:
    // 0x1a4bdc: 0x8e040684  lw          $a0, 0x684($s0)
    ctx->pc = 0x1a4bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1668)));
label_1a4be0:
    // 0x1a4be0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a4be0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a4be4:
    // 0x1a4be4: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1a4be4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1a4be8:
    // 0x1a4be8: 0x320f809  jalr        $t9
label_1a4bec:
    if (ctx->pc == 0x1A4BECu) {
        ctx->pc = 0x1A4BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BE8u;
        // 0x1a4bec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BF0u;
        goto label_1a4bf0;
    }
    ctx->pc = 0x1A4BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4BF0u);
        ctx->pc = 0x1A4BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BE8u;
        // 0x1a4bec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BE8u, 0x1A4BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4BF0u;
label_1a4bf0:
    // 0x1a4bf0: 0xae000680  sw          $zero, 0x680($s0)
    ctx->pc = 0x1a4bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 0));
label_1a4bf4:
    // 0x1a4bf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4bf8:
    // 0x1a4bf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4bfc:
    // 0x1a4bfc: 0x3e00008  jr          $ra
label_1a4c00:
    if (ctx->pc == 0x1A4C00u) {
        ctx->pc = 0x1A4C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BFCu;
        // 0x1a4c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4C04u;
        goto label_fallthrough_0x1a4bfc;
    }
    ctx->pc = 0x1A4BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BFCu;
        // 0x1a4c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4bfc:
    ctx->pc = 0x1A4C04u;
}
