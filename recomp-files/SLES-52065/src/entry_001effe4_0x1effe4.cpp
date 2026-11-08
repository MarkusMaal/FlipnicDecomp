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

// Function: entry_001effe4
// Address: 0x1effe4 - 0x1f0004
void entry_001effe4_0x1effe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001effe4_0x1effe4");
#endif

    switch (ctx->pc) {
        case 0x1effecu: goto label_1effec;
        case 0x1efffcu: goto label_1efffc;
        default: break;
    }

    ctx->pc = 0x1effe4u;

    // 0x1effe4: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFFE4u;
    SET_GPR_U32(ctx, 31, 0x1EFFECu);
    ctx->pc = 0x1EFFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFE4u;
    // 0x1effe8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFFE4u, 0x1EFFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFECu;
label_1effec:
    // 0x1effec: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFFECu;
    {
        const bool branch_taken_0x1effec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFECu;
        // 0x1efff0: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effec) {
            ctx->pc = 0x1F0004u;
            return;
        }
    }
    ctx->pc = 0x1EFFF4u;
    // 0x1efff4: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFFF4u;
    SET_GPR_U32(ctx, 31, 0x1EFFFCu);
    ctx->pc = 0x1EFFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFF4u;
    // 0x1efff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFFF4u, 0x1EFFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFFCu;
label_1efffc:
    // 0x1efffc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EFFFCu;
    {
        const bool branch_taken_0x1efffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFFCu;
        // 0x1f0000: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efffc) {
            ctx->pc = 0x1F0030u;
            return;
        }
    }
    ctx->pc = 0x1F0004u;
}
