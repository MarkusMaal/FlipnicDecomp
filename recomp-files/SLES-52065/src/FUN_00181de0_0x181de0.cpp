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

// Function: FUN_00181de0
// Address: 0x181de0 - 0x181e9c
void FUN_00181de0_0x181de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00181de0_0x181de0");
#endif

    switch (ctx->pc) {
        case 0x181e30u: goto label_181e30;
        case 0x181e40u: goto label_181e40;
        case 0x181e50u: goto label_181e50;
        case 0x181e80u: goto label_181e80;
        case 0x181e88u: goto label_181e88;
        default: break;
    }

    ctx->pc = 0x181de0u;

    // 0x181de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181de4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x181de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181de8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181df0: 0x8f848660  lw          $a0, -0x79A0($gp)
    ctx->pc = 0x181df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x181df4: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x181DF4u;
    {
        const bool branch_taken_0x181df4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x181df4) {
            ctx->pc = 0x181E8Cu;
            goto label_181e8c;
        }
    }
    ctx->pc = 0x181DFCu;
    // 0x181dfc: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x181dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x181e00: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x181e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x181e04: 0x10c30010  beq         $a2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x181E04u;
    {
        const bool branch_taken_0x181e04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x181E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E04u;
        // 0x181e08: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e04) {
            ctx->pc = 0x181E48u;
            goto label_181e48;
        }
    }
    ctx->pc = 0x181E0Cu;
    // 0x181e0c: 0x10c3000a  beq         $a2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x181E0Cu;
    {
        const bool branch_taken_0x181e0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x181e0c) {
            ctx->pc = 0x181E38u;
            goto label_181e38;
        }
    }
    ctx->pc = 0x181E14u;
    // 0x181e14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x181e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181e18: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181E18u;
    {
        const bool branch_taken_0x181e18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x181e18) {
            ctx->pc = 0x181E28u;
            goto label_181e28;
        }
    }
    ctx->pc = 0x181E20u;
    // 0x181e20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x181E20u;
    {
        const bool branch_taken_0x181e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E20u;
        // 0x181e24: 0x8f84865c  lw          $a0, -0x79A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e20) {
            ctx->pc = 0x181E54u;
            goto label_181e54;
        }
    }
    ctx->pc = 0x181E28u;
label_181e28:
    // 0x181e28: 0xc0600cc  jal         func_180330
    ctx->pc = 0x181E28u;
    SET_GPR_U32(ctx, 31, 0x181E30u);
    ctx->pc = 0x180330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180330u, 0x181E28u, 0x181E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E30u;
label_181e30:
    // 0x181e30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x181E30u;
    {
        const bool branch_taken_0x181e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181e30) {
            ctx->pc = 0x181E50u;
            goto label_181e50;
        }
    }
    ctx->pc = 0x181E38u;
label_181e38:
    // 0x181e38: 0xc0602b8  jal         func_180AE0
    ctx->pc = 0x181E38u;
    SET_GPR_U32(ctx, 31, 0x181E40u);
    ctx->pc = 0x180AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180AE0u, 0x181E38u, 0x181E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E40u;
label_181e40:
    // 0x181e40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x181E40u;
    {
        const bool branch_taken_0x181e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181e40) {
            ctx->pc = 0x181E50u;
            goto label_181e50;
        }
    }
    ctx->pc = 0x181E48u;
label_181e48:
    // 0x181e48: 0xc060514  jal         func_181450
    ctx->pc = 0x181E48u;
    SET_GPR_U32(ctx, 31, 0x181E50u);
    ctx->pc = 0x181450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181450u, 0x181E48u, 0x181E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E50u;
label_181e50:
    // 0x181e50: 0x8f84865c  lw          $a0, -0x79A4($gp)
    ctx->pc = 0x181e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
label_181e54:
    // 0x181e54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x181e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181e58: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x181E58u;
    {
        const bool branch_taken_0x181e58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x181e58) {
            ctx->pc = 0x181E8Cu;
            goto label_181e8c;
        }
    }
    ctx->pc = 0x181E60u;
    // 0x181e60: 0x8f908660  lw          $s0, -0x79A0($gp)
    ctx->pc = 0x181e60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x181e64: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x181E64u;
    {
        const bool branch_taken_0x181e64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x181e64) {
            ctx->pc = 0x181E88u;
            goto label_181e88;
        }
    }
    ctx->pc = 0x181E6Cu;
    // 0x181e6c: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x181e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x181e70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181E70u;
    {
        const bool branch_taken_0x181e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x181e70) {
            ctx->pc = 0x181E80u;
            goto label_181e80;
        }
    }
    ctx->pc = 0x181E78u;
    // 0x181e78: 0xc0485bc  jal         func_1216F0
    ctx->pc = 0x181E78u;
    SET_GPR_U32(ctx, 31, 0x181E80u);
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x181E78u, 0x181E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E80u;
label_181e80:
    // 0x181e80: 0xc0401a4  jal         func_100690
    ctx->pc = 0x181E80u;
    SET_GPR_U32(ctx, 31, 0x181E88u);
    ctx->pc = 0x181E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181E80u;
    // 0x181e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x181E80u, 0x181E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E88u;
label_181e88:
    // 0x181e88: 0xaf808660  sw          $zero, -0x79A0($gp)
    ctx->pc = 0x181e88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936160), GPR_U32(ctx, 0));
label_181e8c:
    // 0x181e8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181e94: 0x3e00008  jr          $ra
    ctx->pc = 0x181E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E94u;
        // 0x181e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181E9Cu;
}
