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

// Function: entry_0018f5d4
// Address: 0x18f5d4 - 0x18f5fc
void entry_0018f5d4_0x18f5d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f5d4_0x18f5d4");
#endif

    switch (ctx->pc) {
        case 0x18f5dcu: goto label_18f5dc;
        case 0x18f5f8u: goto label_18f5f8;
        default: break;
    }

    ctx->pc = 0x18f5d4u;

    // 0x18f5d4: 0xc063ec4  jal         func_18FB10
    ctx->pc = 0x18F5D4u;
    SET_GPR_U32(ctx, 31, 0x18F5DCu);
    ctx->pc = 0x18FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FB10u, 0x18F5D4u, 0x18F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5DCu;
label_18f5dc:
    // 0x18f5dc: 0x8c430230  lw          $v1, 0x230($v0)
    ctx->pc = 0x18f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
    // 0x18f5e0: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x18f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x18f5e4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F5E4u;
    {
        const bool branch_taken_0x18f5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f5e4) {
            ctx->pc = 0x18F5FCu;
            return;
        }
    }
    ctx->pc = 0x18F5ECu;
    // 0x18f5ec: 0x8e320024  lw          $s2, 0x24($s1)
    ctx->pc = 0x18f5ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x18f5f0: 0xc063ec4  jal         func_18FB10
    ctx->pc = 0x18F5F0u;
    SET_GPR_U32(ctx, 31, 0x18F5F8u);
    ctx->pc = 0x18F5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F5F0u;
    // 0x18f5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FB10u, 0x18F5F0u, 0x18F5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5F8u;
label_18f5f8:
    // 0x18f5f8: 0xac520230  sw          $s2, 0x230($v0)
    ctx->pc = 0x18f5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 560), GPR_U32(ctx, 18));
    ctx->pc = 0x18f5fcu;
}
