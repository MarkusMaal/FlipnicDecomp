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

// Function: entry_00102560
// Address: 0x102560 - 0x10258c
void entry_00102560_0x102560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102560_0x102560");
#endif

    switch (ctx->pc) {
        case 0x102568u: goto label_102568;
        case 0x102574u: goto label_102574;
        default: break;
    }

    ctx->pc = 0x102560u;

    // 0x102560: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x102560u;
    SET_GPR_U32(ctx, 31, 0x102568u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x102560u, 0x102568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102568u;
label_102568:
    // 0x102568: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x102568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10256c: 0xc049ed8  jal         func_127B60
    ctx->pc = 0x10256Cu;
    SET_GPR_U32(ctx, 31, 0x102574u);
    ctx->pc = 0x102570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10256Cu;
    // 0x102570: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x10256Cu, 0x102574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102574u;
label_102574:
    // 0x102574: 0x8f9585f4  lw          $s5, -0x7A0C($gp)
    ctx->pc = 0x102574u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x102578: 0x8eb62c20  lw          $s6, 0x2C20($s5)
    ctx->pc = 0x102578u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11296)));
    // 0x10257c: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x10257cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x102580: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x102580u;
    {
        const bool branch_taken_0x102580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x102584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102580u;
        // 0x102584: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102580) {
            ctx->pc = 0x1025C4u;
            return;
        }
    }
    ctx->pc = 0x102588u;
    // 0x102588: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x102588u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10258cu;
}
