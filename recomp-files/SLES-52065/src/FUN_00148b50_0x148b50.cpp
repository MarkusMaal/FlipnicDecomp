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

// Function: FUN_00148b50
// Address: 0x148b50 - 0x148bec
void FUN_00148b50_0x148b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00148b50_0x148b50");
#endif

    switch (ctx->pc) {
        case 0x148b8cu: goto label_148b8c;
        case 0x148b9cu: goto label_148b9c;
        case 0x148bacu: goto label_148bac;
        case 0x148bd0u: goto label_148bd0;
        default: break;
    }

    ctx->pc = 0x148b50u;

    // 0x148b50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x148b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x148b54: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x148b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x148b58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x148b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x148b5c: 0x24420f10  addiu       $v0, $v0, 0xF10
    ctx->pc = 0x148b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3856));
    // 0x148b60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x148b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x148b64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x148b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148b70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x148b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b74: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x148b74u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x210F10u));
    // 0x148b78: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x148b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b7c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x148b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x148b80: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x148b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x148b84: 0xc07d376  jal         func_1F4DD8
    ctx->pc = 0x148B84u;
    SET_GPR_U32(ctx, 31, 0x148B8Cu);
    ctx->pc = 0x148B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148B84u;
    // 0x148b88: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DD8u, 0x148B84u, 0x148B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B8Cu;
label_148b8c:
    // 0x148b8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148b90: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x148B90u;
    {
        const bool branch_taken_0x148b90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x148B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B90u;
        // 0x148b94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b90) {
            ctx->pc = 0x148BBCu;
            goto label_148bbc;
        }
    }
    ctx->pc = 0x148B98u;
    // 0x148b98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x148b98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148b9c:
    // 0x148b9c: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x148b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x148ba0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x148ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x148ba4: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x148BA4u;
    SET_GPR_U32(ctx, 31, 0x148BACu);
    ctx->pc = 0x148BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148BA4u;
    // 0x148ba8: 0x24440130  addiu       $a0, $v0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x148BA4u, 0x148BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148BACu;
label_148bac:
    // 0x148bac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x148bacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x148bb0: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x148bb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x148bb4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x148BB4u;
    {
        const bool branch_taken_0x148bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BB4u;
        // 0x148bb8: 0x267300b0  addiu       $s3, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148bb4) {
            ctx->pc = 0x148B9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148b9c;
        }
    }
    ctx->pc = 0x148BBCu;
label_148bbc:
    // 0x148bbc: 0x0  nop
    ctx->pc = 0x148bbcu;
    // NOP
    // 0x148bc0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148BC0u;
    {
        const bool branch_taken_0x148bc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x148BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BC0u;
        // 0x148bc4: 0x26240290  addiu       $a0, $s1, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148bc0) {
            ctx->pc = 0x148BD0u;
            goto label_148bd0;
        }
    }
    ctx->pc = 0x148BC8u;
    // 0x148bc8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x148BC8u;
    SET_GPR_U32(ctx, 31, 0x148BD0u);
    ctx->pc = 0x148BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148BC8u;
    // 0x148bcc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x148BC8u, 0x148BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148BD0u;
label_148bd0:
    // 0x148bd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x148bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x148bd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x148bd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148bd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x148bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148bdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148be4: 0x3e00008  jr          $ra
    ctx->pc = 0x148BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BE4u;
        // 0x148be8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148BECu;
}
