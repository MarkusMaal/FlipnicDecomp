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

// Function: entry_001e9020
// Address: 0x1e9020 - 0x1e9044
void entry_001e9020_0x1e9020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9020_0x1e9020");
#endif

    switch (ctx->pc) {
        case 0x1e9038u: goto label_1e9038;
        default: break;
    }

    ctx->pc = 0x1e9020u;

label_1e9020:
    // 0x1e9020: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e9020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e9024:
    // 0x1e9024: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e9024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e9028:
    // 0x1e9028: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1e9028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1e902c:
    // 0x1e902c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1e902cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1e9030:
    // 0x1e9030: 0x40f809  jalr        $v0
label_1e9034:
    if (ctx->pc == 0x1E9034u) {
        ctx->pc = 0x1E9034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9030u;
        // 0x1e9034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9038u;
        goto label_1e9038;
    }
    ctx->pc = 0x1E9030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9038u);
        ctx->pc = 0x1E9034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9030u;
        // 0x1e9034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9030u, 0x1E9038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9038u;
label_1e9038:
    // 0x1e9038: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e9038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e903c:
    // 0x1e903c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e903cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1e9040:
    // 0x1e9040: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e9040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1e9044u;
}
