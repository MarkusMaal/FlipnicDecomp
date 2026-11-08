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

// Function: entry_001e97b8
// Address: 0x1e97b8 - 0x1e980c
void entry_001e97b8_0x1e97b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e97b8_0x1e97b8");
#endif

    switch (ctx->pc) {
        case 0x1e97c8u: goto label_1e97c8;
        default: break;
    }

    ctx->pc = 0x1e97b8u;

    // 0x1e97b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e97b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e97bc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e97bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e97c0: 0xc07a638  jal         func_1E98E0
    ctx->pc = 0x1E97C0u;
    SET_GPR_U32(ctx, 31, 0x1E97C8u);
    ctx->pc = 0x1E97C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E97C0u;
    // 0x1e97c4: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E98E0u, 0x1E97C0u, 0x1E97C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E97C8u;
label_1e97c8:
    // 0x1e97c8: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x1e97c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e97cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e97ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e97d0: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1e97d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1e97d4: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x1e97d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e97d8: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1e97d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1e97dc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1e97dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1e97e0: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x1e97e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e97e4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1e97e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1e97e8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1e97e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1e97ec: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1e97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1e97f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e97f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e97f4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1e97f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1e97f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e97fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E97FCu;
    {
        const bool branch_taken_0x1e97fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97FCu;
        // 0x1e9800: 0x26040005  addiu       $a0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e97fc) {
            ctx->pc = 0x1E980Cu;
            return;
        }
    }
    ctx->pc = 0x1E9804u;
    // 0x1e9804: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9804u;
    {
        const bool branch_taken_0x1e9804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9804u;
        // 0x1e9808: 0x27b1006c  addiu       $s1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9804) {
            ctx->pc = 0x1E9814u;
            return;
        }
    }
    ctx->pc = 0x1E980Cu;
}
