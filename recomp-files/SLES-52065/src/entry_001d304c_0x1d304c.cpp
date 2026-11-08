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

// Function: entry_001d304c
// Address: 0x1d304c - 0x1d3088
void entry_001d304c_0x1d304c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d304c_0x1d304c");
#endif

    ctx->pc = 0x1d304cu;

label_1d304c:
    // 0x1d304c: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x1d304cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d3050: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D3050u;
    {
        const bool branch_taken_0x1d3050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3050u;
        // 0x1d3054: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3050) {
            ctx->pc = 0x1D3088u;
            return;
        }
    }
    ctx->pc = 0x1D3058u;
    // 0x1d3058: 0x24e603c0  addiu       $a2, $a3, 0x3C0
    ctx->pc = 0x1d3058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 960));
    // 0x1d305c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1d305cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d3060: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d3060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d3064: 0x0  nop
    ctx->pc = 0x1d3064u;
    // NOP
    // 0x1d3068: 0x5450fff8  bnel        $v0, $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D3068u;
    {
        const bool branch_taken_0x1d3068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1d3068) {
            ctx->pc = 0x1D306Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3068u;
            // 0x1d306c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D304Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d304c;
        }
    }
    ctx->pc = 0x1D3070u;
    // 0x1d3070: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d3070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d3074: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1d3074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d3078: 0x24422f18  addiu       $v0, $v0, 0x2F18
    ctx->pc = 0x1d3078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12056));
    // 0x1d307c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d307cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d3080: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d3080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d3084: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d3084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d3088u;
}
