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

// Function: entry_001e7040
// Address: 0x1e7040 - 0x1e7060
void entry_001e7040_0x1e7040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7040_0x1e7040");
#endif

    switch (ctx->pc) {
        case 0x1e704cu: goto label_1e704c;
        default: break;
    }

    ctx->pc = 0x1e7040u;

label_1e7040:
    // 0x1e7040: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x1e7040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1e7044: 0xc07a1d0  jal         func_1E8740
    ctx->pc = 0x1E7044u;
    SET_GPR_U32(ctx, 31, 0x1E704Cu);
    ctx->pc = 0x1E7048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7044u;
    // 0x1e7048: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8740u, 0x1E7044u, 0x1E704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E704Cu;
label_1e704c:
    // 0x1e704c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1e704cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e7050: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e7050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e7054: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1e7054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e7058: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E7058u;
    {
        const bool branch_taken_0x1e7058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7058u;
        // 0x1e705c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7058) {
            ctx->pc = 0x1E7040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7040;
        }
    }
    ctx->pc = 0x1E7060u;
}
