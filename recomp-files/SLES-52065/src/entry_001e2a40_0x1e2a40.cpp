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

// Function: entry_001e2a40
// Address: 0x1e2a40 - 0x1e2a74
void entry_001e2a40_0x1e2a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2a40_0x1e2a40");
#endif

    ctx->pc = 0x1e2a40u;

    // 0x1e2a40: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x1e2a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2a44: 0x1a00004f  blez        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1E2A44u;
    {
        const bool branch_taken_0x1e2a44 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1e2a44) {
            ctx->pc = 0x1E2B84u;
            return;
        }
    }
    ctx->pc = 0x1E2A4Cu;
    // 0x1e2a4c: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x1e2a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e2a50: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1e2a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1e2a54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e2a54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1e2a58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e2a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a5c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1e2a5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e2a60: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x1E2A60u;
    {
        const bool branch_taken_0x1e2a60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A60u;
        // 0x1e2a64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a60) {
            ctx->pc = 0x1E2B04u;
            return;
        }
    }
    ctx->pc = 0x1E2A68u;
    // 0x1e2a68: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x1e2a68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e2a6c: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E2A6Cu;
    {
        const bool branch_taken_0x1e2a6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A6Cu;
        // 0x1e2a70: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a6c) {
            ctx->pc = 0x1E2AD0u;
            return;
        }
    }
    ctx->pc = 0x1E2A74u;
}
