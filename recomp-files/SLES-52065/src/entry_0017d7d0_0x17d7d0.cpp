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

// Function: entry_0017d7d0
// Address: 0x17d7d0 - 0x17d808
void entry_0017d7d0_0x17d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d7d0_0x17d7d0");
#endif

    switch (ctx->pc) {
        case 0x17d7e8u: goto label_17d7e8;
        case 0x17d7fcu: goto label_17d7fc;
        default: break;
    }

    ctx->pc = 0x17d7d0u;

    // 0x17d7d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17D7D0u;
    {
        const bool branch_taken_0x17d7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d7d0) {
            ctx->pc = 0x17D808u;
            return;
        }
    }
    ctx->pc = 0x17D7D8u;
    // 0x17d7d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17D7D8u;
    {
        const bool branch_taken_0x17d7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7D8u;
        // 0x17d7dc: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7d8) {
            ctx->pc = 0x17D808u;
            return;
        }
    }
    ctx->pc = 0x17D7E0u;
    // 0x17d7e0: 0xc05f618  jal         func_17D860
    ctx->pc = 0x17D7E0u;
    SET_GPR_U32(ctx, 31, 0x17D7E8u);
    ctx->pc = 0x17D7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D7E0u;
    // 0x17d7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D860u, 0x17D7E0u, 0x17D7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7E8u;
label_17d7e8:
    // 0x17d7e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d7ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D7ECu;
    {
        const bool branch_taken_0x17d7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7ECu;
        // 0x17d7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7ec) {
            ctx->pc = 0x17D808u;
            return;
        }
    }
    ctx->pc = 0x17D7F4u;
    // 0x17d7f4: 0xc05f618  jal         func_17D860
    ctx->pc = 0x17D7F4u;
    SET_GPR_U32(ctx, 31, 0x17D7FCu);
    ctx->pc = 0x17D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D860u, 0x17D7F4u, 0x17D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7FCu;
label_17d7fc:
    // 0x17d7fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17d7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d800: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17D800u;
    SET_GPR_U32(ctx, 31, 0x17D808u);
    ctx->pc = 0x17D804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D800u;
    // 0x17d804: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3A0u, 0x17D800u, 0x17D808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D808u;
}
