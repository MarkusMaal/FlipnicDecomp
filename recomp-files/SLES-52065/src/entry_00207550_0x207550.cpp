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

// Function: entry_00207550
// Address: 0x207550 - 0x20758c
void entry_00207550_0x207550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207550_0x207550");
#endif

    ctx->pc = 0x207550u;

    // 0x207550: 0xc82804  sllv        $a1, $t0, $a2
    ctx->pc = 0x207550u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x207554: 0xec2006  srlv        $a0, $t4, $a3
    ctx->pc = 0x207554u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x207558: 0xe91806  srlv        $v1, $t1, $a3
    ctx->pc = 0x207558u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x20755c: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x20755cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x207560: 0xcb1004  sllv        $v0, $t3, $a2
    ctx->pc = 0x207560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x207564: 0x445825  or          $t3, $v0, $a0
    ctx->pc = 0x207564u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x207568: 0xa34025  or          $t0, $a1, $v1
    ctx->pc = 0x207568u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x20756c: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x20756cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x207570: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x207570u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x207574: 0x83402  srl         $a2, $t0, 16
    ctx->pc = 0x207574u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x207578: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x207578u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x20757c: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x20757cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x207580: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x207580u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x207584: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207584u;
    {
        const bool branch_taken_0x207584 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x207584) {
            ctx->pc = 0x207588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207584u;
            // 0x207588: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20758Cu;
            return;
        }
    }
    ctx->pc = 0x20758Cu;
}
