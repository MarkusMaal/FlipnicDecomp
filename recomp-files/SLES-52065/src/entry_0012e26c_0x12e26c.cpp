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

// Function: entry_0012e26c
// Address: 0x12e26c - 0x12e294
void entry_0012e26c_0x12e26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e26c_0x12e26c");
#endif

    switch (ctx->pc) {
        case 0x12e290u: goto label_12e290;
        default: break;
    }

    ctx->pc = 0x12e26cu;

    // 0x12e26c: 0x0  nop
    ctx->pc = 0x12e26cu;
    // NOP
    // 0x12e270: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x12e270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12e274: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x12e274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x12e278: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12e278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12e27c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12e27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e280: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x12e280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12e284: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x12e284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12e288: 0xc04b994  jal         func_12E650
    ctx->pc = 0x12E288u;
    SET_GPR_U32(ctx, 31, 0x12E290u);
    ctx->pc = 0x12E28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E288u;
    // 0x12e28c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E650u, 0x12E288u, 0x12E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E290u;
label_12e290:
    // 0x12e290: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x12e290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x12e294u;
}
