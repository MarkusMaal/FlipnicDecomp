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

// Function: entry_001a6ef0
// Address: 0x1a6ef0 - 0x1a6f10
void entry_001a6ef0_0x1a6ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6ef0_0x1a6ef0");
#endif

    ctx->pc = 0x1a6ef0u;

    // 0x1a6ef0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a6ef4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6ef8: 0x1045000d  beq         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A6EF8u;
    {
        const bool branch_taken_0x1a6ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EF8u;
        // 0x1a6efc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ef8) {
            ctx->pc = 0x1A6F30u;
            return;
        }
    }
    ctx->pc = 0x1A6F00u;
    // 0x1a6f00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6F00u;
    {
        const bool branch_taken_0x1a6f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f00) {
            ctx->pc = 0x1A6F10u;
            return;
        }
    }
    ctx->pc = 0x1A6F08u;
    // 0x1a6f08: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1A6F08u;
    {
        const bool branch_taken_0x1a6f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f08) {
            ctx->pc = 0x1A6F88u;
            return;
        }
    }
    ctx->pc = 0x1A6F10u;
}
