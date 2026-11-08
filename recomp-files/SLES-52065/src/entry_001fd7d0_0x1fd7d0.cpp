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

// Function: entry_001fd7d0
// Address: 0x1fd7d0 - 0x1fd7e0
void entry_001fd7d0_0x1fd7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd7d0_0x1fd7d0");
#endif

    ctx->pc = 0x1fd7d0u;

    // 0x1fd7d0: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x1fd7d0u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1fd7d4: 0x1012  mflo        $v0
    ctx->pc = 0x1fd7d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1fd7d8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1FD7D8u;
    {
        const bool branch_taken_0x1fd7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7D8u;
        // 0x1fd7dc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7d8) {
            ctx->pc = 0x1FD880u;
            return;
        }
    }
    ctx->pc = 0x1FD7E0u;
}
