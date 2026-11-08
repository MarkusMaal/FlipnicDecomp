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

// Function: entry_001d7c18
// Address: 0x1d7c18 - 0x1d7c48
void entry_001d7c18_0x1d7c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7c18_0x1d7c18");
#endif

    ctx->pc = 0x1d7c18u;

    // 0x1d7c18: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x1d7c18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1d7c1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7c20: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D7C20u;
    {
        const bool branch_taken_0x1d7c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C20u;
        // 0x1d7c24: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c20) {
            ctx->pc = 0x1D7C80u;
            return;
        }
    }
    ctx->pc = 0x1D7C28u;
    // 0x1d7c28: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7C28u;
    {
        const bool branch_taken_0x1d7c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c28) {
            ctx->pc = 0x1D7C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7C28u;
            // 0x1d7c2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7C48u;
            return;
        }
    }
    ctx->pc = 0x1D7C30u;
    // 0x1d7c30: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1D7C30u;
    {
        const bool branch_taken_0x1d7c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c30) {
            ctx->pc = 0x1D7C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7C30u;
            // 0x1d7c34: 0x80850002  lb          $a1, 0x2($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7C60u;
            return;
        }
    }
    ctx->pc = 0x1D7C38u;
    // 0x1d7c38: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D7C38u;
    {
        const bool branch_taken_0x1d7c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D7C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C38u;
        // 0x1d7c3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c38) {
            ctx->pc = 0x1D7C70u;
            return;
        }
    }
    ctx->pc = 0x1D7C40u;
    // 0x1d7c40: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1D7C40u;
    {
        const bool branch_taken_0x1d7c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c40) {
            ctx->pc = 0x1D7CF0u;
            return;
        }
    }
    ctx->pc = 0x1D7C48u;
}
