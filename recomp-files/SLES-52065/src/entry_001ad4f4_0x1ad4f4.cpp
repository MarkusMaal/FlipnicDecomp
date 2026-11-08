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

// Function: entry_001ad4f4
// Address: 0x1ad4f4 - 0x1ad510
void entry_001ad4f4_0x1ad4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad4f4_0x1ad4f4");
#endif

    switch (ctx->pc) {
        case 0x1ad4fcu: goto label_1ad4fc;
        default: break;
    }

    ctx->pc = 0x1ad4f4u;

label_1ad4f4:
    // 0x1ad4f4: 0xc063e14  jal         func_18F850
label_1ad4f8:
    if (ctx->pc == 0x1AD4F8u) {
        ctx->pc = 0x1AD4FCu;
        goto label_1ad4fc;
    }
    ctx->pc = 0x1AD4F4u;
    SET_GPR_U32(ctx, 31, 0x1AD4FCu);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD4F4u, 0x1AD4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4FCu;
label_1ad4fc:
    // 0x1ad4fc: 0x8e2406d8  lw          $a0, 0x6D8($s1)
    ctx->pc = 0x1ad4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1752)));
label_1ad500:
    // 0x1ad500: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ad500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ad504:
    // 0x1ad504: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ad504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ad508:
    // 0x1ad508: 0x320f809  jalr        $t9
label_1ad50c:
    if (ctx->pc == 0x1AD50Cu) {
        ctx->pc = 0x1AD50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD508u;
        // 0x1ad50c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD510u;
        goto label_fallthrough_0x1ad508;
    }
    ctx->pc = 0x1AD508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD510u);
        ctx->pc = 0x1AD50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD508u;
        // 0x1ad50c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD508u, 0x1AD510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ad508:
    ctx->pc = 0x1AD510u;
}
