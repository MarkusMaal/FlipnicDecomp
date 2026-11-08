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

// Function: entry_00104558
// Address: 0x104558 - 0x104594
void entry_00104558_0x104558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104558_0x104558");
#endif

    switch (ctx->pc) {
        case 0x104560u: goto label_104560;
        case 0x104570u: goto label_104570;
        default: break;
    }

    ctx->pc = 0x104558u;

    // 0x104558: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104558u;
    SET_GPR_U32(ctx, 31, 0x104560u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104558u, 0x104560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104560u;
label_104560:
    // 0x104560: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104560u;
    {
        const bool branch_taken_0x104560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104560u;
        // 0x104564: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104560) {
            ctx->pc = 0x104594u;
            return;
        }
    }
    ctx->pc = 0x104568u;
    // 0x104568: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x104568u;
    SET_GPR_U32(ctx, 31, 0x104570u);
    ctx->pc = 0x10456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104568u;
    // 0x10456c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x104568u, 0x104570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104570u;
label_104570:
    // 0x104570: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104574: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104578: 0x2442a8b0  addiu       $v0, $v0, -0x5750
    ctx->pc = 0x104578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944944));
    // 0x10457c: 0x2463a7f0  addiu       $v1, $v1, -0x5810
    ctx->pc = 0x10457cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944752));
    // 0x104580: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104584: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104588: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10458c: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x10458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
    // 0x104590: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104594u;
}
