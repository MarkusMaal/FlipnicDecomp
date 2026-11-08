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

// Function: entry_001d0048
// Address: 0x1d0048 - 0x1d0070
void entry_001d0048_0x1d0048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0048_0x1d0048");
#endif

    ctx->pc = 0x1d0048u;

    // 0x1d0048: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D0048u;
    {
        const bool branch_taken_0x1d0048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0048u;
        // 0x1d004c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0048) {
            ctx->pc = 0x1D0078u;
            return;
        }
    }
    ctx->pc = 0x1D0050u;
    // 0x1d0050: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0050u;
    {
        const bool branch_taken_0x1d0050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0050) {
            ctx->pc = 0x1D0078u;
            return;
        }
    }
    ctx->pc = 0x1D0058u;
    // 0x1d0058: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d005c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D005Cu;
    {
        const bool branch_taken_0x1d005c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d005c) {
            ctx->pc = 0x1D0078u;
            return;
        }
    }
    ctx->pc = 0x1D0064u;
    // 0x1d0064: 0xa2230060  sb          $v1, 0x60($s1)
    ctx->pc = 0x1d0064u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0068u;
    {
        const bool branch_taken_0x1d0068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0068u;
        // 0x1d006c: 0xa2230061  sb          $v1, 0x61($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0068) {
            ctx->pc = 0x1D007Cu;
            return;
        }
    }
    ctx->pc = 0x1D0070u;
}
