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

// Function: entry_00104858
// Address: 0x104858 - 0x104888
void entry_00104858_0x104858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104858_0x104858");
#endif

    switch (ctx->pc) {
        case 0x104860u: goto label_104860;
        case 0x104870u: goto label_104870;
        default: break;
    }

    ctx->pc = 0x104858u;

    // 0x104858: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104858u;
    SET_GPR_U32(ctx, 31, 0x104860u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104858u, 0x104860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104860u;
label_104860:
    // 0x104860: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104860u;
    {
        const bool branch_taken_0x104860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104860u;
        // 0x104864: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104860) {
            ctx->pc = 0x104888u;
            return;
        }
    }
    ctx->pc = 0x104868u;
    // 0x104868: 0xc056360  jal         func_158D80
    ctx->pc = 0x104868u;
    SET_GPR_U32(ctx, 31, 0x104870u);
    ctx->pc = 0x10486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104868u;
    // 0x10486c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104868u, 0x104870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104870u;
label_104870:
    // 0x104870: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104874: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x104878: 0x24637bd0  addiu       $v1, $v1, 0x7BD0
    ctx->pc = 0x104878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31696));
    // 0x10487c: 0x24427b10  addiu       $v0, $v0, 0x7B10
    ctx->pc = 0x10487cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31504));
    // 0x104880: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104884: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104888u;
}
