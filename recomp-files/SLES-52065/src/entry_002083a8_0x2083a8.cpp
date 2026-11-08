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

// Function: entry_002083a8
// Address: 0x2083a8 - 0x2083dc
void entry_002083a8_0x2083a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002083a8_0x2083a8");
#endif

    ctx->pc = 0x2083a8u;

    // 0x2083a8: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2083a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2083ac: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x2083acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2083b0: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2083B0u;
    {
        const bool branch_taken_0x2083b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2083B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083B0u;
        // 0x2083b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083b0) {
            ctx->pc = 0x2084B0u;
            return;
        }
    }
    ctx->pc = 0x2083B8u;
    // 0x2083b8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2083b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2083bc: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x2083bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x2083c0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2083c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2083c4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2083c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2083c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2083C8u;
    {
        const bool branch_taken_0x2083c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083C8u;
        // 0x2083cc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083c8) {
            ctx->pc = 0x2083DCu;
            return;
        }
    }
    ctx->pc = 0x2083D0u;
    // 0x2083d0: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x2083d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x2083d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2083D4u;
    {
        const bool branch_taken_0x2083d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2083D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083D4u;
        // 0x2083d8: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083d4) {
            ctx->pc = 0x2083F0u;
            return;
        }
    }
    ctx->pc = 0x2083DCu;
}
