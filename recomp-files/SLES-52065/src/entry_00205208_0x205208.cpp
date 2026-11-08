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

// Function: entry_00205208
// Address: 0x205208 - 0x20522c
void entry_00205208_0x205208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205208_0x205208");
#endif

    ctx->pc = 0x205208u;

label_205208:
    // 0x205208: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x205208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20520c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x20520cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x205210: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x205210u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x205214: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x205214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x205218: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x205218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20521c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20521Cu;
    {
        const bool branch_taken_0x20521c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20521c) {
            ctx->pc = 0x205208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205208;
        }
    }
    ctx->pc = 0x205224u;
    // 0x205224: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x205224u;
    {
        const bool branch_taken_0x205224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205224u;
        // 0x205228: 0x1041023  subu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205224) {
            ctx->pc = 0x205248u;
            return;
        }
    }
    ctx->pc = 0x20522Cu;
}
