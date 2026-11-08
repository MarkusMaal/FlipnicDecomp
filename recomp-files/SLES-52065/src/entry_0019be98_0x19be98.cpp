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

// Function: entry_0019be98
// Address: 0x19be98 - 0x19bed4
void entry_0019be98_0x19be98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019be98_0x19be98");
#endif

    ctx->pc = 0x19be98u;

    // 0x19be98: 0xae200690  sw          $zero, 0x690($s1)
    ctx->pc = 0x19be98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1680), GPR_U32(ctx, 0));
    // 0x19be9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19bea0: 0x8e240928  lw          $a0, 0x928($s1)
    ctx->pc = 0x19bea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
    // 0x19bea4: 0x1082003c  beq         $a0, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x19BEA4u;
    {
        const bool branch_taken_0x19bea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bea4) {
            ctx->pc = 0x19BF98u;
            return;
        }
    }
    ctx->pc = 0x19BEACu;
    // 0x19beac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19beacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19beb0: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x19BEB0u;
    {
        const bool branch_taken_0x19beb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19beb0) {
            ctx->pc = 0x19BF58u;
            return;
        }
    }
    ctx->pc = 0x19BEB8u;
    // 0x19beb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bebc: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19BEBCu;
    {
        const bool branch_taken_0x19bebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bebc) {
            ctx->pc = 0x19BF10u;
            return;
        }
    }
    ctx->pc = 0x19BEC4u;
    // 0x19bec4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BEC4u;
    {
        const bool branch_taken_0x19bec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bec4) {
            ctx->pc = 0x19BED4u;
            return;
        }
    }
    ctx->pc = 0x19BECCu;
    // 0x19becc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x19BECCu;
    {
        const bool branch_taken_0x19becc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BECCu;
        // 0x19bed0: 0xae200930  sw          $zero, 0x930($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19becc) {
            ctx->pc = 0x19BF9Cu;
            return;
        }
    }
    ctx->pc = 0x19BED4u;
}
