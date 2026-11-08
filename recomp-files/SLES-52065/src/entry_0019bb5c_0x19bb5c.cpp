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

// Function: entry_0019bb5c
// Address: 0x19bb5c - 0x19bb90
void entry_0019bb5c_0x19bb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bb5c_0x19bb5c");
#endif

    switch (ctx->pc) {
        case 0x19bb64u: goto label_19bb64;
        case 0x19bb80u: goto label_19bb80;
        default: break;
    }

    ctx->pc = 0x19bb5cu;

    // 0x19bb5c: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x19BB5Cu;
    SET_GPR_U32(ctx, 31, 0x19BB64u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x19BB5Cu, 0x19BB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB64u;
label_19bb64:
    // 0x19bb64: 0xae220904  sw          $v0, 0x904($s1)
    ctx->pc = 0x19bb64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2308), GPR_U32(ctx, 2));
    // 0x19bb68: 0x8e240904  lw          $a0, 0x904($s1)
    ctx->pc = 0x19bb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2308)));
    // 0x19bb6c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19BB6Cu;
    {
        const bool branch_taken_0x19bb6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bb6c) {
            ctx->pc = 0x19BB90u;
            return;
        }
    }
    ctx->pc = 0x19BB74u;
    // 0x19bb74: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19bb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19bb78: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x19BB78u;
    SET_GPR_U32(ctx, 31, 0x19BB80u);
    ctx->pc = 0x19BB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB78u;
    // 0x19bb7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x19BB78u, 0x19BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB80u;
label_19bb80:
    // 0x19bb80: 0x8e240904  lw          $a0, 0x904($s1)
    ctx->pc = 0x19bb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2308)));
    // 0x19bb84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19bb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bb88: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x19BB88u;
    SET_GPR_U32(ctx, 31, 0x19BB90u);
    ctx->pc = 0x19BB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB88u;
    // 0x19bb8c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x19BB88u, 0x19BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB90u;
}
