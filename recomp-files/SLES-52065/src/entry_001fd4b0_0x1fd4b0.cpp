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

// Function: entry_001fd4b0
// Address: 0x1fd4b0 - 0x1fd4d8
void entry_001fd4b0_0x1fd4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd4b0_0x1fd4b0");
#endif

    switch (ctx->pc) {
        case 0x1fd4c4u: goto label_1fd4c4;
        default: break;
    }

    ctx->pc = 0x1fd4b0u;

label_1fd4b0:
    // 0x1fd4b0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1fd4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1fd4b4:
    // 0x1fd4b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fd4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fd4b8:
    // 0x1fd4b8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1fd4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1fd4bc:
    // 0x1fd4bc: 0x40f809  jalr        $v0
label_1fd4c0:
    if (ctx->pc == 0x1FD4C0u) {
        ctx->pc = 0x1FD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4BCu;
        // 0x1fd4c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD4C4u;
        goto label_1fd4c4;
    }
    ctx->pc = 0x1FD4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD4C4u);
        ctx->pc = 0x1FD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4BCu;
        // 0x1fd4c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD4BCu, 0x1FD4C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD4C4u;
label_1fd4c4:
    // 0x1fd4c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fd4c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd4c8:
    // 0x1fd4c8: 0x1860ffec  blez        $v1, . + 4 + (-0x14 << 2)
label_1fd4cc:
    if (ctx->pc == 0x1FD4CCu) {
        ctx->pc = 0x1FD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4C8u;
        // 0x1fd4cc: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD4D0u;
        goto label_1fd4d0;
    }
    ctx->pc = 0x1FD4C8u;
    {
        const bool branch_taken_0x1fd4c8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1FD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4C8u;
        // 0x1fd4cc: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4c8) {
            ctx->pc = 0x1FD47Cu;
            return;
        }
    }
    ctx->pc = 0x1FD4D0u;
label_1fd4d0:
    // 0x1fd4d0: 0x1e00fff7  bgtz        $s0, . + 4 + (-0x9 << 2)
label_1fd4d4:
    if (ctx->pc == 0x1FD4D4u) {
        ctx->pc = 0x1FD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4D0u;
        // 0x1fd4d4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD4D8u;
        goto label_fallthrough_0x1fd4d0;
    }
    ctx->pc = 0x1FD4D0u;
    {
        const bool branch_taken_0x1fd4d0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1FD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4D0u;
        // 0x1fd4d4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4d0) {
            ctx->pc = 0x1FD4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd4b0;
        }
    }
label_fallthrough_0x1fd4d0:
    ctx->pc = 0x1FD4D8u;
}
