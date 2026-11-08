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

// Function: entry_0012273c
// Address: 0x12273c - 0x122768
void entry_0012273c_0x12273c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012273c_0x12273c");
#endif

    ctx->pc = 0x12273cu;

    // 0x12273c: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x12273cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x122740: 0x12400037  beqz        $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x122740u;
    {
        const bool branch_taken_0x122740 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x122744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122740u;
        // 0x122744: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122740) {
            ctx->pc = 0x122820u;
            return;
        }
    }
    ctx->pc = 0x122748u;
    // 0x122748: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x122748u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12274c: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x12274Cu;
    {
        const bool branch_taken_0x12274c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x12274c) {
            ctx->pc = 0x1227A4u;
            return;
        }
    }
    ctx->pc = 0x122754u;
    // 0x122754: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x122754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x122758: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x122758u;
    {
        const bool branch_taken_0x122758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122758u;
        // 0x12275c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122758) {
            ctx->pc = 0x122768u;
            return;
        }
    }
    ctx->pc = 0x122760u;
    // 0x122760: 0xc048990  jal         func_122640
    ctx->pc = 0x122760u;
    SET_GPR_U32(ctx, 31, 0x122768u);
    ctx->pc = 0x122640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122640u, 0x122760u, 0x122768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122768u;
}
