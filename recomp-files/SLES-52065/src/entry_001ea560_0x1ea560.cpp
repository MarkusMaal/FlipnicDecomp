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

// Function: entry_001ea560
// Address: 0x1ea560 - 0x1ea574
void entry_001ea560_0x1ea560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea560_0x1ea560");
#endif

    ctx->pc = 0x1ea560u;

    // 0x1ea560: 0x8fb100dc  lw          $s1, 0xDC($sp)
    ctx->pc = 0x1ea560u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1ea564: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea568: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1ea568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ea56c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EA56Cu;
    {
        const bool branch_taken_0x1ea56c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA56Cu;
        // 0x1ea570: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea56c) {
            ctx->pc = 0x1EA598u;
            return;
        }
    }
    ctx->pc = 0x1EA574u;
}
