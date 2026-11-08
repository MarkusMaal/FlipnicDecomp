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

// Function: FUN_0013bd90
// Address: 0x13bd90 - 0x13bec8
void FUN_0013bd90_0x13bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013bd90_0x13bd90");
#endif

    switch (ctx->pc) {
        case 0x13be00u: goto label_13be00;
        case 0x13be08u: goto label_13be08;
        case 0x13be10u: goto label_13be10;
        case 0x13be34u: goto label_13be34;
        case 0x13be3cu: goto label_13be3c;
        case 0x13be98u: goto label_13be98;
        default: break;
    }

    ctx->pc = 0x13bd90u;

    // 0x13bd90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13bd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13bd94: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x13bd94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x13bd98: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13bd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13bd9c: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x13bd9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x13bda0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13bda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13bda4: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x13bda4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x13bda8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13bda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13bdac: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x13bdacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x13bdb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13bdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13bdb4: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x13bdb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x13bdb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13bdbc: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x13bdbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x13bdc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13bdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13bdc4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13bdc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bdc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13bdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13bdcc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13bdccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bdd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13bdd4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x13bdd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bdd8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x13bdd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bddc: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x13bddcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x13bde0: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13BDE0u;
    {
        const bool branch_taken_0x13bde0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BDE0u;
        // 0x13bde4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bde0) {
            ctx->pc = 0x13BE08u;
            goto label_13be08;
        }
    }
    ctx->pc = 0x13BDE8u;
    // 0x13bde8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x13bde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x13bdec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13bdecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13bdf0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x13bdf4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13bdf8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13BDF8u;
    SET_GPR_U32(ctx, 31, 0x13BE00u);
    ctx->pc = 0x13BDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BDF8u;
    // 0x13bdfc: 0x24a5efb0  addiu       $a1, $a1, -0x1050 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13BDF8u, 0x13BE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE00u;
label_13be00:
    // 0x13be00: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13BE00u;
    SET_GPR_U32(ctx, 31, 0x13BE08u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13BE00u, 0x13BE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE08u;
label_13be08:
    // 0x13be08: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13BE08u;
    SET_GPR_U32(ctx, 31, 0x13BE10u);
    ctx->pc = 0x13BE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BE08u;
    // 0x13be0c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13BE08u, 0x13BE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE10u;
label_13be10:
    // 0x13be10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13be10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be14: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x13BE14u;
    {
        const bool branch_taken_0x13be14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE14u;
        // 0x13be18: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be14) {
            ctx->pc = 0x13BE40u;
            goto label_13be40;
        }
    }
    ctx->pc = 0x13BE1Cu;
    // 0x13be1c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x13be1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x13be20: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13be20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13be24: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13be24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x13be28: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13be28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13be2c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13BE2Cu;
    SET_GPR_U32(ctx, 31, 0x13BE34u);
    ctx->pc = 0x13BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BE2Cu;
    // 0x13be30: 0x24a5ef90  addiu       $a1, $a1, -0x1070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13BE2Cu, 0x13BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE34u;
label_13be34:
    // 0x13be34: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13BE34u;
    SET_GPR_U32(ctx, 31, 0x13BE3Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13BE34u, 0x13BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE3Cu;
label_13be3c:
    // 0x13be3c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x13be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_13be40:
    // 0x13be40: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BE40u;
    {
        const bool branch_taken_0x13be40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13be40) {
            ctx->pc = 0x13BE58u;
            goto label_13be58;
        }
    }
    ctx->pc = 0x13BE48u;
    // 0x13be48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13be48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13be4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13be4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13be50: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13be50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13be54: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13be54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_13be58:
    // 0x13be58: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x13be58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x13be5c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x13be5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x13be60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13be64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13be64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13be68: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x13be68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x13be6c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BE6Cu;
    {
        const bool branch_taken_0x13be6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE6Cu;
        // 0x13be70: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be6c) {
            ctx->pc = 0x13BE7Cu;
            goto label_13be7c;
        }
    }
    ctx->pc = 0x13BE74u;
    // 0x13be74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13BE74u;
    {
        const bool branch_taken_0x13be74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE74u;
        // 0x13be78: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be74) {
            ctx->pc = 0x13BE80u;
            goto label_13be80;
        }
    }
    ctx->pc = 0x13BE7Cu;
label_13be7c:
    // 0x13be7c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x13be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_13be80:
    // 0x13be80: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13be80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13be84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13be88: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x13be88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x13be8c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x13be8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13be90: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x13BE90u;
    SET_GPR_U32(ctx, 31, 0x13BE98u);
    ctx->pc = 0x13BE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BE90u;
    // 0x13be94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x13BE90u, 0x13BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE98u;
label_13be98:
    // 0x13be98: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x13BE98u;
    {
        const bool branch_taken_0x13be98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE98u;
        // 0x13be9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be98) {
            ctx->pc = 0x13BEA4u;
            goto label_13bea4;
        }
    }
    ctx->pc = 0x13BEA0u;
    // 0x13bea0: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x13bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
label_13bea4:
    // 0x13bea4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13bea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13bea8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13bea8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13beac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13beacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13beb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13beb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13beb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13beb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13beb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13beb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13bebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bec0: 0x3e00008  jr          $ra
    ctx->pc = 0x13BEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEC0u;
        // 0x13bec4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BEC8u;
}
