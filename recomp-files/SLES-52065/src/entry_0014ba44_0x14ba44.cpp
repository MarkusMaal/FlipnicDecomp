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

// Function: entry_0014ba44
// Address: 0x14ba44 - 0x14ba60
void entry_0014ba44_0x14ba44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ba44_0x14ba44");
#endif

    switch (ctx->pc) {
        case 0x14ba4cu: goto label_14ba4c;
        case 0x14ba5cu: goto label_14ba5c;
        default: break;
    }

    ctx->pc = 0x14ba44u;

    // 0x14ba44: 0xc050234  jal         func_1408D0
    ctx->pc = 0x14BA44u;
    SET_GPR_U32(ctx, 31, 0x14BA4Cu);
    ctx->pc = 0x14BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA44u;
    // 0x14ba48: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408D0u, 0x14BA44u, 0x14BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA4Cu;
label_14ba4c:
    // 0x14ba4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ba50: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x14ba50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14ba54: 0xc050224  jal         func_140890
    ctx->pc = 0x14BA54u;
    SET_GPR_U32(ctx, 31, 0x14BA5Cu);
    ctx->pc = 0x14BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA54u;
    // 0x14ba58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14BA54u, 0x14BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA5Cu;
label_14ba5c:
    // 0x14ba5c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x14ba5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->pc = 0x14ba60u;
}
