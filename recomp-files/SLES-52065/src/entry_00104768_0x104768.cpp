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

// Function: entry_00104768
// Address: 0x104768 - 0x104798
void entry_00104768_0x104768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104768_0x104768");
#endif

    switch (ctx->pc) {
        case 0x104770u: goto label_104770;
        case 0x104780u: goto label_104780;
        default: break;
    }

    ctx->pc = 0x104768u;

    // 0x104768: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104768u;
    SET_GPR_U32(ctx, 31, 0x104770u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104768u, 0x104770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104770u;
label_104770:
    // 0x104770: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104770u;
    {
        const bool branch_taken_0x104770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104770u;
        // 0x104774: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104770) {
            ctx->pc = 0x104798u;
            return;
        }
    }
    ctx->pc = 0x104778u;
    // 0x104778: 0xc056360  jal         func_158D80
    ctx->pc = 0x104778u;
    SET_GPR_U32(ctx, 31, 0x104780u);
    ctx->pc = 0x10477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104778u;
    // 0x10477c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104778u, 0x104780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104780u;
label_104780:
    // 0x104780: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104784: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104788: 0x24639ad0  addiu       $v1, $v1, -0x6530
    ctx->pc = 0x104788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941392));
    // 0x10478c: 0x2442a9d0  addiu       $v0, $v0, -0x5630
    ctx->pc = 0x10478cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945232));
    // 0x104790: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104794: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104798u;
}
