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

// Function: entry_00172440
// Address: 0x172440 - 0x172470
void entry_00172440_0x172440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172440_0x172440");
#endif

    switch (ctx->pc) {
        case 0x172468u: goto label_172468;
        default: break;
    }

    ctx->pc = 0x172440u;

    // 0x172440: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x172440u;
    {
        const bool branch_taken_0x172440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172440u;
        // 0x172444: 0x26220014  addiu       $v0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172440) {
            ctx->pc = 0x172474u;
            return;
        }
    }
    ctx->pc = 0x172448u;
    // 0x172448: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x172448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17244c: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x17244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x172450: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x172450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x172454: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x172454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x172458: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172458u;
    {
        const bool branch_taken_0x172458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172458) {
            ctx->pc = 0x172470u;
            return;
        }
    }
    ctx->pc = 0x172460u;
    // 0x172460: 0xc04018c  jal         func_100630
    ctx->pc = 0x172460u;
    SET_GPR_U32(ctx, 31, 0x172468u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x172460u, 0x172468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172468u;
label_172468:
    // 0x172468: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x172468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x17246c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x17246cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    ctx->pc = 0x172470u;
}
