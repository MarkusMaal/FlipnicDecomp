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

// Function: entry_001d3cc4
// Address: 0x1d3cc4 - 0x1d3cf8
void entry_001d3cc4_0x1d3cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3cc4_0x1d3cc4");
#endif

    ctx->pc = 0x1d3cc4u;

label_1d3cc4:
    // 0x1d3cc4: 0xdc6b0000  ld          $t3, 0x0($v1)
    ctx->pc = 0x1d3cc4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d3cc8: 0xdc6c0008  ld          $t4, 0x8($v1)
    ctx->pc = 0x1d3cc8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d3ccc: 0xdc6d0010  ld          $t5, 0x10($v1)
    ctx->pc = 0x1d3cccu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d3cd0: 0xdc6e0018  ld          $t6, 0x18($v1)
    ctx->pc = 0x1d3cd0u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1d3cd4: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x1d3cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x1d3cd8: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x1d3cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x1d3cdc: 0xfc8d0010  sd          $t5, 0x10($a0)
    ctx->pc = 0x1d3cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 13));
    // 0x1d3ce0: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1d3ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1d3ce4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d3ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d3ce8: 0x0  nop
    ctx->pc = 0x1d3ce8u;
    // NOP
    // 0x1d3cec: 0x0  nop
    ctx->pc = 0x1d3cecu;
    // NOP
    // 0x1d3cf0: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D3CF0u;
    {
        const bool branch_taken_0x1d3cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CF0u;
        // 0x1d3cf4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cf0) {
            ctx->pc = 0x1D3CC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3cc4;
        }
    }
    ctx->pc = 0x1D3CF8u;
}
