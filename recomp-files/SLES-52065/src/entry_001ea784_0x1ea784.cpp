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

// Function: entry_001ea784
// Address: 0x1ea784 - 0x1ea790
void entry_001ea784_0x1ea784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea784_0x1ea784");
#endif

    ctx->pc = 0x1ea784u;

label_1ea784:
    // 0x1ea784: 0x0  nop
    ctx->pc = 0x1ea784u;
    // NOP
label_1ea788:
    // 0x1ea788: 0xc0f809  jalr        $a2
label_1ea78c:
    if (ctx->pc == 0x1EA78Cu) {
        ctx->pc = 0x1EA78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA788u;
        // 0x1ea78c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA790u;
        goto label_fallthrough_0x1ea788;
    }
    ctx->pc = 0x1EA788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1EA790u);
        ctx->pc = 0x1EA78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA788u;
        // 0x1ea78c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA788u, 0x1EA790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ea788:
    ctx->pc = 0x1EA790u;
}
