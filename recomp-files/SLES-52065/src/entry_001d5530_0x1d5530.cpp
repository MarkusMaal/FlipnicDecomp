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

// Function: entry_001d5530
// Address: 0x1d5530 - 0x1d5560
void entry_001d5530_0x1d5530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5530_0x1d5530");
#endif

    ctx->pc = 0x1d5530u;

    // 0x1d5530: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1d5530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1d5534: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D5534u;
    {
        const bool branch_taken_0x1d5534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5534) {
            ctx->pc = 0x1D5538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5534u;
            // 0x1d5538: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D558Cu;
            return;
        }
    }
    ctx->pc = 0x1D553Cu;
    // 0x1d553c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1d553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1d5540: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x1d5540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d5544: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x1d5544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d5548: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5548u;
    {
        const bool branch_taken_0x1d5548 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5548u;
        // 0x1d554c: 0xac65002c  sw          $a1, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5548) {
            ctx->pc = 0x1D5560u;
            return;
        }
    }
    ctx->pc = 0x1D5550u;
    // 0x1d5550: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1d5550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1d5554: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d5554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d5558: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5558u;
    {
        const bool branch_taken_0x1d5558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5558u;
        // 0x1d555c: 0x8ee20550  lw          $v0, 0x550($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5558) {
            ctx->pc = 0x1D557Cu;
            return;
        }
    }
    ctx->pc = 0x1D5560u;
}
