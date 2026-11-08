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

// Function: entry_0019a47c
// Address: 0x19a47c - 0x19a4a8
void entry_0019a47c_0x19a47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a47c_0x19a47c");
#endif

    switch (ctx->pc) {
        case 0x19a48cu: goto label_19a48c;
        case 0x19a4a0u: goto label_19a4a0;
        default: break;
    }

    ctx->pc = 0x19a47cu;

    // 0x19a47c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19a480: 0x8c45283c  lw          $a1, 0x283C($v0)
    ctx->pc = 0x19a480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10300)));
    // 0x19a484: 0xc0667e0  jal         func_199F80
    ctx->pc = 0x19A484u;
    SET_GPR_U32(ctx, 31, 0x19A48Cu);
    ctx->pc = 0x19A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A484u;
    // 0x19a488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199F80u, 0x19A484u, 0x19A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A48Cu;
label_19a48c:
    // 0x19a48c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19A48Cu;
    {
        const bool branch_taken_0x19a48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a48c) {
            ctx->pc = 0x19A4BCu;
            return;
        }
    }
    ctx->pc = 0x19A494u;
    // 0x19a494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a498: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19A498u;
    SET_GPR_U32(ctx, 31, 0x19A4A0u);
    ctx->pc = 0x19A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A498u;
    // 0x19a49c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19A498u, 0x19A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A4A0u;
label_19a4a0:
    // 0x19a4a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19A4A0u;
    {
        const bool branch_taken_0x19a4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a4a0) {
            ctx->pc = 0x19A4BCu;
            return;
        }
    }
    ctx->pc = 0x19A4A8u;
}
