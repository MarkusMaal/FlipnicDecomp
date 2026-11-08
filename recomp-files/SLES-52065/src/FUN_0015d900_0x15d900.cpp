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

// Function: FUN_0015d900
// Address: 0x15d900 - 0x15e1d0
void FUN_0015d900_0x15d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015d900_0x15d900");
#endif

    switch (ctx->pc) {
        case 0x15d94cu: goto label_15d94c;
        case 0x15d974u: goto label_15d974;
        case 0x15d980u: goto label_15d980;
        case 0x15d98cu: goto label_15d98c;
        case 0x15d9b0u: goto label_15d9b0;
        case 0x15db34u: goto label_15db34;
        case 0x15db8cu: goto label_15db8c;
        case 0x15dba8u: goto label_15dba8;
        case 0x15dce4u: goto label_15dce4;
        case 0x15dd28u: goto label_15dd28;
        case 0x15dd30u: goto label_15dd30;
        case 0x15dd38u: goto label_15dd38;
        case 0x15dd7cu: goto label_15dd7c;
        case 0x15ddacu: goto label_15ddac;
        case 0x15ddb8u: goto label_15ddb8;
        case 0x15ddc4u: goto label_15ddc4;
        case 0x15dde8u: goto label_15dde8;
        case 0x15df6cu: goto label_15df6c;
        case 0x15dfc4u: goto label_15dfc4;
        case 0x15dfe0u: goto label_15dfe0;
        case 0x15e11cu: goto label_15e11c;
        case 0x15e160u: goto label_15e160;
        case 0x15e168u: goto label_15e168;
        case 0x15e170u: goto label_15e170;
        default: break;
    }

    ctx->pc = 0x15d900u;

    // 0x15d900: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x15d900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x15d904: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x15d908: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15d908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15d90c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15d910: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15d910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15d914: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15d914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15d918: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15d918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15d91c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15d91cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d920: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15d920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15d924: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15d928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d92c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d930: 0x8c832c20  lw          $v1, 0x2C20($a0)
    ctx->pc = 0x15d930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11296)));
    // 0x15d934: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x15d934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x15d938: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x15d938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15d93c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x15d93cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15d940: 0x10200108  beqz        $at, . + 4 + (0x108 << 2)
    ctx->pc = 0x15D940u;
    {
        const bool branch_taken_0x15d940 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D940u;
        // 0x15d944: 0xafa00130  sw          $zero, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d940) {
            ctx->pc = 0x15DD64u;
            goto label_15dd64;
        }
    }
    ctx->pc = 0x15D948u;
    // 0x15d948: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x15d948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
label_15d94c:
    // 0x15d94c: 0x8ea42c1c  lw          $a0, 0x2C1C($s5)
    ctx->pc = 0x15d94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15d950: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x15d950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x15d954: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15d954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15d958: 0x8470000a  lh          $s0, 0xA($v1)
    ctx->pc = 0x15d958u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x15d95c: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x15d95cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15d960: 0x142000f5  bnez        $at, . + 4 + (0xF5 << 2)
    ctx->pc = 0x15D960u;
    {
        const bool branch_taken_0x15d960 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D960u;
        // 0x15d964: 0x8c740030  lw          $s4, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d960) {
            ctx->pc = 0x15DD38u;
            goto label_15dd38;
        }
    }
    ctx->pc = 0x15D968u;
    // 0x15d968: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x15d968u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15d96c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x15D96Cu;
    SET_GPR_U32(ctx, 31, 0x15D974u);
    ctx->pc = 0x15D970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D96Cu;
    // 0x15d970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x15D96Cu, 0x15D974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D974u;
label_15d974:
    // 0x15d974: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15d974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d978: 0xc040168  jal         func_1005A0
    ctx->pc = 0x15D978u;
    SET_GPR_U32(ctx, 31, 0x15D980u);
    ctx->pc = 0x15D97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D978u;
    // 0x15d97c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x15D978u, 0x15D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D980u;
label_15d980:
    // 0x15d980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d984: 0xc040168  jal         func_1005A0
    ctx->pc = 0x15D984u;
    SET_GPR_U32(ctx, 31, 0x15D98Cu);
    ctx->pc = 0x15D988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D984u;
    // 0x15d988: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x15D984u, 0x15D98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D98Cu;
label_15d98c:
    // 0x15d98c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15d98cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15d990: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15d990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d994: 0x10200078  beqz        $at, . + 4 + (0x78 << 2)
    ctx->pc = 0x15D994u;
    {
        const bool branch_taken_0x15d994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D994u;
        // 0x15d998: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d994) {
            ctx->pc = 0x15DB78u;
            goto label_15db78;
        }
    }
    ctx->pc = 0x15D99Cu;
    // 0x15d99c: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x15d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x15d9a0: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x15d9a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x15d9a4: 0x14200060  bnez        $at, . + 4 + (0x60 << 2)
    ctx->pc = 0x15D9A4u;
    {
        const bool branch_taken_0x15d9a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9A4u;
        // 0x15d9a8: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9a4) {
            ctx->pc = 0x15DB28u;
            goto label_15db28;
        }
    }
    ctx->pc = 0x15D9ACu;
    // 0x15d9ac: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x15d9acu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d9b0:
    // 0x15d9b0: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x15d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x15d9b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d9b8: 0x25ac0001  addiu       $t4, $t5, 0x1
    ctx->pc = 0x15d9b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x15d9bc: 0x2a2b021  addu        $s6, $s5, $v0
    ctx->pc = 0x15d9bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15d9c0: 0x25aa0002  addiu       $t2, $t5, 0x2
    ctx->pc = 0x15d9c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x15d9c4: 0x8ec42cd8  lw          $a0, 0x2CD8($s6)
    ctx->pc = 0x15d9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11480)));
    // 0x15d9c8: 0x28a1021  addu        $v0, $s4, $t2
    ctx->pc = 0x15d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
    // 0x15d9cc: 0x28c1821  addu        $v1, $s4, $t4
    ctx->pc = 0x15d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 12)));
    // 0x15d9d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d9d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15d9d8: 0x22e7821  addu        $t7, $s1, $t6
    ctx->pc = 0x15d9d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
    // 0x15d9dc: 0x24ec021  addu        $t8, $s2, $t6
    ctx->pc = 0x15d9dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x15d9e0: 0x26ec821  addu        $t9, $s3, $t6
    ctx->pc = 0x15d9e0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x15d9e4: 0x2a24821  addu        $t1, $s5, $v0
    ctx->pc = 0x15d9e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15d9e8: 0x25a80003  addiu       $t0, $t5, 0x3
    ctx->pc = 0x15d9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x15d9ec: 0x2a35821  addu        $t3, $s5, $v1
    ctx->pc = 0x15d9ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15d9f0: 0x2881021  addu        $v0, $s4, $t0
    ctx->pc = 0x15d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x15d9f4: 0xc4800200  lwc1        $f0, 0x200($a0)
    ctx->pc = 0x15d9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d9f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d9fc: 0x25a60004  addiu       $a2, $t5, 0x4
    ctx->pc = 0x15d9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x15da00: 0x2a33821  addu        $a3, $s5, $v1
    ctx->pc = 0x15da00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15da04: 0x2861021  addu        $v0, $s4, $a2
    ctx->pc = 0x15da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x15da08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15da08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15da0c: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x15da0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15da10: 0x25a20006  addiu       $v0, $t5, 0x6
    ctx->pc = 0x15da10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 6));
    // 0x15da14: 0xe5e00000  swc1        $f0, 0x0($t7)
    ctx->pc = 0x15da14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x15da18: 0x282b821  addu        $s7, $s4, $v0
    ctx->pc = 0x15da18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15da1c: 0xaf0d0000  sw          $t5, 0x0($t8)
    ctx->pc = 0x15da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 13));
    // 0x15da20: 0x17b880  sll         $s7, $s7, 2
    ctx->pc = 0x15da20u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x15da24: 0x8ed62cd8  lw          $s6, 0x2CD8($s6)
    ctx->pc = 0x15da24u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11480)));
    // 0x15da28: 0x25a40005  addiu       $a0, $t5, 0x5
    ctx->pc = 0x15da28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 5));
    // 0x15da2c: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x15da2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x15da30: 0x2b7f021  addu        $fp, $s5, $s7
    ctx->pc = 0x15da30u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
    // 0x15da34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15da34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15da38: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x15da38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15da3c: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x15da3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
    // 0x15da40: 0x25b60007  addiu       $s6, $t5, 0x7
    ctx->pc = 0x15da40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 13), 7));
    // 0x15da44: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x15da44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x15da48: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x15da48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x15da4c: 0x296b021  addu        $s6, $s4, $s6
    ctx->pc = 0x15da4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x15da50: 0x16b880  sll         $s7, $s6, 2
    ctx->pc = 0x15da50u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x15da54: 0x8fb60160  lw          $s6, 0x160($sp)
    ctx->pc = 0x15da54u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x15da58: 0x2b7b821  addu        $s7, $s5, $s7
    ctx->pc = 0x15da58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
    // 0x15da5c: 0x1b6b02a  slt         $s6, $t5, $s6
    ctx->pc = 0x15da5cu;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x15da60: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x15da60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x15da64: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x15da64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15da68: 0xaf360000  sw          $s6, 0x0($t9)
    ctx->pc = 0x15da68u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 22));
    // 0x15da6c: 0x8d762cd8  lw          $s6, 0x2CD8($t3)
    ctx->pc = 0x15da6cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 11480)));
    // 0x15da70: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x15da70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x15da74: 0xc6c00200  lwc1        $f0, 0x200($s6)
    ctx->pc = 0x15da74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15da78: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x15da78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x15da7c: 0xaf0c0004  sw          $t4, 0x4($t8)
    ctx->pc = 0x15da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 12));
    // 0x15da80: 0x8d6b2cd8  lw          $t3, 0x2CD8($t3)
    ctx->pc = 0x15da80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 11480)));
    // 0x15da84: 0xaf2b0004  sw          $t3, 0x4($t9)
    ctx->pc = 0x15da84u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4), GPR_U32(ctx, 11));
    // 0x15da88: 0x8d2b2cd8  lw          $t3, 0x2CD8($t1)
    ctx->pc = 0x15da88u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
    // 0x15da8c: 0xc5600200  lwc1        $f0, 0x200($t3)
    ctx->pc = 0x15da8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15da90: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x15da90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x15da94: 0xaf0a0008  sw          $t2, 0x8($t8)
    ctx->pc = 0x15da94u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 10));
    // 0x15da98: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x15da98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
    // 0x15da9c: 0xaf290008  sw          $t1, 0x8($t9)
    ctx->pc = 0x15da9cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 9));
    // 0x15daa0: 0x8ce92cd8  lw          $t1, 0x2CD8($a3)
    ctx->pc = 0x15daa0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11480)));
    // 0x15daa4: 0xc5200200  lwc1        $f0, 0x200($t1)
    ctx->pc = 0x15daa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15daa8: 0xe5e0000c  swc1        $f0, 0xC($t7)
    ctx->pc = 0x15daa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x15daac: 0xaf08000c  sw          $t0, 0xC($t8)
    ctx->pc = 0x15daacu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 8));
    // 0x15dab0: 0x8ce72cd8  lw          $a3, 0x2CD8($a3)
    ctx->pc = 0x15dab0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11480)));
    // 0x15dab4: 0xaf27000c  sw          $a3, 0xC($t9)
    ctx->pc = 0x15dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 7));
    // 0x15dab8: 0x8ca72cd8  lw          $a3, 0x2CD8($a1)
    ctx->pc = 0x15dab8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
    // 0x15dabc: 0xc4e00200  lwc1        $f0, 0x200($a3)
    ctx->pc = 0x15dabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15dac0: 0xe5e00010  swc1        $f0, 0x10($t7)
    ctx->pc = 0x15dac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 16), bits); }
    // 0x15dac4: 0xaf060010  sw          $a2, 0x10($t8)
    ctx->pc = 0x15dac4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 6));
    // 0x15dac8: 0x8ca52cd8  lw          $a1, 0x2CD8($a1)
    ctx->pc = 0x15dac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
    // 0x15dacc: 0xaf250010  sw          $a1, 0x10($t9)
    ctx->pc = 0x15daccu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 5));
    // 0x15dad0: 0x8c652cd8  lw          $a1, 0x2CD8($v1)
    ctx->pc = 0x15dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x15dad4: 0xc4a00200  lwc1        $f0, 0x200($a1)
    ctx->pc = 0x15dad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15dad8: 0xe5e00014  swc1        $f0, 0x14($t7)
    ctx->pc = 0x15dad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 20), bits); }
    // 0x15dadc: 0xaf040014  sw          $a0, 0x14($t8)
    ctx->pc = 0x15dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 4));
    // 0x15dae0: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x15dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x15dae4: 0xaf230014  sw          $v1, 0x14($t9)
    ctx->pc = 0x15dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 20), GPR_U32(ctx, 3));
    // 0x15dae8: 0x8fc32cd8  lw          $v1, 0x2CD8($fp)
    ctx->pc = 0x15dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11480)));
    // 0x15daec: 0xc4600200  lwc1        $f0, 0x200($v1)
    ctx->pc = 0x15daecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15daf0: 0xe5e00018  swc1        $f0, 0x18($t7)
    ctx->pc = 0x15daf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 24), bits); }
    // 0x15daf4: 0xaf020018  sw          $v0, 0x18($t8)
    ctx->pc = 0x15daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 24), GPR_U32(ctx, 2));
    // 0x15daf8: 0x8fc22cd8  lw          $v0, 0x2CD8($fp)
    ctx->pc = 0x15daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11480)));
    // 0x15dafc: 0xaf220018  sw          $v0, 0x18($t9)
    ctx->pc = 0x15dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 24), GPR_U32(ctx, 2));
    // 0x15db00: 0x8ee22cd8  lw          $v0, 0x2CD8($s7)
    ctx->pc = 0x15db00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11480)));
    // 0x15db04: 0xc4400200  lwc1        $f0, 0x200($v0)
    ctx->pc = 0x15db04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15db08: 0xe5e0001c  swc1        $f0, 0x1C($t7)
    ctx->pc = 0x15db08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 28), bits); }
    // 0x15db0c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x15db0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15db10: 0xaf02001c  sw          $v0, 0x1C($t8)
    ctx->pc = 0x15db10u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 28), GPR_U32(ctx, 2));
    // 0x15db14: 0x8ee22cd8  lw          $v0, 0x2CD8($s7)
    ctx->pc = 0x15db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11480)));
    // 0x15db18: 0xaf22001c  sw          $v0, 0x1C($t9)
    ctx->pc = 0x15db18u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 28), GPR_U32(ctx, 2));
    // 0x15db1c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x15db1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15db20: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x15DB20u;
    {
        const bool branch_taken_0x15db20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB20u;
        // 0x15db24: 0x25ce0020  addiu       $t6, $t6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db20) {
            ctx->pc = 0x15D9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d9b0;
        }
    }
    ctx->pc = 0x15DB28u;
label_15db28:
    // 0x15db28: 0x1b0082a  slt         $at, $t5, $s0
    ctx->pc = 0x15db28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15db2c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x15DB2Cu;
    {
        const bool branch_taken_0x15db2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB2Cu;
        // 0x15db30: 0xd3880  sll         $a3, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db2c) {
            ctx->pc = 0x15DB78u;
            goto label_15db78;
        }
    }
    ctx->pc = 0x15DB34u;
label_15db34:
    // 0x15db34: 0x0  nop
    ctx->pc = 0x15db34u;
    // NOP
    // 0x15db38: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x15db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x15db3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15db40: 0x2272021  addu        $a0, $s1, $a3
    ctx->pc = 0x15db40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x15db44: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x15db44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15db48: 0x2671821  addu        $v1, $s3, $a3
    ctx->pc = 0x15db48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x15db4c: 0x8cc52cd8  lw          $a1, 0x2CD8($a2)
    ctx->pc = 0x15db4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
    // 0x15db50: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x15db50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x15db54: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x15db54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x15db58: 0xc4a00200  lwc1        $f0, 0x200($a1)
    ctx->pc = 0x15db58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15db5c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x15db5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15db60: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x15db60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x15db64: 0x8cc42cd8  lw          $a0, 0x2CD8($a2)
    ctx->pc = 0x15db64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
    // 0x15db68: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x15db68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x15db6c: 0x1b0102a  slt         $v0, $t5, $s0
    ctx->pc = 0x15db6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15db70: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15DB70u;
    {
        const bool branch_taken_0x15db70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB70u;
        // 0x15db74: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db70) {
            ctx->pc = 0x15DB34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15db34;
        }
    }
    ctx->pc = 0x15DB78u;
label_15db78:
    // 0x15db78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15db78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15db7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15db80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db84: 0xc059568  jal         func_1655A0
    ctx->pc = 0x15DB84u;
    SET_GPR_U32(ctx, 31, 0x15DB8Cu);
    ctx->pc = 0x15DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB84u;
    // 0x15db88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1655A0u, 0x15DB84u, 0x15DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB8Cu;
label_15db8c:
    // 0x15db8c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15db8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15db90: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x15DB90u;
    {
        const bool branch_taken_0x15db90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB90u;
        // 0x15db94: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db90) {
            ctx->pc = 0x15DD1Cu;
            goto label_15dd1c;
        }
    }
    ctx->pc = 0x15DB98u;
    // 0x15db98: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x15db98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x15db9c: 0x1420004e  bnez        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x15DB9Cu;
    {
        const bool branch_taken_0x15db9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB9Cu;
        // 0x15dba0: 0x260afff8  addiu       $t2, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db9c) {
            ctx->pc = 0x15DCD8u;
            goto label_15dcd8;
        }
    }
    ctx->pc = 0x15DBA4u;
    // 0x15dba4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x15dba4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15dba8:
    // 0x15dba8: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x15dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x15dbac: 0x24b6021  addu        $t4, $s2, $t3
    ctx->pc = 0x15dbacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x15dbb0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dbb4: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x15dbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x15dbb8: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x15dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x15dbbc: 0x2a33821  addu        $a3, $s5, $v1
    ctx->pc = 0x15dbbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15dbc0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15dbc4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dbc8: 0x252d0006  addiu       $t5, $t1, 0x6
    ctx->pc = 0x15dbc8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x15dbcc: 0x25220002  addiu       $v0, $t1, 0x2
    ctx->pc = 0x15dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x15dbd0: 0x2a33021  addu        $a2, $s5, $v1
    ctx->pc = 0x15dbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15dbd4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15dbd8: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x15dbd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x15dbdc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dbe0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15dbe4: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x15dbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15dbe8: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x15dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x15dbec: 0x25220003  addiu       $v0, $t1, 0x3
    ctx->pc = 0x15dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x15dbf0: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x15dbf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15dbf4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15dbf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dbfc: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x15dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15dc00: 0x25220004  addiu       $v0, $t1, 0x4
    ctx->pc = 0x15dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x15dc04: 0xace82cd8  sw          $t0, 0x2CD8($a3)
    ctx->pc = 0x15dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 11480), GPR_U32(ctx, 8));
    // 0x15dc08: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x15dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15dc0c: 0x8d8e0004  lw          $t6, 0x4($t4)
    ctx->pc = 0x15dc0cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x15dc10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15dc14: 0x25220005  addiu       $v0, $t1, 0x5
    ctx->pc = 0x15dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x15dc18: 0x28d3821  addu        $a3, $s4, $t5
    ctx->pc = 0x15dc18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x15dc1c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15dc20: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x15dc20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15dc24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dc28: 0x2a76821  addu        $t5, $s5, $a3
    ctx->pc = 0x15dc28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x15dc2c: 0x25270007  addiu       $a3, $t1, 0x7
    ctx->pc = 0x15dc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x15dc30: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x15dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15dc34: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x15dc34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x15dc38: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x15dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15dc3c: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x15dc3cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x15dc40: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x15dc40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15dc44: 0x26e7021  addu        $t6, $s3, $t6
    ctx->pc = 0x15dc44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x15dc48: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x15dc48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x15dc4c: 0x8dce0000  lw          $t6, 0x0($t6)
    ctx->pc = 0x15dc4cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x15dc50: 0x2a74021  addu        $t0, $s5, $a3
    ctx->pc = 0x15dc50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x15dc54: 0x12a382a  slt         $a3, $t1, $t2
    ctx->pc = 0x15dc54u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x15dc58: 0xacce2cd8  sw          $t6, 0x2CD8($a2)
    ctx->pc = 0x15dc58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11480), GPR_U32(ctx, 14));
    // 0x15dc5c: 0x8d860008  lw          $a2, 0x8($t4)
    ctx->pc = 0x15dc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x15dc60: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15dc60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15dc64: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x15dc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x15dc68: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x15dc68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15dc6c: 0xaca62cd8  sw          $a2, 0x2CD8($a1)
    ctx->pc = 0x15dc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11480), GPR_U32(ctx, 6));
    // 0x15dc70: 0x8d85000c  lw          $a1, 0xC($t4)
    ctx->pc = 0x15dc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x15dc74: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15dc74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15dc78: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x15dc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x15dc7c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x15dc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15dc80: 0xac852cd8  sw          $a1, 0x2CD8($a0)
    ctx->pc = 0x15dc80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11480), GPR_U32(ctx, 5));
    // 0x15dc84: 0x8d840010  lw          $a0, 0x10($t4)
    ctx->pc = 0x15dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x15dc88: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15dc8c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x15dc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x15dc90: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15dc94: 0xac642cd8  sw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15dc94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 4));
    // 0x15dc98: 0x8d830014  lw          $v1, 0x14($t4)
    ctx->pc = 0x15dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x15dc9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15dca0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x15dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x15dca4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15dca8: 0xac432cd8  sw          $v1, 0x2CD8($v0)
    ctx->pc = 0x15dca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11480), GPR_U32(ctx, 3));
    // 0x15dcac: 0x8d820018  lw          $v0, 0x18($t4)
    ctx->pc = 0x15dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x15dcb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dcb4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x15dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x15dcb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15dcbc: 0xada22cd8  sw          $v0, 0x2CD8($t5)
    ctx->pc = 0x15dcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 11480), GPR_U32(ctx, 2));
    // 0x15dcc0: 0x8d82001c  lw          $v0, 0x1C($t4)
    ctx->pc = 0x15dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x15dcc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dcc8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x15dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x15dccc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15dcd0: 0x14e0ffb5  bnez        $a3, . + 4 + (-0x4B << 2)
    ctx->pc = 0x15DCD0u;
    {
        const bool branch_taken_0x15dcd0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCD0u;
        // 0x15dcd4: 0xad022cd8  sw          $v0, 0x2CD8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 11480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dcd0) {
            ctx->pc = 0x15DBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15dba8;
        }
    }
    ctx->pc = 0x15DCD8u;
label_15dcd8:
    // 0x15dcd8: 0x130082a  slt         $at, $t1, $s0
    ctx->pc = 0x15dcd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15dcdc: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x15DCDCu;
    {
        const bool branch_taken_0x15dcdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCDCu;
        // 0x15dce0: 0x92880  sll         $a1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dcdc) {
            ctx->pc = 0x15DD1Cu;
            goto label_15dd1c;
        }
    }
    ctx->pc = 0x15DCE4u;
label_15dce4:
    // 0x15dce4: 0x0  nop
    ctx->pc = 0x15dce4u;
    // NOP
    // 0x15dce8: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x15dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x15dcec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15dcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15dcf0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x15dcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x15dcf4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15dcf8: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x15dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x15dcfc: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x15dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x15dd00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dd04: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15dd08: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x15dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15dd0c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x15dd0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x15dd10: 0x130102a  slt         $v0, $t1, $s0
    ctx->pc = 0x15dd10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15dd14: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x15DD14u;
    {
        const bool branch_taken_0x15dd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD14u;
        // 0x15dd18: 0xac642cd8  sw          $a0, 0x2CD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd14) {
            ctx->pc = 0x15DCE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15dce4;
        }
    }
    ctx->pc = 0x15DD1Cu;
label_15dd1c:
    // 0x15dd1c: 0x0  nop
    ctx->pc = 0x15dd1cu;
    // NOP
    // 0x15dd20: 0xc04018c  jal         func_100630
    ctx->pc = 0x15DD20u;
    SET_GPR_U32(ctx, 31, 0x15DD28u);
    ctx->pc = 0x15DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD20u;
    // 0x15dd24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x15DD20u, 0x15DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD28u;
label_15dd28:
    // 0x15dd28: 0xc04018c  jal         func_100630
    ctx->pc = 0x15DD28u;
    SET_GPR_U32(ctx, 31, 0x15DD30u);
    ctx->pc = 0x15DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD28u;
    // 0x15dd2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x15DD28u, 0x15DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD30u;
label_15dd30:
    // 0x15dd30: 0xc04018c  jal         func_100630
    ctx->pc = 0x15DD30u;
    SET_GPR_U32(ctx, 31, 0x15DD38u);
    ctx->pc = 0x15DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD30u;
    // 0x15dd34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x15DD30u, 0x15DD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD38u;
label_15dd38:
    // 0x15dd38: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x15dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x15dd3c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x15dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x15dd40: 0xafa30170  sw          $v1, 0x170($sp)
    ctx->pc = 0x15dd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
    // 0x15dd44: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x15dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x15dd48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15dd4c: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x15dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x15dd50: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x15dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x15dd54: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x15dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15dd58: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x15dd58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15dd5c: 0x1460fefb  bnez        $v1, . + 4 + (-0x105 << 2)
    ctx->pc = 0x15DD5Cu;
    {
        const bool branch_taken_0x15dd5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dd5c) {
            ctx->pc = 0x15D94Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d94c;
        }
    }
    ctx->pc = 0x15DD64u;
label_15dd64:
    // 0x15dd64: 0x0  nop
    ctx->pc = 0x15dd64u;
    // NOP
    // 0x15dd68: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x15dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15dd6c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x15dd6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15dd70: 0x1020010a  beqz        $at, . + 4 + (0x10A << 2)
    ctx->pc = 0x15DD70u;
    {
        const bool branch_taken_0x15dd70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD70u;
        // 0x15dd74: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd70) {
            ctx->pc = 0x15E19Cu;
            goto label_15e19c;
        }
    }
    ctx->pc = 0x15DD78u;
    // 0x15dd78: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x15dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
label_15dd7c:
    // 0x15dd7c: 0x8ea42c1c  lw          $a0, 0x2C1C($s5)
    ctx->pc = 0x15dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15dd80: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x15dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x15dd84: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x15dd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15dd88: 0x84b0000c  lh          $s0, 0xC($a1)
    ctx->pc = 0x15dd88u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x15dd8c: 0x84a4000a  lh          $a0, 0xA($a1)
    ctx->pc = 0x15dd8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x15dd90: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x15dd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x15dd94: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x15dd94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15dd98: 0x142000f5  bnez        $at, . + 4 + (0xF5 << 2)
    ctx->pc = 0x15DD98u;
    {
        const bool branch_taken_0x15dd98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD98u;
        // 0x15dd9c: 0x64a021  addu        $s4, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd98) {
            ctx->pc = 0x15E170u;
            goto label_15e170;
        }
    }
    ctx->pc = 0x15DDA0u;
    // 0x15dda0: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x15dda0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15dda4: 0xc040168  jal         func_1005A0
    ctx->pc = 0x15DDA4u;
    SET_GPR_U32(ctx, 31, 0x15DDACu);
    ctx->pc = 0x15DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDA4u;
    // 0x15dda8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x15DDA4u, 0x15DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDACu;
label_15ddac:
    // 0x15ddac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15ddacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ddb0: 0xc040168  jal         func_1005A0
    ctx->pc = 0x15DDB0u;
    SET_GPR_U32(ctx, 31, 0x15DDB8u);
    ctx->pc = 0x15DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDB0u;
    // 0x15ddb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x15DDB0u, 0x15DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDB8u;
label_15ddb8:
    // 0x15ddb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15ddb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ddbc: 0xc040168  jal         func_1005A0
    ctx->pc = 0x15DDBCu;
    SET_GPR_U32(ctx, 31, 0x15DDC4u);
    ctx->pc = 0x15DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDBCu;
    // 0x15ddc0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x15DDBCu, 0x15DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDC4u;
label_15ddc4:
    // 0x15ddc4: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15ddc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15ddc8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15ddc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ddcc: 0x10200078  beqz        $at, . + 4 + (0x78 << 2)
    ctx->pc = 0x15DDCCu;
    {
        const bool branch_taken_0x15ddcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDCCu;
        // 0x15ddd0: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ddcc) {
            ctx->pc = 0x15DFB0u;
            goto label_15dfb0;
        }
    }
    ctx->pc = 0x15DDD4u;
    // 0x15ddd4: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x15ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x15ddd8: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x15ddd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x15dddc: 0x14200060  bnez        $at, . + 4 + (0x60 << 2)
    ctx->pc = 0x15DDDCu;
    {
        const bool branch_taken_0x15dddc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDDCu;
        // 0x15dde0: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dddc) {
            ctx->pc = 0x15DF60u;
            goto label_15df60;
        }
    }
    ctx->pc = 0x15DDE4u;
    // 0x15dde4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x15dde4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15dde8:
    // 0x15dde8: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x15dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x15ddec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15ddf0: 0x25ac0001  addiu       $t4, $t5, 0x1
    ctx->pc = 0x15ddf0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x15ddf4: 0x2a2c021  addu        $t8, $s5, $v0
    ctx->pc = 0x15ddf4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15ddf8: 0x25aa0002  addiu       $t2, $t5, 0x2
    ctx->pc = 0x15ddf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x15ddfc: 0x8f042cd8  lw          $a0, 0x2CD8($t8)
    ctx->pc = 0x15ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 11480)));
    // 0x15de00: 0x28a1021  addu        $v0, $s4, $t2
    ctx->pc = 0x15de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
    // 0x15de04: 0x28c1821  addu        $v1, $s4, $t4
    ctx->pc = 0x15de04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 12)));
    // 0x15de08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15de08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15de0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15de10: 0x22e7821  addu        $t7, $s1, $t6
    ctx->pc = 0x15de10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
    // 0x15de14: 0x24eb021  addu        $s6, $s2, $t6
    ctx->pc = 0x15de14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x15de18: 0x26eb821  addu        $s7, $s3, $t6
    ctx->pc = 0x15de18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x15de1c: 0x2a24821  addu        $t1, $s5, $v0
    ctx->pc = 0x15de1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15de20: 0x25a80003  addiu       $t0, $t5, 0x3
    ctx->pc = 0x15de20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x15de24: 0x2a35821  addu        $t3, $s5, $v1
    ctx->pc = 0x15de24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15de28: 0x2881021  addu        $v0, $s4, $t0
    ctx->pc = 0x15de28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x15de2c: 0xc4800200  lwc1        $f0, 0x200($a0)
    ctx->pc = 0x15de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15de30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15de30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15de34: 0x25a60004  addiu       $a2, $t5, 0x4
    ctx->pc = 0x15de34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x15de38: 0x2a33821  addu        $a3, $s5, $v1
    ctx->pc = 0x15de38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15de3c: 0x2861021  addu        $v0, $s4, $a2
    ctx->pc = 0x15de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x15de40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15de40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15de44: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x15de44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15de48: 0x25a20006  addiu       $v0, $t5, 0x6
    ctx->pc = 0x15de48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 6));
    // 0x15de4c: 0xe5e00000  swc1        $f0, 0x0($t7)
    ctx->pc = 0x15de4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x15de50: 0x282c821  addu        $t9, $s4, $v0
    ctx->pc = 0x15de50u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15de54: 0xaecd0000  sw          $t5, 0x0($s6)
    ctx->pc = 0x15de54u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 13));
    // 0x15de58: 0x19c880  sll         $t9, $t9, 2
    ctx->pc = 0x15de58u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x15de5c: 0x8f182cd8  lw          $t8, 0x2CD8($t8)
    ctx->pc = 0x15de5cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 11480)));
    // 0x15de60: 0x25a40005  addiu       $a0, $t5, 0x5
    ctx->pc = 0x15de60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 5));
    // 0x15de64: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x15de64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x15de68: 0x2b9f021  addu        $fp, $s5, $t9
    ctx->pc = 0x15de68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 25)));
    // 0x15de6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15de70: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x15de70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15de74: 0x7fb800e0  sq          $t8, 0xE0($sp)
    ctx->pc = 0x15de74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 24));
    // 0x15de78: 0x25b80007  addiu       $t8, $t5, 0x7
    ctx->pc = 0x15de78u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 13), 7));
    // 0x15de7c: 0x7fb800a0  sq          $t8, 0xA0($sp)
    ctx->pc = 0x15de7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 24));
    // 0x15de80: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x15de80u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x15de84: 0x298c021  addu        $t8, $s4, $t8
    ctx->pc = 0x15de84u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 24)));
    // 0x15de88: 0x18c880  sll         $t9, $t8, 2
    ctx->pc = 0x15de88u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x15de8c: 0x8fb80150  lw          $t8, 0x150($sp)
    ctx->pc = 0x15de8cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x15de90: 0x2b9c821  addu        $t9, $s5, $t9
    ctx->pc = 0x15de90u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 25)));
    // 0x15de94: 0x1b8c02a  slt         $t8, $t5, $t8
    ctx->pc = 0x15de94u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x15de98: 0x7fb800c0  sq          $t8, 0xC0($sp)
    ctx->pc = 0x15de98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 24));
    // 0x15de9c: 0x7bb800e0  lq          $t8, 0xE0($sp)
    ctx->pc = 0x15de9cu;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15dea0: 0xaef80000  sw          $t8, 0x0($s7)
    ctx->pc = 0x15dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 24));
    // 0x15dea4: 0x8d782cd8  lw          $t8, 0x2CD8($t3)
    ctx->pc = 0x15dea4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 11480)));
    // 0x15dea8: 0x7fb800d0  sq          $t8, 0xD0($sp)
    ctx->pc = 0x15dea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 24));
    // 0x15deac: 0xc7000200  lwc1        $f0, 0x200($t8)
    ctx->pc = 0x15deacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15deb0: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x15deb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x15deb4: 0xaecc0004  sw          $t4, 0x4($s6)
    ctx->pc = 0x15deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 12));
    // 0x15deb8: 0x8d6b2cd8  lw          $t3, 0x2CD8($t3)
    ctx->pc = 0x15deb8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 11480)));
    // 0x15debc: 0xaeeb0004  sw          $t3, 0x4($s7)
    ctx->pc = 0x15debcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 11));
    // 0x15dec0: 0x8d2b2cd8  lw          $t3, 0x2CD8($t1)
    ctx->pc = 0x15dec0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
    // 0x15dec4: 0xc5600200  lwc1        $f0, 0x200($t3)
    ctx->pc = 0x15dec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15dec8: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x15dec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x15decc: 0xaeca0008  sw          $t2, 0x8($s6)
    ctx->pc = 0x15deccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 10));
    // 0x15ded0: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x15ded0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
    // 0x15ded4: 0xaee90008  sw          $t1, 0x8($s7)
    ctx->pc = 0x15ded4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 9));
    // 0x15ded8: 0x8ce92cd8  lw          $t1, 0x2CD8($a3)
    ctx->pc = 0x15ded8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11480)));
    // 0x15dedc: 0xc5200200  lwc1        $f0, 0x200($t1)
    ctx->pc = 0x15dedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15dee0: 0xe5e0000c  swc1        $f0, 0xC($t7)
    ctx->pc = 0x15dee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x15dee4: 0xaec8000c  sw          $t0, 0xC($s6)
    ctx->pc = 0x15dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 8));
    // 0x15dee8: 0x8ce72cd8  lw          $a3, 0x2CD8($a3)
    ctx->pc = 0x15dee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11480)));
    // 0x15deec: 0xaee7000c  sw          $a3, 0xC($s7)
    ctx->pc = 0x15deecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 7));
    // 0x15def0: 0x8ca72cd8  lw          $a3, 0x2CD8($a1)
    ctx->pc = 0x15def0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
    // 0x15def4: 0xc4e00200  lwc1        $f0, 0x200($a3)
    ctx->pc = 0x15def4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15def8: 0xe5e00010  swc1        $f0, 0x10($t7)
    ctx->pc = 0x15def8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 16), bits); }
    // 0x15defc: 0xaec60010  sw          $a2, 0x10($s6)
    ctx->pc = 0x15defcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 6));
    // 0x15df00: 0x8ca52cd8  lw          $a1, 0x2CD8($a1)
    ctx->pc = 0x15df00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
    // 0x15df04: 0xaee50010  sw          $a1, 0x10($s7)
    ctx->pc = 0x15df04u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 5));
    // 0x15df08: 0x8c652cd8  lw          $a1, 0x2CD8($v1)
    ctx->pc = 0x15df08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x15df0c: 0xc4a00200  lwc1        $f0, 0x200($a1)
    ctx->pc = 0x15df0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15df10: 0xe5e00014  swc1        $f0, 0x14($t7)
    ctx->pc = 0x15df10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 20), bits); }
    // 0x15df14: 0xaec40014  sw          $a0, 0x14($s6)
    ctx->pc = 0x15df14u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 4));
    // 0x15df18: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x15df18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x15df1c: 0xaee30014  sw          $v1, 0x14($s7)
    ctx->pc = 0x15df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 3));
    // 0x15df20: 0x8fc32cd8  lw          $v1, 0x2CD8($fp)
    ctx->pc = 0x15df20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11480)));
    // 0x15df24: 0xc4600200  lwc1        $f0, 0x200($v1)
    ctx->pc = 0x15df24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15df28: 0xe5e00018  swc1        $f0, 0x18($t7)
    ctx->pc = 0x15df28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 24), bits); }
    // 0x15df2c: 0xaec20018  sw          $v0, 0x18($s6)
    ctx->pc = 0x15df2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
    // 0x15df30: 0x8fc22cd8  lw          $v0, 0x2CD8($fp)
    ctx->pc = 0x15df30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11480)));
    // 0x15df34: 0xaee20018  sw          $v0, 0x18($s7)
    ctx->pc = 0x15df34u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 2));
    // 0x15df38: 0x8f222cd8  lw          $v0, 0x2CD8($t9)
    ctx->pc = 0x15df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 11480)));
    // 0x15df3c: 0xc4400200  lwc1        $f0, 0x200($v0)
    ctx->pc = 0x15df3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15df40: 0xe5e0001c  swc1        $f0, 0x1C($t7)
    ctx->pc = 0x15df40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 28), bits); }
    // 0x15df44: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x15df44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15df48: 0xaec2001c  sw          $v0, 0x1C($s6)
    ctx->pc = 0x15df48u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 2));
    // 0x15df4c: 0x8f222cd8  lw          $v0, 0x2CD8($t9)
    ctx->pc = 0x15df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 11480)));
    // 0x15df50: 0xaee2001c  sw          $v0, 0x1C($s7)
    ctx->pc = 0x15df50u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 28), GPR_U32(ctx, 2));
    // 0x15df54: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x15df54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15df58: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x15DF58u;
    {
        const bool branch_taken_0x15df58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF58u;
        // 0x15df5c: 0x25ce0020  addiu       $t6, $t6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df58) {
            ctx->pc = 0x15DDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15dde8;
        }
    }
    ctx->pc = 0x15DF60u;
label_15df60:
    // 0x15df60: 0x1b0082a  slt         $at, $t5, $s0
    ctx->pc = 0x15df60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15df64: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x15DF64u;
    {
        const bool branch_taken_0x15df64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF64u;
        // 0x15df68: 0xd3880  sll         $a3, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df64) {
            ctx->pc = 0x15DFB0u;
            goto label_15dfb0;
        }
    }
    ctx->pc = 0x15DF6Cu;
label_15df6c:
    // 0x15df6c: 0x0  nop
    ctx->pc = 0x15df6cu;
    // NOP
    // 0x15df70: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x15df70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x15df74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15df74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15df78: 0x2272021  addu        $a0, $s1, $a3
    ctx->pc = 0x15df78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x15df7c: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x15df7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15df80: 0x2671821  addu        $v1, $s3, $a3
    ctx->pc = 0x15df80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x15df84: 0x8cc52cd8  lw          $a1, 0x2CD8($a2)
    ctx->pc = 0x15df84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
    // 0x15df88: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x15df88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x15df8c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x15df8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x15df90: 0xc4a00200  lwc1        $f0, 0x200($a1)
    ctx->pc = 0x15df90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15df94: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x15df94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15df98: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x15df98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x15df9c: 0x8cc42cd8  lw          $a0, 0x2CD8($a2)
    ctx->pc = 0x15df9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
    // 0x15dfa0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x15dfa0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x15dfa4: 0x1b0102a  slt         $v0, $t5, $s0
    ctx->pc = 0x15dfa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15dfa8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15DFA8u;
    {
        const bool branch_taken_0x15dfa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFA8u;
        // 0x15dfac: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfa8) {
            ctx->pc = 0x15DF6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15df6c;
        }
    }
    ctx->pc = 0x15DFB0u;
label_15dfb0:
    // 0x15dfb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15dfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dfb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15dfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dfb8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15dfb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dfbc: 0xc059568  jal         func_1655A0
    ctx->pc = 0x15DFBCu;
    SET_GPR_U32(ctx, 31, 0x15DFC4u);
    ctx->pc = 0x15DFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DFBCu;
    // 0x15dfc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1655A0u, 0x15DFBCu, 0x15DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DFC4u;
label_15dfc4:
    // 0x15dfc4: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15dfc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15dfc8: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x15DFC8u;
    {
        const bool branch_taken_0x15dfc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFC8u;
        // 0x15dfcc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfc8) {
            ctx->pc = 0x15E154u;
            goto label_15e154;
        }
    }
    ctx->pc = 0x15DFD0u;
    // 0x15dfd0: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x15dfd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x15dfd4: 0x1420004e  bnez        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x15DFD4u;
    {
        const bool branch_taken_0x15dfd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFD4u;
        // 0x15dfd8: 0x260afff8  addiu       $t2, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfd4) {
            ctx->pc = 0x15E110u;
            goto label_15e110;
        }
    }
    ctx->pc = 0x15DFDCu;
    // 0x15dfdc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x15dfdcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15dfe0:
    // 0x15dfe0: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x15dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x15dfe4: 0x24b6021  addu        $t4, $s2, $t3
    ctx->pc = 0x15dfe4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x15dfe8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dfec: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x15dfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x15dff0: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x15dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x15dff4: 0x2a33821  addu        $a3, $s5, $v1
    ctx->pc = 0x15dff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15dff8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15dffc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e000: 0x252d0006  addiu       $t5, $t1, 0x6
    ctx->pc = 0x15e000u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x15e004: 0x25220002  addiu       $v0, $t1, 0x2
    ctx->pc = 0x15e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x15e008: 0x2a33021  addu        $a2, $s5, $v1
    ctx->pc = 0x15e008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15e00c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15e010: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x15e010u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x15e014: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15e014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e018: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15e018u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15e01c: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x15e01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15e020: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x15e020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x15e024: 0x25220003  addiu       $v0, $t1, 0x3
    ctx->pc = 0x15e024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x15e028: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x15e028u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e02c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15e030: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15e030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e034: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x15e034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15e038: 0x25220004  addiu       $v0, $t1, 0x4
    ctx->pc = 0x15e038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x15e03c: 0xace82cd8  sw          $t0, 0x2CD8($a3)
    ctx->pc = 0x15e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 11480), GPR_U32(ctx, 8));
    // 0x15e040: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x15e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15e044: 0x8d8e0004  lw          $t6, 0x4($t4)
    ctx->pc = 0x15e044u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x15e048: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15e048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15e04c: 0x25220005  addiu       $v0, $t1, 0x5
    ctx->pc = 0x15e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x15e050: 0x28d3821  addu        $a3, $s4, $t5
    ctx->pc = 0x15e050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x15e054: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15e058: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x15e058u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15e05c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e060: 0x2a76821  addu        $t5, $s5, $a3
    ctx->pc = 0x15e060u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x15e064: 0x25270007  addiu       $a3, $t1, 0x7
    ctx->pc = 0x15e064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x15e068: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x15e068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15e06c: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x15e06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x15e070: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x15e070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15e074: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x15e074u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x15e078: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x15e078u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15e07c: 0x26e7021  addu        $t6, $s3, $t6
    ctx->pc = 0x15e07cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x15e080: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x15e080u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x15e084: 0x8dce0000  lw          $t6, 0x0($t6)
    ctx->pc = 0x15e084u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x15e088: 0x2a74021  addu        $t0, $s5, $a3
    ctx->pc = 0x15e088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x15e08c: 0x12a382a  slt         $a3, $t1, $t2
    ctx->pc = 0x15e08cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x15e090: 0xacce2cd8  sw          $t6, 0x2CD8($a2)
    ctx->pc = 0x15e090u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11480), GPR_U32(ctx, 14));
    // 0x15e094: 0x8d860008  lw          $a2, 0x8($t4)
    ctx->pc = 0x15e094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x15e098: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15e098u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15e09c: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x15e09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x15e0a0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x15e0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15e0a4: 0xaca62cd8  sw          $a2, 0x2CD8($a1)
    ctx->pc = 0x15e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11480), GPR_U32(ctx, 6));
    // 0x15e0a8: 0x8d85000c  lw          $a1, 0xC($t4)
    ctx->pc = 0x15e0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x15e0ac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15e0acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15e0b0: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x15e0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x15e0b4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x15e0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15e0b8: 0xac852cd8  sw          $a1, 0x2CD8($a0)
    ctx->pc = 0x15e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11480), GPR_U32(ctx, 5));
    // 0x15e0bc: 0x8d840010  lw          $a0, 0x10($t4)
    ctx->pc = 0x15e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x15e0c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15e0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15e0c4: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x15e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x15e0c8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15e0cc: 0xac642cd8  sw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 4));
    // 0x15e0d0: 0x8d830014  lw          $v1, 0x14($t4)
    ctx->pc = 0x15e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x15e0d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15e0d8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x15e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x15e0dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e0e0: 0xac432cd8  sw          $v1, 0x2CD8($v0)
    ctx->pc = 0x15e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11480), GPR_U32(ctx, 3));
    // 0x15e0e4: 0x8d820018  lw          $v0, 0x18($t4)
    ctx->pc = 0x15e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x15e0e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e0ec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x15e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x15e0f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e0f4: 0xada22cd8  sw          $v0, 0x2CD8($t5)
    ctx->pc = 0x15e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 11480), GPR_U32(ctx, 2));
    // 0x15e0f8: 0x8d82001c  lw          $v0, 0x1C($t4)
    ctx->pc = 0x15e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x15e0fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e100: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x15e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x15e104: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15e104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e108: 0x14e0ffb5  bnez        $a3, . + 4 + (-0x4B << 2)
    ctx->pc = 0x15E108u;
    {
        const bool branch_taken_0x15e108 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E108u;
        // 0x15e10c: 0xad022cd8  sw          $v0, 0x2CD8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 11480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e108) {
            ctx->pc = 0x15DFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15dfe0;
        }
    }
    ctx->pc = 0x15E110u;
label_15e110:
    // 0x15e110: 0x130082a  slt         $at, $t1, $s0
    ctx->pc = 0x15e110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15e114: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x15E114u;
    {
        const bool branch_taken_0x15e114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E114u;
        // 0x15e118: 0x92880  sll         $a1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e114) {
            ctx->pc = 0x15E154u;
            goto label_15e154;
        }
    }
    ctx->pc = 0x15E11Cu;
label_15e11c:
    // 0x15e11c: 0x0  nop
    ctx->pc = 0x15e11cu;
    // NOP
    // 0x15e120: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x15e120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x15e124: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15e124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e128: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x15e128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x15e12c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15e12cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15e130: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x15e130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x15e134: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x15e134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x15e138: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15e138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e13c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15e140: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x15e140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15e144: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x15e144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x15e148: 0x130102a  slt         $v0, $t1, $s0
    ctx->pc = 0x15e148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15e14c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x15E14Cu;
    {
        const bool branch_taken_0x15e14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E14Cu;
        // 0x15e150: 0xac642cd8  sw          $a0, 0x2CD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e14c) {
            ctx->pc = 0x15E11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e11c;
        }
    }
    ctx->pc = 0x15E154u;
label_15e154:
    // 0x15e154: 0x0  nop
    ctx->pc = 0x15e154u;
    // NOP
    // 0x15e158: 0xc04018c  jal         func_100630
    ctx->pc = 0x15E158u;
    SET_GPR_U32(ctx, 31, 0x15E160u);
    ctx->pc = 0x15E15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E158u;
    // 0x15e15c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x15E158u, 0x15E160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E160u;
label_15e160:
    // 0x15e160: 0xc04018c  jal         func_100630
    ctx->pc = 0x15E160u;
    SET_GPR_U32(ctx, 31, 0x15E168u);
    ctx->pc = 0x15E164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E160u;
    // 0x15e164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x15E160u, 0x15E168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E168u;
label_15e168:
    // 0x15e168: 0xc04018c  jal         func_100630
    ctx->pc = 0x15E168u;
    SET_GPR_U32(ctx, 31, 0x15E170u);
    ctx->pc = 0x15E16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E168u;
    // 0x15e16c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x15E168u, 0x15E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E170u;
label_15e170:
    // 0x15e170: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x15e170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x15e174: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x15e174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x15e178: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x15e178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x15e17c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x15e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x15e180: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e184: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x15e184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x15e188: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x15e188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x15e18c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x15e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15e190: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x15e190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15e194: 0x1460fef9  bnez        $v1, . + 4 + (-0x107 << 2)
    ctx->pc = 0x15E194u;
    {
        const bool branch_taken_0x15e194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e194) {
            ctx->pc = 0x15DD7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15dd7c;
        }
    }
    ctx->pc = 0x15E19Cu;
label_15e19c:
    // 0x15e19c: 0x0  nop
    ctx->pc = 0x15e19cu;
    // NOP
    // 0x15e1a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15e1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15e1a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15e1a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15e1a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15e1a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15e1ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15e1acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15e1b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15e1b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e1b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15e1b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e1b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e1b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e1bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e1bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e1c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e1c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e1c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x15E1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1C8u;
        // 0x15e1cc: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E1D0u;
}
