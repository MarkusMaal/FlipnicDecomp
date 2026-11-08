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

// Function: entry_00208c48
// Address: 0x208c48 - 0x208c74
void entry_00208c48_0x208c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208c48_0x208c48");
#endif

    ctx->pc = 0x208c48u;

label_208c48:
    // 0x208c48: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x208c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x208c4c: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x208c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x208c50: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x208c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x208c54: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x208c54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x208c58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x208c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x208c5c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x208c5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x208c60: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x208c60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x208c64: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x208C64u;
    {
        const bool branch_taken_0x208c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C64u;
        // 0x208c68: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c64) {
            ctx->pc = 0x208C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208c48;
        }
    }
    ctx->pc = 0x208C6Cu;
    // 0x208c6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x208C6Cu;
    {
        const bool branch_taken_0x208c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C6Cu;
        // 0x208c70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c6c) {
            ctx->pc = 0x208C84u;
            return;
        }
    }
    ctx->pc = 0x208C74u;
}
