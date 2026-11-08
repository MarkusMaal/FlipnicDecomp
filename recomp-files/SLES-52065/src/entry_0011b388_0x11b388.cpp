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

// Function: entry_0011b388
// Address: 0x11b388 - 0x11b3bc
void entry_0011b388_0x11b388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b388_0x11b388");
#endif

    ctx->pc = 0x11b388u;

    // 0x11b388: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x11b388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11b38c: 0x81300000  lb          $s0, 0x0($t1)
    ctx->pc = 0x11b38cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11b390: 0x1300000a  beqz        $t8, . + 4 + (0xA << 2)
    ctx->pc = 0x11B390u;
    {
        const bool branch_taken_0x11b390 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B390u;
        // 0x11b394: 0xa1100000  sb          $s0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b390) {
            ctx->pc = 0x11B3BCu;
            return;
        }
    }
    ctx->pc = 0x11B398u;
    // 0x11b398: 0x108e3c  dsll32      $s1, $s0, 24
    ctx->pc = 0x11b398u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) << (32 + 24));
    // 0x11b39c: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x11b39cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x11b3a0: 0x2a290061  slti        $t1, $s1, 0x61
    ctx->pc = 0x11b3a0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x11b3a4: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B3A4u;
    {
        const bool branch_taken_0x11b3a4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3A4u;
        // 0x11b3a8: 0x2a21007b  slti        $at, $s1, 0x7B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)123) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3a4) {
            ctx->pc = 0x11B3BCu;
            return;
        }
    }
    ctx->pc = 0x11B3ACu;
    // 0x11b3ac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B3ACu;
    {
        const bool branch_taken_0x11b3ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3ACu;
        // 0x11b3b0: 0x2629ffe0  addiu       $t1, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3ac) {
            ctx->pc = 0x11B3BCu;
            return;
        }
    }
    ctx->pc = 0x11B3B4u;
    // 0x11b3b4: 0x9863c  dsll32      $s0, $t1, 24
    ctx->pc = 0x11b3b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) << (32 + 24));
    // 0x11b3b8: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x11b3b8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    ctx->pc = 0x11b3bcu;
}
