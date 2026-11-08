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

// Function: entry_0014384c
// Address: 0x14384c - 0x143878
void entry_0014384c_0x14384c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014384c_0x14384c");
#endif

    ctx->pc = 0x14384cu;

    // 0x14384c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x14384cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x143850: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x143850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x143854: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x143854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x143858: 0x27b60098  addiu       $s6, $sp, 0x98
    ctx->pc = 0x143858u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x14385c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x14385cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x143860: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x143860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143864: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x143864u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x143868: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143868u;
    {
        const bool branch_taken_0x143868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143868u;
        // 0x14386c: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143868) {
            ctx->pc = 0x143878u;
            return;
        }
    }
    ctx->pc = 0x143870u;
    // 0x143870: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143870u;
    {
        const bool branch_taken_0x143870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143870u;
        // 0x143874: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143870) {
            ctx->pc = 0x143880u;
            return;
        }
    }
    ctx->pc = 0x143878u;
}
