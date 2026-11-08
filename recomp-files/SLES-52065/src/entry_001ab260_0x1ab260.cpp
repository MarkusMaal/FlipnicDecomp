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

// Function: entry_001ab260
// Address: 0x1ab260 - 0x1ab280
void entry_001ab260_0x1ab260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab260_0x1ab260");
#endif

    switch (ctx->pc) {
        case 0x1ab278u: goto label_1ab278;
        default: break;
    }

    ctx->pc = 0x1ab260u;

    // 0x1ab260: 0x8e430670  lw          $v1, 0x670($s2)
    ctx->pc = 0x1ab260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x1ab264: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x1ab264u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ab268: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB268u;
    {
        const bool branch_taken_0x1ab268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB268u;
        // 0x1ab26c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab268) {
            ctx->pc = 0x1AB280u;
            return;
        }
    }
    ctx->pc = 0x1AB270u;
    // 0x1ab270: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AB270u;
    SET_GPR_U32(ctx, 31, 0x1AB278u);
    ctx->pc = 0x1AB274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB270u;
    // 0x1ab274: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AB270u, 0x1AB278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB278u;
label_1ab278:
    // 0x1ab278: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB278u;
    {
        const bool branch_taken_0x1ab278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab278) {
            ctx->pc = 0x1AB290u;
            return;
        }
    }
    ctx->pc = 0x1AB280u;
}
