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

// Function: entry_001de740
// Address: 0x1de740 - 0x1de76c
void entry_001de740_0x1de740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de740_0x1de740");
#endif

    ctx->pc = 0x1de740u;

    // 0x1de740: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1de740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1de744: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1de744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1de748: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1de748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1de74c: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x1de74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1de750: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1de750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1de754: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1de754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1de758: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1de758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1de75c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1de75cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1de760: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1de760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de764: 0x54a20001  bnel        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE764u;
    {
        const bool branch_taken_0x1de764 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de764) {
            ctx->pc = 0x1DE768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE764u;
            // 0x1de768: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE76Cu;
            return;
        }
    }
    ctx->pc = 0x1DE76Cu;
}
