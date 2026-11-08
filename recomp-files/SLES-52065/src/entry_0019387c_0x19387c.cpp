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

// Function: entry_0019387c
// Address: 0x19387c - 0x19389c
void entry_0019387c_0x19387c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019387c_0x19387c");
#endif

    switch (ctx->pc) {
        case 0x193894u: goto label_193894;
        default: break;
    }

    ctx->pc = 0x19387cu;

    // 0x19387c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19387cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x193880: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x193880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x193884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x193888: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x193888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x19388c: 0xc042118  jal         func_108460
    ctx->pc = 0x19388Cu;
    SET_GPR_U32(ctx, 31, 0x193894u);
    ctx->pc = 0x193890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19388Cu;
    // 0x193890: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x19388Cu, 0x193894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193894u;
label_193894:
    // 0x193894: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x193894u;
    {
        const bool branch_taken_0x193894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193894) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
    ctx->pc = 0x19389Cu;
}
