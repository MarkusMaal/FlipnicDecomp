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

// Function: entry_0013f544
// Address: 0x13f544 - 0x13f574
void entry_0013f544_0x13f544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f544_0x13f544");
#endif

    ctx->pc = 0x13f544u;

    // 0x13f544: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x13f544u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x13f548: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x13f548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x13f54c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x13f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13f550: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13f550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13f554: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13f554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f558: 0x2010  mfhi        $a0
    ctx->pc = 0x13f558u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x13f55c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13f560: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13f560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13f564: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F564u;
    {
        const bool branch_taken_0x13f564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f564) {
            ctx->pc = 0x13F574u;
            return;
        }
    }
    ctx->pc = 0x13F56Cu;
    // 0x13f56c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13f570: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13f570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x13f574u;
}
