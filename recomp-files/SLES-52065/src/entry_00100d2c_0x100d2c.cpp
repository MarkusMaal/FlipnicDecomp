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

// Function: entry_00100d2c
// Address: 0x100d2c - 0x100d4c
void entry_00100d2c_0x100d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100d2c_0x100d2c");
#endif

    ctx->pc = 0x100d2cu;

    // 0x100d2c: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x100d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100d30: 0x8c422c1c  lw          $v0, 0x2C1C($v0)
    ctx->pc = 0x100d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11292)));
    // 0x100d34: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x100d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x100d38: 0x90420042  lbu         $v0, 0x42($v0)
    ctx->pc = 0x100d38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 66)));
    // 0x100d3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100D3Cu;
    {
        const bool branch_taken_0x100d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D3Cu;
        // 0x100d40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d3c) {
            ctx->pc = 0x100D4Cu;
            return;
        }
    }
    ctx->pc = 0x100D44u;
    // 0x100d44: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x100D44u;
    SET_GPR_U32(ctx, 31, 0x100D4Cu);
    ctx->pc = 0x100D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D44u;
    // 0x100d48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x100D44u, 0x100D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D4Cu;
}
