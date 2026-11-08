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

// Function: entry_00119190
// Address: 0x119190 - 0x1191b4
void entry_00119190_0x119190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119190_0x119190");
#endif

    switch (ctx->pc) {
        case 0x1191a4u: goto label_1191a4;
        default: break;
    }

    ctx->pc = 0x119190u;

    // 0x119190: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x119190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x119194: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x119194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x119198: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x119198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11919c: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x11919Cu;
    SET_GPR_U32(ctx, 31, 0x1191A4u);
    ctx->pc = 0x1191A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11919Cu;
    // 0x1191a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x11919Cu, 0x1191A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1191A4u;
label_1191a4:
    // 0x1191a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1191A4u;
    {
        const bool branch_taken_0x1191a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1191a4) {
            ctx->pc = 0x1191B4u;
            return;
        }
    }
    ctx->pc = 0x1191ACu;
    // 0x1191ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1191ACu;
    {
        const bool branch_taken_0x1191ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1191B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1191ACu;
        // 0x1191b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1191ac) {
            ctx->pc = 0x1191CCu;
            return;
        }
    }
    ctx->pc = 0x1191B4u;
}
