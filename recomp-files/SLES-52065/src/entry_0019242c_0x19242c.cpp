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

// Function: entry_0019242c
// Address: 0x19242c - 0x192448
void entry_0019242c_0x19242c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019242c_0x19242c");
#endif

    switch (ctx->pc) {
        case 0x192444u: goto label_192444;
        default: break;
    }

    ctx->pc = 0x19242cu;

    // 0x19242c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x19242cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192430: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x192430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192434: 0x8f838704  lw          $v1, -0x78FC($gp)
    ctx->pc = 0x192434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x192438: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x192438u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x19243c: 0xc063f40  jal         func_18FD00
    ctx->pc = 0x19243Cu;
    SET_GPR_U32(ctx, 31, 0x192444u);
    ctx->pc = 0x192440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19243Cu;
    // 0x192440: 0x24640210  addiu       $a0, $v1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FD00u, 0x19243Cu, 0x192444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192444u;
label_192444:
    // 0x192444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192448u;
}
