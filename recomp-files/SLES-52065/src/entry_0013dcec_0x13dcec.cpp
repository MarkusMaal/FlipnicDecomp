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

// Function: entry_0013dcec
// Address: 0x13dcec - 0x13dd04
void entry_0013dcec_0x13dcec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dcec_0x13dcec");
#endif

    ctx->pc = 0x13dcecu;

    // 0x13dcec: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x13dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x13dcf0: 0xa2082b  sltu        $at, $a1, $v0
    ctx->pc = 0x13dcf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13dcf4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DCF4u;
    {
        const bool branch_taken_0x13dcf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCF4u;
        // 0x13dcf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dcf4) {
            ctx->pc = 0x13DD04u;
            return;
        }
    }
    ctx->pc = 0x13DCFCu;
    // 0x13dcfc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13DCFCu;
    {
        const bool branch_taken_0x13dcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCFCu;
        // 0x13dd00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dcfc) {
            ctx->pc = 0x13DD3Cu;
            return;
        }
    }
    ctx->pc = 0x13DD04u;
}
