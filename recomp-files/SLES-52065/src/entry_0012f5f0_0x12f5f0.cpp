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

// Function: entry_0012f5f0
// Address: 0x12f5f0 - 0x12f614
void entry_0012f5f0_0x12f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f5f0_0x12f5f0");
#endif

    switch (ctx->pc) {
        case 0x12f604u: goto label_12f604;
        default: break;
    }

    ctx->pc = 0x12f5f0u;

label_12f5f0:
    // 0x12f5f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x12f5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12f5f4:
    // 0x12f5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f5f8:
    // 0x12f5f8: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x12f5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_12f5fc:
    // 0x12f5fc: 0x320f809  jalr        $t9
label_12f600:
    if (ctx->pc == 0x12F600u) {
        ctx->pc = 0x12F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5FCu;
        // 0x12f600: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F604u;
        goto label_12f604;
    }
    ctx->pc = 0x12F5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F604u);
        ctx->pc = 0x12F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5FCu;
        // 0x12f600: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F5FCu, 0x12F604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F604u;
label_12f604:
    // 0x12f604: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_12f608:
    if (ctx->pc == 0x12F608u) {
        ctx->pc = 0x12F60Cu;
        goto label_12f60c;
    }
    ctx->pc = 0x12F604u;
    {
        const bool branch_taken_0x12f604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f604) {
            ctx->pc = 0x12F614u;
            return;
        }
    }
    ctx->pc = 0x12F60Cu;
label_12f60c:
    // 0x12f60c: 0x10000053  b           . + 4 + (0x53 << 2)
label_12f610:
    if (ctx->pc == 0x12F610u) {
        ctx->pc = 0x12F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F60Cu;
        // 0x12f610: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F614u;
        goto label_fallthrough_0x12f60c;
    }
    ctx->pc = 0x12F60Cu;
    {
        const bool branch_taken_0x12f60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F60Cu;
        // 0x12f610: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f60c) {
            ctx->pc = 0x12F75Cu;
            return;
        }
    }
label_fallthrough_0x12f60c:
    ctx->pc = 0x12F614u;
}
