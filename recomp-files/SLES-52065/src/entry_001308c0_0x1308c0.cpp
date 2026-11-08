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

// Function: entry_001308c0
// Address: 0x1308c0 - 0x1308e4
void entry_001308c0_0x1308c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001308c0_0x1308c0");
#endif

    switch (ctx->pc) {
        case 0x1308c8u: goto label_1308c8;
        default: break;
    }

    ctx->pc = 0x1308c0u;

    // 0x1308c0: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x1308C0u;
    SET_GPR_U32(ctx, 31, 0x1308C8u);
    ctx->pc = 0x1308C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1308C0u;
    // 0x1308c4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1308C0u, 0x1308C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308C8u;
label_1308c8:
    // 0x1308c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1308C8u;
    {
        const bool branch_taken_0x1308c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1308c8) {
            ctx->pc = 0x1308E4u;
            return;
        }
    }
    ctx->pc = 0x1308D0u;
    // 0x1308d0: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x1308d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1308d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1308d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1308d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1308dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1308DCu;
    {
        const bool branch_taken_0x1308dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1308E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308DCu;
        // 0x1308e0: 0xae630048  sw          $v1, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308dc) {
            ctx->pc = 0x130930u;
            return;
        }
    }
    ctx->pc = 0x1308E4u;
}
