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

// Function: entry_001ea4a4
// Address: 0x1ea4a4 - 0x1ea4b4
void entry_001ea4a4_0x1ea4a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea4a4_0x1ea4a4");
#endif

    ctx->pc = 0x1ea4a4u;

label_1ea4a4:
    // 0x1ea4a4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1ea4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_1ea4a8:
    // 0x1ea4a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ea4ac:
    // 0x1ea4ac: 0x60f809  jalr        $v1
label_1ea4b0:
    if (ctx->pc == 0x1EA4B0u) {
        ctx->pc = 0x1EA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4ACu;
        // 0x1ea4b0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4B4u;
        goto label_fallthrough_0x1ea4ac;
    }
    ctx->pc = 0x1EA4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA4B4u);
        ctx->pc = 0x1EA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4ACu;
        // 0x1ea4b0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA4ACu, 0x1EA4B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ea4ac:
    ctx->pc = 0x1EA4B4u;
}
