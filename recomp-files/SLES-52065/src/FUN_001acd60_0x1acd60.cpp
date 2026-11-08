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

// Function: FUN_001acd60
// Address: 0x1acd60 - 0x1ace4c
void FUN_001acd60_0x1acd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001acd60_0x1acd60");
#endif

    switch (ctx->pc) {
        case 0x1acdb4u: goto label_1acdb4;
        case 0x1acde0u: goto label_1acde0;
        case 0x1acdecu: goto label_1acdec;
        case 0x1acdf8u: goto label_1acdf8;
        case 0x1ace10u: goto label_1ace10;
        case 0x1ace1cu: goto label_1ace1c;
        case 0x1ace34u: goto label_1ace34;
        default: break;
    }

    ctx->pc = 0x1acd60u;

    // 0x1acd60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1acd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1acd64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1acd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1acd68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1acd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1acd6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1acd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1acd70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1acd70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd74: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1ACD74u;
    {
        const bool branch_taken_0x1acd74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD74u;
        // 0x1acd78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd74) {
            ctx->pc = 0x1ACE34u;
            goto label_1ace34;
        }
    }
    ctx->pc = 0x1ACD7Cu;
    // 0x1acd7c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1acd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1acd80: 0x260407cc  addiu       $a0, $s0, 0x7CC
    ctx->pc = 0x1acd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1996));
    // 0x1acd84: 0x2442b700  addiu       $v0, $v0, -0x4900
    ctx->pc = 0x1acd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948608));
    // 0x1acd88: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ACD88u;
    {
        const bool branch_taken_0x1acd88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD88u;
        // 0x1acd8c: 0xae02031c  sw          $v0, 0x31C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd88) {
            ctx->pc = 0x1ACDB4u;
            goto label_1acdb4;
        }
    }
    ctx->pc = 0x1ACD90u;
    // 0x1acd90: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1acd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1acd94: 0x2442b460  addiu       $v0, $v0, -0x4BA0
    ctx->pc = 0x1acd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947936));
    // 0x1acd98: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ACD98u;
    {
        const bool branch_taken_0x1acd98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD98u;
        // 0x1acd9c: 0xae0207d8  sw          $v0, 0x7D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd98) {
            ctx->pc = 0x1ACDB4u;
            goto label_1acdb4;
        }
    }
    ctx->pc = 0x1ACDA0u;
    // 0x1acda0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1acda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1acda4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acda8: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1acda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1acdac: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1ACDACu;
    SET_GPR_U32(ctx, 31, 0x1ACDB4u);
    ctx->pc = 0x1ACDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACDACu;
    // 0x1acdb0: 0xae0207d8  sw          $v0, 0x7D8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2008), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1ACDACu, 0x1ACDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACDB4u;
label_1acdb4:
    // 0x1acdb4: 0x260407b0  addiu       $a0, $s0, 0x7B0
    ctx->pc = 0x1acdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1968));
    // 0x1acdb8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ACDB8u;
    {
        const bool branch_taken_0x1acdb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDB8u;
        // 0x1acdbc: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdb8) {
            ctx->pc = 0x1ACDE0u;
            goto label_1acde0;
        }
    }
    ctx->pc = 0x1ACDC0u;
    // 0x1acdc0: 0x2442b690  addiu       $v0, $v0, -0x4970
    ctx->pc = 0x1acdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948496));
    // 0x1acdc4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ACDC4u;
    {
        const bool branch_taken_0x1acdc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDC4u;
        // 0x1acdc8: 0xae0207bc  sw          $v0, 0x7BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdc4) {
            ctx->pc = 0x1ACDE0u;
            goto label_1acde0;
        }
    }
    ctx->pc = 0x1ACDCCu;
    // 0x1acdcc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1acdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1acdd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acdd4: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1acdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1acdd8: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1ACDD8u;
    SET_GPR_U32(ctx, 31, 0x1ACDE0u);
    ctx->pc = 0x1ACDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACDD8u;
    // 0x1acddc: 0xae0207bc  sw          $v0, 0x7BC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1980), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1ACDD8u, 0x1ACDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACDE0u;
label_1acde0:
    // 0x1acde0: 0x26040710  addiu       $a0, $s0, 0x710
    ctx->pc = 0x1acde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1808));
    // 0x1acde4: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1ACDE4u;
    SET_GPR_U32(ctx, 31, 0x1ACDECu);
    ctx->pc = 0x1ACDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACDE4u;
    // 0x1acde8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1ACDE4u, 0x1ACDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACDECu;
label_1acdec:
    // 0x1acdec: 0x260406f0  addiu       $a0, $s0, 0x6F0
    ctx->pc = 0x1acdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1776));
    // 0x1acdf0: 0xc069aa8  jal         func_1A6AA0
    ctx->pc = 0x1ACDF0u;
    SET_GPR_U32(ctx, 31, 0x1ACDF8u);
    ctx->pc = 0x1ACDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACDF0u;
    // 0x1acdf4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AA0u, 0x1ACDF0u, 0x1ACDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACDF8u;
label_1acdf8:
    // 0x1acdf8: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1acdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1acdfc: 0x26040670  addiu       $a0, $s0, 0x670
    ctx->pc = 0x1acdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    // 0x1ace00: 0x24a5bf10  addiu       $a1, $a1, -0x40F0
    ctx->pc = 0x1ace00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950672));
    // 0x1ace04: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1ace04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1ace08: 0xc07a3bc  jal         func_1E8EF0
    ctx->pc = 0x1ACE08u;
    SET_GPR_U32(ctx, 31, 0x1ACE10u);
    ctx->pc = 0x1ACE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACE08u;
    // 0x1ace0c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x1ACE08u, 0x1ACE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE10u;
label_1ace10:
    // 0x1ace10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ace10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace14: 0xc064324  jal         func_190C90
    ctx->pc = 0x1ACE14u;
    SET_GPR_U32(ctx, 31, 0x1ACE1Cu);
    ctx->pc = 0x1ACE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACE14u;
    // 0x1ace18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1ACE14u, 0x1ACE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE1Cu;
label_1ace1c:
    // 0x1ace1c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x1ace1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1ace20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ace20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ace24: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACE24u;
    {
        const bool branch_taken_0x1ace24 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1ACE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE24u;
        // 0x1ace28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace24) {
            ctx->pc = 0x1ACE38u;
            goto label_1ace38;
        }
    }
    ctx->pc = 0x1ACE2Cu;
    // 0x1ace2c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1ACE2Cu;
    SET_GPR_U32(ctx, 31, 0x1ACE34u);
    ctx->pc = 0x1ACE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACE2Cu;
    // 0x1ace30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1ACE2Cu, 0x1ACE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE34u;
label_1ace34:
    // 0x1ace34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ace34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ace38:
    // 0x1ace38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ace38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ace3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ace3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ace40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ace40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ace44: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE44u;
        // 0x1ace48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE4Cu;
}
