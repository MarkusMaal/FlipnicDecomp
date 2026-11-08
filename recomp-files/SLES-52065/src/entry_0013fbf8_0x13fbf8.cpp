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

// Function: entry_0013fbf8
// Address: 0x13fbf8 - 0x13fc3c
void entry_0013fbf8_0x13fbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fbf8_0x13fbf8");
#endif

    ctx->pc = 0x13fbf8u;

    // 0x13fbf8: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x13fbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x13fbfc: 0x10a00049  beqz        $a1, . + 4 + (0x49 << 2)
    ctx->pc = 0x13FBFCu;
    {
        const bool branch_taken_0x13fbfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fbfc) {
            ctx->pc = 0x13FD24u;
            return;
        }
    }
    ctx->pc = 0x13FC04u;
    // 0x13fc04: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x13fc04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13fc08: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x13fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13fc0c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x13fc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13fc10: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13fc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13fc14: 0x87082b  sltu        $at, $a0, $a3
    ctx->pc = 0x13fc14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x13fc18: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FC18u;
    {
        const bool branch_taken_0x13fc18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC18u;
        // 0x13fc1c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc18) {
            ctx->pc = 0x13FC3Cu;
            return;
        }
    }
    ctx->pc = 0x13FC20u;
    // 0x13fc20: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13fc24: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x13fc24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x13fc28: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x13fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13fc2c: 0xafb20050  sw          $s2, 0x50($sp)
    ctx->pc = 0x13fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 18));
    // 0x13fc30: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x13fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x13fc34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13FC34u;
    {
        const bool branch_taken_0x13fc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC34u;
        // 0x13fc38: 0x27ab0050  addiu       $t3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc34) {
            ctx->pc = 0x13FC58u;
            return;
        }
    }
    ctx->pc = 0x13FC3Cu;
}
