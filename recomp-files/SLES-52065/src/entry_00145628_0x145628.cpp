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

// Function: entry_00145628
// Address: 0x145628 - 0x145650
void entry_00145628_0x145628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145628_0x145628");
#endif

    ctx->pc = 0x145628u;

    // 0x145628: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x145628u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x14562c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x14562cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x145630: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x145630u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x145634: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x145634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x145638: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x145638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14563c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14563cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145640: 0x2010  mfhi        $a0
    ctx->pc = 0x145640u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x145644: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x145644u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x145648: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x145648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14564c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x14564cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x145650u;
}
