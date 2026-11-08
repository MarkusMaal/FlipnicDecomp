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

// Function: entry_001d3a20
// Address: 0x1d3a20 - 0x1d3a50
void entry_001d3a20_0x1d3a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3a20_0x1d3a20");
#endif

    ctx->pc = 0x1d3a20u;

label_1d3a20:
    // 0x1d3a20: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1d3a20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x1d3a24: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d3a28: 0x24e70480  addiu       $a3, $a3, 0x480
    ctx->pc = 0x1d3a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1152));
    // 0x1d3a2c: 0xa6182a  slt         $v1, $a1, $a2
    ctx->pc = 0x1d3a2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d3a30: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3A30u;
    {
        const bool branch_taken_0x1d3a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A30u;
        // 0x1d3a34: 0x472021  addu        $a0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a30) {
            ctx->pc = 0x1D3A50u;
            return;
        }
    }
    ctx->pc = 0x1D3A38u;
    // 0x1d3a38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d3a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d3a3c: 0x5455fff8  bnel        $v0, $s5, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D3A3Cu;
    {
        const bool branch_taken_0x1d3a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1d3a3c) {
            ctx->pc = 0x1D3A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3A3Cu;
            // 0x1d3a40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3a20;
        }
    }
    ctx->pc = 0x1D3A44u;
    // 0x1d3a44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3a48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d3a48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a4c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1d3a50u;
}
