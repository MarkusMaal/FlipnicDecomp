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

// Function: entry_001f4580
// Address: 0x1f4580 - 0x1f4598
void entry_001f4580_0x1f4580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4580_0x1f4580");
#endif

    switch (ctx->pc) {
        case 0x1f4590u: goto label_1f4590;
        default: break;
    }

    ctx->pc = 0x1f4580u;

    // 0x1f4580: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1f4580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1f4584: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1f4584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1f4588: 0xc07d124  jal         func_1F4490
    ctx->pc = 0x1F4588u;
    SET_GPR_U32(ctx, 31, 0x1F4590u);
    ctx->pc = 0x1F458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4588u;
    // 0x1f458c: 0x26864418  addiu       $a2, $s4, 0x4418 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 17432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4490u, 0x1F4588u, 0x1F4590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4590u;
label_1f4590:
    // 0x1f4590: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f4590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4594: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x1f4594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    ctx->pc = 0x1f4598u;
}
