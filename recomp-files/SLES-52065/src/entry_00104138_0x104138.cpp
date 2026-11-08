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

// Function: entry_00104138
// Address: 0x104138 - 0x104174
void entry_00104138_0x104138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104138_0x104138");
#endif

    switch (ctx->pc) {
        case 0x104140u: goto label_104140;
        case 0x104150u: goto label_104150;
        default: break;
    }

    ctx->pc = 0x104138u;

    // 0x104138: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104138u;
    SET_GPR_U32(ctx, 31, 0x104140u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104138u, 0x104140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104140u;
label_104140:
    // 0x104140: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104140u;
    {
        const bool branch_taken_0x104140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104140u;
        // 0x104144: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104140) {
            ctx->pc = 0x104174u;
            return;
        }
    }
    ctx->pc = 0x104148u;
    // 0x104148: 0xc0418dc  jal         func_106370
    ctx->pc = 0x104148u;
    SET_GPR_U32(ctx, 31, 0x104150u);
    ctx->pc = 0x10414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104148u;
    // 0x10414c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106370u, 0x104148u, 0x104150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104150u;
label_104150:
    // 0x104150: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x104154: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104158: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x104158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x10415c: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x10415cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x104160: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104164: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104168: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10416c: 0x244298f0  addiu       $v0, $v0, -0x6710
    ctx->pc = 0x10416cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940912));
    // 0x104170: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104174u;
}
