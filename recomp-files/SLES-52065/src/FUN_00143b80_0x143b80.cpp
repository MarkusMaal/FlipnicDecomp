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

// Function: FUN_00143b80
// Address: 0x143b80 - 0x143c94
void FUN_00143b80_0x143b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00143b80_0x143b80");
#endif

    switch (ctx->pc) {
        case 0x143bf4u: goto label_143bf4;
        case 0x143c00u: goto label_143c00;
        case 0x143c24u: goto label_143c24;
        case 0x143c34u: goto label_143c34;
        default: break;
    }

    ctx->pc = 0x143b80u;

    // 0x143b80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x143b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x143b84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x143b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x143b88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x143b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x143b8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x143b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x143b90: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x143b90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x143b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x143b98: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x143b98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x143b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x143ba0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x143ba0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ba4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x143ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x143ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143bac: 0x16b40003  bne         $s5, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x143BACu;
    {
        const bool branch_taken_0x143bac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        ctx->pc = 0x143BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BACu;
        // 0x143bb0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143bac) {
            ctx->pc = 0x143BBCu;
            goto label_143bbc;
        }
    }
    ctx->pc = 0x143BB4u;
    // 0x143bb4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x143BB4u;
    {
        const bool branch_taken_0x143bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BB4u;
        // 0x143bb8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143bb4) {
            ctx->pc = 0x143C6Cu;
            goto label_143c6c;
        }
    }
    ctx->pc = 0x143BBCu;
label_143bbc:
    // 0x143bbc: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x143bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x143bc0: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x143bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x143bc4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x143bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x143bc8: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x143bc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143bcc: 0x2741023  subu        $v0, $s3, $s4
    ctx->pc = 0x143bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x143bd0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143BD0u;
    {
        const bool branch_taken_0x143bd0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x143BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BD0u;
        // 0x143bd4: 0x28143  sra         $s0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143bd0) {
            ctx->pc = 0x143BE0u;
            goto label_143be0;
        }
    }
    ctx->pc = 0x143BD8u;
    // 0x143bd8: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x143bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x143bdc: 0x28143  sra         $s0, $v0, 5
    ctx->pc = 0x143bdcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 5));
label_143be0:
    // 0x143be0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x143BE0u;
    {
        const bool branch_taken_0x143be0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x143BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BE0u;
        // 0x143be4: 0x293082b  sltu        $at, $s4, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143be0) {
            ctx->pc = 0x143C10u;
            goto label_143c10;
        }
    }
    ctx->pc = 0x143BE8u;
    // 0x143be8: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x143be8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143bec: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x143BECu;
    {
        const bool branch_taken_0x143bec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BECu;
        // 0x143bf0: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143bec) {
            ctx->pc = 0x143C10u;
            goto label_143c10;
        }
    }
    ctx->pc = 0x143BF4u;
label_143bf4:
    // 0x143bf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143bf8: 0xc050f28  jal         func_143CA0
    ctx->pc = 0x143BF8u;
    SET_GPR_U32(ctx, 31, 0x143C00u);
    ctx->pc = 0x143BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143BF8u;
    // 0x143bfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143CA0u, 0x143BF8u, 0x143C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C00u;
label_143c00:
    // 0x143c00: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x143c00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x143c04: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x143c04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x143c08: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x143C08u;
    {
        const bool branch_taken_0x143c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C08u;
        // 0x143c0c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c08) {
            ctx->pc = 0x143BF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143bf4;
        }
    }
    ctx->pc = 0x143C10u;
label_143c10:
    // 0x143c10: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x143c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x143c14: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x143c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x143c18: 0x213082b  sltu        $at, $s0, $s3
    ctx->pc = 0x143c18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x143c1c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x143C1Cu;
    {
        const bool branch_taken_0x143c1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143c1c) {
            ctx->pc = 0x143C48u;
            goto label_143c48;
        }
    }
    ctx->pc = 0x143C24u;
label_143c24:
    // 0x143c24: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143C24u;
    {
        const bool branch_taken_0x143c24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x143c24) {
            ctx->pc = 0x143C34u;
            goto label_143c34;
        }
    }
    ctx->pc = 0x143C2Cu;
    // 0x143c2c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x143C2Cu;
    SET_GPR_U32(ctx, 31, 0x143C34u);
    ctx->pc = 0x143C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C2Cu;
    // 0x143c30: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x143C2Cu, 0x143C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C34u;
label_143c34:
    // 0x143c34: 0x0  nop
    ctx->pc = 0x143c34u;
    // NOP
    // 0x143c38: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x143c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x143c3c: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x143c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x143c40: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x143C40u;
    {
        const bool branch_taken_0x143c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143c40) {
            ctx->pc = 0x143C24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143c24;
        }
    }
    ctx->pc = 0x143C48u;
label_143c48:
    // 0x143c48: 0x2951023  subu        $v0, $s4, $s5
    ctx->pc = 0x143c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x143c4c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143C4Cu;
    {
        const bool branch_taken_0x143c4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x143C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C4Cu;
        // 0x143c50: 0x22143  sra         $a0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c4c) {
            ctx->pc = 0x143C5Cu;
            goto label_143c5c;
        }
    }
    ctx->pc = 0x143C54u;
    // 0x143c54: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x143c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x143c58: 0x22143  sra         $a0, $v0, 5
    ctx->pc = 0x143c58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
label_143c5c:
    // 0x143c5c: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x143c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x143c60: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x143c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c64: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x143c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x143c68: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x143c68u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
label_143c6c:
    // 0x143c6c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x143c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x143c70: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x143c70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x143c74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x143c74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143c78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x143c78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143c7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x143c7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143c80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143c84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x143C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C8Cu;
        // 0x143c90: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143C94u;
}
