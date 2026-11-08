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

// Function: entry_0014bc7c
// Address: 0x14bc7c - 0x14bcc8
void entry_0014bc7c_0x14bc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bc7c_0x14bc7c");
#endif

    ctx->pc = 0x14bc7cu;

    // 0x14bc7c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14bc80: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x14bc80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x14bc84: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x14bc84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14bc88: 0x10c00045  beqz        $a2, . + 4 + (0x45 << 2)
    ctx->pc = 0x14BC88u;
    {
        const bool branch_taken_0x14bc88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bc88) {
            ctx->pc = 0x14BDA0u;
            return;
        }
    }
    ctx->pc = 0x14BC90u;
    // 0x14bc90: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14bc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14bc94: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x14bc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14bc98: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x14bc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14bc9c: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x14bc9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x14bca0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14BCA0u;
    {
        const bool branch_taken_0x14bca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCA0u;
        // 0x14bca4: 0x26430004  addiu       $v1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bca0) {
            ctx->pc = 0x14BCC8u;
            return;
        }
    }
    ctx->pc = 0x14BCA8u;
    // 0x14bca8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x14bca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14bcac: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x14bcacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14bcb0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x14bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14bcb4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14bcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14bcb8: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x14bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x14bcbc: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x14bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x14bcc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14BCC0u;
    {
        const bool branch_taken_0x14bcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCC0u;
        // 0x14bcc4: 0xafb00060  sw          $s0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bcc0) {
            ctx->pc = 0x14BCE8u;
            return;
        }
    }
    ctx->pc = 0x14BCC8u;
}
