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

// Function: entry_00105158
// Address: 0x105158 - 0x105194
void entry_00105158_0x105158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105158_0x105158");
#endif

    switch (ctx->pc) {
        case 0x105160u: goto label_105160;
        case 0x105170u: goto label_105170;
        default: break;
    }

    ctx->pc = 0x105158u;

    // 0x105158: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x105158u;
    SET_GPR_U32(ctx, 31, 0x105160u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x105158u, 0x105160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105160u;
label_105160:
    // 0x105160: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x105160u;
    {
        const bool branch_taken_0x105160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105160u;
        // 0x105164: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105160) {
            ctx->pc = 0x105194u;
            return;
        }
    }
    ctx->pc = 0x105168u;
    // 0x105168: 0xc0418dc  jal         func_106370
    ctx->pc = 0x105168u;
    SET_GPR_U32(ctx, 31, 0x105170u);
    ctx->pc = 0x10516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105168u;
    // 0x10516c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106370u, 0x105168u, 0x105170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105170u;
label_105170:
    // 0x105170: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x105170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x105174: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x105174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x105178: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x105178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x10517c: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x10517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x105180: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x105184: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105188: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x105188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10518c: 0x24429530  addiu       $v0, $v0, -0x6AD0
    ctx->pc = 0x10518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939952));
    // 0x105190: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x105194u;
}
