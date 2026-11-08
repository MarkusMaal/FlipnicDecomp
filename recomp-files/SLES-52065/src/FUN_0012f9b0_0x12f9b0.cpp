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

// Function: FUN_0012f9b0
// Address: 0x12f9b0 - 0x12fa78
void FUN_0012f9b0_0x12f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012f9b0_0x12f9b0");
#endif

    switch (ctx->pc) {
        case 0x12f9dcu: goto label_12f9dc;
        case 0x12f9e4u: goto label_12f9e4;
        case 0x12f9f8u: goto label_12f9f8;
        case 0x12fa28u: goto label_12fa28;
        default: break;
    }

    ctx->pc = 0x12f9b0u;

    // 0x12f9b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12f9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12f9b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12f9b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12f9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12f9bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12f9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12f9c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12f9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12f9c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12f9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12f9c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12f9c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12f9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12f9d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f9d4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x12F9D4u;
    {
        const bool branch_taken_0x12f9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9D4u;
        // 0x12f9d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9d4) {
            ctx->pc = 0x12FA40u;
            goto label_12fa40;
        }
    }
    ctx->pc = 0x12F9DCu;
label_12f9dc:
    // 0x12f9dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12F9DCu;
    {
        const bool branch_taken_0x12f9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9DCu;
        // 0x12f9e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9dc) {
            ctx->pc = 0x12FA00u;
            goto label_12fa00;
        }
    }
    ctx->pc = 0x12F9E4u;
label_12f9e4:
    // 0x12f9e4: 0x0  nop
    ctx->pc = 0x12f9e4u;
    // NOP
    // 0x12f9e8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x12f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x12f9ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12f9f0: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x12F9F0u;
    SET_GPR_U32(ctx, 31, 0x12F9F8u);
    ctx->pc = 0x12F9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F9F0u;
    // 0x12f9f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x12F9F0u, 0x12F9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F9F8u;
label_12f9f8:
    // 0x12f9f8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x12f9f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x12f9fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12f9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12fa00:
    // 0x12fa00: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x12fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x12fa04: 0x24423670  addiu       $v0, $v0, 0x3670
    ctx->pc = 0x12fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13936));
    // 0x12fa08: 0x53a021  addu        $s4, $v0, $s3
    ctx->pc = 0x12fa08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x12fa0c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x12fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x12fa10: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x12fa10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12fa14: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x12FA14u;
    {
        const bool branch_taken_0x12fa14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA14u;
        // 0x12fa18: 0x26950004  addiu       $s5, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa14) {
            ctx->pc = 0x12F9E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f9e4;
        }
    }
    ctx->pc = 0x12FA1Cu;
    // 0x12fa1c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x12fa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x12fa20: 0xc04018c  jal         func_100630
    ctx->pc = 0x12FA20u;
    SET_GPR_U32(ctx, 31, 0x12FA28u);
    ctx->pc = 0x12FA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FA20u;
    // 0x12fa24: 0x26910008  addiu       $s1, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x12FA20u, 0x12FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA28u;
label_12fa28:
    // 0x12fa28: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x12fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x12fa2c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x12fa2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x12fa30: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x12fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x12fa34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12fa34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12fa38: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x12fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x12fa3c: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x12fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_12fa40:
    // 0x12fa40: 0x8f8384b0  lw          $v1, -0x7B50($gp)
    ctx->pc = 0x12fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
    // 0x12fa44: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x12fa44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12fa48: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x12FA48u;
    {
        const bool branch_taken_0x12fa48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA48u;
        // 0x12fa4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa48) {
            ctx->pc = 0x12F9DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f9dc;
        }
    }
    ctx->pc = 0x12FA50u;
    // 0x12fa50: 0xaf8084b0  sw          $zero, -0x7B50($gp)
    ctx->pc = 0x12fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935728), GPR_U32(ctx, 0));
    // 0x12fa54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12fa54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fa58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12fa58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12fa5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12fa5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12fa60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12fa60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12fa64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12fa64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fa68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12fa68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fa6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12fa6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fa70: 0x3e00008  jr          $ra
    ctx->pc = 0x12FA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA70u;
        // 0x12fa74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FA78u;
}
