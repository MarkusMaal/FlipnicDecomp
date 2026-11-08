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

// Function: entry_00104510
// Address: 0x104510 - 0x10454c
void entry_00104510_0x104510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104510_0x104510");
#endif

    switch (ctx->pc) {
        case 0x104518u: goto label_104518;
        case 0x104528u: goto label_104528;
        default: break;
    }

    ctx->pc = 0x104510u;

    // 0x104510: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104510u;
    SET_GPR_U32(ctx, 31, 0x104518u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104510u, 0x104518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104518u;
label_104518:
    // 0x104518: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104518u;
    {
        const bool branch_taken_0x104518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104518u;
        // 0x10451c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104518) {
            ctx->pc = 0x10454Cu;
            return;
        }
    }
    ctx->pc = 0x104520u;
    // 0x104520: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x104520u;
    SET_GPR_U32(ctx, 31, 0x104528u);
    ctx->pc = 0x104524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104520u;
    // 0x104524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x104520u, 0x104528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104528u;
label_104528:
    // 0x104528: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10452c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x10452cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104530: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x104530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x104534: 0x2463a910  addiu       $v1, $v1, -0x56F0
    ctx->pc = 0x104534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945040));
    // 0x104538: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10453c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10453cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104540: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104544: 0x2442a730  addiu       $v0, $v0, -0x58D0
    ctx->pc = 0x104544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944560));
    // 0x104548: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10454cu;
}
