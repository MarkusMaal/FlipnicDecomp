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

// Function: entry_0019608c
// Address: 0x19608c - 0x1960b0
void entry_0019608c_0x19608c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019608c_0x19608c");
#endif

    ctx->pc = 0x19608cu;

    // 0x19608c: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x19608cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x196090: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x196090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x196094: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x196094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196098: 0x8c640450  lw          $a0, 0x450($v1)
    ctx->pc = 0x196098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1104)));
    // 0x19609c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1960a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1960a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1960a4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1960a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1960a8: 0xc0627e0  jal         func_189F80
    ctx->pc = 0x1960A8u;
    SET_GPR_U32(ctx, 31, 0x1960B0u);
    ctx->pc = 0x1960ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1960A8u;
    // 0x1960ac: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F80u, 0x1960A8u, 0x1960B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1960B0u;
}
