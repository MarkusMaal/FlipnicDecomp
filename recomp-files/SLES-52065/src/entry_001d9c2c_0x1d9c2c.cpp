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

// Function: entry_001d9c2c
// Address: 0x1d9c2c - 0x1d9c60
void entry_001d9c2c_0x1d9c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9c2c_0x1d9c2c");
#endif

    ctx->pc = 0x1d9c2cu;

    // 0x1d9c2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D9C2Cu;
    {
        const bool branch_taken_0x1d9c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C2Cu;
        // 0x1d9c30: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c2c) {
            ctx->pc = 0x1D9C60u;
            return;
        }
    }
    ctx->pc = 0x1D9C34u;
    // 0x1d9c34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d9c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9c38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d9c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9c3c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d9c3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d9c40: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d9c40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9c44: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1d9c44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9c48: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1d9c48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9c4c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1d9c4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9c50: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1d9c50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d9c54: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1d9c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d9c58: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1D9C58u;
    ctx->pc = 0x1D9C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9C58u;
    // 0x1d9c5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9C60u;
}
