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

// Function: entry_001a6600
// Address: 0x1a6600 - 0x1a6624
void entry_001a6600_0x1a6600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6600_0x1a6600");
#endif

    switch (ctx->pc) {
        case 0x1a6614u: goto label_1a6614;
        default: break;
    }

    ctx->pc = 0x1a6600u;

label_1a6600:
    // 0x1a6600: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1a6600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6604:
    // 0x1a6604: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6608:
    // 0x1a6608: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a6608u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a660c:
    // 0x1a660c: 0x320f809  jalr        $t9
label_1a6610:
    if (ctx->pc == 0x1A6610u) {
        ctx->pc = 0x1A6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A660Cu;
        // 0x1a6610: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6614u;
        goto label_1a6614;
    }
    ctx->pc = 0x1A660Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6614u);
        ctx->pc = 0x1A6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A660Cu;
        // 0x1a6610: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A660Cu, 0x1A6614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6614u;
label_1a6614:
    // 0x1a6614: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a6614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a6618:
    // 0x1a6618: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1a6618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_1a661c:
    // 0x1a661c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1a6620:
    if (ctx->pc == 0x1A6620u) {
        ctx->pc = 0x1A6624u;
        goto label_fallthrough_0x1a661c;
    }
    ctx->pc = 0x1A661Cu;
    {
        const bool branch_taken_0x1a661c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a661c) {
            ctx->pc = 0x1A65D8u;
            return;
        }
    }
label_fallthrough_0x1a661c:
    ctx->pc = 0x1A6624u;
}
