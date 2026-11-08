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

// Function: entry_001d41c0
// Address: 0x1d41c0 - 0x1d4200
void entry_001d41c0_0x1d41c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d41c0_0x1d41c0");
#endif

    ctx->pc = 0x1d41c0u;

    // 0x1d41c0: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x1d41c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1d41c4: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1d41c4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1d41c8: 0xe91014  dsllv       $v0, $t1, $a3
    ctx->pc = 0x1d41c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (GPR_U32(ctx, 7) & 0x3F));
    // 0x1d41cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d41ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d41d0: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D41D0u;
    {
        const bool branch_taken_0x1d41d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d41d0) {
            ctx->pc = 0x1D41D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D41D0u;
            // 0x1d41d4: 0x65080001  daddiu      $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4270u;
            return;
        }
    }
    ctx->pc = 0x1D41D8u;
    // 0x1d41d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1d41d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d41dc: 0x4a30024  bgezl       $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D41DCu;
    {
        const bool branch_taken_0x1d41dc = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1d41dc) {
            ctx->pc = 0x1D41E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D41DCu;
            // 0x1d41e0: 0x65080001  daddiu      $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4270u;
            return;
        }
    }
    ctx->pc = 0x1D41E4u;
    // 0x1d41e4: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D41E4u;
    {
        const bool branch_taken_0x1d41e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d41e4) {
            ctx->pc = 0x1D41E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D41E4u;
            // 0x1d41e8: 0x2d030018  sltiu       $v1, $t0, 0x18 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4200u;
            return;
        }
    }
    ctx->pc = 0x1D41ECu;
    // 0x1d41ec: 0x10c90012  beq         $a2, $t1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D41ECu;
    {
        const bool branch_taken_0x1d41ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x1D41F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41ECu;
        // 0x1d41f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41ec) {
            ctx->pc = 0x1D4238u;
            return;
        }
    }
    ctx->pc = 0x1D41F4u;
    // 0x1d41f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1D41F4u;
    {
        const bool branch_taken_0x1d41f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41F4u;
        // 0x1d41f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41f4) {
            ctx->pc = 0x1D4280u;
            return;
        }
    }
    ctx->pc = 0x1D41FCu;
    // 0x1d41fc: 0x0  nop
    ctx->pc = 0x1d41fcu;
    // NOP
    ctx->pc = 0x1d4200u;
}
