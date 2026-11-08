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

// Function: entry_001d52cc
// Address: 0x1d52cc - 0x1d52f8
void entry_001d52cc_0x1d52cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d52cc_0x1d52cc");
#endif

    ctx->pc = 0x1d52ccu;

    // 0x1d52cc: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x1D52CCu;
    {
        const bool branch_taken_0x1d52cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52CCu;
        // 0x1d52d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52cc) {
            ctx->pc = 0x1D52F8u;
            return;
        }
    }
    ctx->pc = 0x1D52D4u;
    // 0x1d52d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d52d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d52d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d52d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d52dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d52dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d52e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d52e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d52e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d52e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d52e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d52e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d52ec: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1D52ECu;
    ctx->pc = 0x1D52F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52ECu;
    // 0x1d52f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D52F4u;
    // 0x1d52f4: 0x0  nop
    ctx->pc = 0x1d52f4u;
    // NOP
    ctx->pc = 0x1d52f8u;
}
