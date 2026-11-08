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

// Function: entry_00145a78
// Address: 0x145a78 - 0x145a94
void entry_00145a78_0x145a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145a78_0x145a78");
#endif

    ctx->pc = 0x145a78u;

    // 0x145a78: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x145a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145a7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x145a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x145a80: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x145a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x145a84: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x145a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x145a88: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145a8c: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x145A8Cu;
    SET_GPR_U32(ctx, 31, 0x145A94u);
    ctx->pc = 0x145A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A8Cu;
    // 0x145a90: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x145A8Cu, 0x145A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A94u;
}
