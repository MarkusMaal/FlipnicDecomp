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

// Function: entry_001b8560
// Address: 0x1b8560 - 0x1b8574
void entry_001b8560_0x1b8560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8560_0x1b8560");
#endif

    ctx->pc = 0x1b8560u;

    // 0x1b8560: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1b8560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1b8564: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1b8564u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1b8568: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1b8568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1b856c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B856Cu;
    {
        const bool branch_taken_0x1b856c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B856Cu;
        // 0x1b8570: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b856c) {
            ctx->pc = 0x1B85D8u;
            return;
        }
    }
    ctx->pc = 0x1B8574u;
}
