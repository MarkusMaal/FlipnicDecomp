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

// Function: FUN_0013b8d0
// Address: 0x13b8d0 - 0x13b9e8
void FUN_0013b8d0_0x13b8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013b8d0_0x13b8d0");
#endif

    switch (ctx->pc) {
        case 0x13b940u: goto label_13b940;
        case 0x13b948u: goto label_13b948;
        case 0x13b9b8u: goto label_13b9b8;
        default: break;
    }

    ctx->pc = 0x13b8d0u;

    // 0x13b8d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13b8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13b8d4: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x13b8d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x13b8d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13b8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13b8dc: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x13b8dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x13b8e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13b8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13b8e4: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x13b8e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x13b8e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13b8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13b8ec: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x13b8ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x13b8f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13b8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13b8f4: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x13b8f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x13b8f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b8fc: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x13b8fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x13b900: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b904: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13b904u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b90c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13b90cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b910: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13b914: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x13b914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b918: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x13b918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b91c: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x13b91cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x13b920: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13B920u;
    {
        const bool branch_taken_0x13b920 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B920u;
        // 0x13b924: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b920) {
            ctx->pc = 0x13B948u;
            goto label_13b948;
        }
    }
    ctx->pc = 0x13B928u;
    // 0x13b928: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x13b928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x13b92c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13b92cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13b930: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13b930u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x13b934: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13b934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13b938: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13B938u;
    SET_GPR_U32(ctx, 31, 0x13B940u);
    ctx->pc = 0x13B93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B938u;
    // 0x13b93c: 0x24a5efb0  addiu       $a1, $a1, -0x1050 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13B938u, 0x13B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B940u;
label_13b940:
    // 0x13b940: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13B940u;
    SET_GPR_U32(ctx, 31, 0x13B948u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13B940u, 0x13B948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B948u;
label_13b948:
    // 0x13b948: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x13b948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x13b94c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x13b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x13b950: 0x24426630  addiu       $v0, $v0, 0x6630
    ctx->pc = 0x13b950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26160));
    // 0x13b954: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x13b954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13b958: 0x24620014  addiu       $v0, $v1, 0x14
    ctx->pc = 0x13b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x13b95c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x13b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x13b960: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B960u;
    {
        const bool branch_taken_0x13b960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B960u;
        // 0x13b964: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b960) {
            ctx->pc = 0x13B978u;
            goto label_13b978;
        }
    }
    ctx->pc = 0x13B968u;
    // 0x13b968: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x13b968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b96c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x13b96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x13b970: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13b970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13b974: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13b974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_13b978:
    // 0x13b978: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x13b978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x13b97c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x13b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x13b980: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13b980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13b984: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13b984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13b988: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x13b988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x13b98c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B98Cu;
    {
        const bool branch_taken_0x13b98c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B98Cu;
        // 0x13b990: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b98c) {
            ctx->pc = 0x13B99Cu;
            goto label_13b99c;
        }
    }
    ctx->pc = 0x13B994u;
    // 0x13b994: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13B994u;
    {
        const bool branch_taken_0x13b994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B994u;
        // 0x13b998: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b994) {
            ctx->pc = 0x13B9A0u;
            goto label_13b9a0;
        }
    }
    ctx->pc = 0x13B99Cu;
label_13b99c:
    // 0x13b99c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x13b99cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_13b9a0:
    // 0x13b9a0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13b9a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13b9a8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x13b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x13b9ac: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x13b9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b9b0: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x13B9B0u;
    SET_GPR_U32(ctx, 31, 0x13B9B8u);
    ctx->pc = 0x13B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B9B0u;
    // 0x13b9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x13B9B0u, 0x13B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9B8u;
label_13b9b8:
    // 0x13b9b8: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B9B8u;
    {
        const bool branch_taken_0x13b9b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9B8u;
        // 0x13b9bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9b8) {
            ctx->pc = 0x13B9C4u;
            goto label_13b9c4;
        }
    }
    ctx->pc = 0x13B9C0u;
    // 0x13b9c0: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x13b9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
label_13b9c4:
    // 0x13b9c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13b9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13b9c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13b9c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b9cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13b9ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b9d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13b9d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b9d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b9d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b9d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b9d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b9dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x13B9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9E0u;
        // 0x13b9e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B9E8u;
}
