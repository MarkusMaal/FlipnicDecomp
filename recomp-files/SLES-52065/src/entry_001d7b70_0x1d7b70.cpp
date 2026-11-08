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

// Function: entry_001d7b70
// Address: 0x1d7b70 - 0x1d7ba0
void entry_001d7b70_0x1d7b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7b70_0x1d7b70");
#endif

    ctx->pc = 0x1d7b70u;

    // 0x1d7b70: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x1d7b70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1d7b74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7b78: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D7B78u;
    {
        const bool branch_taken_0x1d7b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B78u;
        // 0x1d7b7c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b78) {
            ctx->pc = 0x1D7BD8u;
            return;
        }
    }
    ctx->pc = 0x1D7B80u;
    // 0x1d7b80: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7B80u;
    {
        const bool branch_taken_0x1d7b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b80) {
            ctx->pc = 0x1D7B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7B80u;
            // 0x1d7b84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7BA0u;
            return;
        }
    }
    ctx->pc = 0x1D7B88u;
    // 0x1d7b88: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1D7B88u;
    {
        const bool branch_taken_0x1d7b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b88) {
            ctx->pc = 0x1D7B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7B88u;
            // 0x1d7b8c: 0x80850002  lb          $a1, 0x2($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7BB8u;
            return;
        }
    }
    ctx->pc = 0x1D7B90u;
    // 0x1d7b90: 0x1067000d  beq         $v1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x1D7B90u;
    {
        const bool branch_taken_0x1d7b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1D7B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B90u;
        // 0x1d7b94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b90) {
            ctx->pc = 0x1D7BC8u;
            return;
        }
    }
    ctx->pc = 0x1D7B98u;
    // 0x1d7b98: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1D7B98u;
    {
        const bool branch_taken_0x1d7b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b98) {
            ctx->pc = 0x1D7CF0u;
            return;
        }
    }
    ctx->pc = 0x1D7BA0u;
}
