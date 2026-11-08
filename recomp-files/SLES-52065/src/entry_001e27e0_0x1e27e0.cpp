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

// Function: entry_001e27e0
// Address: 0x1e27e0 - 0x1e2814
void entry_001e27e0_0x1e27e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e27e0_0x1e27e0");
#endif

    ctx->pc = 0x1e27e0u;

    // 0x1e27e0: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x1e27e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e27e4: 0x1a000051  blez        $s0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1E27E4u;
    {
        const bool branch_taken_0x1e27e4 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1e27e4) {
            ctx->pc = 0x1E292Cu;
            return;
        }
    }
    ctx->pc = 0x1E27ECu;
    // 0x1e27ec: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x1e27ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1e27f0: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1e27f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1e27f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e27f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1e27f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1e27f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e27fc: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1e27fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e2800: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x1E2800u;
    {
        const bool branch_taken_0x1e2800 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2800u;
        // 0x1e2804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2800) {
            ctx->pc = 0x1E28A4u;
            return;
        }
    }
    ctx->pc = 0x1E2808u;
    // 0x1e2808: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x1e2808u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e280c: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E280Cu;
    {
        const bool branch_taken_0x1e280c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E280Cu;
        // 0x1e2810: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e280c) {
            ctx->pc = 0x1E2870u;
            return;
        }
    }
    ctx->pc = 0x1E2814u;
}
