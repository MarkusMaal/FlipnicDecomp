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

// Function: entry_00144d98
// Address: 0x144d98 - 0x144dc4
void entry_00144d98_0x144d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144d98_0x144d98");
#endif

    switch (ctx->pc) {
        case 0x144db4u: goto label_144db4;
        case 0x144dc0u: goto label_144dc0;
        default: break;
    }

    ctx->pc = 0x144d98u;

    // 0x144d98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x144d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x144d9c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x144d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x144da0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x144da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x144da4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x144da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x144da8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x144da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x144dac: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x144DACu;
    SET_GPR_U32(ctx, 31, 0x144DB4u);
    ctx->pc = 0x144DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144DACu;
    // 0x144db0: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x144DACu, 0x144DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DB4u;
label_144db4:
    // 0x144db4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x144db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144db8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x144DB8u;
    SET_GPR_U32(ctx, 31, 0x144DC0u);
    ctx->pc = 0x144DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144DB8u;
    // 0x144dbc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x144DB8u, 0x144DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DC0u;
label_144dc0:
    // 0x144dc0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x144dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x144dc4u;
}
