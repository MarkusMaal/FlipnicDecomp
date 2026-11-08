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

// Function: FUN_00182100
// Address: 0x182100 - 0x1821dc
void FUN_00182100_0x182100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00182100_0x182100");
#endif

    switch (ctx->pc) {
        case 0x182100u: goto label_182100;
        case 0x182104u: goto label_182104;
        case 0x182108u: goto label_182108;
        case 0x18210cu: goto label_18210c;
        case 0x182110u: goto label_182110;
        case 0x182114u: goto label_182114;
        case 0x182118u: goto label_182118;
        case 0x18211cu: goto label_18211c;
        case 0x182120u: goto label_182120;
        case 0x182124u: goto label_182124;
        case 0x182128u: goto label_182128;
        case 0x18212cu: goto label_18212c;
        case 0x182130u: goto label_182130;
        case 0x182134u: goto label_182134;
        case 0x182138u: goto label_182138;
        case 0x18213cu: goto label_18213c;
        case 0x182140u: goto label_182140;
        case 0x182144u: goto label_182144;
        case 0x182148u: goto label_182148;
        case 0x18214cu: goto label_18214c;
        case 0x182150u: goto label_182150;
        case 0x182154u: goto label_182154;
        case 0x182158u: goto label_182158;
        case 0x18215cu: goto label_18215c;
        case 0x182160u: goto label_182160;
        case 0x182164u: goto label_182164;
        case 0x182168u: goto label_182168;
        case 0x18216cu: goto label_18216c;
        case 0x182170u: goto label_182170;
        case 0x182174u: goto label_182174;
        case 0x182178u: goto label_182178;
        case 0x18217cu: goto label_18217c;
        case 0x182180u: goto label_182180;
        case 0x182184u: goto label_182184;
        case 0x182188u: goto label_182188;
        case 0x18218cu: goto label_18218c;
        case 0x182190u: goto label_182190;
        case 0x182194u: goto label_182194;
        case 0x182198u: goto label_182198;
        case 0x18219cu: goto label_18219c;
        case 0x1821a0u: goto label_1821a0;
        case 0x1821a4u: goto label_1821a4;
        case 0x1821a8u: goto label_1821a8;
        case 0x1821acu: goto label_1821ac;
        case 0x1821b0u: goto label_1821b0;
        case 0x1821b4u: goto label_1821b4;
        case 0x1821b8u: goto label_1821b8;
        case 0x1821bcu: goto label_1821bc;
        case 0x1821c0u: goto label_1821c0;
        case 0x1821c4u: goto label_1821c4;
        case 0x1821c8u: goto label_1821c8;
        case 0x1821ccu: goto label_1821cc;
        case 0x1821d0u: goto label_1821d0;
        case 0x1821d4u: goto label_1821d4;
        case 0x1821d8u: goto label_1821d8;
        default: break;
    }

    ctx->pc = 0x182100u;

label_182100:
    // 0x182100: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x182100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_182104:
    // 0x182104: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x182104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_182108:
    // 0x182108: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x182108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_18210c:
    // 0x18210c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18210cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_182110:
    // 0x182110: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_182114:
    // 0x182114: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x182114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_182118:
    // 0x182118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18211c:
    // 0x18211c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18211cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_182120:
    // 0x182120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_182124:
    // 0x182124: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x182124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_182128:
    // 0x182128: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_18212c:
    if (ctx->pc == 0x18212Cu) {
        ctx->pc = 0x18212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182128u;
        // 0x18212c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182130u;
        goto label_182130;
    }
    ctx->pc = 0x182128u;
    {
        const bool branch_taken_0x182128 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182128u;
        // 0x18212c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182128) {
            ctx->pc = 0x1821B8u;
            goto label_1821b8;
        }
    }
    ctx->pc = 0x182130u;
label_182130:
    // 0x182130: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x182130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182134:
    // 0x182134: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x182134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_182138:
    // 0x182138: 0x24540020  addiu       $s4, $v0, 0x20
    ctx->pc = 0x182138u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_18213c:
    // 0x18213c: 0xc080748  jal         func_201D20
label_182140:
    if (ctx->pc == 0x182140u) {
        ctx->pc = 0x182140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18213Cu;
        // 0x182140: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182144u;
        goto label_182144;
    }
    ctx->pc = 0x18213Cu;
    SET_GPR_U32(ctx, 31, 0x182144u);
    ctx->pc = 0x182140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18213Cu;
    // 0x182140: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x18213Cu, 0x182144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182144u;
label_182144:
    // 0x182144: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_182148:
    if (ctx->pc == 0x182148u) {
        ctx->pc = 0x182148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182144u;
        // 0x182148: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18214Cu;
        goto label_18214c;
    }
    ctx->pc = 0x182144u;
    {
        const bool branch_taken_0x182144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182144u;
        // 0x182148: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182144) {
            ctx->pc = 0x1821A8u;
            goto label_1821a8;
        }
    }
    ctx->pc = 0x18214Cu;
label_18214c:
    // 0x18214c: 0xc04c0e0  jal         func_130380
label_182150:
    if (ctx->pc == 0x182150u) {
        ctx->pc = 0x182154u;
        goto label_182154;
    }
    ctx->pc = 0x18214Cu;
    SET_GPR_U32(ctx, 31, 0x182154u);
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x18214Cu, 0x182154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182154u;
label_182154:
    // 0x182154: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x182154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_182158:
    // 0x182158: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x182158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_18215c:
    // 0x18215c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_182160:
    if (ctx->pc == 0x182160u) {
        ctx->pc = 0x182160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18215Cu;
        // 0x182160: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182164u;
        goto label_182164;
    }
    ctx->pc = 0x18215Cu;
    {
        const bool branch_taken_0x18215c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18215Cu;
        // 0x182160: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18215c) {
            ctx->pc = 0x1821A8u;
            goto label_1821a8;
        }
    }
    ctx->pc = 0x182164u;
label_182164:
    // 0x182164: 0xc049ed0  jal         func_127B40
label_182168:
    if (ctx->pc == 0x182168u) {
        ctx->pc = 0x182168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182164u;
        // 0x182168: 0x248487c0  addiu       $a0, $a0, -0x7840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18216Cu;
        goto label_18216c;
    }
    ctx->pc = 0x182164u;
    SET_GPR_U32(ctx, 31, 0x18216Cu);
    ctx->pc = 0x182168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182164u;
    // 0x182168: 0x248487c0  addiu       $a0, $a0, -0x7840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x182164u, 0x18216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18216Cu;
label_18216c:
    // 0x18216c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18216cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_182170:
    // 0x182170: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x182170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_182174:
    // 0x182174: 0x8c2387c4  lw          $v1, -0x783C($at)
    ctx->pc = 0x182174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936516)));
label_182178:
    // 0x182178: 0x248487c0  addiu       $a0, $a0, -0x7840
    ctx->pc = 0x182178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936512));
label_18217c:
    // 0x18217c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_182180:
    // 0x182180: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x182180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182184:
    // 0x182184: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x182184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_182188:
    // 0x182188: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x182188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18218c:
    // 0x18218c: 0xc0484ec  jal         func_1213B0
label_182190:
    if (ctx->pc == 0x182190u) {
        ctx->pc = 0x182190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18218Cu;
        // 0x182190: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182194u;
        goto label_182194;
    }
    ctx->pc = 0x18218Cu;
    SET_GPR_U32(ctx, 31, 0x182194u);
    ctx->pc = 0x182190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18218Cu;
    // 0x182190: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x18218Cu, 0x182194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182194u;
label_182194:
    // 0x182194: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x182194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_182198:
    // 0x182198: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x182198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18219c:
    // 0x18219c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x18219cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1821a0:
    // 0x1821a0: 0x320f809  jalr        $t9
label_1821a4:
    if (ctx->pc == 0x1821A4u) {
        ctx->pc = 0x1821A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821A0u;
        // 0x1821a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1821A8u;
        goto label_1821a8;
    }
    ctx->pc = 0x1821A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1821A8u);
        ctx->pc = 0x1821A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821A0u;
        // 0x1821a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1821A0u, 0x1821A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1821A8u;
label_1821a8:
    // 0x1821a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1821a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1821ac:
    // 0x1821ac: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x1821acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1821b0:
    // 0x1821b0: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
label_1821b4:
    if (ctx->pc == 0x1821B4u) {
        ctx->pc = 0x1821B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821B0u;
        // 0x1821b4: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1821B8u;
        goto label_1821b8;
    }
    ctx->pc = 0x1821B0u;
    {
        const bool branch_taken_0x1821b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1821B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821B0u;
        // 0x1821b4: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1821b0) {
            ctx->pc = 0x182134u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182134;
        }
    }
    ctx->pc = 0x1821B8u;
label_1821b8:
    // 0x1821b8: 0xaf928668  sw          $s2, -0x7998($gp)
    ctx->pc = 0x1821b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936168), GPR_U32(ctx, 18));
label_1821bc:
    // 0x1821bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1821bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1821c0:
    // 0x1821c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1821c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1821c4:
    // 0x1821c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1821c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1821c8:
    // 0x1821c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1821c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1821cc:
    // 0x1821cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1821ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1821d0:
    // 0x1821d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1821d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1821d4:
    // 0x1821d4: 0x3e00008  jr          $ra
label_1821d8:
    if (ctx->pc == 0x1821D8u) {
        ctx->pc = 0x1821D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821D4u;
        // 0x1821d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1821DCu;
        goto label_fallthrough_0x1821d4;
    }
    ctx->pc = 0x1821D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1821D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821D4u;
        // 0x1821d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1821D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1821d4:
    ctx->pc = 0x1821DCu;
}
