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

// Function: FUN_001b6db0
// Address: 0x1b6db0 - 0x1b6e7c
void FUN_001b6db0_0x1b6db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b6db0_0x1b6db0");
#endif

    switch (ctx->pc) {
        case 0x1b6de4u: goto label_1b6de4;
        case 0x1b6e40u: goto label_1b6e40;
        default: break;
    }

    ctx->pc = 0x1b6db0u;

    // 0x1b6db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6db4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1b6db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6db8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6dbc: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x1b6dbcu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1b6dc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6dc4: 0x24a90004  addiu       $t1, $a1, 0x4
    ctx->pc = 0x1b6dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1b6dc8: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x1b6dc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1b6dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6dd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b6dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6dd4: 0x11400010  beqz        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B6DD4u;
    {
        const bool branch_taken_0x1b6dd4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DD4u;
        // 0x1b6dd8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6dd4) {
            ctx->pc = 0x1B6E18u;
            goto label_1b6e18;
        }
    }
    ctx->pc = 0x1B6DDCu;
    // 0x1b6ddc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1b6ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1b6de0: 0x0  nop
    ctx->pc = 0x1b6de0u;
    // NOP
label_1b6de4:
    // 0x1b6de4: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x1b6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x1b6de8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1b6de8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b6dec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6DECu;
    {
        const bool branch_taken_0x1b6dec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DECu;
        // 0x1b6df0: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6dec) {
            ctx->pc = 0x1B6E00u;
            goto label_1b6e00;
        }
    }
    ctx->pc = 0x1B6DF4u;
    // 0x1b6df4: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x1b6df4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1b6df8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6DF8u;
    {
        const bool branch_taken_0x1b6df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DF8u;
        // 0x1b6dfc: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6df8) {
            ctx->pc = 0x1B6E10u;
            goto label_1b6e10;
        }
    }
    ctx->pc = 0x1B6E00u;
label_1b6e00:
    // 0x1b6e00: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1b6e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e04: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x1b6e04u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1b6e08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b6e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e10:
    // 0x1b6e10: 0x1540fff4  bnez        $t2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B6E10u;
    {
        const bool branch_taken_0x1b6e10 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6e10) {
            ctx->pc = 0x1B6DE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6de4;
        }
    }
    ctx->pc = 0x1B6E18u;
label_1b6e18:
    // 0x1b6e18: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6E18u;
    {
        const bool branch_taken_0x1b6e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6e18) {
            ctx->pc = 0x1B6E34u;
            goto label_1b6e34;
        }
    }
    ctx->pc = 0x1B6E20u;
    // 0x1b6e20: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1b6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b6e24: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1b6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1b6e28: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1b6e28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b6e2c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6E2Cu;
    {
        const bool branch_taken_0x1b6e2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6e2c) {
            ctx->pc = 0x1B6E58u;
            goto label_1b6e58;
        }
    }
    ctx->pc = 0x1B6E34u;
label_1b6e34:
    // 0x1b6e34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b6e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e38: 0xc06dba8  jal         func_1B6EA0
    ctx->pc = 0x1B6E38u;
    SET_GPR_U32(ctx, 31, 0x1B6E40u);
    ctx->pc = 0x1B6E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E38u;
    // 0x1b6e3c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6EA0u, 0x1B6E38u, 0x1B6E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E40u;
label_1b6e40:
    // 0x1b6e40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b6e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b6e44: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b6e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b6e48: 0x90232eb8  lbu         $v1, 0x2EB8($at)
    ctx->pc = 0x1b6e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x212EB8u));
    // 0x1b6e4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6E50u;
    {
        const bool branch_taken_0x1b6e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E50u;
        // 0x1b6e54: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e50) {
            ctx->pc = 0x1B6E6Cu;
            goto label_1b6e6c;
        }
    }
    ctx->pc = 0x1B6E58u;
label_1b6e58:
    // 0x1b6e58: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1b6e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1b6e5c: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b6e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b6e60: 0x90232ec0  lbu         $v1, 0x2EC0($at)
    ctx->pc = 0x1b6e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x212EC0u));
    // 0x1b6e64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e68: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x1b6e68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_1b6e6c:
    // 0x1b6e6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6e70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6e74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E74u;
        // 0x1b6e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6E7Cu;
}
