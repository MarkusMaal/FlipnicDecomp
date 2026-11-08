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

// Function: entry_00108488
// Address: 0x108488 - 0x10849c
void entry_00108488_0x108488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108488_0x108488");
#endif

    ctx->pc = 0x108488u;

    // 0x108488: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x108488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x10848c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10848Cu;
    {
        const bool branch_taken_0x10848c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10848Cu;
        // 0x108490: 0x58100  sll         $s0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10848c) {
            ctx->pc = 0x10849Cu;
            return;
        }
    }
    ctx->pc = 0x108494u;
    // 0x108494: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x108494u;
    {
        const bool branch_taken_0x108494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108494u;
        // 0x108498: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108494) {
            ctx->pc = 0x1086C0u;
            return;
        }
    }
    ctx->pc = 0x10849Cu;
}
