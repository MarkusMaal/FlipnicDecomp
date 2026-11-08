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

// Function: entry_0012e9e0
// Address: 0x12e9e0 - 0x12ea04
void entry_0012e9e0_0x12e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e9e0_0x12e9e0");
#endif

    ctx->pc = 0x12e9e0u;

    // 0x12e9e0: 0xaed70000  sw          $s7, 0x0($s6)
    ctx->pc = 0x12e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 23));
    // 0x12e9e4: 0xafb00090  sw          $s0, 0x90($sp)
    ctx->pc = 0x12e9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 16));
    // 0x12e9e8: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x12e9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x12e9ec: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x12e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12e9f0: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x12e9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12e9f4: 0xd4082b  sltu        $at, $a2, $s4
    ctx->pc = 0x12e9f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x12e9f8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12e9fc: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x12E9FCu;
    {
        const bool branch_taken_0x12e9fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9FCu;
        // 0x12ea00: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9fc) {
            ctx->pc = 0x12EA6Cu;
            return;
        }
    }
    ctx->pc = 0x12EA04u;
}
