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

// Function: entry_00105050
// Address: 0x105050 - 0x10508c
void entry_00105050_0x105050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105050_0x105050");
#endif

    switch (ctx->pc) {
        case 0x105058u: goto label_105058;
        case 0x105068u: goto label_105068;
        default: break;
    }

    ctx->pc = 0x105050u;

    // 0x105050: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x105050u;
    SET_GPR_U32(ctx, 31, 0x105058u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x105050u, 0x105058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105058u;
label_105058:
    // 0x105058: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x105058u;
    {
        const bool branch_taken_0x105058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105058u;
        // 0x10505c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105058) {
            ctx->pc = 0x10508Cu;
            return;
        }
    }
    ctx->pc = 0x105060u;
    // 0x105060: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x105060u;
    SET_GPR_U32(ctx, 31, 0x105068u);
    ctx->pc = 0x105064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105060u;
    // 0x105064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x105060u, 0x105068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105068u;
label_105068:
    // 0x105068: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10506c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x10506cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x105070: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x105070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x105074: 0x2463a130  addiu       $v1, $v1, -0x5ED0
    ctx->pc = 0x105074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943024));
    // 0x105078: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10507c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10507cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105080: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x105080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x105084: 0x24428370  addiu       $v0, $v0, -0x7C90
    ctx->pc = 0x105084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935408));
    // 0x105088: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10508cu;
}
