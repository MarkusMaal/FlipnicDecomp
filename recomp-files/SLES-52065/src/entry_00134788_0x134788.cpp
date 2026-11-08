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

// Function: entry_00134788
// Address: 0x134788 - 0x1347b8
void entry_00134788_0x134788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134788_0x134788");
#endif

    switch (ctx->pc) {
        case 0x1347a4u: goto label_1347a4;
        case 0x1347b4u: goto label_1347b4;
        default: break;
    }

    ctx->pc = 0x134788u;

    // 0x134788: 0x12c00020  beqz        $s6, . + 4 + (0x20 << 2)
    ctx->pc = 0x134788u;
    {
        const bool branch_taken_0x134788 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x13478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134788u;
        // 0x13478c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134788) {
            ctx->pc = 0x13480Cu;
            return;
        }
    }
    ctx->pc = 0x134790u;
    // 0x134790: 0x8f8285e0  lw          $v0, -0x7A20($gp)
    ctx->pc = 0x134790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936032)));
    // 0x134794: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x134794u;
    {
        const bool branch_taken_0x134794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134794u;
        // 0x134798: 0x240401b0  addiu       $a0, $zero, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134794) {
            ctx->pc = 0x1347C0u;
            return;
        }
    }
    ctx->pc = 0x13479Cu;
    // 0x13479c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13479Cu;
    SET_GPR_U32(ctx, 31, 0x1347A4u);
    ctx->pc = 0x1347A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13479Cu;
    // 0x1347a0: 0x240401e0  addiu       $a0, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13479Cu, 0x1347A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347A4u;
label_1347a4:
    // 0x1347a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1347A4u;
    {
        const bool branch_taken_0x1347a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347A4u;
        // 0x1347a8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347a4) {
            ctx->pc = 0x1347B8u;
            return;
        }
    }
    ctx->pc = 0x1347ACu;
    // 0x1347ac: 0xc0541a0  jal         func_150680
    ctx->pc = 0x1347ACu;
    SET_GPR_U32(ctx, 31, 0x1347B4u);
    ctx->pc = 0x1347B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1347ACu;
    // 0x1347b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150680u, 0x1347ACu, 0x1347B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347B4u;
label_1347b4:
    // 0x1347b4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1347b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1347b8u;
}
