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

// Function: entry_0017e8b8
// Address: 0x17e8b8 - 0x17e8cc
void entry_0017e8b8_0x17e8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e8b8_0x17e8b8");
#endif

    ctx->pc = 0x17e8b8u;

label_17e8b8:
    // 0x17e8b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17e8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17e8bc:
    // 0x17e8bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17e8c0:
    // 0x17e8c0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x17e8c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_17e8c4:
    // 0x17e8c4: 0x320f809  jalr        $t9
label_17e8c8:
    if (ctx->pc == 0x17E8C8u) {
        ctx->pc = 0x17E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8C4u;
        // 0x17e8c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E8CCu;
        goto label_fallthrough_0x17e8c4;
    }
    ctx->pc = 0x17E8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E8CCu);
        ctx->pc = 0x17E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8C4u;
        // 0x17e8c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E8C4u, 0x17E8CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x17e8c4:
    ctx->pc = 0x17E8CCu;
}
