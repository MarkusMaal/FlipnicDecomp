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

// Function: FUN_001adeb0
// Address: 0x1adeb0 - 0x1adf9c
void FUN_001adeb0_0x1adeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001adeb0_0x1adeb0");
#endif

    switch (ctx->pc) {
        case 0x1adf04u: goto label_1adf04;
        case 0x1adf30u: goto label_1adf30;
        case 0x1adf3cu: goto label_1adf3c;
        case 0x1adf48u: goto label_1adf48;
        case 0x1adf60u: goto label_1adf60;
        case 0x1adf6cu: goto label_1adf6c;
        case 0x1adf84u: goto label_1adf84;
        default: break;
    }

    ctx->pc = 0x1adeb0u;

    // 0x1adeb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1adeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1adeb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1adeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1adeb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1adeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1adebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1adebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1adec0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1adec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adec4: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1ADEC4u;
    {
        const bool branch_taken_0x1adec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEC4u;
        // 0x1adec8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adec4) {
            ctx->pc = 0x1ADF84u;
            goto label_1adf84;
        }
    }
    ctx->pc = 0x1ADECCu;
    // 0x1adecc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1adeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1aded0: 0x260407bc  addiu       $a0, $s0, 0x7BC
    ctx->pc = 0x1aded0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1980));
    // 0x1aded4: 0x2442b780  addiu       $v0, $v0, -0x4880
    ctx->pc = 0x1aded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948736));
    // 0x1aded8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ADED8u;
    {
        const bool branch_taken_0x1aded8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADED8u;
        // 0x1adedc: 0xae02031c  sw          $v0, 0x31C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aded8) {
            ctx->pc = 0x1ADF04u;
            goto label_1adf04;
        }
    }
    ctx->pc = 0x1ADEE0u;
    // 0x1adee0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1adee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1adee4: 0x2442b460  addiu       $v0, $v0, -0x4BA0
    ctx->pc = 0x1adee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947936));
    // 0x1adee8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADEE8u;
    {
        const bool branch_taken_0x1adee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEE8u;
        // 0x1adeec: 0xae0207c8  sw          $v0, 0x7C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adee8) {
            ctx->pc = 0x1ADF04u;
            goto label_1adf04;
        }
    }
    ctx->pc = 0x1ADEF0u;
    // 0x1adef0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1adef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1adef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1adef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adef8: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1adef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1adefc: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1ADEFCu;
    SET_GPR_U32(ctx, 31, 0x1ADF04u);
    ctx->pc = 0x1ADF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEFCu;
    // 0x1adf00: 0xae0207c8  sw          $v0, 0x7C8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1ADEFCu, 0x1ADF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF04u;
label_1adf04:
    // 0x1adf04: 0x260407a0  addiu       $a0, $s0, 0x7A0
    ctx->pc = 0x1adf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
    // 0x1adf08: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ADF08u;
    {
        const bool branch_taken_0x1adf08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF08u;
        // 0x1adf0c: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf08) {
            ctx->pc = 0x1ADF30u;
            goto label_1adf30;
        }
    }
    ctx->pc = 0x1ADF10u;
    // 0x1adf10: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x1adf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
    // 0x1adf14: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADF14u;
    {
        const bool branch_taken_0x1adf14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF14u;
        // 0x1adf18: 0xae0207ac  sw          $v0, 0x7AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf14) {
            ctx->pc = 0x1ADF30u;
            goto label_1adf30;
        }
    }
    ctx->pc = 0x1ADF1Cu;
    // 0x1adf1c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1adf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1adf20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1adf20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf24: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1adf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1adf28: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1ADF28u;
    SET_GPR_U32(ctx, 31, 0x1ADF30u);
    ctx->pc = 0x1ADF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF28u;
    // 0x1adf2c: 0xae0207ac  sw          $v0, 0x7AC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1964), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1ADF28u, 0x1ADF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF30u;
label_1adf30:
    // 0x1adf30: 0x26040700  addiu       $a0, $s0, 0x700
    ctx->pc = 0x1adf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1792));
    // 0x1adf34: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1ADF34u;
    SET_GPR_U32(ctx, 31, 0x1ADF3Cu);
    ctx->pc = 0x1ADF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF34u;
    // 0x1adf38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1ADF34u, 0x1ADF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF3Cu;
label_1adf3c:
    // 0x1adf3c: 0x260406dc  addiu       $a0, $s0, 0x6DC
    ctx->pc = 0x1adf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1756));
    // 0x1adf40: 0xc069aa8  jal         func_1A6AA0
    ctx->pc = 0x1ADF40u;
    SET_GPR_U32(ctx, 31, 0x1ADF48u);
    ctx->pc = 0x1ADF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF40u;
    // 0x1adf44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AA0u, 0x1ADF40u, 0x1ADF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF48u;
label_1adf48:
    // 0x1adf48: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1adf48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1adf4c: 0x26040670  addiu       $a0, $s0, 0x670
    ctx->pc = 0x1adf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    // 0x1adf50: 0x24a5d0d0  addiu       $a1, $a1, -0x2F30
    ctx->pc = 0x1adf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955216));
    // 0x1adf54: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1adf54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1adf58: 0xc07a3bc  jal         func_1E8EF0
    ctx->pc = 0x1ADF58u;
    SET_GPR_U32(ctx, 31, 0x1ADF60u);
    ctx->pc = 0x1ADF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF58u;
    // 0x1adf5c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x1ADF58u, 0x1ADF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF60u;
label_1adf60:
    // 0x1adf60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf64: 0xc064324  jal         func_190C90
    ctx->pc = 0x1ADF64u;
    SET_GPR_U32(ctx, 31, 0x1ADF6Cu);
    ctx->pc = 0x1ADF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF64u;
    // 0x1adf68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1ADF64u, 0x1ADF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF6Cu;
label_1adf6c:
    // 0x1adf6c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x1adf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1adf70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1adf70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1adf74: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADF74u;
    {
        const bool branch_taken_0x1adf74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1ADF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF74u;
        // 0x1adf78: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf74) {
            ctx->pc = 0x1ADF88u;
            goto label_1adf88;
        }
    }
    ctx->pc = 0x1ADF7Cu;
    // 0x1adf7c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1ADF7Cu;
    SET_GPR_U32(ctx, 31, 0x1ADF84u);
    ctx->pc = 0x1ADF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF7Cu;
    // 0x1adf80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1ADF7Cu, 0x1ADF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF84u;
label_1adf84:
    // 0x1adf84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1adf84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adf88:
    // 0x1adf88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1adf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adf8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1adf8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adf90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1adf90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adf94: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF94u;
        // 0x1adf98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADF9Cu;
}
