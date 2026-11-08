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

// Function: FUN_00119920
// Address: 0x119920 - 0x119a00
void FUN_00119920_0x119920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119920_0x119920");
#endif

    switch (ctx->pc) {
        case 0x119920u: goto label_119920;
        case 0x119924u: goto label_119924;
        case 0x119928u: goto label_119928;
        case 0x11992cu: goto label_11992c;
        case 0x119930u: goto label_119930;
        case 0x119934u: goto label_119934;
        case 0x119938u: goto label_119938;
        case 0x11993cu: goto label_11993c;
        case 0x119940u: goto label_119940;
        case 0x119944u: goto label_119944;
        case 0x119948u: goto label_119948;
        case 0x11994cu: goto label_11994c;
        case 0x119950u: goto label_119950;
        case 0x119954u: goto label_119954;
        case 0x119958u: goto label_119958;
        case 0x11995cu: goto label_11995c;
        case 0x119960u: goto label_119960;
        case 0x119964u: goto label_119964;
        case 0x119968u: goto label_119968;
        case 0x11996cu: goto label_11996c;
        case 0x119970u: goto label_119970;
        case 0x119974u: goto label_119974;
        case 0x119978u: goto label_119978;
        case 0x11997cu: goto label_11997c;
        case 0x119980u: goto label_119980;
        case 0x119984u: goto label_119984;
        case 0x119988u: goto label_119988;
        case 0x11998cu: goto label_11998c;
        case 0x119990u: goto label_119990;
        case 0x119994u: goto label_119994;
        case 0x119998u: goto label_119998;
        case 0x11999cu: goto label_11999c;
        case 0x1199a0u: goto label_1199a0;
        case 0x1199a4u: goto label_1199a4;
        case 0x1199a8u: goto label_1199a8;
        case 0x1199acu: goto label_1199ac;
        case 0x1199b0u: goto label_1199b0;
        case 0x1199b4u: goto label_1199b4;
        case 0x1199b8u: goto label_1199b8;
        case 0x1199bcu: goto label_1199bc;
        case 0x1199c0u: goto label_1199c0;
        case 0x1199c4u: goto label_1199c4;
        case 0x1199c8u: goto label_1199c8;
        case 0x1199ccu: goto label_1199cc;
        case 0x1199d0u: goto label_1199d0;
        case 0x1199d4u: goto label_1199d4;
        case 0x1199d8u: goto label_1199d8;
        case 0x1199dcu: goto label_1199dc;
        case 0x1199e0u: goto label_1199e0;
        case 0x1199e4u: goto label_1199e4;
        case 0x1199e8u: goto label_1199e8;
        case 0x1199ecu: goto label_1199ec;
        case 0x1199f0u: goto label_1199f0;
        case 0x1199f4u: goto label_1199f4;
        case 0x1199f8u: goto label_1199f8;
        case 0x1199fcu: goto label_1199fc;
        default: break;
    }

    ctx->pc = 0x119920u;

label_119920:
    // 0x119920: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x119920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_119924:
    // 0x119924: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x119924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_119928:
    // 0x119928: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x119928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_11992c:
    // 0x11992c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11992cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_119930:
    // 0x119930: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x119930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_119934:
    // 0x119934: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x119934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_119938:
    // 0x119938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x119938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11993c:
    // 0x11993c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x11993cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_119940:
    // 0x119940: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x119940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_119944:
    // 0x119944: 0xc04c6dc  jal         func_131B70
label_119948:
    if (ctx->pc == 0x119948u) {
        ctx->pc = 0x119948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119944u;
        // 0x119948: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11994Cu;
        goto label_11994c;
    }
    ctx->pc = 0x119944u;
    SET_GPR_U32(ctx, 31, 0x11994Cu);
    ctx->pc = 0x119948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119944u;
    // 0x119948: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x119944u, 0x11994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11994Cu;
label_11994c:
    // 0x11994c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x11994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_119950:
    // 0x119950: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x119950u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_119954:
    // 0x119954: 0x90630022  lbu         $v1, 0x22($v1)
    ctx->pc = 0x119954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
label_119958:
    // 0x119958: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x119958u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_11995c:
    // 0x11995c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_119960:
    if (ctx->pc == 0x119960u) {
        ctx->pc = 0x119960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11995Cu;
        // 0x119960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119964u;
        goto label_119964;
    }
    ctx->pc = 0x11995Cu;
    {
        const bool branch_taken_0x11995c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x119960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11995Cu;
        // 0x119960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11995c) {
            ctx->pc = 0x11996Cu;
            goto label_11996c;
        }
    }
    ctx->pc = 0x119964u;
label_119964:
    // 0x119964: 0x1000001e  b           . + 4 + (0x1E << 2)
label_119968:
    if (ctx->pc == 0x119968u) {
        ctx->pc = 0x119968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119964u;
        // 0x119968: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11996Cu;
        goto label_11996c;
    }
    ctx->pc = 0x119964u;
    {
        const bool branch_taken_0x119964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119964u;
        // 0x119968: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119964) {
            ctx->pc = 0x1199E0u;
            goto label_1199e0;
        }
    }
    ctx->pc = 0x11996Cu;
label_11996c:
    // 0x11996c: 0xc046594  jal         func_119650
label_119970:
    if (ctx->pc == 0x119970u) {
        ctx->pc = 0x119974u;
        goto label_119974;
    }
    ctx->pc = 0x11996Cu;
    SET_GPR_U32(ctx, 31, 0x119974u);
    ctx->pc = 0x119650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119650u, 0x11996Cu, 0x119974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119974u;
label_119974:
    // 0x119974: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119978:
    // 0x119978: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x119978u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11997c:
    // 0x11997c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x11997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_119980:
    // 0x119980: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_119984:
    // 0x119984: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119988:
    // 0x119988: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11998c:
    // 0x11998c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x11998cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_119990:
    // 0x119990: 0x320f809  jalr        $t9
label_119994:
    if (ctx->pc == 0x119994u) {
        ctx->pc = 0x119994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119990u;
        // 0x119994: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119998u;
        goto label_119998;
    }
    ctx->pc = 0x119990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119998u);
        ctx->pc = 0x119994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119990u;
        // 0x119994: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119990u, 0x119998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119998u;
label_119998:
    // 0x119998: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x119998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_11999c:
    // 0x11999c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11999cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1199a0:
    // 0x1199a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1199a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1199a4:
    // 0x1199a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1199a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1199a8:
    // 0x1199a8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1199a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1199ac:
    // 0x1199ac: 0x320f809  jalr        $t9
label_1199b0:
    if (ctx->pc == 0x1199B0u) {
        ctx->pc = 0x1199B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199ACu;
        // 0x1199b0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1199B4u;
        goto label_1199b4;
    }
    ctx->pc = 0x1199ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1199B4u);
        ctx->pc = 0x1199B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199ACu;
        // 0x1199b0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1199ACu, 0x1199B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1199B4u;
label_1199b4:
    // 0x1199b4: 0x6400009  bltz        $s2, . + 4 + (0x9 << 2)
label_1199b8:
    if (ctx->pc == 0x1199B8u) {
        ctx->pc = 0x1199BCu;
        goto label_1199bc;
    }
    ctx->pc = 0x1199B4u;
    {
        const bool branch_taken_0x1199b4 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1199b4) {
            ctx->pc = 0x1199DCu;
            goto label_1199dc;
        }
    }
    ctx->pc = 0x1199BCu;
label_1199bc:
    // 0x1199bc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1199bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1199c0:
    // 0x1199c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1199c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1199c4:
    // 0x1199c4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1199c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1199c8:
    // 0x1199c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1199c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1199cc:
    // 0x1199cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1199ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1199d0:
    // 0x1199d0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1199d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1199d4:
    // 0x1199d4: 0x320f809  jalr        $t9
label_1199d8:
    if (ctx->pc == 0x1199D8u) {
        ctx->pc = 0x1199D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199D4u;
        // 0x1199d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1199DCu;
        goto label_1199dc;
    }
    ctx->pc = 0x1199D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1199DCu);
        ctx->pc = 0x1199D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199D4u;
        // 0x1199d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1199D4u, 0x1199DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1199DCu;
label_1199dc:
    // 0x1199dc: 0xa6600002  sh          $zero, 0x2($s3)
    ctx->pc = 0x1199dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
label_1199e0:
    // 0x1199e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1199e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1199e4:
    // 0x1199e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1199e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1199e8:
    // 0x1199e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1199e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1199ec:
    // 0x1199ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1199ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1199f0:
    // 0x1199f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1199f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1199f4:
    // 0x1199f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1199f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1199f8:
    // 0x1199f8: 0x3e00008  jr          $ra
label_1199fc:
    if (ctx->pc == 0x1199FCu) {
        ctx->pc = 0x1199FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199F8u;
        // 0x1199fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119A00u;
        goto label_fallthrough_0x1199f8;
    }
    ctx->pc = 0x1199F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1199FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199F8u;
        // 0x1199fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1199F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1199f8:
    ctx->pc = 0x119A00u;
}
