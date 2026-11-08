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

// Function: entry_0017f0dc
// Address: 0x17f0dc - 0x17f0fc
void entry_0017f0dc_0x17f0dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f0dc_0x17f0dc");
#endif

    ctx->pc = 0x17f0dcu;

label_17f0dc:
    // 0x17f0dc: 0x0  nop
    ctx->pc = 0x17f0dcu;
    // NOP
label_17f0e0:
    // 0x17f0e0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x17f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17f0e4:
    // 0x17f0e4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17f0e8:
    if (ctx->pc == 0x17F0E8u) {
        ctx->pc = 0x17F0ECu;
        goto label_17f0ec;
    }
    ctx->pc = 0x17F0E4u;
    {
        const bool branch_taken_0x17f0e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f0e4) {
            ctx->pc = 0x17F0FCu;
            return;
        }
    }
    ctx->pc = 0x17F0ECu;
label_17f0ec:
    // 0x17f0ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17f0ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17f0f0:
    // 0x17f0f0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17f0f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17f0f4:
    // 0x17f0f4: 0x320f809  jalr        $t9
label_17f0f8:
    if (ctx->pc == 0x17F0F8u) {
        ctx->pc = 0x17F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0F4u;
        // 0x17f0f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F0FCu;
        goto label_fallthrough_0x17f0f4;
    }
    ctx->pc = 0x17F0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17F0FCu);
        ctx->pc = 0x17F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0F4u;
        // 0x17f0f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F0F4u, 0x17F0FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x17f0f4:
    ctx->pc = 0x17F0FCu;
}
