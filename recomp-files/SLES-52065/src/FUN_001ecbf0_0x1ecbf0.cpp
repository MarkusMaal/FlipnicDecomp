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

// Function: FUN_001ecbf0
// Address: 0x1ecbf0 - 0x1eccc0
void FUN_001ecbf0_0x1ecbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ecbf0_0x1ecbf0");
#endif

    switch (ctx->pc) {
        case 0x1ecc28u: goto label_1ecc28;
        case 0x1ecc38u: goto label_1ecc38;
        case 0x1ecc70u: goto label_1ecc70;
        default: break;
    }

    ctx->pc = 0x1ecbf0u;

    // 0x1ecbf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ecbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ecbf4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ecbf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecbf8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ecbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ecbfc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ecbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ecc00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ecc00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecc04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ecc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ecc08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ecc08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecc0c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ecc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ecc10: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ecc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ecc14: 0x1a400021  blez        $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x1ECC14u;
    {
        const bool branch_taken_0x1ecc14 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1ECC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC14u;
        // 0x1ecc18: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc14) {
            ctx->pc = 0x1ECC9Cu;
            goto label_1ecc9c;
        }
    }
    ctx->pc = 0x1ECC1Cu;
    // 0x1ecc1c: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1ecc1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    // 0x1ecc20: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ecc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ecc24: 0x0  nop
    ctx->pc = 0x1ecc24u;
    // NOP
label_1ecc28:
    // 0x1ecc28: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x1ecc28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ecc2c: 0x8c44c3e8  lw          $a0, -0x3C18($v0)
    ctx->pc = 0x1ecc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951912)));
    // 0x1ecc30: 0x2838021  addu        $s0, $s4, $v1
    ctx->pc = 0x1ecc30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1ecc34: 0x0  nop
    ctx->pc = 0x1ecc34u;
    // NOP
label_1ecc38:
    // 0x1ecc38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ecc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ecc3c: 0x0  nop
    ctx->pc = 0x1ecc3cu;
    // NOP
    // 0x1ecc40: 0x0  nop
    ctx->pc = 0x1ecc40u;
    // NOP
    // 0x1ecc44: 0x0  nop
    ctx->pc = 0x1ecc44u;
    // NOP
    // 0x1ecc48: 0x0  nop
    ctx->pc = 0x1ecc48u;
    // NOP
    // 0x1ecc4c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ECC4Cu;
    {
        const bool branch_taken_0x1ecc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc4c) {
            ctx->pc = 0x1ECC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecc38;
        }
    }
    ctx->pc = 0x1ECC54u;
    // 0x1ecc54: 0x2665c3d0  addiu       $a1, $s3, -0x3C30
    ctx->pc = 0x1ecc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951888));
    // 0x1ecc58: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1ecc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1ecc5c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ecc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ecc60: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1ecc60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ecc64: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x1ecc64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ecc68: 0xc07b232  jal         func_1EC8C8
    ctx->pc = 0x1ECC68u;
    SET_GPR_U32(ctx, 31, 0x1ECC70u);
    ctx->pc = 0x1ECC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC68u;
    // 0x1ecc6c: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC8C8u, 0x1ECC68u, 0x1ECC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC70u;
label_1ecc70:
    // 0x1ecc70: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1ecc70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ecc74: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ecc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ecc78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECC78u;
    {
        const bool branch_taken_0x1ecc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ECC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC78u;
        // 0x1ecc7c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc78) {
            ctx->pc = 0x1ECC88u;
            goto label_1ecc88;
        }
    }
    ctx->pc = 0x1ECC80u;
    // 0x1ecc80: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECC80u;
    {
        const bool branch_taken_0x1ecc80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC80u;
        // 0x1ecc84: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc80) {
            ctx->pc = 0x1ECC90u;
            goto label_1ecc90;
        }
    }
    ctx->pc = 0x1ECC88u;
label_1ecc88:
    // 0x1ecc88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECC88u;
    {
        const bool branch_taken_0x1ecc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC88u;
        // 0x1ecc8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc88) {
            ctx->pc = 0x1ECCA0u;
            goto label_1ecca0;
        }
    }
    ctx->pc = 0x1ECC90u;
label_1ecc90:
    // 0x1ecc90: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x1ecc90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1ecc94: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1ECC94u;
    {
        const bool branch_taken_0x1ecc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC94u;
        // 0x1ecc98: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc94) {
            ctx->pc = 0x1ECC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecc28;
        }
    }
    ctx->pc = 0x1ECC9Cu;
label_1ecc9c:
    // 0x1ecc9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ecc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ecca0:
    // 0x1ecca0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ecca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ecca4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ecca4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ecca8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ecca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eccac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1eccacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eccb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1eccb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eccb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eccb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eccb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCB8u;
        // 0x1eccbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECCC0u;
}
