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

// Function: entry_0014942c
// Address: 0x14942c - 0x14944c
void entry_0014942c_0x14942c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014942c_0x14942c");
#endif

    switch (ctx->pc) {
        case 0x149434u: goto label_149434;
        default: break;
    }

    ctx->pc = 0x14942cu;

    // 0x14942c: 0xc050224  jal         func_140890
    ctx->pc = 0x14942Cu;
    SET_GPR_U32(ctx, 31, 0x149434u);
    ctx->pc = 0x149430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14942Cu;
    // 0x149430: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14942Cu, 0x149434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149434u;
label_149434:
    // 0x149434: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x149434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x149438: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x149438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14943c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149440: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x149440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x149444: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x149444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149448: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x149448u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x14944cu;
}
