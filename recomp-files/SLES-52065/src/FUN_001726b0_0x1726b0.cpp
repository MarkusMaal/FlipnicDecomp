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

// Function: FUN_001726b0
// Address: 0x1726b0 - 0x1727d0
void FUN_001726b0_0x1726b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001726b0_0x1726b0");
#endif

    switch (ctx->pc) {
        case 0x1726d4u: goto label_1726d4;
        case 0x1726dcu: goto label_1726dc;
        case 0x1726e4u: goto label_1726e4;
        case 0x1726fcu: goto label_1726fc;
        case 0x172704u: goto label_172704;
        case 0x17270cu: goto label_17270c;
        case 0x172714u: goto label_172714;
        case 0x17272cu: goto label_17272c;
        case 0x172738u: goto label_172738;
        case 0x172748u: goto label_172748;
        case 0x172750u: goto label_172750;
        case 0x172758u: goto label_172758;
        case 0x172774u: goto label_172774;
        default: break;
    }

    ctx->pc = 0x1726b0u;

    // 0x1726b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1726b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1726b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1726b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1726b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1726b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1726bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1726bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1726c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1726c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1726c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1726c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1726c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1726c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1726cc: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1726CCu;
    SET_GPR_U32(ctx, 31, 0x1726D4u);
    ctx->pc = 0x1726D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726CCu;
    // 0x1726d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1726CCu, 0x1726D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726D4u;
label_1726d4:
    // 0x1726d4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1726D4u;
    SET_GPR_U32(ctx, 31, 0x1726DCu);
    ctx->pc = 0x1726D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726D4u;
    // 0x1726d8: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1726D4u, 0x1726DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726DCu;
label_1726dc:
    // 0x1726dc: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1726DCu;
    SET_GPR_U32(ctx, 31, 0x1726E4u);
    ctx->pc = 0x1726E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726DCu;
    // 0x1726e0: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1726DCu, 0x1726E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726E4u;
label_1726e4:
    // 0x1726e4: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1726e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1726e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1726e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1726ec: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x1726ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x1726f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1726f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1726f4: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x1726F4u;
    SET_GPR_U32(ctx, 31, 0x1726FCu);
    ctx->pc = 0x1726F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726F4u;
    // 0x1726f8: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x1726F4u, 0x1726FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726FCu;
label_1726fc:
    // 0x1726fc: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1726FCu;
    SET_GPR_U32(ctx, 31, 0x172704u);
    ctx->pc = 0x172700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726FCu;
    // 0x172700: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1726FCu, 0x172704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172704u;
label_172704:
    // 0x172704: 0xc045b20  jal         func_116C80
    ctx->pc = 0x172704u;
    SET_GPR_U32(ctx, 31, 0x17270Cu);
    ctx->pc = 0x172708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172704u;
    // 0x172708: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x172704u, 0x17270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17270Cu;
label_17270c:
    // 0x17270c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17270Cu;
    SET_GPR_U32(ctx, 31, 0x172714u);
    ctx->pc = 0x172710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17270Cu;
    // 0x172710: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17270Cu, 0x172714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172714u;
label_172714:
    // 0x172714: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x172714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x172718: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17271c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x17271cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x172720: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x172720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172724: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x172724u;
    SET_GPR_U32(ctx, 31, 0x17272Cu);
    ctx->pc = 0x172728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172724u;
    // 0x172728: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x172724u, 0x17272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17272Cu;
label_17272c:
    // 0x17272c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x17272cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x172730: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x172730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172734: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x172734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172738:
    // 0x172738: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x172738u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x17273c: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x17273cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x172740: 0xc045b20  jal         func_116C80
    ctx->pc = 0x172740u;
    SET_GPR_U32(ctx, 31, 0x172748u);
    ctx->pc = 0x172744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172740u;
    // 0x172744: 0xae6000a4  sw          $zero, 0xA4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x172740u, 0x172748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172748u;
label_172748:
    // 0x172748: 0xc045b20  jal         func_116C80
    ctx->pc = 0x172748u;
    SET_GPR_U32(ctx, 31, 0x172750u);
    ctx->pc = 0x17274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172748u;
    // 0x17274c: 0xe6600090  swc1        $f0, 0x90($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x172748u, 0x172750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172750u;
label_172750:
    // 0x172750: 0xc045b20  jal         func_116C80
    ctx->pc = 0x172750u;
    SET_GPR_U32(ctx, 31, 0x172758u);
    ctx->pc = 0x172754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172750u;
    // 0x172754: 0xe6600094  swc1        $f0, 0x94($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x172750u, 0x172758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172758u;
label_172758:
    // 0x172758: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x172758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x17275c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17275cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x172760: 0xe6600098  swc1        $f0, 0x98($s3)
    ctx->pc = 0x172760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
    // 0x172764: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x172764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172768: 0xae62009c  sw          $v0, 0x9C($s3)
    ctx->pc = 0x172768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 2));
    // 0x17276c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x17276Cu;
    SET_GPR_U32(ctx, 31, 0x172774u);
    ctx->pc = 0x172770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17276Cu;
    // 0x172770: 0x2674009c  addiu       $s4, $s3, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x17276Cu, 0x172774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172774u;
label_172774:
    // 0x172774: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x172774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x172778: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x172778u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x17277c: 0x2a230040  slti        $v1, $s1, 0x40
    ctx->pc = 0x17277cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x172780: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x172780u;
    {
        const bool branch_taken_0x172780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172780u;
        // 0x172784: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172780) {
            ctx->pc = 0x172738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172738;
        }
    }
    ctx->pc = 0x172788u;
    // 0x172788: 0x260414d0  addiu       $a0, $s0, 0x14D0
    ctx->pc = 0x172788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5328));
    // 0x17278c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x17278cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x172790: 0xae044020  sw          $a0, 0x4020($s0)
    ctx->pc = 0x172790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 4));
    // 0x172794: 0xae006014  sw          $zero, 0x6014($s0)
    ctx->pc = 0x172794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24596), GPR_U32(ctx, 0));
    // 0x172798: 0xa2006034  sb          $zero, 0x6034($s0)
    ctx->pc = 0x172798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24628), (uint8_t)GPR_U32(ctx, 0));
    // 0x17279c: 0xa2006032  sb          $zero, 0x6032($s0)
    ctx->pc = 0x17279cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24626), (uint8_t)GPR_U32(ctx, 0));
    // 0x1727a0: 0xa2006033  sb          $zero, 0x6033($s0)
    ctx->pc = 0x1727a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24627), (uint8_t)GPR_U32(ctx, 0));
    // 0x1727a4: 0xae036018  sw          $v1, 0x6018($s0)
    ctx->pc = 0x1727a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24600), GPR_U32(ctx, 3));
    // 0x1727a8: 0xae00601c  sw          $zero, 0x601C($s0)
    ctx->pc = 0x1727a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24604), GPR_U32(ctx, 0));
    // 0x1727ac: 0xae006020  sw          $zero, 0x6020($s0)
    ctx->pc = 0x1727acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24608), GPR_U32(ctx, 0));
    // 0x1727b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1727b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1727b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1727b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1727b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1727b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1727bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1727bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1727c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1727c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1727c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1727c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1727c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1727C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1727CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1727C8u;
        // 0x1727cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1727C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1727D0u;
}
