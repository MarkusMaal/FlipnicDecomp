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

// Function: entry_001e9550
// Address: 0x1e9550 - 0x1e9574
void entry_001e9550_0x1e9550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9550_0x1e9550");
#endif

    switch (ctx->pc) {
        case 0x1e955cu: goto label_1e955c;
        default: break;
    }

    ctx->pc = 0x1e9550u;

label_1e9550:
    // 0x1e9550: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e9550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9554:
    // 0x1e9554: 0x40f809  jalr        $v0
label_1e9558:
    if (ctx->pc == 0x1E9558u) {
        ctx->pc = 0x1E955Cu;
        goto label_1e955c;
    }
    ctx->pc = 0x1E9554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E955Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9554u, 0x1E955Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E955Cu;
label_1e955c:
    // 0x1e955c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e955cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1e9560:
    // 0x1e9560: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1e9560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1e9564:
    // 0x1e9564: 0x0  nop
    ctx->pc = 0x1e9564u;
    // NOP
label_1e9568:
    // 0x1e9568: 0x0  nop
    ctx->pc = 0x1e9568u;
    // NOP
label_1e956c:
    // 0x1e956c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_1e9570:
    if (ctx->pc == 0x1E9570u) {
        ctx->pc = 0x1E9574u;
        goto label_fallthrough_0x1e956c;
    }
    ctx->pc = 0x1E956Cu;
    {
        const bool branch_taken_0x1e956c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e956c) {
            ctx->pc = 0x1E9550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9550;
        }
    }
label_fallthrough_0x1e956c:
    ctx->pc = 0x1E9574u;
}
