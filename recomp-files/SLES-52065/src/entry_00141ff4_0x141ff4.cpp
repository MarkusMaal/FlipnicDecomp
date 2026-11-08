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

// Function: entry_00141ff4
// Address: 0x141ff4 - 0x142024
void entry_00141ff4_0x141ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141ff4_0x141ff4");
#endif

    switch (ctx->pc) {
        case 0x142014u: goto label_142014;
        default: break;
    }

    ctx->pc = 0x141ff4u;

    // 0x141ff4: 0x0  nop
    ctx->pc = 0x141ff4u;
    // NOP
    // 0x141ff8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x141ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x141ffc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x141ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x142000: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x142000u;
    {
        const bool branch_taken_0x142000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142000) {
            ctx->pc = 0x142084u;
            return;
        }
    }
    ctx->pc = 0x142008u;
    // 0x142008: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x142008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x14200c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x14200Cu;
    SET_GPR_U32(ctx, 31, 0x142014u);
    ctx->pc = 0x142010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14200Cu;
    // 0x142010: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x14200Cu, 0x142014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142014u;
label_142014:
    // 0x142014: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x142014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x142018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14201c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14201Cu;
    {
        const bool branch_taken_0x14201c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14201Cu;
        // 0x142020: 0x27a60084  addiu       $a2, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14201c) {
            ctx->pc = 0x142070u;
            return;
        }
    }
    ctx->pc = 0x142024u;
}
