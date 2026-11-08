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

// Function: entry_001dcbf0
// Address: 0x1dcbf0 - 0x1dcc1c
void entry_001dcbf0_0x1dcbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcbf0_0x1dcbf0");
#endif

    ctx->pc = 0x1dcbf0u;

    // 0x1dcbf0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1dcbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dcbf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dcbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dcbf8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCBF8u;
    {
        const bool branch_taken_0x1dcbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcbf8) {
            ctx->pc = 0x1DCBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCBF8u;
            // 0x1dcbfc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCC1Cu;
            return;
        }
    }
    ctx->pc = 0x1DCC00u;
    // 0x1dcc00: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1dcc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1dcc04: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCC04u;
    {
        const bool branch_taken_0x1dcc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1dcc04) {
            ctx->pc = 0x1DCC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCC04u;
            // 0x1dcc08: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCC1Cu;
            return;
        }
    }
    ctx->pc = 0x1DCC0Cu;
    // 0x1dcc0c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1dcc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1dcc10: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dcc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dcc14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1dcc14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1dcc18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dcc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x1dcc1cu;
}
