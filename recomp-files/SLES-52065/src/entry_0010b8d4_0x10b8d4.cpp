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

// Function: entry_0010b8d4
// Address: 0x10b8d4 - 0x10b8f0
void entry_0010b8d4_0x10b8d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b8d4_0x10b8d4");
#endif

    ctx->pc = 0x10b8d4u;

label_10b8d4:
    // 0x10b8d4: 0x0  nop
    ctx->pc = 0x10b8d4u;
    // NOP
label_10b8d8:
    // 0x10b8d8: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b8d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b8dc:
    // 0x10b8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b8e0:
    // 0x10b8e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10b8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10b8e4:
    // 0x10b8e4: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x10b8e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_10b8e8:
    // 0x10b8e8: 0x320f809  jalr        $t9
label_10b8ec:
    if (ctx->pc == 0x10B8ECu) {
        ctx->pc = 0x10B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8E8u;
        // 0x10b8ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B8F0u;
        goto label_fallthrough_0x10b8e8;
    }
    ctx->pc = 0x10B8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B8F0u);
        ctx->pc = 0x10B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8E8u;
        // 0x10b8ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B8E8u, 0x10B8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x10b8e8:
    ctx->pc = 0x10B8F0u;
}
