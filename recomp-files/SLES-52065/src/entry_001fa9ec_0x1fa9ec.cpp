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

// Function: entry_001fa9ec
// Address: 0x1fa9ec - 0x1faa04
void entry_001fa9ec_0x1fa9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa9ec_0x1fa9ec");
#endif

    ctx->pc = 0x1fa9ecu;

    // 0x1fa9ec: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fa9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fa9f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa9f4: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1fa9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1fa9f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fa9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa9fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA9FCu;
    {
        const bool branch_taken_0x1fa9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9FCu;
        // 0x1faa00: 0x3063007f  andi        $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9fc) {
            ctx->pc = 0x1FAA18u;
            return;
        }
    }
    ctx->pc = 0x1FAA04u;
}
