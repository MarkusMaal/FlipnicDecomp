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

// Function: entry_001718b0
// Address: 0x1718b0 - 0x1718d4
void entry_001718b0_0x1718b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001718b0_0x1718b0");
#endif

    ctx->pc = 0x1718b0u;

    // 0x1718b0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1718b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1718b4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1718b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1718b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1718b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1718bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1718c0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1718c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1718c4: 0xa45821  addu        $t3, $a1, $a0
    ctx->pc = 0x1718c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1718c8: 0x85640004  lh          $a0, 0x4($t3)
    ctx->pc = 0x1718c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1718cc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1718CCu;
    {
        const bool branch_taken_0x1718cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1718D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718CCu;
        // 0x1718d0: 0x2485ffff  addiu       $a1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718cc) {
            ctx->pc = 0x17192Cu;
            return;
        }
    }
    ctx->pc = 0x1718D4u;
}
