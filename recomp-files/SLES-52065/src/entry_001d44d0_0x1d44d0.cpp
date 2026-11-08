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

// Function: entry_001d44d0
// Address: 0x1d44d0 - 0x1d44f0
void entry_001d44d0_0x1d44d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d44d0_0x1d44d0");
#endif

    ctx->pc = 0x1d44d0u;

    // 0x1d44d0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1d44d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1d44d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d44d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d44d8: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x1d44d8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x1d44dc: 0x471014  dsllv       $v0, $a3, $v0
    ctx->pc = 0x1d44dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x1d44e0: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1d44e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1d44e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D44E4u;
    {
        const bool branch_taken_0x1d44e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D44E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44E4u;
        // 0x1d44e8: 0x2ca30030  sltiu       $v1, $a1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44e4) {
            ctx->pc = 0x1D44F0u;
            return;
        }
    }
    ctx->pc = 0x1D44ECu;
    // 0x1d44ec: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1d44ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    ctx->pc = 0x1d44f0u;
}
