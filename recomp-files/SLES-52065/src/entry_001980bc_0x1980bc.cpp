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

// Function: entry_001980bc
// Address: 0x1980bc - 0x198138
void entry_001980bc_0x1980bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001980bc_0x1980bc");
#endif

    switch (ctx->pc) {
        case 0x1980d0u: goto label_1980d0;
        case 0x1980e0u: goto label_1980e0;
        case 0x1980f0u: goto label_1980f0;
        case 0x1980fcu: goto label_1980fc;
        default: break;
    }

    ctx->pc = 0x1980bcu;

    // 0x1980bc: 0x0  nop
    ctx->pc = 0x1980bcu;
    // NOP
    // 0x1980c0: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1980c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1980c4: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x1980c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1980c8: 0xc057040  jal         func_15C100
    ctx->pc = 0x1980C8u;
    SET_GPR_U32(ctx, 31, 0x1980D0u);
    ctx->pc = 0x1980CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1980C8u;
    // 0x1980cc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1980C8u, 0x1980D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980D0u;
label_1980d0:
    // 0x1980d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1980d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1980d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980d8: 0xc064bf0  jal         func_192FC0
    ctx->pc = 0x1980D8u;
    SET_GPR_U32(ctx, 31, 0x1980E0u);
    ctx->pc = 0x1980DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1980D8u;
    // 0x1980dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192FC0u, 0x1980D8u, 0x1980E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980E0u;
label_1980e0:
    // 0x1980e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1980e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1980e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980e8: 0xc064c4c  jal         func_193130
    ctx->pc = 0x1980E8u;
    SET_GPR_U32(ctx, 31, 0x1980F0u);
    ctx->pc = 0x1980ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1980E8u;
    // 0x1980ec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x1980E8u, 0x1980F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980F0u;
label_1980f0:
    // 0x1980f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1980f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980f4: 0xc064c0c  jal         func_193030
    ctx->pc = 0x1980F4u;
    SET_GPR_U32(ctx, 31, 0x1980FCu);
    ctx->pc = 0x1980F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1980F4u;
    // 0x1980f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x1980F4u, 0x1980FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980FCu;
label_1980fc:
    // 0x1980fc: 0x8ea20678  lw          $v0, 0x678($s5)
    ctx->pc = 0x1980fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
    // 0x198100: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x198100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x198104: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x198104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x198108: 0xac5006bc  sw          $s0, 0x6BC($v0)
    ctx->pc = 0x198108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1724), GPR_U32(ctx, 16));
    // 0x19810c: 0x8ea20678  lw          $v0, 0x678($s5)
    ctx->pc = 0x19810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
    // 0x198110: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x198110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x198114: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x198114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x198118: 0xac5106fc  sw          $s1, 0x6FC($v0)
    ctx->pc = 0x198118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1788), GPR_U32(ctx, 17));
    // 0x19811c: 0x8ea20678  lw          $v0, 0x678($s5)
    ctx->pc = 0x19811cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
    // 0x198120: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x198120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x198124: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x198124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x198128: 0xac40067c  sw          $zero, 0x67C($v0)
    ctx->pc = 0x198128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1660), GPR_U32(ctx, 0));
    // 0x19812c: 0x8ea20678  lw          $v0, 0x678($s5)
    ctx->pc = 0x19812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
    // 0x198130: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198134: 0xaea20678  sw          $v0, 0x678($s5)
    ctx->pc = 0x198134u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1656), GPR_U32(ctx, 2));
    ctx->pc = 0x198138u;
}
