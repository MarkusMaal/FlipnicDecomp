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

// Function: entry_00104444
// Address: 0x104444 - 0x104474
void entry_00104444_0x104444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104444_0x104444");
#endif

    switch (ctx->pc) {
        case 0x10444cu: goto label_10444c;
        case 0x10445cu: goto label_10445c;
        default: break;
    }

    ctx->pc = 0x104444u;

    // 0x104444: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104444u;
    SET_GPR_U32(ctx, 31, 0x10444Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104444u, 0x10444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10444Cu;
label_10444c:
    // 0x10444c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10444Cu;
    {
        const bool branch_taken_0x10444c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10444Cu;
        // 0x104450: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10444c) {
            ctx->pc = 0x104474u;
            return;
        }
    }
    ctx->pc = 0x104454u;
    // 0x104454: 0xc056360  jal         func_158D80
    ctx->pc = 0x104454u;
    SET_GPR_U32(ctx, 31, 0x10445Cu);
    ctx->pc = 0x104458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104454u;
    // 0x104458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104454u, 0x10445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10445Cu;
label_10445c:
    // 0x10445c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x10445cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104460: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104464: 0x24639f50  addiu       $v1, $v1, -0x60B0
    ctx->pc = 0x104464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942544));
    // 0x104468: 0x2442a8b0  addiu       $v0, $v0, -0x5750
    ctx->pc = 0x104468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944944));
    // 0x10446c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x10446cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104470: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104474u;
}
