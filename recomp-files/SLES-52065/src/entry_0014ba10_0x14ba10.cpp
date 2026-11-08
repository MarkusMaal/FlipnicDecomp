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

// Function: entry_0014ba10
// Address: 0x14ba10 - 0x14ba44
void entry_0014ba10_0x14ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ba10_0x14ba10");
#endif

    ctx->pc = 0x14ba10u;

    // 0x14ba10: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14ba14: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x14ba14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14ba18: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x14BA18u;
    {
        const bool branch_taken_0x14ba18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA18u;
        // 0x14ba1c: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba18) {
            ctx->pc = 0x14BA8Cu;
            return;
        }
    }
    ctx->pc = 0x14BA20u;
    // 0x14ba20: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x14ba20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14ba24: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x14ba24u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ba28: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x14ba28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14ba2c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x14ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14ba30: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x14ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14ba34: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x14ba34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x14ba38: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14ba38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ba3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14BA3Cu;
    {
        const bool branch_taken_0x14ba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA3Cu;
        // 0x14ba40: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba3c) {
            ctx->pc = 0x14BA60u;
            return;
        }
    }
    ctx->pc = 0x14BA44u;
}
