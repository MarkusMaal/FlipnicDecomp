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

// Function: entry_0010de48
// Address: 0x10de48 - 0x10de68
void entry_0010de48_0x10de48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010de48_0x10de48");
#endif

    switch (ctx->pc) {
        case 0x10de60u: goto label_10de60;
        default: break;
    }

    ctx->pc = 0x10de48u;

    // 0x10de48: 0x8e220224  lw          $v0, 0x224($s1)
    ctx->pc = 0x10de48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x10de4c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x10de4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10de50: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x10DE50u;
    {
        const bool branch_taken_0x10de50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE50u;
        // 0x10de54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de50) {
            ctx->pc = 0x10DDF0u;
            return;
        }
    }
    ctx->pc = 0x10DE58u;
    // 0x10de58: 0xc0438f0  jal         func_10E3C0
    ctx->pc = 0x10DE58u;
    SET_GPR_U32(ctx, 31, 0x10DE60u);
    ctx->pc = 0x10E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E3C0u, 0x10DE58u, 0x10DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE60u;
label_10de60:
    // 0x10de60: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x10DE60u;
    {
        const bool branch_taken_0x10de60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE60u;
        // 0x10de64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de60) {
            ctx->pc = 0x10DF24u;
            return;
        }
    }
    ctx->pc = 0x10DE68u;
}
