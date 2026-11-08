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

// Function: entry_001436ec
// Address: 0x1436ec - 0x1436fc
void entry_001436ec_0x1436ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001436ec_0x1436ec");
#endif

    ctx->pc = 0x1436ecu;

    // 0x1436ec: 0x0  nop
    ctx->pc = 0x1436ecu;
    // NOP
    // 0x1436f0: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x1436f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1436f4: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x1436F4u;
    {
        const bool branch_taken_0x1436f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1436F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436F4u;
        // 0x1436f8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1436f4) {
            ctx->pc = 0x14380Cu;
            return;
        }
    }
    ctx->pc = 0x1436FCu;
}
