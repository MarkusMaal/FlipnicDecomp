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

// Function: FUN_00187940
// Address: 0x187940 - 0x187a78
void FUN_00187940_0x187940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00187940_0x187940");
#endif

    switch (ctx->pc) {
        case 0x1879b0u: goto label_1879b0;
        case 0x1879b8u: goto label_1879b8;
        case 0x1879c0u: goto label_1879c0;
        case 0x1879e4u: goto label_1879e4;
        case 0x1879ecu: goto label_1879ec;
        case 0x187a48u: goto label_187a48;
        default: break;
    }

    ctx->pc = 0x187940u;

    // 0x187940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x187940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x187944: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x187944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x187948: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x187948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18794c: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x18794cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x187950: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x187950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x187954: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x187954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x187958: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x187958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18795c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x18795cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x187960: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x187960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x187964: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x187964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x187968: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x187968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18796c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x18796cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x187970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187974: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x187974u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18797c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18797cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187980: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x187980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x187984: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x187984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187988: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x187988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18798c: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x18798cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x187990: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x187990u;
    {
        const bool branch_taken_0x187990 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x187994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187990u;
        // 0x187994: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187990) {
            ctx->pc = 0x1879B8u;
            goto label_1879b8;
        }
    }
    ctx->pc = 0x187998u;
    // 0x187998: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x187998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18799c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18799cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1879a0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1879a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1879a4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1879a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1879a8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1879A8u;
    SET_GPR_U32(ctx, 31, 0x1879B0u);
    ctx->pc = 0x1879ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1879A8u;
    // 0x1879ac: 0x24a5f9a0  addiu       $a1, $a1, -0x660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1879A8u, 0x1879B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1879B0u;
label_1879b0:
    // 0x1879b0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1879B0u;
    SET_GPR_U32(ctx, 31, 0x1879B8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1879B0u, 0x1879B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1879B8u;
label_1879b8:
    // 0x1879b8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1879B8u;
    SET_GPR_U32(ctx, 31, 0x1879C0u);
    ctx->pc = 0x1879BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1879B8u;
    // 0x1879bc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1879B8u, 0x1879C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1879C0u;
label_1879c0:
    // 0x1879c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1879c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879c4: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1879C4u;
    {
        const bool branch_taken_0x1879c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1879C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1879C4u;
        // 0x1879c8: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1879c4) {
            ctx->pc = 0x1879F0u;
            goto label_1879f0;
        }
    }
    ctx->pc = 0x1879CCu;
    // 0x1879cc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1879ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1879d0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1879d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1879d4: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1879d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1879d8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1879d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1879dc: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1879DCu;
    SET_GPR_U32(ctx, 31, 0x1879E4u);
    ctx->pc = 0x1879E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1879DCu;
    // 0x1879e0: 0x24a5f9c0  addiu       $a1, $a1, -0x640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1879DCu, 0x1879E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1879E4u;
label_1879e4:
    // 0x1879e4: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1879E4u;
    SET_GPR_U32(ctx, 31, 0x1879ECu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1879E4u, 0x1879ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1879ECu;
label_1879ec:
    // 0x1879ec: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1879ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1879f0:
    // 0x1879f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1879F0u;
    {
        const bool branch_taken_0x1879f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1879f0) {
            ctx->pc = 0x187A08u;
            goto label_187a08;
        }
    }
    ctx->pc = 0x1879F8u;
    // 0x1879f8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1879f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1879fc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1879fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x187a00: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x187a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x187a04: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x187a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_187a08:
    // 0x187a08: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x187a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x187a0c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x187a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x187a10: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x187a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x187a14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x187a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x187a18: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x187a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x187a1c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x187A1Cu;
    {
        const bool branch_taken_0x187a1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A1Cu;
        // 0x187a20: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a1c) {
            ctx->pc = 0x187A2Cu;
            goto label_187a2c;
        }
    }
    ctx->pc = 0x187A24u;
    // 0x187a24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x187A24u;
    {
        const bool branch_taken_0x187a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A24u;
        // 0x187a28: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a24) {
            ctx->pc = 0x187A30u;
            goto label_187a30;
        }
    }
    ctx->pc = 0x187A2Cu;
label_187a2c:
    // 0x187a2c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x187a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_187a30:
    // 0x187a30: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x187a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x187a34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x187a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x187a38: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x187a38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x187a3c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x187a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x187a40: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x187A40u;
    SET_GPR_U32(ctx, 31, 0x187A48u);
    ctx->pc = 0x187A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187A40u;
    // 0x187a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x187A40u, 0x187A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187A48u;
label_187a48:
    // 0x187a48: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x187A48u;
    {
        const bool branch_taken_0x187a48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A48u;
        // 0x187a4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a48) {
            ctx->pc = 0x187A54u;
            goto label_187a54;
        }
    }
    ctx->pc = 0x187A50u;
    // 0x187a50: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x187a50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
label_187a54:
    // 0x187a54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x187a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x187a58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x187a58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187a5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x187a5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187a60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x187a60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187a64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x187a64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187a68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187a6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187a70: 0x3e00008  jr          $ra
    ctx->pc = 0x187A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A70u;
        // 0x187a74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187A78u;
}
