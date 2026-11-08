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

// Function: entry_00104aa4
// Address: 0x104aa4 - 0x104ae0
void entry_00104aa4_0x104aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104aa4_0x104aa4");
#endif

    switch (ctx->pc) {
        case 0x104aacu: goto label_104aac;
        case 0x104abcu: goto label_104abc;
        default: break;
    }

    ctx->pc = 0x104aa4u;

    // 0x104aa4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104AA4u;
    SET_GPR_U32(ctx, 31, 0x104AACu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104AA4u, 0x104AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104AACu;
label_104aac:
    // 0x104aac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104AACu;
    {
        const bool branch_taken_0x104aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AACu;
        // 0x104ab0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104aac) {
            ctx->pc = 0x104AE0u;
            return;
        }
    }
    ctx->pc = 0x104AB4u;
    // 0x104ab4: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x104AB4u;
    SET_GPR_U32(ctx, 31, 0x104ABCu);
    ctx->pc = 0x104AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104AB4u;
    // 0x104ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x104AB4u, 0x104ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104ABCu;
label_104abc:
    // 0x104abc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104ac0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104ac4: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x104ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x104ac8: 0x2463a490  addiu       $v1, $v1, -0x5B70
    ctx->pc = 0x104ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943888));
    // 0x104acc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104ad0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104ad4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104ad8: 0x2442a310  addiu       $v0, $v0, -0x5CF0
    ctx->pc = 0x104ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943504));
    // 0x104adc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104ae0u;
}
