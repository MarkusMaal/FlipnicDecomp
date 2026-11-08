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

// Function: entry_00120d70
// Address: 0x120d70 - 0x120d84
void entry_00120d70_0x120d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120d70_0x120d70");
#endif

    switch (ctx->pc) {
        case 0x120d80u: goto label_120d80;
        default: break;
    }

    ctx->pc = 0x120d70u;

label_120d70:
    // 0x120d70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x120d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120d74:
    // 0x120d74: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x120d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_120d78:
    // 0x120d78: 0x320f809  jalr        $t9
label_120d7c:
    if (ctx->pc == 0x120D7Cu) {
        ctx->pc = 0x120D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D78u;
        // 0x120d7c: 0x30c500ff  andi        $a1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x120D80u;
        goto label_120d80;
    }
    ctx->pc = 0x120D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x120D80u);
        ctx->pc = 0x120D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D78u;
        // 0x120d7c: 0x30c500ff  andi        $a1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120D78u, 0x120D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120D80u;
label_120d80:
    // 0x120d80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x120d84u;
}
