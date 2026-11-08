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

// Function: caseD_a
// Address: 0x1ea5a0 - 0x1ea5fc
void caseD_a_0x1ea5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1ea5a0");
#endif

    switch (ctx->pc) {
        case 0x1ea5b0u: goto label_1ea5b0;
        default: break;
    }

    ctx->pc = 0x1ea5a0u;

    // 0x1ea5a0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea5a4: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x1ea5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1ea5a8: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA5A8u;
    SET_GPR_U32(ctx, 31, 0x1EA5B0u);
    ctx->pc = 0x1EA5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA5A8u;
    // 0x1ea5ac: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA5A8u, 0x1EA5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA5B0u;
label_1ea5b0:
    // 0x1ea5b0: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x1ea5b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1ea5b4: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1ea5b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea5b8: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1ea5b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1ea5bc: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1ea5bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea5c0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ea5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1ea5c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ea5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1ea5c8: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1ea5c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1ea5cc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ea5ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1ea5d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ea5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ea5d4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ea5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1ea5d8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA5D8u;
    {
        const bool branch_taken_0x1ea5d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5D8u;
        // 0x1ea5dc: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea5d8) {
            ctx->pc = 0x1EA5FCu;
            return;
        }
    }
    ctx->pc = 0x1EA5E0u;
    // 0x1ea5e0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1ea5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1ea5e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ea5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ea5e8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ea5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ea5ec: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1ea5ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ea5f0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ea5f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ea5f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA5F4u;
    {
        const bool branch_taken_0x1ea5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5F4u;
        // 0x1ea5f8: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea5f4) {
            ctx->pc = 0x1EA610u;
            return;
        }
    }
    ctx->pc = 0x1EA5FCu;
}
