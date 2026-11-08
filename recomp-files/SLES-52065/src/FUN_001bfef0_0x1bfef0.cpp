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

// Function: FUN_001bfef0
// Address: 0x1bfef0 - 0x1c0108
void FUN_001bfef0_0x1bfef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bfef0_0x1bfef0");
#endif

    switch (ctx->pc) {
        case 0x1bff70u: goto label_1bff70;
        case 0x1bff7cu: goto label_1bff7c;
        case 0x1bffccu: goto label_1bffcc;
        case 0x1bffd4u: goto label_1bffd4;
        case 0x1bfffcu: goto label_1bfffc;
        case 0x1c0028u: goto label_1c0028;
        case 0x1c0044u: goto label_1c0044;
        case 0x1c0088u: goto label_1c0088;
        case 0x1c0094u: goto label_1c0094;
        case 0x1c00a0u: goto label_1c00a0;
        case 0x1c00acu: goto label_1c00ac;
        case 0x1c00c0u: goto label_1c00c0;
        case 0x1c00d4u: goto label_1c00d4;
        case 0x1c00e8u: goto label_1c00e8;
        case 0x1c00ecu: goto label_1c00ec;
        default: break;
    }

    ctx->pc = 0x1bfef0u;

    // 0x1bfef0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1bfef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1bfef4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfef8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bfef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1bfefc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bfefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bff00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bff00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bff04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bff04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bff08: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1bff08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bff0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bff10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bff10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bff14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bff14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bff18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bff18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff1c: 0x8c24f4f8  lw          $a0, -0xB08($at)
    ctx->pc = 0x1bff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1bff20: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFF20u;
    {
        const bool branch_taken_0x1bff20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BFF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF20u;
        // 0x1bff24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff20) {
            ctx->pc = 0x1BFF30u;
            goto label_1bff30;
        }
    }
    ctx->pc = 0x1BFF28u;
    // 0x1bff28: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFF28u;
    {
        const bool branch_taken_0x1bff28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF28u;
        // 0x1bff2c: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff28) {
            ctx->pc = 0x1BFF38u;
            goto label_1bff38;
        }
    }
    ctx->pc = 0x1BFF30u;
label_1bff30:
    // 0x1bff30: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1BFF30u;
    {
        const bool branch_taken_0x1bff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF30u;
        // 0x1bff34: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff30) {
            ctx->pc = 0x1C0030u;
            goto label_1c0030;
        }
    }
    ctx->pc = 0x1BFF38u;
label_1bff38:
    // 0x1bff38: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFF38u;
    {
        const bool branch_taken_0x1bff38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BFF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF38u;
        // 0x1bff3c: 0x8c23f4f0  lw          $v1, -0xB10($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff38) {
            ctx->pc = 0x1BFF48u;
            goto label_1bff48;
        }
    }
    ctx->pc = 0x1BFF40u;
    // 0x1bff40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFF40u;
    {
        const bool branch_taken_0x1bff40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF40u;
        // 0x1bff44: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff40) {
            ctx->pc = 0x1BFF54u;
            goto label_1bff54;
        }
    }
    ctx->pc = 0x1BFF48u;
label_1bff48:
    // 0x1bff48: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1bff48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bff4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bff50: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1bff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bff54:
    // 0x1bff54: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bff54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bff58: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1bff58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1bff5c: 0x24421430  addiu       $v0, $v0, 0x1430
    ctx->pc = 0x1bff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5168));
    // 0x1bff60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bff64: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1bff64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bff68: 0xc072e58  jal         func_1CB960
    ctx->pc = 0x1BFF68u;
    SET_GPR_U32(ctx, 31, 0x1BFF70u);
    ctx->pc = 0x1BFF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFF68u;
    // 0x1bff6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB960u, 0x1BFF68u, 0x1BFF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFF70u;
label_1bff70:
    // 0x1bff70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bff70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff74: 0xc072f2c  jal         func_1CBCB0
    ctx->pc = 0x1BFF74u;
    SET_GPR_U32(ctx, 31, 0x1BFF7Cu);
    ctx->pc = 0x1BFF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFF74u;
    // 0x1bff78: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCB0u, 0x1BFF74u, 0x1BFF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFF7Cu;
label_1bff7c:
    // 0x1bff7c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bff7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bff84: 0x12620026  beq         $s3, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1BFF84u;
    {
        const bool branch_taken_0x1bff84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BFF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF84u;
        // 0x1bff88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff84) {
            ctx->pc = 0x1C0020u;
            goto label_1c0020;
        }
    }
    ctx->pc = 0x1BFF8Cu;
    // 0x1bff8c: 0x2e410006  sltiu       $at, $s2, 0x6
    ctx->pc = 0x1bff8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1bff90: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BFF90u;
    {
        const bool branch_taken_0x1bff90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF90u;
        // 0x1bff94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff90) {
            ctx->pc = 0x1C0034u;
            goto label_1c0034;
        }
    }
    ctx->pc = 0x1BFF98u;
    // 0x1bff98: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1bff98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1bff9c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1bff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1bffa0: 0x24631590  addiu       $v1, $v1, 0x1590
    ctx->pc = 0x1bffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5520));
    // 0x1bffa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bffa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bffac: 0x400008  jr          $v0
    ctx->pc = 0x1BFFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFFB4u: goto label_1bffb4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFFACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BFFB4u;
label_1bffb4:
    // 0x1bffb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bffb8: 0x16430006  bne         $s2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BFFB8u;
    {
        const bool branch_taken_0x1bffb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BFFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFB8u;
        // 0x1bffbc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffb8) {
            ctx->pc = 0x1BFFD4u;
            goto label_1bffd4;
        }
    }
    ctx->pc = 0x1BFFC0u;
    // 0x1bffc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bffc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bffc4: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1BFFC4u;
    SET_GPR_U32(ctx, 31, 0x1BFFCCu);
    ctx->pc = 0x1BFFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFFC4u;
    // 0x1bffc8: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1BFFC4u, 0x1BFFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFFCCu;
label_1bffcc:
    // 0x1bffcc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1BFFCCu;
    {
        const bool branch_taken_0x1bffcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFCCu;
        // 0x1bffd0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffcc) {
            ctx->pc = 0x1C00ECu;
            goto label_1c00ec;
        }
    }
    ctx->pc = 0x1BFFD4u;
label_1bffd4:
    // 0x1bffd4: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFFD4u;
    {
        const bool branch_taken_0x1bffd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFD4u;
        // 0x1bffd8: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffd4) {
            ctx->pc = 0x1BFFECu;
            goto label_1bffec;
        }
    }
    ctx->pc = 0x1BFFDCu;
    // 0x1bffdc: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1bffdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1bffe0: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1bffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1bffe4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFFE4u;
    {
        const bool branch_taken_0x1bffe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFE4u;
        // 0x1bffe8: 0xa043282c  sb          $v1, 0x282C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 10284), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffe4) {
            ctx->pc = 0x1BFFF4u;
            goto label_1bfff4;
        }
    }
    ctx->pc = 0x1BFFECu;
label_1bffec:
    // 0x1bffec: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1bffecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1bfff0: 0xa040282c  sb          $zero, 0x282C($v0)
    ctx->pc = 0x1bfff0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10284), (uint8_t)GPR_U32(ctx, 0));
label_1bfff4:
    // 0x1bfff4: 0xc073170  jal         func_1CC5C0
    ctx->pc = 0x1BFFF4u;
    SET_GPR_U32(ctx, 31, 0x1BFFFCu);
    ctx->pc = 0x1BFFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFFF4u;
    // 0x1bfff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5C0u, 0x1BFFF4u, 0x1BFFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFFFCu;
label_1bfffc:
    // 0x1bfffc: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1bfffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c0000: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x1c0000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c0004: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c0004u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c0008: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1c0008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c000c: 0xa4532828  sh          $s3, 0x2828($v0)
    ctx->pc = 0x1c000cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10280), (uint16_t)GPR_U32(ctx, 19));
    // 0x1c0010: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c0010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c0014: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c0014u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c0018: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0018u;
    {
        const bool branch_taken_0x1c0018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0018u;
        // 0x1c001c: 0xa040282b  sb          $zero, 0x282B($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 10283), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0018) {
            ctx->pc = 0x1C0030u;
            goto label_1c0030;
        }
    }
    ctx->pc = 0x1C0020u;
label_1c0020:
    // 0x1c0020: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C0020u;
    SET_GPR_U32(ctx, 31, 0x1C0028u);
    ctx->pc = 0x1C0024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0020u;
    // 0x1c0024: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C0020u, 0x1C0028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0028u;
label_1c0028:
    // 0x1c0028: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1C0028u;
    {
        const bool branch_taken_0x1c0028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0028) {
            ctx->pc = 0x1C00E8u;
            goto label_1c00e8;
        }
    }
    ctx->pc = 0x1C0030u;
label_1c0030:
    // 0x1c0030: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0034:
    // 0x1c0034: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c0034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0038: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c0038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c003c: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1C003Cu;
    SET_GPR_U32(ctx, 31, 0x1C0044u);
    ctx->pc = 0x1C0040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C003Cu;
    // 0x1c0040: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1C003Cu, 0x1C0044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0044u;
label_1c0044:
    // 0x1c0044: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x1c0044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
    // 0x1c0048: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1c0048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c004c: 0x25083e60  addiu       $t0, $t0, 0x3E60
    ctx->pc = 0x1c004cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15968));
    // 0x1c0050: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c0050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0054: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x1c0054u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x213E60u));
    // 0x1c0058: 0x79050010  lq          $a1, 0x10($t0)
    ctx->pc = 0x1c0058u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x213E70u));
    // 0x1c005c: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x1c005cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x213E80u));
    // 0x1c0060: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x1c0060u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x213E90u));
    // 0x1c0064: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1c0064u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1c0068: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1c0068u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x1c006c: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1c006cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x1c0070: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x1c0070u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x1c0074: 0x79030040  lq          $v1, 0x40($t0)
    ctx->pc = 0x1c0074u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x213EA0u));
    // 0x1c0078: 0x79020050  lq          $v0, 0x50($t0)
    ctx->pc = 0x1c0078u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x213EB0u));
    // 0x1c007c: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x1c007cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
    // 0x1c0080: 0xc070044  jal         func_1C0110
    ctx->pc = 0x1C0080u;
    SET_GPR_U32(ctx, 31, 0x1C0088u);
    ctx->pc = 0x1C0084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0080u;
    // 0x1c0084: 0x7ce20050  sq          $v0, 0x50($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0110u, 0x1C0080u, 0x1C0088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0088u;
label_1c0088:
    // 0x1c0088: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1c0088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x1c008c: 0xc070064  jal         func_1C0190
    ctx->pc = 0x1C008Cu;
    SET_GPR_U32(ctx, 31, 0x1C0094u);
    ctx->pc = 0x1C0090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C008Cu;
    // 0x1c0090: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0190u, 0x1C008Cu, 0x1C0094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0094u;
label_1c0094:
    // 0x1c0094: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1c0094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1c0098: 0xc07007c  jal         func_1C01F0
    ctx->pc = 0x1C0098u;
    SET_GPR_U32(ctx, 31, 0x1C00A0u);
    ctx->pc = 0x1C009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0098u;
    // 0x1c009c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C01F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C01F0u, 0x1C0098u, 0x1C00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00A0u;
label_1c00a0:
    // 0x1c00a0: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x1c00a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x1c00a4: 0xc07009c  jal         func_1C0270
    ctx->pc = 0x1C00A4u;
    SET_GPR_U32(ctx, 31, 0x1C00ACu);
    ctx->pc = 0x1C00A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00A4u;
    // 0x1c00a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0270u, 0x1C00A4u, 0x1C00ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00ACu;
label_1c00ac:
    // 0x1c00ac: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1c00acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1c00b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c00b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00b4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1c00b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c00b8: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C00B8u;
    SET_GPR_U32(ctx, 31, 0x1C00C0u);
    ctx->pc = 0x1C00BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00B8u;
    // 0x1c00bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C00B8u, 0x1C00C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00C0u;
label_1c00c0:
    // 0x1c00c0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c00c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c00c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c00c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00c8: 0x24a53bb0  addiu       $a1, $a1, 0x3BB0
    ctx->pc = 0x1c00c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15280));
    // 0x1c00cc: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C00CCu;
    SET_GPR_U32(ctx, 31, 0x1C00D4u);
    ctx->pc = 0x1C00D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00CCu;
    // 0x1c00d0: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C00CCu, 0x1C00D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00D4u;
label_1c00d4:
    // 0x1c00d4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c00d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c00d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c00d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00dc: 0x24a53d80  addiu       $a1, $a1, 0x3D80
    ctx->pc = 0x1c00dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15744));
    // 0x1c00e0: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C00E0u;
    SET_GPR_U32(ctx, 31, 0x1C00E8u);
    ctx->pc = 0x1C00E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00E0u;
    // 0x1c00e4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C00E0u, 0x1C00E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00E8u;
label_1c00e8:
    // 0x1c00e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c00e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c00ec:
    // 0x1c00ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c00ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c00f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c00f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c00f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c00f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c00f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c00f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c00fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c00fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0100: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0100u;
        // 0x1c0104: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0108u;
}
