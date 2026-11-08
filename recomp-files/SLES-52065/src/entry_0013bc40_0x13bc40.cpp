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

// Function: entry_0013bc40
// Address: 0x13bc40 - 0x13bc64
void entry_0013bc40_0x13bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bc40_0x13bc40");
#endif

    ctx->pc = 0x13bc40u;

    // 0x13bc40: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x13bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x13bc44: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x13bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x13bc48: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13bc4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13bc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13bc50: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x13bc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x13bc54: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BC54u;
    {
        const bool branch_taken_0x13bc54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC54u;
        // 0x13bc58: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc54) {
            ctx->pc = 0x13BC64u;
            return;
        }
    }
    ctx->pc = 0x13BC5Cu;
    // 0x13bc5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13BC5Cu;
    {
        const bool branch_taken_0x13bc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC5Cu;
        // 0x13bc60: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc5c) {
            ctx->pc = 0x13BC68u;
            return;
        }
    }
    ctx->pc = 0x13BC64u;
}
