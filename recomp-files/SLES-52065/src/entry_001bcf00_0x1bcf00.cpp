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

// Function: entry_001bcf00
// Address: 0x1bcf00 - 0x1bcf18
void entry_001bcf00_0x1bcf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcf00_0x1bcf00");
#endif

    ctx->pc = 0x1bcf00u;

    // 0x1bcf00: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x1bcf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x1bcf04: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1bcf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bcf08: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1bcf08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bcf0c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCF0Cu;
    {
        const bool branch_taken_0x1bcf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF0Cu;
        // 0x1bcf10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf0c) {
            ctx->pc = 0x1BCF18u;
            return;
        }
    }
    ctx->pc = 0x1BCF14u;
    // 0x1bcf14: 0xaea0007c  sw          $zero, 0x7C($s5)
    ctx->pc = 0x1bcf14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 0));
    ctx->pc = 0x1bcf18u;
}
