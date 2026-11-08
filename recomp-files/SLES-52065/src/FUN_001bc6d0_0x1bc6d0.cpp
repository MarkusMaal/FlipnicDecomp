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

// Function: FUN_001bc6d0
// Address: 0x1bc6d0 - 0x1bc8a0
void FUN_001bc6d0_0x1bc6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bc6d0_0x1bc6d0");
#endif

    switch (ctx->pc) {
        case 0x1bc6f0u: goto label_1bc6f0;
        case 0x1bc70cu: goto label_1bc70c;
        case 0x1bc71cu: goto label_1bc71c;
        case 0x1bc724u: goto label_1bc724;
        case 0x1bc740u: goto label_1bc740;
        case 0x1bc754u: goto label_1bc754;
        case 0x1bc768u: goto label_1bc768;
        case 0x1bc77cu: goto label_1bc77c;
        case 0x1bc788u: goto label_1bc788;
        case 0x1bc790u: goto label_1bc790;
        case 0x1bc798u: goto label_1bc798;
        case 0x1bc7c0u: goto label_1bc7c0;
        case 0x1bc7d8u: goto label_1bc7d8;
        case 0x1bc7f8u: goto label_1bc7f8;
        case 0x1bc808u: goto label_1bc808;
        case 0x1bc824u: goto label_1bc824;
        case 0x1bc838u: goto label_1bc838;
        case 0x1bc848u: goto label_1bc848;
        case 0x1bc854u: goto label_1bc854;
        default: break;
    }

    ctx->pc = 0x1bc6d0u;

    // 0x1bc6d0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1bc6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1bc6d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bc6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bc6d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bc6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bc6dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bc6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bc6e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc6e4: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x1bc6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
    // 0x1bc6e8: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1BC6E8u;
    SET_GPR_U32(ctx, 31, 0x1BC6F0u);
    ctx->pc = 0x1BC6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC6E8u;
    // 0x1bc6ec: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1BC6E8u, 0x1BC6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC6F0u;
label_1bc6f0:
    // 0x1bc6f0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1bc6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bc6f4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1bc6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1bc6f8: 0x2463ba10  addiu       $v1, $v1, -0x45F0
    ctx->pc = 0x1bc6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949392));
    // 0x1bc6fc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1bc6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1bc700: 0x27a50174  addiu       $a1, $sp, 0x174
    ctx->pc = 0x1bc700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x1bc704: 0xc06f678  jal         func_1BD9E0
    ctx->pc = 0x1BC704u;
    SET_GPR_U32(ctx, 31, 0x1BC70Cu);
    ctx->pc = 0x1BC708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC704u;
    // 0x1bc708: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD9E0u, 0x1BC704u, 0x1BC70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC70Cu;
label_1bc70c:
    // 0x1bc70c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1bc70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bc710: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1bc710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1bc714: 0xc06f5dc  jal         func_1BD770
    ctx->pc = 0x1BC714u;
    SET_GPR_U32(ctx, 31, 0x1BC71Cu);
    ctx->pc = 0x1BC718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC714u;
    // 0x1bc718: 0x24440060  addiu       $a0, $v0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD770u, 0x1BC714u, 0x1BC71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC71Cu;
label_1bc71c:
    // 0x1bc71c: 0xc06f494  jal         func_1BD250
    ctx->pc = 0x1BC71Cu;
    SET_GPR_U32(ctx, 31, 0x1BC724u);
    ctx->pc = 0x1BC720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC71Cu;
    // 0x1bc720: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD250u, 0x1BC71Cu, 0x1BC724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC724u;
label_1bc724:
    // 0x1bc724: 0x27a40154  addiu       $a0, $sp, 0x154
    ctx->pc = 0x1bc724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x1bc728: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC728u;
    {
        const bool branch_taken_0x1bc728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc728) {
            ctx->pc = 0x1BC740u;
            goto label_1bc740;
        }
    }
    ctx->pc = 0x1BC730u;
    // 0x1bc730: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC730u;
    {
        const bool branch_taken_0x1bc730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc730) {
            ctx->pc = 0x1BC740u;
            goto label_1bc740;
        }
    }
    ctx->pc = 0x1BC738u;
    // 0x1bc738: 0xc04f090  jal         func_13C240
    ctx->pc = 0x1BC738u;
    SET_GPR_U32(ctx, 31, 0x1BC740u);
    ctx->pc = 0x13C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C240u, 0x1BC738u, 0x1BC740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC740u;
label_1bc740:
    // 0x1bc740: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1bc740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bc744: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bc744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bc748: 0x24a53050  addiu       $a1, $a1, 0x3050
    ctx->pc = 0x1bc748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12368));
    // 0x1bc74c: 0xc06f55c  jal         func_1BD570
    ctx->pc = 0x1BC74Cu;
    SET_GPR_U32(ctx, 31, 0x1BC754u);
    ctx->pc = 0x1BC750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC74Cu;
    // 0x1bc750: 0x24440060  addiu       $a0, $v0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD570u, 0x1BC74Cu, 0x1BC754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC754u;
label_1bc754:
    // 0x1bc754: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1bc754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bc758: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x1bc758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x1bc75c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1bc75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bc760: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1BC760u;
    SET_GPR_U32(ctx, 31, 0x1BC768u);
    ctx->pc = 0x1BC764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC760u;
    // 0x1bc764: 0xac400080  sw          $zero, 0x80($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1BC760u, 0x1BC768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC768u;
label_1bc768:
    // 0x1bc768: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bc768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc76c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bc76cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bc770: 0x24a511b0  addiu       $a1, $a1, 0x11B0
    ctx->pc = 0x1bc770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4528));
    // 0x1bc774: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1BC774u;
    SET_GPR_U32(ctx, 31, 0x1BC77Cu);
    ctx->pc = 0x1BC778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC774u;
    // 0x1bc778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1BC774u, 0x1BC77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC77Cu;
label_1bc77c:
    // 0x1bc77c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bc77cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc780: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1BC780u;
    SET_GPR_U32(ctx, 31, 0x1BC788u);
    ctx->pc = 0x1BC784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC780u;
    // 0x1bc784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1BC780u, 0x1BC788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC788u;
label_1bc788:
    // 0x1bc788: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC788u;
    {
        const bool branch_taken_0x1bc788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc788) {
            ctx->pc = 0x1BC7ACu;
            goto label_1bc7ac;
        }
    }
    ctx->pc = 0x1BC790u;
label_1bc790:
    // 0x1bc790: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1BC790u;
    SET_GPR_U32(ctx, 31, 0x1BC798u);
    ctx->pc = 0x1BC794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC790u;
    // 0x1bc794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1BC790u, 0x1BC798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC798u;
label_1bc798:
    // 0x1bc798: 0x0  nop
    ctx->pc = 0x1bc798u;
    // NOP
    // 0x1bc79c: 0x0  nop
    ctx->pc = 0x1bc79cu;
    // NOP
    // 0x1bc7a0: 0x0  nop
    ctx->pc = 0x1bc7a0u;
    // NOP
    // 0x1bc7a4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BC7A4u;
    {
        const bool branch_taken_0x1bc7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc7a4) {
            ctx->pc = 0x1BC790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc790;
        }
    }
    ctx->pc = 0x1BC7ACu;
label_1bc7ac:
    // 0x1bc7ac: 0x0  nop
    ctx->pc = 0x1bc7acu;
    // NOP
    // 0x1bc7b0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bc7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bc7b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc7b8: 0xc047988  jal         func_11E620
    ctx->pc = 0x1BC7B8u;
    SET_GPR_U32(ctx, 31, 0x1BC7C0u);
    ctx->pc = 0x1BC7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC7B8u;
    // 0x1bc7bc: 0x24a511b0  addiu       $a1, $a1, 0x11B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E620u, 0x1BC7B8u, 0x1BC7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7C0u;
label_1bc7c0:
    // 0x1bc7c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bc7c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc7c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bc7c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc7c8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1bc7c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1bc7cc: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BC7CCu;
    {
        const bool branch_taken_0x1bc7cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC7CCu;
        // 0x1bc7d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc7cc) {
            ctx->pc = 0x1BC870u;
            goto label_1bc870;
        }
    }
    ctx->pc = 0x1BC7D4u;
    // 0x1bc7d4: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x1bc7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1bc7d8:
    // 0x1bc7d8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1bc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bc7dc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1bc7dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bc7e0: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BC7E0u;
    {
        const bool branch_taken_0x1bc7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bc7e0) {
            ctx->pc = 0x1BC85Cu;
            goto label_1bc85c;
        }
    }
    ctx->pc = 0x1BC7E8u;
    // 0x1bc7e8: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x1bc7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc7ec: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x1bc7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1bc7f0: 0xc080702  jal         func_201C08
    ctx->pc = 0x1BC7F0u;
    SET_GPR_U32(ctx, 31, 0x1BC7F8u);
    ctx->pc = 0x1BC7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC7F0u;
    // 0x1bc7f4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1BC7F0u, 0x1BC7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7F8u;
label_1bc7f8:
    // 0x1bc7f8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bc7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bc7fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc800: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x1BC800u;
    SET_GPR_U32(ctx, 31, 0x1BC808u);
    ctx->pc = 0x1BC804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC800u;
    // 0x1bc804: 0x24a511c0  addiu       $a1, $a1, 0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1BC800u, 0x1BC808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC808u;
label_1bc808:
    // 0x1bc808: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC808u;
    {
        const bool branch_taken_0x1bc808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC808u;
        // 0x1bc80c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc808) {
            ctx->pc = 0x1BC818u;
            goto label_1bc818;
        }
    }
    ctx->pc = 0x1BC810u;
    // 0x1bc810: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1BC810u;
    {
        const bool branch_taken_0x1bc810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC810u;
        // 0x1bc814: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc810) {
            ctx->pc = 0x1BC888u;
            goto label_1bc888;
        }
    }
    ctx->pc = 0x1BC818u;
label_1bc818:
    // 0x1bc818: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc81c: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x1BC81Cu;
    SET_GPR_U32(ctx, 31, 0x1BC824u);
    ctx->pc = 0x1BC820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC81Cu;
    // 0x1bc820: 0x24a511c8  addiu       $a1, $a1, 0x11C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1BC81Cu, 0x1BC824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC824u;
label_1bc824:
    // 0x1bc824: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC824u;
    {
        const bool branch_taken_0x1bc824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC824u;
        // 0x1bc828: 0x27a4017c  addiu       $a0, $sp, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc824) {
            ctx->pc = 0x1BC854u;
            goto label_1bc854;
        }
    }
    ctx->pc = 0x1BC82Cu;
    // 0x1bc82c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1bc82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc830: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BC830u;
    SET_GPR_U32(ctx, 31, 0x1BC838u);
    ctx->pc = 0x1BC834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC830u;
    // 0x1bc834: 0x27a60178  addiu       $a2, $sp, 0x178 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BC830u, 0x1BC838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC838u;
label_1bc838:
    // 0x1bc838: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1bc838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bc83c: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x1bc83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1bc840: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1BC840u;
    SET_GPR_U32(ctx, 31, 0x1BC848u);
    ctx->pc = 0x1BC844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC840u;
    // 0x1bc844: 0x27a5017c  addiu       $a1, $sp, 0x17C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1BC840u, 0x1BC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC848u;
label_1bc848:
    // 0x1bc848: 0x27a4017c  addiu       $a0, $sp, 0x17C
    ctx->pc = 0x1bc848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x1bc84c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BC84Cu;
    SET_GPR_U32(ctx, 31, 0x1BC854u);
    ctx->pc = 0x1BC850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC84Cu;
    // 0x1bc850: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BC84Cu, 0x1BC854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC854u;
label_1bc854:
    // 0x1bc854: 0x0  nop
    ctx->pc = 0x1bc854u;
    // NOP
    // 0x1bc858: 0x26440002  addiu       $a0, $s2, 0x2
    ctx->pc = 0x1bc858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_1bc85c:
    // 0x1bc85c: 0x0  nop
    ctx->pc = 0x1bc85cu;
    // NOP
    // 0x1bc860: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bc860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1bc864: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x1bc864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1bc868: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1BC868u;
    {
        const bool branch_taken_0x1bc868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC868u;
        // 0x1bc86c: 0x2122821  addu        $a1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc868) {
            ctx->pc = 0x1BC7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc7d8;
        }
    }
    ctx->pc = 0x1BC870u;
label_1bc870:
    // 0x1bc870: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1bc870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bc874: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x1bc874u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc878: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1bc878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bc87c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1bc87cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1bc880: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1bc880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bc884: 0x0  nop
    ctx->pc = 0x1bc884u;
    // NOP
label_1bc888:
    // 0x1bc888: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bc888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc88c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bc88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc898: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC898u;
        // 0x1bc89c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC8A0u;
}
