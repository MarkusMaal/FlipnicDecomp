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

// Function: entry_0017b8e8
// Address: 0x17b8e8 - 0x17b908
void entry_0017b8e8_0x17b8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b8e8_0x17b8e8");
#endif

    switch (ctx->pc) {
        case 0x17b900u: goto label_17b900;
        default: break;
    }

    ctx->pc = 0x17b8e8u;

    // 0x17b8e8: 0x8c8201d4  lw          $v0, 0x1D4($a0)
    ctx->pc = 0x17b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x17b8ec: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x17b8f0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17b8f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17b8f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17b8f8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17B8F8u;
    SET_GPR_U32(ctx, 31, 0x17B900u);
    ctx->pc = 0x17B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B8F8u;
    // 0x17b8fc: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17B8F8u, 0x17B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B900u;
label_17b900:
    // 0x17b900: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17B900u;
    {
        const bool branch_taken_0x17b900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B900u;
        // 0x17b904: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b900) {
            ctx->pc = 0x17B920u;
            return;
        }
    }
    ctx->pc = 0x17B908u;
}
