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

// Function: FUN_001e98e0
// Address: 0x1e98e0 - 0x1e9c04
void FUN_001e98e0_0x1e98e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e98e0_0x1e98e0");
#endif

    switch (ctx->pc) {
        case 0x1e999cu: goto label_1e999c;
        case 0x1e99dcu: goto label_1e99dc;
        case 0x1e9a50u: goto label_1e9a50;
        case 0x1e9a58u: goto label_1e9a58;
        case 0x1e9a60u: goto label_1e9a60;
        case 0x1e9a6cu: goto label_1e9a6c;
        case 0x1e9a7cu: goto label_1e9a7c;
        case 0x1e9a9cu: goto label_1e9a9c;
        case 0x1e9aacu: goto label_1e9aac;
        case 0x1e9abcu: goto label_1e9abc;
        case 0x1e9ad4u: goto label_1e9ad4;
        case 0x1e9b14u: goto label_1e9b14;
        case 0x1e9b30u: goto label_1e9b30;
        case 0x1e9b5cu: goto label_1e9b5c;
        case 0x1e9b9cu: goto label_1e9b9c;
        case 0x1e9bb0u: goto label_1e9bb0;
        case 0x1e9bc4u: goto label_1e9bc4;
        case 0x1e9bccu: goto label_1e9bcc;
        default: break;
    }

    ctx->pc = 0x1e98e0u;

    // 0x1e98e0: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x1e98e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
    // 0x1e98e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e98e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1e98e8: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x1e98e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x1e98ec: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e98ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e98f0: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x1e98f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e98f4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e98f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e98f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e98f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e98fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e98fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e9900: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1e9900u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9904: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e9904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e9908: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1e9908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1e990c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e990cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e9910: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e9910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9914: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e9914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e9918: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e9918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e991c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9920: 0x27b200a8  addiu       $s2, $sp, 0xA8
    ctx->pc = 0x1e9920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1e9924: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9928: 0x26880020  addiu       $t0, $s4, 0x20
    ctx->pc = 0x1e9928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1e992c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e992cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e9930: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1e9930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x1e9934: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1e9934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e9938: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x1e9938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x1e993c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e9940: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1e9940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1e9944: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1e9944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e9948: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x1e9948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x1e994c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1e994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1e9950: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1e9950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1e9954: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1e9954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9958: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e9958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e995c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e995cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9960: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1e9960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1e9964: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e9964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e9968: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x1e9968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x1e996c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e9970: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1e9970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x1e9974: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1e9974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e9978: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x1e9978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x1e997c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1e997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e9980: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1e9980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1e9984: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1e9984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1e9988: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1e9988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x1e998c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1e998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1e9990: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1e9994: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1e9994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1e9998: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x1e9998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_1e999c:
    // 0x1e999c: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x1e999cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e99a0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1e99a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1e99a4: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x1e99a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1e99a8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x1e99a8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x1e99ac: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1e99acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1e99b0: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x1e99b0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x1e99b4: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E99B4u;
    {
        const bool branch_taken_0x1e99b4 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1E99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99B4u;
        // 0x1e99b8: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99b4) {
            ctx->pc = 0x1E999Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e999c;
        }
    }
    ctx->pc = 0x1E99BCu;
    // 0x1e99bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e99c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E99C0u;
    {
        const bool branch_taken_0x1e99c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e99c0) {
            ctx->pc = 0x1E99D4u;
            goto label_1e99d4;
        }
    }
    ctx->pc = 0x1E99C8u;
    // 0x1e99c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1e99c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e99cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E99CCu;
    {
        const bool branch_taken_0x1e99cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99CCu;
        // 0x1e99d0: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99cc) {
            ctx->pc = 0x1E99D8u;
            goto label_1e99d8;
        }
    }
    ctx->pc = 0x1E99D4u;
label_1e99d4:
    // 0x1e99d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e99d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e99d8:
    // 0x1e99d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e99d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e99dc:
    // 0x1e99dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e99dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e99e0: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x1e99e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e99e4: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
    ctx->pc = 0x1E99E4u;
    {
        const bool branch_taken_0x1e99e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99E4u;
        // 0x1e99e8: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99e4) {
            ctx->pc = 0x1E9BA4u;
            goto label_1e9ba4;
        }
    }
    ctx->pc = 0x1E99ECu;
    // 0x1e99ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e99f0: 0x24634030  addiu       $v1, $v1, 0x4030
    ctx->pc = 0x1e99f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16432));
    // 0x1e99f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e99f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e99fc: 0x400008  jr          $v0
    ctx->pc = 0x1E99FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9A04u: goto label_1e9a04;
            case 0x1E9A8Cu: goto label_1e9a8c;
            case 0x1E9BA4u: goto label_1e9ba4;
            case 0x1E9BB8u: goto label_1e9bb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E99FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E9A04u;
label_1e9a04:
    // 0x1e9a04: 0x0  nop
    ctx->pc = 0x1e9a04u;
    // NOP
    // 0x1e9a08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e9a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e9a0c: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x1e9a0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e9a10: 0x24440005  addiu       $a0, $v0, 0x5
    ctx->pc = 0x1e9a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x1e9a14: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1e9a14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1e9a18: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x1e9a18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e9a1c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1e9a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1e9a20: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1e9a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1e9a24: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x1e9a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e9a28: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1e9a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1e9a2c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1e9a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1e9a30: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1e9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1e9a34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e9a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e9a38: 0xafa20390  sw          $v0, 0x390($sp)
    ctx->pc = 0x1e9a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
    // 0x1e9a3c: 0x8fa20390  lw          $v0, 0x390($sp)
    ctx->pc = 0x1e9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1e9a40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9A40u;
    {
        const bool branch_taken_0x1e9a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a40) {
            ctx->pc = 0x1E9A50u;
            goto label_1e9a50;
        }
    }
    ctx->pc = 0x1E9A48u;
    // 0x1e9a48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9A48u;
    {
        const bool branch_taken_0x1e9a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A48u;
        // 0x1e9a4c: 0xafa20390  sw          $v0, 0x390($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9a48) {
            ctx->pc = 0x1E9A58u;
            goto label_1e9a58;
        }
    }
    ctx->pc = 0x1E9A50u;
label_1e9a50:
    // 0x1e9a50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a54: 0xafa20390  sw          $v0, 0x390($sp)
    ctx->pc = 0x1e9a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
label_1e9a58:
    // 0x1e9a58: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1E9A58u;
    SET_GPR_U32(ctx, 31, 0x1E9A60u);
    ctx->pc = 0x1E9A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A58u;
    // 0x1e9a5c: 0x27a50394  addiu       $a1, $sp, 0x394 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 916));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1E9A58u, 0x1E9A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A60u;
label_1e9a60:
    // 0x1e9a60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e9a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a64: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1E9A64u;
    SET_GPR_U32(ctx, 31, 0x1E9A6Cu);
    ctx->pc = 0x1E9A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A64u;
    // 0x1e9a68: 0x27a50398  addiu       $a1, $sp, 0x398 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1E9A64u, 0x1E9A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A6Cu;
label_1e9a6c:
    // 0x1e9a6c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1e9a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e9a70: 0x8fa50390  lw          $a1, 0x390($sp)
    ctx->pc = 0x1e9a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1e9a74: 0xc07a478  jal         func_1E91E0
    ctx->pc = 0x1E9A74u;
    SET_GPR_U32(ctx, 31, 0x1E9A7Cu);
    ctx->pc = 0x1E9A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A74u;
    // 0x1e9a78: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E91E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E91E0u, 0x1E9A74u, 0x1E9A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A7Cu;
label_1e9a7c:
    // 0x1e9a7c: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1E9A7Cu;
    {
        const bool branch_taken_0x1e9a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A7Cu;
        // 0x1e9a80: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9a7c) {
            ctx->pc = 0x1E9BBCu;
            goto label_1e9bbc;
        }
    }
    ctx->pc = 0x1E9A84u;
    // 0x1e9a84: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1E9A84u;
    {
        const bool branch_taken_0x1e9a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a84) {
            ctx->pc = 0x1E9BCCu;
            goto label_1e9bcc;
        }
    }
    ctx->pc = 0x1E9A8Cu;
label_1e9a8c:
    // 0x1e9a8c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e9a90: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x1e9a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x1e9a94: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1E9A94u;
    SET_GPR_U32(ctx, 31, 0x1E9A9Cu);
    ctx->pc = 0x1E9A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A94u;
    // 0x1e9a98: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1E9A94u, 0x1E9A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A9Cu;
label_1e9a9c:
    // 0x1e9a9c: 0x27b70384  addiu       $s7, $sp, 0x384
    ctx->pc = 0x1e9a9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 900));
    // 0x1e9aa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e9aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9aa4: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1E9AA4u;
    SET_GPR_U32(ctx, 31, 0x1E9AACu);
    ctx->pc = 0x1E9AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9AA4u;
    // 0x1e9aa8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1E9AA4u, 0x1E9AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9AACu;
label_1e9aac:
    // 0x1e9aac: 0x27be0388  addiu       $fp, $sp, 0x388
    ctx->pc = 0x1e9aacu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 904));
    // 0x1e9ab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e9ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ab4: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1E9AB4u;
    SET_GPR_U32(ctx, 31, 0x1E9ABCu);
    ctx->pc = 0x1E9AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9AB4u;
    // 0x1e9ab8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1E9AB4u, 0x1E9ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9ABCu;
label_1e9abc:
    // 0x1e9abc: 0x27a3038c  addiu       $v1, $sp, 0x38C
    ctx->pc = 0x1e9abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 908));
    // 0x1e9ac0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e9ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9ac4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1e9ac4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e9ac8: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x1e9ac8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e9acc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E9ACCu;
    {
        const bool branch_taken_0x1e9acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9ACCu;
        // 0x1e9ad0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9acc) {
            ctx->pc = 0x1E9B30u;
            goto label_1e9b30;
        }
    }
    ctx->pc = 0x1E9AD4u;
label_1e9ad4:
    // 0x1e9ad4: 0x0  nop
    ctx->pc = 0x1e9ad4u;
    // NOP
    // 0x1e9ad8: 0x92270001  lbu         $a3, 0x1($s1)
    ctx->pc = 0x1e9ad8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1e9adc: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x1e9adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e9ae0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e9ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ae4: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1e9ae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1e9ae8: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x1e9ae8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e9aec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1e9aecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1e9af0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1e9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1e9af4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1e9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1e9af8: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1e9af8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1e9afc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1e9afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1e9b00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e9b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e9b04: 0xafa203ac  sw          $v0, 0x3AC($sp)
    ctx->pc = 0x1e9b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 940), GPR_U32(ctx, 2));
    // 0x1e9b08: 0x8fa503ac  lw          $a1, 0x3AC($sp)
    ctx->pc = 0x1e9b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 940)));
    // 0x1e9b0c: 0xc07a478  jal         func_1E91E0
    ctx->pc = 0x1E9B0Cu;
    SET_GPR_U32(ctx, 31, 0x1E9B14u);
    ctx->pc = 0x1E9B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B0Cu;
    // 0x1e9b10: 0x27a603a0  addiu       $a2, $sp, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E91E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E91E0u, 0x1E9B0Cu, 0x1E9B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B14u;
label_1e9b14:
    // 0x1e9b14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9B14u;
    {
        const bool branch_taken_0x1e9b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b14) {
            ctx->pc = 0x1E9B24u;
            goto label_1e9b24;
        }
    }
    ctx->pc = 0x1E9B1Cu;
    // 0x1e9b1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9B1Cu;
    {
        const bool branch_taken_0x1e9b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B1Cu;
        // 0x1e9b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b1c) {
            ctx->pc = 0x1E9B40u;
            goto label_1e9b40;
        }
    }
    ctx->pc = 0x1E9B24u;
label_1e9b24:
    // 0x1e9b24: 0x0  nop
    ctx->pc = 0x1e9b24u;
    // NOP
    // 0x1e9b28: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1e9b28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1e9b2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e9b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e9b30:
    // 0x1e9b30: 0x8fa20380  lw          $v0, 0x380($sp)
    ctx->pc = 0x1e9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x1e9b34: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e9b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e9b38: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1E9B38u;
    {
        const bool branch_taken_0x1e9b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B38u;
        // 0x1e9b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b38) {
            ctx->pc = 0x1E9AD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9ad4;
        }
    }
    ctx->pc = 0x1E9B40u;
label_1e9b40:
    // 0x1e9b40: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E9B40u;
    {
        const bool branch_taken_0x1e9b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b40) {
            ctx->pc = 0x1E9BB8u;
            goto label_1e9bb8;
        }
    }
    ctx->pc = 0x1E9B48u;
    // 0x1e9b48: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1e9b48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e9b4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e9b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e9b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b54: 0xc07a7f0  jal         func_1E9FC0
    ctx->pc = 0x1E9B54u;
    SET_GPR_U32(ctx, 31, 0x1E9B5Cu);
    ctx->pc = 0x1E9B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B54u;
    // 0x1e9b58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9FC0u, 0x1E9B54u, 0x1E9B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B5Cu;
label_1e9b5c:
    // 0x1e9b5c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x1e9b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e9b60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e9b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b64: 0x8e860018  lw          $a2, 0x18($s4)
    ctx->pc = 0x1e9b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1e9b68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e9b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b6c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1e9b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e9b70: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1e9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1e9b74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e9b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9b78: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1e9b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e9b7c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e9b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e9b80: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1e9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e9b84: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1e9b84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1e9b88: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x1e9b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x1e9b8c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1e9b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1e9b90: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e9b94: 0xc07ab48  jal         func_1EAD20
    ctx->pc = 0x1E9B94u;
    SET_GPR_U32(ctx, 31, 0x1E9B9Cu);
    ctx->pc = 0x1E9B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B94u;
    // 0x1e9b98: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD20u, 0x1E9B94u, 0x1E9B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B9Cu;
label_1e9b9c:
    // 0x1e9b9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9B9Cu;
    {
        const bool branch_taken_0x1e9b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b9c) {
            ctx->pc = 0x1E9BB8u;
            goto label_1e9bb8;
        }
    }
    ctx->pc = 0x1E9BA4u;
label_1e9ba4:
    // 0x1e9ba4: 0x0  nop
    ctx->pc = 0x1e9ba4u;
    // NOP
    // 0x1e9ba8: 0xc07a520  jal         func_1E9480
    ctx->pc = 0x1E9BA8u;
    SET_GPR_U32(ctx, 31, 0x1E9BB0u);
    ctx->pc = 0x1E9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9480u, 0x1E9BA8u, 0x1E9BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BB0u;
label_1e9bb0:
    // 0x1e9bb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9BB0u;
    {
        const bool branch_taken_0x1e9bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9bb0) {
            ctx->pc = 0x1E9BCCu;
            goto label_1e9bcc;
        }
    }
    ctx->pc = 0x1E9BB8u;
label_1e9bb8:
    // 0x1e9bb8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e9bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1e9bbc:
    // 0x1e9bbc: 0xc07aa0c  jal         func_1EA830
    ctx->pc = 0x1E9BBCu;
    SET_GPR_U32(ctx, 31, 0x1E9BC4u);
    ctx->pc = 0x1EA830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA830u, 0x1E9BBCu, 0x1E9BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BC4u;
label_1e9bc4:
    // 0x1e9bc4: 0x1000ff85  b           . + 4 + (-0x7B << 2)
    ctx->pc = 0x1E9BC4u;
    {
        const bool branch_taken_0x1e9bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BC4u;
        // 0x1e9bc8: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9bc4) {
            ctx->pc = 0x1E99DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e99dc;
        }
    }
    ctx->pc = 0x1E9BCCu;
label_1e9bcc:
    // 0x1e9bcc: 0x0  nop
    ctx->pc = 0x1e9bccu;
    // NOP
    // 0x1e9bd0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e9bd4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e9bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e9bd8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e9bd8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e9bdc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e9bdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e9be0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e9be0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9be4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e9be4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9be8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e9be8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9bec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e9becu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9bf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9bf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9bf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9bf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BFCu;
        // 0x1e9c00: 0x27bd03b0  addiu       $sp, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9C04u;
}
