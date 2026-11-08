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

// Function: FUN_00126830
// Address: 0x126830 - 0x126a60
void FUN_00126830_0x126830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00126830_0x126830");
#endif

    switch (ctx->pc) {
        case 0x126860u: goto label_126860;
        case 0x12686cu: goto label_12686c;
        case 0x126878u: goto label_126878;
        case 0x126880u: goto label_126880;
        case 0x126890u: goto label_126890;
        case 0x12689cu: goto label_12689c;
        case 0x1268a4u: goto label_1268a4;
        case 0x1268acu: goto label_1268ac;
        case 0x1268d8u: goto label_1268d8;
        case 0x1268e8u: goto label_1268e8;
        case 0x1268f8u: goto label_1268f8;
        case 0x126908u: goto label_126908;
        case 0x126918u: goto label_126918;
        case 0x126928u: goto label_126928;
        case 0x126938u: goto label_126938;
        case 0x126958u: goto label_126958;
        case 0x126978u: goto label_126978;
        case 0x126990u: goto label_126990;
        case 0x1269a0u: goto label_1269a0;
        case 0x1269c4u: goto label_1269c4;
        case 0x126a04u: goto label_126a04;
        case 0x126a0cu: goto label_126a0c;
        case 0x126a18u: goto label_126a18;
        case 0x126a30u: goto label_126a30;
        default: break;
    }

    ctx->pc = 0x126830u;

    // 0x126830: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x126830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
    // 0x126834: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x126834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x126838: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x126838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x12683c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12683cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x126840: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x126840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x126844: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x126844u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x126848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12684c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12684cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126850: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x126850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x126854: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x126858: 0xc04c264  jal         func_130990
    ctx->pc = 0x126858u;
    SET_GPR_U32(ctx, 31, 0x126860u);
    ctx->pc = 0x12685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126858u;
    // 0x12685c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130990u, 0x126858u, 0x126860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126860u;
label_126860:
    // 0x126860: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126864: 0xc080702  jal         func_201C08
    ctx->pc = 0x126864u;
    SET_GPR_U32(ctx, 31, 0x12686Cu);
    ctx->pc = 0x126868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126864u;
    // 0x126868: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x126864u, 0x12686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12686Cu;
label_12686c:
    // 0x12686c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12686cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x126870: 0xc080664  jal         func_201990
    ctx->pc = 0x126870u;
    SET_GPR_U32(ctx, 31, 0x126878u);
    ctx->pc = 0x126874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126870u;
    // 0x126874: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x126870u, 0x126878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126878u;
label_126878:
    // 0x126878: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x126878u;
    SET_GPR_U32(ctx, 31, 0x126880u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x126878u, 0x126880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126880u;
label_126880:
    // 0x126880: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x126880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126884: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x126884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x126888: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x126888u;
    SET_GPR_U32(ctx, 31, 0x126890u);
    ctx->pc = 0x12688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126888u;
    // 0x12688c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x126888u, 0x126890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126890u;
label_126890:
    // 0x126890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x126890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126894: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x126894u;
    SET_GPR_U32(ctx, 31, 0x12689Cu);
    ctx->pc = 0x126898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126894u;
    // 0x126898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x126894u, 0x12689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12689Cu;
label_12689c:
    // 0x12689c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12689Cu;
    {
        const bool branch_taken_0x12689c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12689c) {
            ctx->pc = 0x1268C0u;
            goto label_1268c0;
        }
    }
    ctx->pc = 0x1268A4u;
label_1268a4:
    // 0x1268a4: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1268A4u;
    SET_GPR_U32(ctx, 31, 0x1268ACu);
    ctx->pc = 0x1268A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1268A4u;
    // 0x1268a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1268A4u, 0x1268ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1268ACu;
label_1268ac:
    // 0x1268ac: 0x0  nop
    ctx->pc = 0x1268acu;
    // NOP
    // 0x1268b0: 0x0  nop
    ctx->pc = 0x1268b0u;
    // NOP
    // 0x1268b4: 0x0  nop
    ctx->pc = 0x1268b4u;
    // NOP
    // 0x1268b8: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1268B8u;
    {
        const bool branch_taken_0x1268b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1268b8) {
            ctx->pc = 0x1268A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1268a4;
        }
    }
    ctx->pc = 0x1268C0u;
label_1268c0:
    // 0x1268c0: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1268C0u;
    {
        const bool branch_taken_0x1268c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1268C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268C0u;
        // 0x1268c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268c0) {
            ctx->pc = 0x1269CCu;
            goto label_1269cc;
        }
    }
    ctx->pc = 0x1268C8u;
    // 0x1268c8: 0x26a400f4  addiu       $a0, $s5, 0xF4
    ctx->pc = 0x1268c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 244));
    // 0x1268cc: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1268ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1268d0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1268D0u;
    SET_GPR_U32(ctx, 31, 0x1268D8u);
    ctx->pc = 0x1268D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1268D0u;
    // 0x1268d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1268D0u, 0x1268D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1268D8u;
label_1268d8:
    // 0x1268d8: 0x27a404cc  addiu       $a0, $sp, 0x4CC
    ctx->pc = 0x1268d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1228));
    // 0x1268dc: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x1268dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1268e0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1268E0u;
    SET_GPR_U32(ctx, 31, 0x1268E8u);
    ctx->pc = 0x1268E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1268E0u;
    // 0x1268e4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1268E0u, 0x1268E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1268E8u;
label_1268e8:
    // 0x1268e8: 0x26a400f8  addiu       $a0, $s5, 0xF8
    ctx->pc = 0x1268e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 248));
    // 0x1268ec: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1268ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1268f0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1268F0u;
    SET_GPR_U32(ctx, 31, 0x1268F8u);
    ctx->pc = 0x1268F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1268F0u;
    // 0x1268f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1268F0u, 0x1268F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1268F8u;
label_1268f8:
    // 0x1268f8: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x1268f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x1268fc: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1268fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x126900: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x126900u;
    SET_GPR_U32(ctx, 31, 0x126908u);
    ctx->pc = 0x126904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126900u;
    // 0x126904: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x126900u, 0x126908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126908u;
label_126908:
    // 0x126908: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x126908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x12690c: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x12690cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x126910: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x126910u;
    SET_GPR_U32(ctx, 31, 0x126918u);
    ctx->pc = 0x126914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126910u;
    // 0x126914: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x126910u, 0x126918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126918u;
label_126918:
    // 0x126918: 0x26a40080  addiu       $a0, $s5, 0x80
    ctx->pc = 0x126918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x12691c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x12691cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x126920: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x126920u;
    SET_GPR_U32(ctx, 31, 0x126928u);
    ctx->pc = 0x126924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126920u;
    // 0x126924: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x126920u, 0x126928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126928u;
label_126928:
    // 0x126928: 0x26a40090  addiu       $a0, $s5, 0x90
    ctx->pc = 0x126928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x12692c: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x12692cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x126930: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x126930u;
    SET_GPR_U32(ctx, 31, 0x126938u);
    ctx->pc = 0x126934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126930u;
    // 0x126934: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x126930u, 0x126938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126938u;
label_126938:
    // 0x126938: 0x8eb200f4  lw          $s2, 0xF4($s5)
    ctx->pc = 0x126938u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x12693c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x12693Cu;
    {
        const bool branch_taken_0x12693c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x126940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12693Cu;
        // 0x126940: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12693c) {
            ctx->pc = 0x1269B4u;
            goto label_1269b4;
        }
    }
    ctx->pc = 0x126944u;
    // 0x126944: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x126944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x126948: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x126948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12694c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12694cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x126950: 0xc040168  jal         func_1005A0
    ctx->pc = 0x126950u;
    SET_GPR_U32(ctx, 31, 0x126958u);
    ctx->pc = 0x126954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126950u;
    // 0x126954: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x126950u, 0x126958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126958u;
label_126958:
    // 0x126958: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x126958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x12695c: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x12695cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x126960: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x126960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126964: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126968: 0x24a567c0  addiu       $a1, $a1, 0x67C0
    ctx->pc = 0x126968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26560));
    // 0x12696c: 0x24c667e0  addiu       $a2, $a2, 0x67E0
    ctx->pc = 0x12696cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26592));
    // 0x126970: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x126970u;
    SET_GPR_U32(ctx, 31, 0x126978u);
    ctx->pc = 0x126974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126970u;
    // 0x126974: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x126970u, 0x126978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126978u;
label_126978:
    // 0x126978: 0xaea200f0  sw          $v0, 0xF0($s5)
    ctx->pc = 0x126978u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 2));
    // 0x12697c: 0x8eb600f4  lw          $s6, 0xF4($s5)
    ctx->pc = 0x12697cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x126980: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x126980u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x126984: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x126984u;
    {
        const bool branch_taken_0x126984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x126988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126984u;
        // 0x126988: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126984) {
            ctx->pc = 0x1269B4u;
            goto label_1269b4;
        }
    }
    ctx->pc = 0x12698Cu;
    // 0x12698c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12698cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126990:
    // 0x126990: 0x8ea200f0  lw          $v0, 0xF0($s5)
    ctx->pc = 0x126990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x126994: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x126994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x126998: 0xc049a98  jal         func_126A60
    ctx->pc = 0x126998u;
    SET_GPR_U32(ctx, 31, 0x1269A0u);
    ctx->pc = 0x12699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126998u;
    // 0x12699c: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A60u, 0x126998u, 0x1269A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269A0u;
label_1269a0:
    // 0x1269a0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1269a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1269a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1269a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1269a8: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x1269a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1269ac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1269ACu;
    {
        const bool branch_taken_0x1269ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1269B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269ACu;
        // 0x1269b0: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269ac) {
            ctx->pc = 0x126990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126990;
        }
    }
    ctx->pc = 0x1269B4u;
label_1269b4:
    // 0x1269b4: 0x0  nop
    ctx->pc = 0x1269b4u;
    // NOP
    // 0x1269b8: 0x26a40100  addiu       $a0, $s5, 0x100
    ctx->pc = 0x1269b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x1269bc: 0xc080702  jal         func_201C08
    ctx->pc = 0x1269BCu;
    SET_GPR_U32(ctx, 31, 0x1269C4u);
    ctx->pc = 0x1269C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1269BCu;
    // 0x1269c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1269BCu, 0x1269C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269C4u;
label_1269c4:
    // 0x1269c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1269C4u;
    {
        const bool branch_taken_0x1269c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1269C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269C4u;
        // 0x1269c8: 0xc6a00090  lwc1        $f0, 0x90($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269c4) {
            ctx->pc = 0x1269D4u;
            goto label_1269d4;
        }
    }
    ctx->pc = 0x1269CCu;
label_1269cc:
    // 0x1269cc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1269CCu;
    {
        const bool branch_taken_0x1269cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1269D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269CCu;
        // 0x1269d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269cc) {
            ctx->pc = 0x126A38u;
            goto label_126a38;
        }
    }
    ctx->pc = 0x1269D4u;
label_1269d4:
    // 0x1269d4: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1269d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1269d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1269d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269dc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1269dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1269e0: 0x2610eb10  addiu       $s0, $s0, -0x14F0
    ctx->pc = 0x1269e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961936));
    // 0x1269e4: 0xe6a000c4  swc1        $f0, 0xC4($s5)
    ctx->pc = 0x1269e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 196), bits); }
    // 0x1269e8: 0xc6a00060  lwc1        $f0, 0x60($s5)
    ctx->pc = 0x1269e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1269ec: 0xe6a000c0  swc1        $f0, 0xC0($s5)
    ctx->pc = 0x1269ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 192), bits); }
    // 0x1269f0: 0x7aa20080  lq          $v0, 0x80($s5)
    ctx->pc = 0x1269f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1269f4: 0x7ea200b0  sq          $v0, 0xB0($s5)
    ctx->pc = 0x1269f4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 176), GPR_VEC(ctx, 2));
    // 0x1269f8: 0x7aa20070  lq          $v0, 0x70($s5)
    ctx->pc = 0x1269f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x1269fc: 0xc080702  jal         func_201C08
    ctx->pc = 0x1269FCu;
    SET_GPR_U32(ctx, 31, 0x126A04u);
    ctx->pc = 0x126A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1269FCu;
    // 0x126a00: 0x7ea200a0  sq          $v0, 0xA0($s5) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 21), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1269FCu, 0x126A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A04u;
label_126a04:
    // 0x126a04: 0xc080d98  jal         func_203660
    ctx->pc = 0x126A04u;
    SET_GPR_U32(ctx, 31, 0x126A0Cu);
    ctx->pc = 0x126A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126A04u;
    // 0x126a08: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203660u, 0x126A04u, 0x126A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A0Cu;
label_126a0c:
    // 0x126a0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x126a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a10: 0xc080874  jal         func_2021D0
    ctx->pc = 0x126A10u;
    SET_GPR_U32(ctx, 31, 0x126A18u);
    ctx->pc = 0x126A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126A10u;
    // 0x126a14: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x126A10u, 0x126A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A18u;
label_126a18:
    // 0x126a18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x126A18u;
    {
        const bool branch_taken_0x126a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A18u;
        // 0x126a1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a18) {
            ctx->pc = 0x126A28u;
            goto label_126a28;
        }
    }
    ctx->pc = 0x126A20u;
    // 0x126a20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126a24: 0xaea20144  sw          $v0, 0x144($s5)
    ctx->pc = 0x126a24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 324), GPR_U32(ctx, 2));
label_126a28:
    // 0x126a28: 0xc049c60  jal         func_127180
    ctx->pc = 0x126A28u;
    SET_GPR_U32(ctx, 31, 0x126A30u);
    ctx->pc = 0x127180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127180u, 0x126A28u, 0x126A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A30u;
label_126a30:
    // 0x126a30: 0xaea20148  sw          $v0, 0x148($s5)
    ctx->pc = 0x126a30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 328), GPR_U32(ctx, 2));
    // 0x126a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126a38:
    // 0x126a38: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x126a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x126a3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x126a3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x126a40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x126a40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x126a44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x126a44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126a48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x126a48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126a4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x126a4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126a50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126a54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x126a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126a58: 0x3e00008  jr          $ra
    ctx->pc = 0x126A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A58u;
        // 0x126a5c: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126A60u;
}
