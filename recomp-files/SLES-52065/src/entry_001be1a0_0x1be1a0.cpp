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

// Function: entry_001be1a0
// Address: 0x1be1a0 - 0x1be1d4
void entry_001be1a0_0x1be1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be1a0_0x1be1a0");
#endif

    ctx->pc = 0x1be1a0u;

    // 0x1be1a0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1be1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1be1a4: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1be1a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1be1a8: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BE1A8u;
    {
        const bool branch_taken_0x1be1a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1A8u;
        // 0x1be1ac: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1a8) {
            ctx->pc = 0x1BE21Cu;
            return;
        }
    }
    ctx->pc = 0x1BE1B0u;
    // 0x1be1b0: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x1be1b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1be1b4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1be1b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be1b8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1be1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1be1bc: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1be1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1be1c0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1be1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1be1c4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1be1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1be1c8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1be1c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be1cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE1CCu;
    {
        const bool branch_taken_0x1be1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1CCu;
        // 0x1be1d0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1cc) {
            ctx->pc = 0x1BE1F0u;
            return;
        }
    }
    ctx->pc = 0x1BE1D4u;
}
