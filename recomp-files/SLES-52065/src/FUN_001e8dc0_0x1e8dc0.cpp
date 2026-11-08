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

// Function: FUN_001e8dc0
// Address: 0x1e8dc0 - 0x1e8e4c
void FUN_001e8dc0_0x1e8dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e8dc0_0x1e8dc0");
#endif

    switch (ctx->pc) {
        case 0x1e8df8u: goto label_1e8df8;
        case 0x1e8e18u: goto label_1e8e18;
        case 0x1e8e28u: goto label_1e8e28;
        case 0x1e8e30u: goto label_1e8e30;
        default: break;
    }

    ctx->pc = 0x1e8dc0u;

    // 0x1e8dc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e8dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e8dc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e8dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e8dc8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1e8dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1e8dcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8dd0: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e8dd0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    // 0x1e8dd4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1e8dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1e8dd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e8dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ddc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1e8ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1e8de0: 0xafdd0044  sw          $sp, 0x44($fp)
    ctx->pc = 0x1e8de0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 29));
    // 0x1e8de4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e8de8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E8DE8u;
    {
        const bool branch_taken_0x1e8de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DE8u;
        // 0x1e8dec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8de8) {
            ctx->pc = 0x1E8E34u;
            goto label_1e8e34;
        }
    }
    ctx->pc = 0x1E8DF0u;
    // 0x1e8df0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E8DF0u;
    SET_GPR_U32(ctx, 31, 0x1E8DF8u);
    ctx->pc = 0x1E8DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8DF0u;
    // 0x1e8df4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E8DF0u, 0x1E8DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8DF8u;
label_1e8df8:
    // 0x1e8df8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E8DF8u;
    {
        const bool branch_taken_0x1e8df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DF8u;
        // 0x1e8dfc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8df8) {
            ctx->pc = 0x1E8E04u;
            goto label_1e8e04;
        }
    }
    ctx->pc = 0x1E8E00u;
    // 0x1e8e00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e8e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e8e04:
    // 0x1e8e04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E8E04u;
    {
        const bool branch_taken_0x1e8e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E04u;
        // 0x1e8e08: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e04) {
            ctx->pc = 0x1E8E30u;
            goto label_1e8e30;
        }
    }
    ctx->pc = 0x1E8E0Cu;
    // 0x1e8e0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e8e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e8e10: 0xc0483d8  jal         func_120F60
    ctx->pc = 0x1E8E10u;
    SET_GPR_U32(ctx, 31, 0x1E8E18u);
    ctx->pc = 0x1E8E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E10u;
    // 0x1e8e14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120F60u, 0x1E8E10u, 0x1E8E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E18u;
label_1e8e18:
    // 0x1e8e18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e8e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e20: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E8E20u;
    SET_GPR_U32(ctx, 31, 0x1E8E28u);
    ctx->pc = 0x1E8E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E20u;
    // 0x1e8e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E8E20u, 0x1E8E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E28u;
label_1e8e28:
    // 0x1e8e28: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E8E28u;
    SET_GPR_U32(ctx, 31, 0x1E8E30u);
    ctx->pc = 0x1E8E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E28u;
    // 0x1e8e2c: 0x27c40030  addiu       $a0, $fp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E8E28u, 0x1E8E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E30u;
label_1e8e30:
    // 0x1e8e30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e8e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8e34:
    // 0x1e8e34: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e8e34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1e8e38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e8e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8e3c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1e8e3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8e44: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E44u;
        // 0x1e8e48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8E4Cu;
}
