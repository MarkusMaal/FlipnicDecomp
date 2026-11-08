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

// Function: FUN_001abba0
// Address: 0x1abba0 - 0x1abc8c
void FUN_001abba0_0x1abba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001abba0_0x1abba0");
#endif

    switch (ctx->pc) {
        case 0x1abbf4u: goto label_1abbf4;
        case 0x1abc20u: goto label_1abc20;
        case 0x1abc2cu: goto label_1abc2c;
        case 0x1abc38u: goto label_1abc38;
        case 0x1abc50u: goto label_1abc50;
        case 0x1abc5cu: goto label_1abc5c;
        case 0x1abc74u: goto label_1abc74;
        default: break;
    }

    ctx->pc = 0x1abba0u;

    // 0x1abba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1abba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1abba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1abba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abbac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1abbb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1abbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbb4: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1ABBB4u;
    {
        const bool branch_taken_0x1abbb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBB4u;
        // 0x1abbb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abbb4) {
            ctx->pc = 0x1ABC74u;
            goto label_1abc74;
        }
    }
    ctx->pc = 0x1ABBBCu;
    // 0x1abbbc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1abbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1abbc0: 0x260407cc  addiu       $a0, $s0, 0x7CC
    ctx->pc = 0x1abbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1996));
    // 0x1abbc4: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x1abbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x1abbc8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ABBC8u;
    {
        const bool branch_taken_0x1abbc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBC8u;
        // 0x1abbcc: 0xae02031c  sw          $v0, 0x31C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abbc8) {
            ctx->pc = 0x1ABBF4u;
            goto label_1abbf4;
        }
    }
    ctx->pc = 0x1ABBD0u;
    // 0x1abbd0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1abbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1abbd4: 0x2442b460  addiu       $v0, $v0, -0x4BA0
    ctx->pc = 0x1abbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947936));
    // 0x1abbd8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABBD8u;
    {
        const bool branch_taken_0x1abbd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBD8u;
        // 0x1abbdc: 0xae0207d8  sw          $v0, 0x7D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abbd8) {
            ctx->pc = 0x1ABBF4u;
            goto label_1abbf4;
        }
    }
    ctx->pc = 0x1ABBE0u;
    // 0x1abbe0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1abbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1abbe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbe8: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1abbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1abbec: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1ABBECu;
    SET_GPR_U32(ctx, 31, 0x1ABBF4u);
    ctx->pc = 0x1ABBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABBECu;
    // 0x1abbf0: 0xae0207d8  sw          $v0, 0x7D8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2008), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1ABBECu, 0x1ABBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABBF4u;
label_1abbf4:
    // 0x1abbf4: 0x260407b0  addiu       $a0, $s0, 0x7B0
    ctx->pc = 0x1abbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1968));
    // 0x1abbf8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ABBF8u;
    {
        const bool branch_taken_0x1abbf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBF8u;
        // 0x1abbfc: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abbf8) {
            ctx->pc = 0x1ABC20u;
            goto label_1abc20;
        }
    }
    ctx->pc = 0x1ABC00u;
    // 0x1abc00: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x1abc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
    // 0x1abc04: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABC04u;
    {
        const bool branch_taken_0x1abc04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC04u;
        // 0x1abc08: 0xae0207bc  sw          $v0, 0x7BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc04) {
            ctx->pc = 0x1ABC20u;
            goto label_1abc20;
        }
    }
    ctx->pc = 0x1ABC0Cu;
    // 0x1abc0c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1abc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1abc10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc14: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1abc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1abc18: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1ABC18u;
    SET_GPR_U32(ctx, 31, 0x1ABC20u);
    ctx->pc = 0x1ABC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC18u;
    // 0x1abc1c: 0xae0207bc  sw          $v0, 0x7BC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1980), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1ABC18u, 0x1ABC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC20u;
label_1abc20:
    // 0x1abc20: 0x26040710  addiu       $a0, $s0, 0x710
    ctx->pc = 0x1abc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1808));
    // 0x1abc24: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1ABC24u;
    SET_GPR_U32(ctx, 31, 0x1ABC2Cu);
    ctx->pc = 0x1ABC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC24u;
    // 0x1abc28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1ABC24u, 0x1ABC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC2Cu;
label_1abc2c:
    // 0x1abc2c: 0x260406f0  addiu       $a0, $s0, 0x6F0
    ctx->pc = 0x1abc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1776));
    // 0x1abc30: 0xc069aa8  jal         func_1A6AA0
    ctx->pc = 0x1ABC30u;
    SET_GPR_U32(ctx, 31, 0x1ABC38u);
    ctx->pc = 0x1ABC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC30u;
    // 0x1abc34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AA0u, 0x1ABC30u, 0x1ABC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC38u;
label_1abc38:
    // 0x1abc38: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1abc38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1abc3c: 0x26040670  addiu       $a0, $s0, 0x670
    ctx->pc = 0x1abc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    // 0x1abc40: 0x24a5acd0  addiu       $a1, $a1, -0x5330
    ctx->pc = 0x1abc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946000));
    // 0x1abc44: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1abc44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1abc48: 0xc07a3bc  jal         func_1E8EF0
    ctx->pc = 0x1ABC48u;
    SET_GPR_U32(ctx, 31, 0x1ABC50u);
    ctx->pc = 0x1ABC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC48u;
    // 0x1abc4c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x1ABC48u, 0x1ABC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC50u;
label_1abc50:
    // 0x1abc50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc54: 0xc064324  jal         func_190C90
    ctx->pc = 0x1ABC54u;
    SET_GPR_U32(ctx, 31, 0x1ABC5Cu);
    ctx->pc = 0x1ABC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC54u;
    // 0x1abc58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1ABC54u, 0x1ABC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC5Cu;
label_1abc5c:
    // 0x1abc5c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x1abc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1abc60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1abc60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1abc64: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABC64u;
    {
        const bool branch_taken_0x1abc64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1ABC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC64u;
        // 0x1abc68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc64) {
            ctx->pc = 0x1ABC78u;
            goto label_1abc78;
        }
    }
    ctx->pc = 0x1ABC6Cu;
    // 0x1abc6c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1ABC6Cu;
    SET_GPR_U32(ctx, 31, 0x1ABC74u);
    ctx->pc = 0x1ABC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC6Cu;
    // 0x1abc70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1ABC6Cu, 0x1ABC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC74u;
label_1abc74:
    // 0x1abc74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1abc74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1abc78:
    // 0x1abc78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1abc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abc7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abc7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abc80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abc80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abc84: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC84u;
        // 0x1abc88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABC8Cu;
}
