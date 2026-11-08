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

// Function: entry_00206c28
// Address: 0x206c28 - 0x206c5c
void entry_00206c28_0x206c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206c28_0x206c28");
#endif

    ctx->pc = 0x206c28u;

    // 0x206c28: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x206c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x206c2c: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x206c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x206c30: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x206c30u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x206c34: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x206c34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x206c38: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x206c38u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x206c3c: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x206c3cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x206c40: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x206c40u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x206c44: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x206c44u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x206c48: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x206c48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x206c4c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x206c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c50: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x206c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x206c54: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206C54u;
    {
        const bool branch_taken_0x206c54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x206c54) {
            ctx->pc = 0x206C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206C54u;
            // 0x206c58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206C5Cu;
            return;
        }
    }
    ctx->pc = 0x206C5Cu;
}
