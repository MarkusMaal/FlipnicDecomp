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

// Function: caseD_6
// Address: 0x1ea2a8 - 0x1ea310
void caseD_6_0x1ea2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1ea2a8");
#endif

    switch (ctx->pc) {
        case 0x1ea2b8u: goto label_1ea2b8;
        case 0x1ea2c4u: goto label_1ea2c4;
        default: break;
    }

    ctx->pc = 0x1ea2a8u;

    // 0x1ea2a8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea2ac: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ea2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ea2b0: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA2B0u;
    SET_GPR_U32(ctx, 31, 0x1EA2B8u);
    ctx->pc = 0x1EA2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA2B0u;
    // 0x1ea2b4: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA2B0u, 0x1EA2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2B8u;
label_1ea2b8:
    // 0x1ea2b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea2bc: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA2BCu;
    SET_GPR_U32(ctx, 31, 0x1EA2C4u);
    ctx->pc = 0x1EA2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA2BCu;
    // 0x1ea2c0: 0x27a500bc  addiu       $a1, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA2BCu, 0x1EA2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2C4u;
label_1ea2c4:
    // 0x1ea2c4: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x1ea2c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1ea2c8: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1ea2c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea2cc: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1ea2ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1ea2d0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1ea2d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea2d4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ea2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1ea2d8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ea2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1ea2dc: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1ea2dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1ea2e0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ea2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1ea2e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ea2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ea2e8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ea2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1ea2ec: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA2ECu;
    {
        const bool branch_taken_0x1ea2ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2ECu;
        // 0x1ea2f0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2ec) {
            ctx->pc = 0x1EA310u;
            return;
        }
    }
    ctx->pc = 0x1EA2F4u;
    // 0x1ea2f4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1ea2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ea2f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ea2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ea2fc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ea2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ea300: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1ea300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ea304: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ea308: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA308u;
    {
        const bool branch_taken_0x1ea308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA308u;
        // 0x1ea30c: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea308) {
            ctx->pc = 0x1EA324u;
            return;
        }
    }
    ctx->pc = 0x1EA310u;
}
