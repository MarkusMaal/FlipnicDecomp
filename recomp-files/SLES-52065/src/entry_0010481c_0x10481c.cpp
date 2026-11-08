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

// Function: entry_0010481c
// Address: 0x10481c - 0x10484c
void entry_0010481c_0x10481c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010481c_0x10481c");
#endif

    switch (ctx->pc) {
        case 0x104824u: goto label_104824;
        case 0x104834u: goto label_104834;
        default: break;
    }

    ctx->pc = 0x10481cu;

    // 0x10481c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x10481Cu;
    SET_GPR_U32(ctx, 31, 0x104824u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10481Cu, 0x104824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104824u;
label_104824:
    // 0x104824: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104824u;
    {
        const bool branch_taken_0x104824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104824u;
        // 0x104828: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104824) {
            ctx->pc = 0x10484Cu;
            return;
        }
    }
    ctx->pc = 0x10482Cu;
    // 0x10482c: 0xc056360  jal         func_158D80
    ctx->pc = 0x10482Cu;
    SET_GPR_U32(ctx, 31, 0x104834u);
    ctx->pc = 0x104830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10482Cu;
    // 0x104830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10482Cu, 0x104834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104834u;
label_104834:
    // 0x104834: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104838: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x10483c: 0x24637bd0  addiu       $v1, $v1, 0x7BD0
    ctx->pc = 0x10483cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31696));
    // 0x104840: 0x24427b70  addiu       $v0, $v0, 0x7B70
    ctx->pc = 0x104840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31600));
    // 0x104844: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104848: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10484cu;
}
