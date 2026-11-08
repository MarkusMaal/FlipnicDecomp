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

// Function: entry_001aa100
// Address: 0x1aa100 - 0x1aa11c
void entry_001aa100_0x1aa100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa100_0x1aa100");
#endif

    switch (ctx->pc) {
        case 0x1aa10cu: goto label_1aa10c;
        default: break;
    }

    ctx->pc = 0x1aa100u;

label_1aa100:
    // 0x1aa100: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1aa100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1aa104: 0xc069bb0  jal         func_1A6EC0
    ctx->pc = 0x1AA104u;
    SET_GPR_U32(ctx, 31, 0x1AA10Cu);
    ctx->pc = 0x1AA108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA104u;
    // 0x1aa108: 0x24440770  addiu       $a0, $v0, 0x770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6EC0u, 0x1AA104u, 0x1AA10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA10Cu;
label_1aa10c:
    // 0x1aa10c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa110: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1aa110u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1aa114: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AA114u;
    {
        const bool branch_taken_0x1aa114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA114u;
        // 0x1aa118: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa114) {
            ctx->pc = 0x1AA100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa100;
        }
    }
    ctx->pc = 0x1AA11Cu;
}
