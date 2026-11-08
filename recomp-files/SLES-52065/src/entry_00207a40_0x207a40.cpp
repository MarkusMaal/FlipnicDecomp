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

// Function: entry_00207a40
// Address: 0x207a40 - 0x207a58
void entry_00207a40_0x207a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207a40_0x207a40");
#endif

    ctx->pc = 0x207a40u;

    // 0x207a40: 0x13000066  beqz        $t8, . + 4 + (0x66 << 2)
    ctx->pc = 0x207A40u;
    {
        const bool branch_taken_0x207a40 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A40u;
        // 0x207a44: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a40) {
            ctx->pc = 0x207BDCu;
            return;
        }
    }
    ctx->pc = 0x207A48u;
    // 0x207a48: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x207a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x207a4c: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x207a4cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x207a50: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x207A50u;
    {
        const bool branch_taken_0x207a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A50u;
        // 0x207a54: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a50) {
            ctx->pc = 0x207BD8u;
            return;
        }
    }
    ctx->pc = 0x207A58u;
}
