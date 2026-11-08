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

// Function: entry_0012f95c
// Address: 0x12f95c - 0x12f974
void entry_0012f95c_0x12f95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f95c_0x12f95c");
#endif

    switch (ctx->pc) {
        case 0x12f96cu: goto label_12f96c;
        default: break;
    }

    ctx->pc = 0x12f95cu;

    // 0x12f95c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12f960: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12f964: 0xc04be08  jal         func_12F820
    ctx->pc = 0x12F964u;
    SET_GPR_U32(ctx, 31, 0x12F96Cu);
    ctx->pc = 0x12F968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F964u;
    // 0x12f968: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x12F964u, 0x12F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F96Cu;
label_12f96c:
    // 0x12f96c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x12f96cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x12f970: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12f970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x12f974u;
}
