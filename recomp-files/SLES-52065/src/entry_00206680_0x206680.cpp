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

// Function: entry_00206680
// Address: 0x206680 - 0x2066bc
void entry_00206680_0x206680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206680_0x206680");
#endif

    ctx->pc = 0x206680u;

    // 0x206680: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x206680u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x206684: 0xec2006  srlv        $a0, $t4, $a3
    ctx->pc = 0x206684u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x206688: 0xe81806  srlv        $v1, $t0, $a3
    ctx->pc = 0x206688u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x20668c: 0xea3806  srlv        $a3, $t2, $a3
    ctx->pc = 0x20668cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x206690: 0xca1004  sllv        $v0, $t2, $a2
    ctx->pc = 0x206690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x206694: 0x445025  or          $t2, $v0, $a0
    ctx->pc = 0x206694u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x206698: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x206698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x20669c: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x20669cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x2066a0: 0xc84004  sllv        $t0, $t0, $a2
    ctx->pc = 0x2066a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x2066a4: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x2066a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x2066a8: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x2066a8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2066ac: 0x30abffff  andi        $t3, $a1, 0xFFFF
    ctx->pc = 0x2066acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2066b0: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x2066b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x2066b4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2066B4u;
    {
        const bool branch_taken_0x2066b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066b4) {
            ctx->pc = 0x2066B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2066B4u;
            // 0x2066b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2066BCu;
            return;
        }
    }
    ctx->pc = 0x2066BCu;
}
