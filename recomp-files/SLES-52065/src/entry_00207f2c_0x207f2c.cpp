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

// Function: entry_00207f2c
// Address: 0x207f2c - 0x207f44
void entry_00207f2c_0x207f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207f2c_0x207f2c");
#endif

    ctx->pc = 0x207f2cu;

    // 0x207f2c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207F2Cu;
    {
        const bool branch_taken_0x207f2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x207F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F2Cu;
        // 0x207f30: 0x2182f  dsubu       $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f2c) {
            ctx->pc = 0x207F44u;
            return;
        }
    }
    ctx->pc = 0x207F34u;
    // 0x207f34: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x207f34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x207f38: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x207f38u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x207f3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x207F3Cu;
    {
        const bool branch_taken_0x207f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F3Cu;
        // 0x207f40: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f3c) {
            ctx->pc = 0x207F54u;
            return;
        }
    }
    ctx->pc = 0x207F44u;
}
