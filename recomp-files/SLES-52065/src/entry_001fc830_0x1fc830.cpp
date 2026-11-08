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

// Function: entry_001fc830
// Address: 0x1fc830 - 0x1fc8dc
void entry_001fc830_0x1fc830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc830_0x1fc830");
#endif

    switch (ctx->pc) {
        case 0x1fc838u: goto label_1fc838;
        case 0x1fc844u: goto label_1fc844;
        case 0x1fc854u: goto label_1fc854;
        case 0x1fc89cu: goto label_1fc89c;
        case 0x1fc8acu: goto label_1fc8ac;
        case 0x1fc8c0u: goto label_1fc8c0;
        case 0x1fc8ccu: goto label_1fc8cc;
        default: break;
    }

    ctx->pc = 0x1fc830u;

    // 0x1fc830: 0xc08218c  jal         func_208630
    ctx->pc = 0x1FC830u;
    SET_GPR_U32(ctx, 31, 0x1FC838u);
    ctx->pc = 0x1FC834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC830u;
    // 0x1fc834: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1FC830u, 0x1FC838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC838u;
label_1fc838:
    // 0x1fc838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fc838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc83c: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC83Cu;
    SET_GPR_U32(ctx, 31, 0x1FC844u);
    ctx->pc = 0x1FC840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC83Cu;
    // 0x1fc840: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC83Cu, 0x1FC844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC844u;
label_1fc844:
    // 0x1fc844: 0x34058038  ori         $a1, $zero, 0x8038
    ctx->pc = 0x1fc844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x1fc848: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1fc848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1fc84c: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1FC84Cu;
    SET_GPR_U32(ctx, 31, 0x1FC854u);
    ctx->pc = 0x1FC850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC84Cu;
    // 0x1fc850: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1FC84Cu, 0x1FC854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC854u;
label_1fc854:
    // 0x1fc854: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fc854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc858: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1fc858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1fc85c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1fc85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1fc860: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x1fc860u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x1fc864: 0x3c02fcc0  lui         $v0, 0xFCC0
    ctx->pc = 0x1fc864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64704 << 16));
    // 0x1fc868: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fc868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc86c: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x1fc86cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x1fc870: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fc870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fc874: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x1fc874u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1fc878: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fc878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc87c: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC87Cu;
    {
        const bool branch_taken_0x1fc87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc87c) {
            ctx->pc = 0x1FC880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC87Cu;
            // 0x1fc880: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC8DCu;
            return;
        }
    }
    ctx->pc = 0x1FC884u;
    // 0x1fc884: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x1fc884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x1fc888: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1fc888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1fc88c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fc88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc890: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1fc890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1fc894: 0xc082014  jal         func_208050
    ctx->pc = 0x1FC894u;
    SET_GPR_U32(ctx, 31, 0x1FC89Cu);
    ctx->pc = 0x1FC898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC894u;
    // 0x1fc898: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FC894u, 0x1FC89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC89Cu;
label_1fc89c:
    // 0x1fc89c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fc89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fc8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8a4: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC8A4u;
    SET_GPR_U32(ctx, 31, 0x1FC8ACu);
    ctx->pc = 0x1FC8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC8A4u;
    // 0x1fc8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC8A4u, 0x1FC8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC8ACu;
label_1fc8ac:
    // 0x1fc8ac: 0x1c4001ca  bgtz        $v0, . + 4 + (0x1CA << 2)
    ctx->pc = 0x1FC8ACu;
    {
        const bool branch_taken_0x1fc8ac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8ACu;
        // 0x1fc8b0: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8ac) {
            ctx->pc = 0x1FCFD8u;
            return;
        }
    }
    ctx->pc = 0x1FC8B4u;
    // 0x1fc8b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fc8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8b8: 0xc082014  jal         func_208050
    ctx->pc = 0x1FC8B8u;
    SET_GPR_U32(ctx, 31, 0x1FC8C0u);
    ctx->pc = 0x1FC8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC8B8u;
    // 0x1fc8bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FC8B8u, 0x1FC8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC8C0u;
label_1fc8c0:
    // 0x1fc8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8c4: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC8C4u;
    SET_GPR_U32(ctx, 31, 0x1FC8CCu);
    ctx->pc = 0x1FC8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC8C4u;
    // 0x1fc8c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC8C4u, 0x1FC8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC8CCu;
label_1fc8cc:
    // 0x1fc8cc: 0x44001be  bltz        $v0, . + 4 + (0x1BE << 2)
    ctx->pc = 0x1FC8CCu;
    {
        const bool branch_taken_0x1fc8cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8CCu;
        // 0x1fc8d0: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8cc) {
            ctx->pc = 0x1FCFC8u;
            return;
        }
    }
    ctx->pc = 0x1FC8D4u;
    // 0x1fc8d4: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1FC8D4u;
    {
        const bool branch_taken_0x1fc8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8D4u;
        // 0x1fc8d8: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8d4) {
            ctx->pc = 0x1FCAC4u;
            return;
        }
    }
    ctx->pc = 0x1FC8DCu;
}
