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

// Function: entry_001bd6a4
// Address: 0x1bd6a4 - 0x1bd6d4
void entry_001bd6a4_0x1bd6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd6a4_0x1bd6a4");
#endif

    ctx->pc = 0x1bd6a4u;

    // 0x1bd6a4: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x1bd6a4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1bd6a8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1bd6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1bd6ac: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1bd6acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1bd6b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd6b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bd6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd6b8: 0x2010  mfhi        $a0
    ctx->pc = 0x1bd6b8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1bd6bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bd6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bd6c0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bd6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd6c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD6C4u;
    {
        const bool branch_taken_0x1bd6c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd6c4) {
            ctx->pc = 0x1BD6D4u;
            return;
        }
    }
    ctx->pc = 0x1BD6CCu;
    // 0x1bd6cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bd6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bd6d0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1bd6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1bd6d4u;
}
