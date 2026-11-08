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

// Function: entry_00193804
// Address: 0x193804 - 0x19381c
void entry_00193804_0x193804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193804_0x193804");
#endif

    switch (ctx->pc) {
        case 0x193814u: goto label_193814;
        default: break;
    }

    ctx->pc = 0x193804u;

label_193804:
    // 0x193804: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193808:
    // 0x193808: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x193808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_19380c:
    // 0x19380c: 0x320f809  jalr        $t9
label_193810:
    if (ctx->pc == 0x193810u) {
        ctx->pc = 0x193810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19380Cu;
        // 0x193810: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193814u;
        goto label_193814;
    }
    ctx->pc = 0x19380Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193814u);
        ctx->pc = 0x193810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19380Cu;
        // 0x193810: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19380Cu, 0x193814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193814u;
label_193814:
    // 0x193814: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_193818:
    if (ctx->pc == 0x193818u) {
        ctx->pc = 0x19381Cu;
        goto label_fallthrough_0x193814;
    }
    ctx->pc = 0x193814u;
    {
        const bool branch_taken_0x193814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193814) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
label_fallthrough_0x193814:
    ctx->pc = 0x19381Cu;
}
