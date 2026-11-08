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

// Function: entry_001ed448
// Address: 0x1ed448 - 0x1ed458
void entry_001ed448_0x1ed448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed448_0x1ed448");
#endif

    ctx->pc = 0x1ed448u;

    // 0x1ed448: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED448u;
    {
        const bool branch_taken_0x1ed448 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED448u;
        // 0x1ed44c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed448) {
            ctx->pc = 0x1ED458u;
            return;
        }
    }
    ctx->pc = 0x1ED450u;
    // 0x1ed450: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ED450u;
    {
        const bool branch_taken_0x1ed450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED450u;
        // 0x1ed454: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed450) {
            ctx->pc = 0x1ED45Cu;
            return;
        }
    }
    ctx->pc = 0x1ED458u;
}
