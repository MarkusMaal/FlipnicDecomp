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

// Function: entry_0017e6a4
// Address: 0x17e6a4 - 0x17e6d8
void entry_0017e6a4_0x17e6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e6a4_0x17e6a4");
#endif

    switch (ctx->pc) {
        case 0x17e6b4u: goto label_17e6b4;
        case 0x17e6d0u: goto label_17e6d0;
        default: break;
    }

    ctx->pc = 0x17e6a4u;

label_17e6a4:
    // 0x17e6a4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x17e6a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17e6a8:
    // 0x17e6a8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x17e6a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_17e6ac:
    // 0x17e6ac: 0x320f809  jalr        $t9
label_17e6b0:
    if (ctx->pc == 0x17E6B0u) {
        ctx->pc = 0x17E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6ACu;
        // 0x17e6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E6B4u;
        goto label_17e6b4;
    }
    ctx->pc = 0x17E6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E6B4u);
        ctx->pc = 0x17E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6ACu;
        // 0x17e6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E6ACu, 0x17E6B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E6B4u;
label_17e6b4:
    // 0x17e6b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_17e6b8:
    if (ctx->pc == 0x17E6B8u) {
        ctx->pc = 0x17E6BCu;
        goto label_17e6bc;
    }
    ctx->pc = 0x17E6B4u;
    {
        const bool branch_taken_0x17e6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e6b4) {
            ctx->pc = 0x17E6D8u;
            return;
        }
    }
    ctx->pc = 0x17E6BCu;
label_17e6bc:
    // 0x17e6bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x17e6bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17e6c0:
    // 0x17e6c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17e6c4:
    // 0x17e6c4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x17e6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_17e6c8:
    // 0x17e6c8: 0x320f809  jalr        $t9
label_17e6cc:
    if (ctx->pc == 0x17E6CCu) {
        ctx->pc = 0x17E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6C8u;
        // 0x17e6cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E6D0u;
        goto label_17e6d0;
    }
    ctx->pc = 0x17E6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E6D0u);
        ctx->pc = 0x17E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6C8u;
        // 0x17e6cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E6C8u, 0x17E6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E6D0u;
label_17e6d0:
    // 0x17e6d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_17e6d4:
    if (ctx->pc == 0x17E6D4u) {
        ctx->pc = 0x17E6D8u;
        goto label_fallthrough_0x17e6d0;
    }
    ctx->pc = 0x17E6D0u;
    {
        const bool branch_taken_0x17e6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e6d0) {
            ctx->pc = 0x17E6DCu;
            return;
        }
    }
label_fallthrough_0x17e6d0:
    ctx->pc = 0x17E6D8u;
}
