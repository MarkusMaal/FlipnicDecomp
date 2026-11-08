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

// Function: FUN_00121840
// Address: 0x121840 - 0x121cac
void FUN_00121840_0x121840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00121840_0x121840");
#endif

    switch (ctx->pc) {
        case 0x12186cu: goto label_12186c;
        case 0x121874u: goto label_121874;
        case 0x121884u: goto label_121884;
        case 0x121894u: goto label_121894;
        case 0x1218a4u: goto label_1218a4;
        case 0x1218b8u: goto label_1218b8;
        case 0x1218c0u: goto label_1218c0;
        case 0x1218d4u: goto label_1218d4;
        case 0x1218e8u: goto label_1218e8;
        case 0x121920u: goto label_121920;
        case 0x12192cu: goto label_12192c;
        case 0x121940u: goto label_121940;
        case 0x121978u: goto label_121978;
        case 0x12198cu: goto label_12198c;
        case 0x1219a0u: goto label_1219a0;
        case 0x1219a8u: goto label_1219a8;
        case 0x1219f0u: goto label_1219f0;
        case 0x121a04u: goto label_121a04;
        case 0x121a14u: goto label_121a14;
        case 0x121a20u: goto label_121a20;
        case 0x121a30u: goto label_121a30;
        case 0x121a40u: goto label_121a40;
        case 0x121a50u: goto label_121a50;
        case 0x121a68u: goto label_121a68;
        case 0x121a74u: goto label_121a74;
        case 0x121a7cu: goto label_121a7c;
        case 0x121a88u: goto label_121a88;
        case 0x121a98u: goto label_121a98;
        case 0x121aacu: goto label_121aac;
        case 0x121ac0u: goto label_121ac0;
        case 0x121accu: goto label_121acc;
        case 0x121adcu: goto label_121adc;
        case 0x121aecu: goto label_121aec;
        case 0x121afcu: goto label_121afc;
        case 0x121b14u: goto label_121b14;
        case 0x121b20u: goto label_121b20;
        case 0x121b28u: goto label_121b28;
        case 0x121b34u: goto label_121b34;
        case 0x121b44u: goto label_121b44;
        case 0x121b58u: goto label_121b58;
        case 0x121b6cu: goto label_121b6c;
        case 0x121b78u: goto label_121b78;
        case 0x121b88u: goto label_121b88;
        case 0x121b98u: goto label_121b98;
        case 0x121ba8u: goto label_121ba8;
        case 0x121bc0u: goto label_121bc0;
        case 0x121bccu: goto label_121bcc;
        case 0x121bd4u: goto label_121bd4;
        case 0x121be0u: goto label_121be0;
        case 0x121bf0u: goto label_121bf0;
        case 0x121c04u: goto label_121c04;
        case 0x121c18u: goto label_121c18;
        case 0x121c24u: goto label_121c24;
        case 0x121c34u: goto label_121c34;
        case 0x121c44u: goto label_121c44;
        case 0x121c54u: goto label_121c54;
        case 0x121c6cu: goto label_121c6c;
        case 0x121c78u: goto label_121c78;
        case 0x121c80u: goto label_121c80;
        case 0x121c8cu: goto label_121c8c;
        default: break;
    }

    ctx->pc = 0x121840u;

    // 0x121840: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x121840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x121844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x121844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x121848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x121848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12184c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12184cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x121850: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x121850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121854: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x121854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x121858: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x121858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12185c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x12185cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121860: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x121860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x121864: 0xc080702  jal         func_201C08
    ctx->pc = 0x121864u;
    SET_GPR_U32(ctx, 31, 0x12186Cu);
    ctx->pc = 0x121868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121864u;
    // 0x121868: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x121864u, 0x12186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12186Cu;
label_12186c:
    // 0x12186c: 0xc080d98  jal         func_203660
    ctx->pc = 0x12186Cu;
    SET_GPR_U32(ctx, 31, 0x121874u);
    ctx->pc = 0x121870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12186Cu;
    // 0x121870: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203660u, 0x12186Cu, 0x121874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121874u;
label_121874:
    // 0x121874: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x121874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x121878: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x121878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12187c: 0xc080874  jal         func_2021D0
    ctx->pc = 0x12187Cu;
    SET_GPR_U32(ctx, 31, 0x121884u);
    ctx->pc = 0x121880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12187Cu;
    // 0x121880: 0x24a5e990  addiu       $a1, $a1, -0x1670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x12187Cu, 0x121884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121884u;
label_121884:
    // 0x121884: 0x27a401bc  addiu       $a0, $sp, 0x1BC
    ctx->pc = 0x121884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x121888: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x121888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12188c: 0xc04889c  jal         func_122270
    ctx->pc = 0x12188Cu;
    SET_GPR_U32(ctx, 31, 0x121894u);
    ctx->pc = 0x121890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12188Cu;
    // 0x121890: 0x27a601b8  addiu       $a2, $sp, 0x1B8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x12188Cu, 0x121894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121894u;
label_121894:
    // 0x121894: 0x27a401b4  addiu       $a0, $sp, 0x1B4
    ctx->pc = 0x121894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x121898: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x121898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x12189c: 0xc048834  jal         func_1220D0
    ctx->pc = 0x12189Cu;
    SET_GPR_U32(ctx, 31, 0x1218A4u);
    ctx->pc = 0x1218A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12189Cu;
    // 0x1218a0: 0x27a601bc  addiu       $a2, $sp, 0x1BC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1220D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1220D0u, 0x12189Cu, 0x1218A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218A4u;
label_1218a4:
    // 0x1218a4: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x1218a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1218a8: 0x27a401bc  addiu       $a0, $sp, 0x1BC
    ctx->pc = 0x1218a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x1218ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1218acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1218b0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1218B0u;
    SET_GPR_U32(ctx, 31, 0x1218B8u);
    ctx->pc = 0x1218B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218B0u;
    // 0x1218b4: 0xafa201b0  sw          $v0, 0x1B0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1218B0u, 0x1218B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218B8u;
label_1218b8:
    // 0x1218b8: 0xc048604  jal         func_121810
    ctx->pc = 0x1218B8u;
    SET_GPR_U32(ctx, 31, 0x1218C0u);
    ctx->pc = 0x1218BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218B8u;
    // 0x1218bc: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121810u, 0x1218B8u, 0x1218C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218C0u;
label_1218c0:
    // 0x1218c0: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1218c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1218c4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1218C4u;
    {
        const bool branch_taken_0x1218c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1218C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218C4u;
        // 0x1218c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1218c4) {
            ctx->pc = 0x1218E0u;
            goto label_1218e0;
        }
    }
    ctx->pc = 0x1218CCu;
    // 0x1218cc: 0xc049270  jal         func_1249C0
    ctx->pc = 0x1218CCu;
    SET_GPR_U32(ctx, 31, 0x1218D4u);
    ctx->pc = 0x1218D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218CCu;
    // 0x1218d0: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249C0u, 0x1218CCu, 0x1218D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218D4u;
label_1218d4:
    // 0x1218d4: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1218d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1218d8: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x1218D8u;
    {
        const bool branch_taken_0x1218d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1218DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218D8u;
        // 0x1218dc: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1218d8) {
            ctx->pc = 0x121C90u;
            goto label_121c90;
        }
    }
    ctx->pc = 0x1218E0u;
label_1218e0:
    // 0x1218e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1218E0u;
    {
        const bool branch_taken_0x1218e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1218E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218E0u;
        // 0x1218e4: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1218e0) {
            ctx->pc = 0x121904u;
            goto label_121904;
        }
    }
    ctx->pc = 0x1218E8u;
label_1218e8:
    // 0x1218e8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1218E8u;
    {
        const bool branch_taken_0x1218e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1218e8) {
            ctx->pc = 0x121900u;
            goto label_121900;
        }
    }
    ctx->pc = 0x1218F0u;
    // 0x1218f0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1218f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1218f4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1218f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1218f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1218F8u;
    {
        const bool branch_taken_0x1218f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1218FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218F8u;
        // 0x1218fc: 0x24500050  addiu       $s0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1218f8) {
            ctx->pc = 0x121918u;
            goto label_121918;
        }
    }
    ctx->pc = 0x121900u;
label_121900:
    // 0x121900: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x121900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_121904:
    // 0x121904: 0x0  nop
    ctx->pc = 0x121904u;
    // NOP
    // 0x121908: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x121908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x12190c: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x12190cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x121910: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x121910u;
    {
        const bool branch_taken_0x121910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121910u;
        // 0x121914: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121910) {
            ctx->pc = 0x1218E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1218e8;
        }
    }
    ctx->pc = 0x121918u;
label_121918:
    // 0x121918: 0xc048608  jal         func_121820
    ctx->pc = 0x121918u;
    SET_GPR_U32(ctx, 31, 0x121920u);
    ctx->pc = 0x12191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121918u;
    // 0x12191c: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121820u, 0x121918u, 0x121920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121920u;
label_121920:
    // 0x121920: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x121920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x121924: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x121924u;
    {
        const bool branch_taken_0x121924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121924u;
        // 0x121928: 0xafa201b0  sw          $v0, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121924) {
            ctx->pc = 0x1219A0u;
            goto label_1219a0;
        }
    }
    ctx->pc = 0x12192Cu;
label_12192c:
    // 0x12192c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x12192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x121930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121934: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x121934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x121938: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x121938u;
    {
        const bool branch_taken_0x121938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121938u;
        // 0x12193c: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121938) {
            ctx->pc = 0x12195Cu;
            goto label_12195c;
        }
    }
    ctx->pc = 0x121940u;
label_121940:
    // 0x121940: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x121940u;
    {
        const bool branch_taken_0x121940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x121940) {
            ctx->pc = 0x121954u;
            goto label_121954;
        }
    }
    ctx->pc = 0x121948u;
    // 0x121948: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x121948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12194c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12194Cu;
    {
        const bool branch_taken_0x12194c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12194Cu;
        // 0x121950: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12194c) {
            ctx->pc = 0x121970u;
            goto label_121970;
        }
    }
    ctx->pc = 0x121954u;
label_121954:
    // 0x121954: 0x0  nop
    ctx->pc = 0x121954u;
    // NOP
    // 0x121958: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x121958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12195c:
    // 0x12195c: 0x0  nop
    ctx->pc = 0x12195cu;
    // NOP
    // 0x121960: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x121960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x121964: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x121964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x121968: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x121968u;
    {
        const bool branch_taken_0x121968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121968) {
            ctx->pc = 0x121940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121940;
        }
    }
    ctx->pc = 0x121970u;
label_121970:
    // 0x121970: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x121970u;
    SET_GPR_U32(ctx, 31, 0x121978u);
    ctx->pc = 0x121974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121970u;
    // 0x121974: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x121970u, 0x121978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121978u;
label_121978:
    // 0x121978: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x121978u;
    {
        const bool branch_taken_0x121978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121978u;
        // 0x12197c: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121978) {
            ctx->pc = 0x121998u;
            goto label_121998;
        }
    }
    ctx->pc = 0x121980u;
    // 0x121980: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x121980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x121984: 0xc049270  jal         func_1249C0
    ctx->pc = 0x121984u;
    SET_GPR_U32(ctx, 31, 0x12198Cu);
    ctx->pc = 0x121988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121984u;
    // 0x121988: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249C0u, 0x121984u, 0x12198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12198Cu;
label_12198c:
    // 0x12198c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x12198cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x121990: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x121990u;
    {
        const bool branch_taken_0x121990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121990u;
        // 0x121994: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121990) {
            ctx->pc = 0x121C90u;
            goto label_121c90;
        }
    }
    ctx->pc = 0x121998u;
label_121998:
    // 0x121998: 0xc048974  jal         func_1225D0
    ctx->pc = 0x121998u;
    SET_GPR_U32(ctx, 31, 0x1219A0u);
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x121998u, 0x1219A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219A0u;
label_1219a0:
    // 0x1219a0: 0xc048604  jal         func_121810
    ctx->pc = 0x1219A0u;
    SET_GPR_U32(ctx, 31, 0x1219A8u);
    ctx->pc = 0x1219A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219A0u;
    // 0x1219a4: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121810u, 0x1219A0u, 0x1219A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219A8u;
label_1219a8:
    // 0x1219a8: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1219a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1219ac: 0x1462ffdf  bne         $v1, $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1219ACu;
    {
        const bool branch_taken_0x1219ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1219ac) {
            ctx->pc = 0x12192Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12192c;
        }
    }
    ctx->pc = 0x1219B4u;
    // 0x1219b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1219b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1219b8: 0x1242008b  beq         $s2, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x1219B8u;
    {
        const bool branch_taken_0x1219b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1219BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219B8u;
        // 0x1219bc: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219b8) {
            ctx->pc = 0x121BE8u;
            goto label_121be8;
        }
    }
    ctx->pc = 0x1219C0u;
    // 0x1219c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1219c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1219c4: 0x1242005d  beq         $s2, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1219C4u;
    {
        const bool branch_taken_0x1219c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1219C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219C4u;
        // 0x1219c8: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219c4) {
            ctx->pc = 0x121B3Cu;
            goto label_121b3c;
        }
    }
    ctx->pc = 0x1219CCu;
    // 0x1219cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1219ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1219d0: 0x1242002f  beq         $s2, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1219D0u;
    {
        const bool branch_taken_0x1219d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1219D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219D0u;
        // 0x1219d4: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219d0) {
            ctx->pc = 0x121A90u;
            goto label_121a90;
        }
    }
    ctx->pc = 0x1219D8u;
    // 0x1219d8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1219D8u;
    {
        const bool branch_taken_0x1219d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1219DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219D8u;
        // 0x1219dc: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219d8) {
            ctx->pc = 0x1219E8u;
            goto label_1219e8;
        }
    }
    ctx->pc = 0x1219E0u;
    // 0x1219e0: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x1219E0u;
    {
        const bool branch_taken_0x1219e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1219E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219E0u;
        // 0x1219e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219e0) {
            ctx->pc = 0x121C90u;
            goto label_121c90;
        }
    }
    ctx->pc = 0x1219E8u;
label_1219e8:
    // 0x1219e8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1219E8u;
    SET_GPR_U32(ctx, 31, 0x1219F0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1219E8u, 0x1219F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219F0u;
label_1219f0:
    // 0x1219f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1219f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1219f4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1219F4u;
    {
        const bool branch_taken_0x1219f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1219F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219F4u;
        // 0x1219f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219f4) {
            ctx->pc = 0x121A0Cu;
            goto label_121a0c;
        }
    }
    ctx->pc = 0x1219FCu;
    // 0x1219fc: 0xc048ecc  jal         func_123B30
    ctx->pc = 0x1219FCu;
    SET_GPR_U32(ctx, 31, 0x121A04u);
    ctx->pc = 0x121A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219FCu;
    // 0x121a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123B30u, 0x1219FCu, 0x121A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A04u;
label_121a04:
    // 0x121a04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121a0c:
    // 0x121a0c: 0xc048f14  jal         func_123C50
    ctx->pc = 0x121A0Cu;
    SET_GPR_U32(ctx, 31, 0x121A14u);
    ctx->pc = 0x121A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A0Cu;
    // 0x121a10: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123C50u, 0x121A0Cu, 0x121A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A14u;
label_121a14:
    // 0x121a14: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x121a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x121a18: 0xc048920  jal         func_122480
    ctx->pc = 0x121A18u;
    SET_GPR_U32(ctx, 31, 0x121A20u);
    ctx->pc = 0x121A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A18u;
    // 0x121a1c: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x121A18u, 0x121A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A20u;
label_121a20:
    // 0x121a20: 0x27b10154  addiu       $s1, $sp, 0x154
    ctx->pc = 0x121a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x121a24: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x121a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x121a28: 0xc080748  jal         func_201D20
    ctx->pc = 0x121A28u;
    SET_GPR_U32(ctx, 31, 0x121A30u);
    ctx->pc = 0x121A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A28u;
    // 0x121a2c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x121A28u, 0x121A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A30u;
label_121a30:
    // 0x121a30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x121a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a34: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x121a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x121a38: 0xc048884  jal         func_122210
    ctx->pc = 0x121A38u;
    SET_GPR_U32(ctx, 31, 0x121A40u);
    ctx->pc = 0x121A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A38u;
    // 0x121a3c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x121A38u, 0x121A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A40u;
label_121a40:
    // 0x121a40: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x121a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x121a44: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x121a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x121a48: 0xc0488c8  jal         func_122320
    ctx->pc = 0x121A48u;
    SET_GPR_U32(ctx, 31, 0x121A50u);
    ctx->pc = 0x121A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A48u;
    // 0x121a4c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122320u, 0x121A48u, 0x121A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A50u;
label_121a50:
    // 0x121a50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x121a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x121a54: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x121a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x121a58: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x121a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x121a5c: 0x27a60178  addiu       $a2, $sp, 0x178
    ctx->pc = 0x121a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x121a60: 0xc048a5c  jal         func_122970
    ctx->pc = 0x121A60u;
    SET_GPR_U32(ctx, 31, 0x121A68u);
    ctx->pc = 0x121A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A60u;
    // 0x121a64: 0xafa2017c  sw          $v0, 0x17C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x121A60u, 0x121A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A68u;
label_121a68:
    // 0x121a68: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x121a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x121a6c: 0xc04619c  jal         func_118670
    ctx->pc = 0x121A6Cu;
    SET_GPR_U32(ctx, 31, 0x121A74u);
    ctx->pc = 0x121A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A6Cu;
    // 0x121a70: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121A6Cu, 0x121A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A74u;
label_121a74:
    // 0x121a74: 0xc049270  jal         func_1249C0
    ctx->pc = 0x121A74u;
    SET_GPR_U32(ctx, 31, 0x121A7Cu);
    ctx->pc = 0x121A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A74u;
    // 0x121a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249C0u, 0x121A74u, 0x121A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A7Cu;
label_121a7c:
    // 0x121a7c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x121a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x121a80: 0xc04619c  jal         func_118670
    ctx->pc = 0x121A80u;
    SET_GPR_U32(ctx, 31, 0x121A88u);
    ctx->pc = 0x121A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A80u;
    // 0x121a84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121A80u, 0x121A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A88u;
label_121a88:
    // 0x121a88: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x121A88u;
    {
        const bool branch_taken_0x121a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A88u;
        // 0x121a8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a88) {
            ctx->pc = 0x121C90u;
            goto label_121c90;
        }
    }
    ctx->pc = 0x121A90u;
label_121a90:
    // 0x121a90: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x121A90u;
    SET_GPR_U32(ctx, 31, 0x121A98u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x121A90u, 0x121A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A98u;
label_121a98:
    // 0x121a98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a9c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121A9Cu;
    {
        const bool branch_taken_0x121a9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x121AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A9Cu;
        // 0x121aa0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a9c) {
            ctx->pc = 0x121AB4u;
            goto label_121ab4;
        }
    }
    ctx->pc = 0x121AA4u;
    // 0x121aa4: 0xc049308  jal         func_124C20
    ctx->pc = 0x121AA4u;
    SET_GPR_U32(ctx, 31, 0x121AACu);
    ctx->pc = 0x121AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AA4u;
    // 0x121aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124C20u, 0x121AA4u, 0x121AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AACu;
label_121aac:
    // 0x121aac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ab0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x121ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_121ab4:
    // 0x121ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ab8: 0xc049360  jal         func_124D80
    ctx->pc = 0x121AB8u;
    SET_GPR_U32(ctx, 31, 0x121AC0u);
    ctx->pc = 0x121ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AB8u;
    // 0x121abc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124D80u, 0x121AB8u, 0x121AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AC0u;
label_121ac0:
    // 0x121ac0: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x121ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x121ac4: 0xc048920  jal         func_122480
    ctx->pc = 0x121AC4u;
    SET_GPR_U32(ctx, 31, 0x121ACCu);
    ctx->pc = 0x121AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AC4u;
    // 0x121ac8: 0x27a501c4  addiu       $a1, $sp, 0x1C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x121AC4u, 0x121ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121ACCu;
label_121acc:
    // 0x121acc: 0x27b1015c  addiu       $s1, $sp, 0x15C
    ctx->pc = 0x121accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x121ad0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x121ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x121ad4: 0xc080748  jal         func_201D20
    ctx->pc = 0x121AD4u;
    SET_GPR_U32(ctx, 31, 0x121ADCu);
    ctx->pc = 0x121AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AD4u;
    // 0x121ad8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x121AD4u, 0x121ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121ADCu;
label_121adc:
    // 0x121adc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x121adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ae0: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x121ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x121ae4: 0xc048884  jal         func_122210
    ctx->pc = 0x121AE4u;
    SET_GPR_U32(ctx, 31, 0x121AECu);
    ctx->pc = 0x121AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AE4u;
    // 0x121ae8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x121AE4u, 0x121AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AECu;
label_121aec:
    // 0x121aec: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x121aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x121af0: 0x27a50158  addiu       $a1, $sp, 0x158
    ctx->pc = 0x121af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x121af4: 0xc0488c8  jal         func_122320
    ctx->pc = 0x121AF4u;
    SET_GPR_U32(ctx, 31, 0x121AFCu);
    ctx->pc = 0x121AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AF4u;
    // 0x121af8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122320u, 0x121AF4u, 0x121AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AFCu;
label_121afc:
    // 0x121afc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x121afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x121b00: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x121b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x121b04: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x121b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x121b08: 0x27a60188  addiu       $a2, $sp, 0x188
    ctx->pc = 0x121b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x121b0c: 0xc048a5c  jal         func_122970
    ctx->pc = 0x121B0Cu;
    SET_GPR_U32(ctx, 31, 0x121B14u);
    ctx->pc = 0x121B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B0Cu;
    // 0x121b10: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x121B0Cu, 0x121B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B14u;
label_121b14:
    // 0x121b14: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x121b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x121b18: 0xc04619c  jal         func_118670
    ctx->pc = 0x121B18u;
    SET_GPR_U32(ctx, 31, 0x121B20u);
    ctx->pc = 0x121B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B18u;
    // 0x121b1c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121B18u, 0x121B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B20u;
label_121b20:
    // 0x121b20: 0xc049270  jal         func_1249C0
    ctx->pc = 0x121B20u;
    SET_GPR_U32(ctx, 31, 0x121B28u);
    ctx->pc = 0x121B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B20u;
    // 0x121b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249C0u, 0x121B20u, 0x121B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B28u;
label_121b28:
    // 0x121b28: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x121b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x121b2c: 0xc04619c  jal         func_118670
    ctx->pc = 0x121B2Cu;
    SET_GPR_U32(ctx, 31, 0x121B34u);
    ctx->pc = 0x121B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B2Cu;
    // 0x121b30: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121B2Cu, 0x121B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B34u;
label_121b34:
    // 0x121b34: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x121B34u;
    {
        const bool branch_taken_0x121b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B34u;
        // 0x121b38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b34) {
            ctx->pc = 0x121C90u;
            goto label_121c90;
        }
    }
    ctx->pc = 0x121B3Cu;
label_121b3c:
    // 0x121b3c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x121B3Cu;
    SET_GPR_U32(ctx, 31, 0x121B44u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x121B3Cu, 0x121B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B44u;
label_121b44:
    // 0x121b44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b48: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121B48u;
    {
        const bool branch_taken_0x121b48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x121B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B48u;
        // 0x121b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b48) {
            ctx->pc = 0x121B60u;
            goto label_121b60;
        }
    }
    ctx->pc = 0x121B50u;
    // 0x121b50: 0xc0494b0  jal         func_1252C0
    ctx->pc = 0x121B50u;
    SET_GPR_U32(ctx, 31, 0x121B58u);
    ctx->pc = 0x121B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B50u;
    // 0x121b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1252C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1252C0u, 0x121B50u, 0x121B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B58u;
label_121b58:
    // 0x121b58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121b60:
    // 0x121b60: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x121b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x121b64: 0xc049500  jal         func_125400
    ctx->pc = 0x121B64u;
    SET_GPR_U32(ctx, 31, 0x121B6Cu);
    ctx->pc = 0x121B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B64u;
    // 0x121b68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125400u, 0x121B64u, 0x121B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B6Cu;
label_121b6c:
    // 0x121b6c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x121b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x121b70: 0xc048920  jal         func_122480
    ctx->pc = 0x121B70u;
    SET_GPR_U32(ctx, 31, 0x121B78u);
    ctx->pc = 0x121B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B70u;
    // 0x121b74: 0x27a501c8  addiu       $a1, $sp, 0x1C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x121B70u, 0x121B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B78u;
label_121b78:
    // 0x121b78: 0x27b10164  addiu       $s1, $sp, 0x164
    ctx->pc = 0x121b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x121b7c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x121b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x121b80: 0xc080748  jal         func_201D20
    ctx->pc = 0x121B80u;
    SET_GPR_U32(ctx, 31, 0x121B88u);
    ctx->pc = 0x121B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B80u;
    // 0x121b84: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x121B80u, 0x121B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B88u;
label_121b88:
    // 0x121b88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x121b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b8c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x121b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x121b90: 0xc048884  jal         func_122210
    ctx->pc = 0x121B90u;
    SET_GPR_U32(ctx, 31, 0x121B98u);
    ctx->pc = 0x121B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B90u;
    // 0x121b94: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x121B90u, 0x121B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B98u;
label_121b98:
    // 0x121b98: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x121b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x121b9c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x121b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x121ba0: 0xc0488c8  jal         func_122320
    ctx->pc = 0x121BA0u;
    SET_GPR_U32(ctx, 31, 0x121BA8u);
    ctx->pc = 0x121BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BA0u;
    // 0x121ba4: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122320u, 0x121BA0u, 0x121BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BA8u;
label_121ba8:
    // 0x121ba8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x121ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x121bac: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x121bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x121bb0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x121bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x121bb4: 0x27a60198  addiu       $a2, $sp, 0x198
    ctx->pc = 0x121bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x121bb8: 0xc048a5c  jal         func_122970
    ctx->pc = 0x121BB8u;
    SET_GPR_U32(ctx, 31, 0x121BC0u);
    ctx->pc = 0x121BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BB8u;
    // 0x121bbc: 0xafa2019c  sw          $v0, 0x19C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x121BB8u, 0x121BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BC0u;
label_121bc0:
    // 0x121bc0: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x121bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x121bc4: 0xc04619c  jal         func_118670
    ctx->pc = 0x121BC4u;
    SET_GPR_U32(ctx, 31, 0x121BCCu);
    ctx->pc = 0x121BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BC4u;
    // 0x121bc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121BC4u, 0x121BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BCCu;
label_121bcc:
    // 0x121bcc: 0xc049270  jal         func_1249C0
    ctx->pc = 0x121BCCu;
    SET_GPR_U32(ctx, 31, 0x121BD4u);
    ctx->pc = 0x121BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BCCu;
    // 0x121bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249C0u, 0x121BCCu, 0x121BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BD4u;
label_121bd4:
    // 0x121bd4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x121bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x121bd8: 0xc04619c  jal         func_118670
    ctx->pc = 0x121BD8u;
    SET_GPR_U32(ctx, 31, 0x121BE0u);
    ctx->pc = 0x121BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BD8u;
    // 0x121bdc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121BD8u, 0x121BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BE0u;
label_121be0:
    // 0x121be0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x121BE0u;
    {
        const bool branch_taken_0x121be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BE0u;
        // 0x121be4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121be0) {
            ctx->pc = 0x121C90u;
            goto label_121c90;
        }
    }
    ctx->pc = 0x121BE8u;
label_121be8:
    // 0x121be8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x121BE8u;
    SET_GPR_U32(ctx, 31, 0x121BF0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x121BE8u, 0x121BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BF0u;
label_121bf0:
    // 0x121bf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121bf4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121BF4u;
    {
        const bool branch_taken_0x121bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BF4u;
        // 0x121bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121bf4) {
            ctx->pc = 0x121C0Cu;
            goto label_121c0c;
        }
    }
    ctx->pc = 0x121BFCu;
    // 0x121bfc: 0xc0494b0  jal         func_1252C0
    ctx->pc = 0x121BFCu;
    SET_GPR_U32(ctx, 31, 0x121C04u);
    ctx->pc = 0x121C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BFCu;
    // 0x121c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1252C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1252C0u, 0x121BFCu, 0x121C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C04u;
label_121c04:
    // 0x121c04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121c0c:
    // 0x121c0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x121c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x121c10: 0xc049500  jal         func_125400
    ctx->pc = 0x121C10u;
    SET_GPR_U32(ctx, 31, 0x121C18u);
    ctx->pc = 0x121C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C10u;
    // 0x121c14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125400u, 0x121C10u, 0x121C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C18u;
label_121c18:
    // 0x121c18: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x121c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x121c1c: 0xc048920  jal         func_122480
    ctx->pc = 0x121C1Cu;
    SET_GPR_U32(ctx, 31, 0x121C24u);
    ctx->pc = 0x121C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C1Cu;
    // 0x121c20: 0x27a501cc  addiu       $a1, $sp, 0x1CC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x121C1Cu, 0x121C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C24u;
label_121c24:
    // 0x121c24: 0x27b1016c  addiu       $s1, $sp, 0x16C
    ctx->pc = 0x121c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x121c28: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x121c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x121c2c: 0xc080748  jal         func_201D20
    ctx->pc = 0x121C2Cu;
    SET_GPR_U32(ctx, 31, 0x121C34u);
    ctx->pc = 0x121C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C2Cu;
    // 0x121c30: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x121C2Cu, 0x121C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C34u;
label_121c34:
    // 0x121c34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x121c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c38: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x121c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x121c3c: 0xc048884  jal         func_122210
    ctx->pc = 0x121C3Cu;
    SET_GPR_U32(ctx, 31, 0x121C44u);
    ctx->pc = 0x121C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C3Cu;
    // 0x121c40: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x121C3Cu, 0x121C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C44u;
label_121c44:
    // 0x121c44: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x121c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x121c48: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x121c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x121c4c: 0xc0488c8  jal         func_122320
    ctx->pc = 0x121C4Cu;
    SET_GPR_U32(ctx, 31, 0x121C54u);
    ctx->pc = 0x121C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C4Cu;
    // 0x121c50: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122320u, 0x121C4Cu, 0x121C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C54u;
label_121c54:
    // 0x121c54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x121c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x121c58: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x121c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x121c5c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x121c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x121c60: 0x27a601a8  addiu       $a2, $sp, 0x1A8
    ctx->pc = 0x121c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x121c64: 0xc048a5c  jal         func_122970
    ctx->pc = 0x121C64u;
    SET_GPR_U32(ctx, 31, 0x121C6Cu);
    ctx->pc = 0x121C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C64u;
    // 0x121c68: 0xafa201ac  sw          $v0, 0x1AC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x121C64u, 0x121C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C6Cu;
label_121c6c:
    // 0x121c6c: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x121c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x121c70: 0xc04619c  jal         func_118670
    ctx->pc = 0x121C70u;
    SET_GPR_U32(ctx, 31, 0x121C78u);
    ctx->pc = 0x121C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C70u;
    // 0x121c74: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121C70u, 0x121C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C78u;
label_121c78:
    // 0x121c78: 0xc049270  jal         func_1249C0
    ctx->pc = 0x121C78u;
    SET_GPR_U32(ctx, 31, 0x121C80u);
    ctx->pc = 0x121C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C78u;
    // 0x121c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249C0u, 0x121C78u, 0x121C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C80u;
label_121c80:
    // 0x121c80: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x121c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x121c84: 0xc04619c  jal         func_118670
    ctx->pc = 0x121C84u;
    SET_GPR_U32(ctx, 31, 0x121C8Cu);
    ctx->pc = 0x121C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C84u;
    // 0x121c88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121C84u, 0x121C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C8Cu;
label_121c8c:
    // 0x121c8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x121c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121c90:
    // 0x121c90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x121c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x121c94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x121c94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x121c98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x121c98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121c9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x121c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121ca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x121ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x121CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CA4u;
        // 0x121ca8: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121CACu;
}
