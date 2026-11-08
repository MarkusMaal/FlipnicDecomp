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

// Function: entry_00172f44
// Address: 0x172f44 - 0x172f58
void entry_00172f44_0x172f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172f44_0x172f44");
#endif

    ctx->pc = 0x172f44u;

label_172f44:
    // 0x172f44: 0x8e3937b0  lw          $t9, 0x37B0($s1)
    ctx->pc = 0x172f44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14256)));
label_172f48:
    // 0x172f48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x172f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172f4c:
    // 0x172f4c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x172f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_172f50:
    // 0x172f50: 0x320f809  jalr        $t9
label_172f54:
    if (ctx->pc == 0x172F54u) {
        ctx->pc = 0x172F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F50u;
        // 0x172f54: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F58u;
        goto label_fallthrough_0x172f50;
    }
    ctx->pc = 0x172F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172F58u);
        ctx->pc = 0x172F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F50u;
        // 0x172f54: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172F50u, 0x172F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x172f50:
    ctx->pc = 0x172F58u;
}
