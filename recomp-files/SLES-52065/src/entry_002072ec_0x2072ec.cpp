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

// Function: entry_002072ec
// Address: 0x2072ec - 0x207320
void entry_002072ec_0x2072ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002072ec_0x2072ec");
#endif

    ctx->pc = 0x2072ecu;

    // 0x2072ec: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x2072ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x2072f0: 0xec1006  srlv        $v0, $t4, $a3
    ctx->pc = 0x2072f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x2072f4: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x2072f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x2072f8: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x2072f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x2072fc: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x2072fcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x207300: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x207300u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x207304: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x207304u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x207308: 0xe8001b  divu        $zero, $a3, $t0
    ctx->pc = 0x207308u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x20730c: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x20730cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x207310: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x207310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207314: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x207314u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x207318: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207318u;
    {
        const bool branch_taken_0x207318 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x207318) {
            ctx->pc = 0x20731Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207318u;
            // 0x20731c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207320u;
            return;
        }
    }
    ctx->pc = 0x207320u;
}
