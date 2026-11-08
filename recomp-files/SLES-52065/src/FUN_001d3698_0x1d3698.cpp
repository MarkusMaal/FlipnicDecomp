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

// Function: FUN_001d3698
// Address: 0x1d3698 - 0x1d36c8
void FUN_001d3698_0x1d3698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3698_0x1d3698");
#endif

    switch (ctx->pc) {
        case 0x1d36b0u: goto label_1d36b0;
        default: break;
    }

    ctx->pc = 0x1d3698u;

    // 0x1d3698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d369c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d369cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36a0: 0x24053fff  addiu       $a1, $zero, 0x3FFF
    ctx->pc = 0x1d36a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1d36a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d36a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d36a8: 0xc074d82  jal         func_1D3608
    ctx->pc = 0x1D36A8u;
    SET_GPR_U32(ctx, 31, 0x1D36B0u);
    ctx->pc = 0x1D36ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D36A8u;
    // 0x1d36ac: 0x24063fff  addiu       $a2, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3608u, 0x1D36A8u, 0x1D36B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D36B0u;
label_1d36b0:
    // 0x1d36b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d36b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d36b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d36b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d36b8: 0x24053fff  addiu       $a1, $zero, 0x3FFF
    ctx->pc = 0x1d36b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1d36bc: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x1d36bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1d36c0: 0x8074d82  j           func_1D3608
    ctx->pc = 0x1D36C0u;
    ctx->pc = 0x1D36C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D36C0u;
    // 0x1d36c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3608u;
    FUN_001d3608_0x1d3608(rdram, ctx, runtime); return;
    ctx->pc = 0x1D36C8u;
}
