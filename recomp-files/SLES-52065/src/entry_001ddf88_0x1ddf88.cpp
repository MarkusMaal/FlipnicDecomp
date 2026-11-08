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

// Function: entry_001ddf88
// Address: 0x1ddf88 - 0x1ddfc8
void entry_001ddf88_0x1ddf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddf88_0x1ddf88");
#endif

    ctx->pc = 0x1ddf88u;

    // 0x1ddf88: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1ddf88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1ddf8c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1DDF8Cu;
    {
        const bool branch_taken_0x1ddf8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF8Cu;
        // 0x1ddf90: 0x263100e8  addiu       $s1, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf8c) {
            ctx->pc = 0x1DDF10u;
            return;
        }
    }
    ctx->pc = 0x1DDF94u;
    // 0x1ddf94: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x1DDF94u;
    {
        const bool branch_taken_0x1ddf94 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF94u;
        // 0x1ddf98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf94) {
            ctx->pc = 0x1DDFC8u;
            return;
        }
    }
    ctx->pc = 0x1DDF9Cu;
    // 0x1ddf9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddf9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddfa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ddfa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddfa4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ddfa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ddfa8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ddfa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddfac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ddfacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ddfb0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ddfb0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ddfb4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1ddfb4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ddfb8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1ddfb8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddfbc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ddfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ddfc0: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1DDFC0u;
    ctx->pc = 0x1DDFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDFC0u;
    // 0x1ddfc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DDFC8u;
}
