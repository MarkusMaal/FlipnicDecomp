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

// Function: caseD_7
// Address: 0x1ea33c - 0x1ea3a8
void caseD_7_0x1ea33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1ea33c");
#endif

    switch (ctx->pc) {
        case 0x1ea350u: goto label_1ea350;
        case 0x1ea35cu: goto label_1ea35c;
        default: break;
    }

    ctx->pc = 0x1ea33cu;

    // 0x1ea33c: 0x0  nop
    ctx->pc = 0x1ea33cu;
    // NOP
    // 0x1ea340: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea344: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x1ea344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1ea348: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA348u;
    SET_GPR_U32(ctx, 31, 0x1EA350u);
    ctx->pc = 0x1EA34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA348u;
    // 0x1ea34c: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA348u, 0x1EA350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA350u;
label_1ea350:
    // 0x1ea350: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea354: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA354u;
    SET_GPR_U32(ctx, 31, 0x1EA35Cu);
    ctx->pc = 0x1EA358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA354u;
    // 0x1ea358: 0x27a500c4  addiu       $a1, $sp, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA354u, 0x1EA35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA35Cu;
label_1ea35c:
    // 0x1ea35c: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x1ea35cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1ea360: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1ea360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea364: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1ea364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1ea368: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1ea368u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea36c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ea36cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1ea370: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ea370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1ea374: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1ea374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1ea378: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ea378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1ea37c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ea37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ea380: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ea380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1ea384: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA384u;
    {
        const bool branch_taken_0x1ea384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA384u;
        // 0x1ea388: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea384) {
            ctx->pc = 0x1EA3A8u;
            return;
        }
    }
    ctx->pc = 0x1EA38Cu;
    // 0x1ea38c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1ea38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1ea390: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ea390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ea394: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ea394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ea398: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1ea398u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ea39c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ea3a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA3A0u;
    {
        const bool branch_taken_0x1ea3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3A0u;
        // 0x1ea3a4: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3a0) {
            ctx->pc = 0x1EA3BCu;
            return;
        }
    }
    ctx->pc = 0x1EA3A8u;
}
