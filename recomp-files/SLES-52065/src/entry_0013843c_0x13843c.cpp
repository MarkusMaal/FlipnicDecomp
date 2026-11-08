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

// Function: entry_0013843c
// Address: 0x13843c - 0x138468
void entry_0013843c_0x13843c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013843c_0x13843c");
#endif

    ctx->pc = 0x13843cu;

    // 0x13843c: 0x0  nop
    ctx->pc = 0x13843cu;
    // NOP
    // 0x138440: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x138440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x138444: 0x8f938594  lw          $s3, -0x7A6C($gp)
    ctx->pc = 0x138444u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x138448: 0x8cc30064  lw          $v1, 0x64($a2)
    ctx->pc = 0x138448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
    // 0x13844c: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x13844cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x138450: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x138450u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138454: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x138454u;
    {
        const bool branch_taken_0x138454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138454u;
        // 0x138458: 0x95b021  addu        $s6, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138454) {
            ctx->pc = 0x138468u;
            return;
        }
    }
    ctx->pc = 0x13845Cu;
    // 0x13845c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13845cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138460: 0xc04e948  jal         func_13A520
    ctx->pc = 0x138460u;
    SET_GPR_U32(ctx, 31, 0x138468u);
    ctx->pc = 0x138464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138460u;
    // 0x138464: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A520u, 0x138460u, 0x138468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138468u;
}
