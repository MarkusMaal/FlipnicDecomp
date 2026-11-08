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

// Function: entry_0010472c
// Address: 0x10472c - 0x10475c
void entry_0010472c_0x10472c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010472c_0x10472c");
#endif

    switch (ctx->pc) {
        case 0x104734u: goto label_104734;
        case 0x104744u: goto label_104744;
        default: break;
    }

    ctx->pc = 0x10472cu;

    // 0x10472c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x10472Cu;
    SET_GPR_U32(ctx, 31, 0x104734u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10472Cu, 0x104734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104734u;
label_104734:
    // 0x104734: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104734u;
    {
        const bool branch_taken_0x104734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104734u;
        // 0x104738: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104734) {
            ctx->pc = 0x10475Cu;
            return;
        }
    }
    ctx->pc = 0x10473Cu;
    // 0x10473c: 0xc056360  jal         func_158D80
    ctx->pc = 0x10473Cu;
    SET_GPR_U32(ctx, 31, 0x104744u);
    ctx->pc = 0x104740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10473Cu;
    // 0x104740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10473Cu, 0x104744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104744u;
label_104744:
    // 0x104744: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104748: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10474c: 0x24639ad0  addiu       $v1, $v1, -0x6530
    ctx->pc = 0x10474cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941392));
    // 0x104750: 0x24429b30  addiu       $v0, $v0, -0x64D0
    ctx->pc = 0x104750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941488));
    // 0x104754: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104758: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10475cu;
}
