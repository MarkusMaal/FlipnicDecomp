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

// Function: caseD_3
// Address: 0x1ea0e8 - 0x1ea150
void caseD_3_0x1ea0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1ea0e8");
#endif

    switch (ctx->pc) {
        case 0x1ea0f8u: goto label_1ea0f8;
        case 0x1ea104u: goto label_1ea104;
        default: break;
    }

    ctx->pc = 0x1ea0e8u;

    // 0x1ea0e8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea0ec: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x1ea0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1ea0f0: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA0F0u;
    SET_GPR_U32(ctx, 31, 0x1EA0F8u);
    ctx->pc = 0x1EA0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0F0u;
    // 0x1ea0f4: 0x32500040  andi        $s0, $s2, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA0F0u, 0x1EA0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA0F8u;
label_1ea0f8:
    // 0x1ea0f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0fc: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA0FCu;
    SET_GPR_U32(ctx, 31, 0x1EA104u);
    ctx->pc = 0x1EA100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0FCu;
    // 0x1ea100: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA0FCu, 0x1EA104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA104u;
label_1ea104:
    // 0x1ea104: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x1ea104u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1ea108: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1ea108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea10c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x1ea10cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1ea110: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1ea110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1ea114: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1ea114u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea118: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ea118u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1ea11c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ea11cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ea120: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1ea120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1ea124: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1ea124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1ea128: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ea128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1ea12c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA12Cu;
    {
        const bool branch_taken_0x1ea12c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA12Cu;
        // 0x1ea130: 0x643025  or          $a2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea12c) {
            ctx->pc = 0x1EA150u;
            return;
        }
    }
    ctx->pc = 0x1EA134u;
    // 0x1ea134: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1ea134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1ea138: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ea138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ea13c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1ea13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1ea140: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x1ea140u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ea144: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1ea144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1ea148: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA148u;
    {
        const bool branch_taken_0x1ea148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA148u;
        // 0x1ea14c: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea148) {
            ctx->pc = 0x1EA164u;
            return;
        }
    }
    ctx->pc = 0x1EA150u;
}
