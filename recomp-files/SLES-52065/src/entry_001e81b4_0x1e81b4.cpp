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

// Function: entry_001e81b4
// Address: 0x1e81b4 - 0x1e81ec
void entry_001e81b4_0x1e81b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e81b4_0x1e81b4");
#endif

    switch (ctx->pc) {
        case 0x1e81ccu: goto label_1e81cc;
        case 0x1e81dcu: goto label_1e81dc;
        case 0x1e81e4u: goto label_1e81e4;
        default: break;
    }

    ctx->pc = 0x1e81b4u;

    // 0x1e81b4: 0x8fc3018c  lw          $v1, 0x18C($fp)
    ctx->pc = 0x1e81b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e81b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E81B8u;
    {
        const bool branch_taken_0x1e81b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E81B8u;
        // 0x1e81bc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e81b8) {
            ctx->pc = 0x1E81ECu;
            return;
        }
    }
    ctx->pc = 0x1E81C0u;
    // 0x1e81c0: 0x8fc2018c  lw          $v0, 0x18C($fp)
    ctx->pc = 0x1e81c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e81c4: 0xc04018c  jal         func_100630
    ctx->pc = 0x1E81C4u;
    SET_GPR_U32(ctx, 31, 0x1E81CCu);
    ctx->pc = 0x1E81C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E81C4u;
    // 0x1e81c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1E81C4u, 0x1E81CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81CCu;
label_1e81cc:
    // 0x1e81cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e81ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e81d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e81d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e81d4: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E81D4u;
    SET_GPR_U32(ctx, 31, 0x1E81DCu);
    ctx->pc = 0x1E81D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E81D4u;
    // 0x1e81d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E81D4u, 0x1E81DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81DCu;
label_1e81dc:
    // 0x1e81dc: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E81DCu;
    SET_GPR_U32(ctx, 31, 0x1E81E4u);
    ctx->pc = 0x1E81E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E81DCu;
    // 0x1e81e0: 0x27c40150  addiu       $a0, $fp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E81DCu, 0x1E81E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81E4u;
label_1e81e4:
    // 0x1e81e4: 0x8fdd0164  lw          $sp, 0x164($fp)
    ctx->pc = 0x1e81e4u;
    SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 356)));
    // 0x1e81e8: 0x0  nop
    ctx->pc = 0x1e81e8u;
    // NOP
    ctx->pc = 0x1e81ecu;
}
