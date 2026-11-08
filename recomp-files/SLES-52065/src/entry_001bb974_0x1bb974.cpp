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

// Function: entry_001bb974
// Address: 0x1bb974 - 0x1bb9a8
void entry_001bb974_0x1bb974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb974_0x1bb974");
#endif

    switch (ctx->pc) {
        case 0x1bb9a0u: goto label_1bb9a0;
        default: break;
    }

    ctx->pc = 0x1bb974u;

    // 0x1bb974: 0x0  nop
    ctx->pc = 0x1bb974u;
    // NOP
    // 0x1bb978: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bb978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bb97c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bb97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bb980: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1bb980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1bb984: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1bb984u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1bb988: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1bb988u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1bb98c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1bb98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bb990: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB990u;
    {
        const bool branch_taken_0x1bb990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb990) {
            ctx->pc = 0x1BB9A8u;
            return;
        }
    }
    ctx->pc = 0x1BB998u;
    // 0x1bb998: 0xc06ee80  jal         func_1BBA00
    ctx->pc = 0x1BB998u;
    SET_GPR_U32(ctx, 31, 0x1BB9A0u);
    ctx->pc = 0x1BB99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB998u;
    // 0x1bb99c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA00u, 0x1BB998u, 0x1BB9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9A0u;
label_1bb9a0:
    // 0x1bb9a0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB9A0u;
    SET_GPR_U32(ctx, 31, 0x1BB9A8u);
    ctx->pc = 0x1BB9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB9A0u;
    // 0x1bb9a4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB9A0u, 0x1BB9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9A8u;
}
