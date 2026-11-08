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

// Function: caseD_9
// Address: 0x1ea4c0 - 0x1ea548
void caseD_9_0x1ea4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1ea4c0");
#endif

    switch (ctx->pc) {
        case 0x1ea4d0u: goto label_1ea4d0;
        case 0x1ea4dcu: goto label_1ea4dc;
        case 0x1ea4e8u: goto label_1ea4e8;
        case 0x1ea4f4u: goto label_1ea4f4;
        default: break;
    }

    ctx->pc = 0x1ea4c0u;

    // 0x1ea4c0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea4c4: 0x27a500e4  addiu       $a1, $sp, 0xE4
    ctx->pc = 0x1ea4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1ea4c8: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA4C8u;
    SET_GPR_U32(ctx, 31, 0x1EA4D0u);
    ctx->pc = 0x1EA4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4C8u;
    // 0x1ea4cc: 0x32510020  andi        $s1, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA4C8u, 0x1EA4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4D0u;
label_1ea4d0:
    // 0x1ea4d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea4d4: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA4D4u;
    SET_GPR_U32(ctx, 31, 0x1EA4DCu);
    ctx->pc = 0x1EA4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4D4u;
    // 0x1ea4d8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA4D4u, 0x1EA4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4DCu;
label_1ea4dc:
    // 0x1ea4dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea4e0: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EA4E0u;
    SET_GPR_U32(ctx, 31, 0x1EA4E8u);
    ctx->pc = 0x1EA4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4E0u;
    // 0x1ea4e4: 0x27a500dc  addiu       $a1, $sp, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA4E0u, 0x1EA4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4E8u;
label_1ea4e8:
    // 0x1ea4e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea4ec: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EA4ECu;
    SET_GPR_U32(ctx, 31, 0x1EA4F4u);
    ctx->pc = 0x1EA4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4ECu;
    // 0x1ea4f0: 0x27a500d8  addiu       $a1, $sp, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA4ECu, 0x1EA4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4F4u;
label_1ea4f4:
    // 0x1ea4f4: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x1ea4f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1ea4f8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1ea4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea4fc: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x1ea4fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1ea500: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1ea500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1ea504: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1ea504u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea508: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ea508u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1ea50c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ea50cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ea510: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1ea510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1ea514: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1ea514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1ea518: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ea518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1ea51c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EA51Cu;
    {
        const bool branch_taken_0x1ea51c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA51Cu;
        // 0x1ea520: 0x64b025  or          $s6, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea51c) {
            ctx->pc = 0x1EA548u;
            return;
        }
    }
    ctx->pc = 0x1EA524u;
    // 0x1ea524: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x1ea524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1ea528: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1ea528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ea52c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1ea52cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ea530: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1ea530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1ea534: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x1ea534u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ea538: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1ea538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1ea53c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1ea53cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1ea540: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EA540u;
    {
        const bool branch_taken_0x1ea540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA540u;
        // 0x1ea544: 0x83a821  addu        $s5, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea540) {
            ctx->pc = 0x1EA560u;
            return;
        }
    }
    ctx->pc = 0x1EA548u;
}
