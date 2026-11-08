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

// Function: entry_001ff37c
// Address: 0x1ff37c - 0x1ff3a0
void entry_001ff37c_0x1ff37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff37c_0x1ff37c");
#endif

    ctx->pc = 0x1ff37cu;

    // 0x1ff37c: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x1ff37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ff380: 0x50400076  beql        $v0, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x1FF380u;
    {
        const bool branch_taken_0x1ff380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff380) {
            ctx->pc = 0x1FF384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF380u;
            // 0x1ff384: 0x8e0a000c  lw          $t2, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF55Cu;
            return;
        }
    }
    ctx->pc = 0x1FF388u;
    // 0x1ff388: 0x4e1008c  bgez        $a3, . + 4 + (0x8C << 2)
    ctx->pc = 0x1FF388u;
    {
        const bool branch_taken_0x1ff388 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1FF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF388u;
        // 0x1ff38c: 0x2081821  addu        $v1, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff388) {
            ctx->pc = 0x1FF5BCu;
            return;
        }
    }
    ctx->pc = 0x1FF390u;
    // 0x1ff390: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x1ff390u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ff394: 0x5605ffee  bnel        $s0, $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1FF394u;
    {
        const bool branch_taken_0x1ff394 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ff394) {
            ctx->pc = 0x1FF398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF394u;
            // 0x1ff398: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF350u;
            return;
        }
    }
    ctx->pc = 0x1FF39Cu;
    // 0x1ff39c: 0x2962003f  slti        $v0, $t3, 0x3F
    ctx->pc = 0x1ff39cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)63) ? 1 : 0);
    ctx->pc = 0x1ff3a0u;
}
