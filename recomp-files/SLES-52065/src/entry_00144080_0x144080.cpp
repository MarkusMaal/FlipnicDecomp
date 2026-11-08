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

// Function: entry_00144080
// Address: 0x144080 - 0x1440a4
void entry_00144080_0x144080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144080_0x144080");
#endif

    ctx->pc = 0x144080u;

    // 0x144080: 0xaed70000  sw          $s7, 0x0($s6)
    ctx->pc = 0x144080u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 23));
    // 0x144084: 0xafb00090  sw          $s0, 0x90($sp)
    ctx->pc = 0x144084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 16));
    // 0x144088: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x144088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14408c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x14408cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x144090: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x144090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x144094: 0xb4082b  sltu        $at, $a1, $s4
    ctx->pc = 0x144094u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x144098: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x144098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14409c: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x14409Cu;
    {
        const bool branch_taken_0x14409c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1440A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14409Cu;
        // 0x1440a0: 0xa31821  addu        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14409c) {
            ctx->pc = 0x14410Cu;
            return;
        }
    }
    ctx->pc = 0x1440A4u;
}
