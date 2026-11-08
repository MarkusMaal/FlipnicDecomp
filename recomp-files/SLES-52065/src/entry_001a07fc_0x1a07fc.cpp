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

// Function: entry_001a07fc
// Address: 0x1a07fc - 0x1a0820
void entry_001a07fc_0x1a07fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a07fc_0x1a07fc");
#endif

    switch (ctx->pc) {
        case 0x1a080cu: goto label_1a080c;
        case 0x1a0818u: goto label_1a0818;
        default: break;
    }

    ctx->pc = 0x1a07fcu;

    // 0x1a07fc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A07FCu;
    {
        const bool branch_taken_0x1a07fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a07fc) {
            ctx->pc = 0x1A083Cu;
            return;
        }
    }
    ctx->pc = 0x1A0804u;
    // 0x1a0804: 0xc04be08  jal         func_12F820
    ctx->pc = 0x1A0804u;
    SET_GPR_U32(ctx, 31, 0x1A080Cu);
    ctx->pc = 0x1A0808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0804u;
    // 0x1a0808: 0x8e440670  lw          $a0, 0x670($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x1A0804u, 0x1A080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A080Cu;
label_1a080c:
    // 0x1a080c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a080cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0810: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A0810u;
    SET_GPR_U32(ctx, 31, 0x1A0818u);
    ctx->pc = 0x1A0814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0810u;
    // 0x1a0814: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A0810u, 0x1A0818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0818u;
label_1a0818:
    // 0x1a0818: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0818u;
    {
        const bool branch_taken_0x1a0818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0818) {
            ctx->pc = 0x1A083Cu;
            return;
        }
    }
    ctx->pc = 0x1A0820u;
}
