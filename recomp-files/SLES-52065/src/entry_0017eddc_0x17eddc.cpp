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

// Function: entry_0017eddc
// Address: 0x17eddc - 0x17edec
void entry_0017eddc_0x17eddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eddc_0x17eddc");
#endif

    ctx->pc = 0x17eddcu;

    // 0x17eddc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EDDCu;
    {
        const bool branch_taken_0x17eddc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDDCu;
        // 0x17ede0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eddc) {
            ctx->pc = 0x17EDECu;
            return;
        }
    }
    ctx->pc = 0x17EDE4u;
    // 0x17ede4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17EDE4u;
    {
        const bool branch_taken_0x17ede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDE4u;
        // 0x17ede8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ede4) {
            ctx->pc = 0x17EDFCu;
            return;
        }
    }
    ctx->pc = 0x17EDECu;
}
