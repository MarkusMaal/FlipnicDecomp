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

// Function: entry_001268c0
// Address: 0x1268c0 - 0x126990
void entry_001268c0_0x1268c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001268c0_0x1268c0");
#endif

    switch (ctx->pc) {
        case 0x1268d8u: goto label_1268d8;
        case 0x1268e8u: goto label_1268e8;
        case 0x1268f8u: goto label_1268f8;
        case 0x126908u: goto label_126908;
        case 0x126918u: goto label_126918;
        case 0x126928u: goto label_126928;
        case 0x126938u: goto label_126938;
        case 0x126958u: goto label_126958;
        case 0x126978u: goto label_126978;
        default: break;
    }

    ctx->pc = 0x1268c0u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x12698Cu;
    // 0x12698c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12698cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x126990u;
}
