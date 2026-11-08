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

// Function: entry_001c701c
// Address: 0x1c701c - 0x1c7034
void entry_001c701c_0x1c701c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c701c_0x1c701c");
#endif

    ctx->pc = 0x1c701cu;

    // 0x1c701c: 0x8e03018c  lw          $v1, 0x18C($s0)
    ctx->pc = 0x1c701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x1c7020: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c7020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7024: 0x146201d7  bne         $v1, $v0, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x1C7024u;
    {
        const bool branch_taken_0x1c7024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7024u;
        // 0x1c7028: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7024) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C702Cu;
    // 0x1c702c: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x1C702Cu;
    {
        const bool branch_taken_0x1c702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C702Cu;
        // 0x1c7030: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c702c) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7034u;
}
