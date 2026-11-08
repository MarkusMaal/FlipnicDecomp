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

// Function: entry_00140720
// Address: 0x140720 - 0x140754
void entry_00140720_0x140720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140720_0x140720");
#endif

    ctx->pc = 0x140720u;

    // 0x140720: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x140720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x140724: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x140724u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x140728: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x140728u;
    {
        const bool branch_taken_0x140728 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140728u;
        // 0x14072c: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140728) {
            ctx->pc = 0x14079Cu;
            return;
        }
    }
    ctx->pc = 0x140730u;
    // 0x140730: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x140730u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x140734: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x140734u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140738: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x140738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14073c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x14073cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x140740: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x140740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x140744: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x140744u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x140748: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x140748u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14074c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14074Cu;
    {
        const bool branch_taken_0x14074c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14074Cu;
        // 0x140750: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14074c) {
            ctx->pc = 0x140770u;
            return;
        }
    }
    ctx->pc = 0x140754u;
}
