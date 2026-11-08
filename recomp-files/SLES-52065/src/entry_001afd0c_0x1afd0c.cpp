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

// Function: entry_001afd0c
// Address: 0x1afd0c - 0x1afd24
void entry_001afd0c_0x1afd0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afd0c_0x1afd0c");
#endif

    ctx->pc = 0x1afd0cu;

    // 0x1afd0c: 0x2233023  subu        $a2, $s1, $v1
    ctx->pc = 0x1afd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1afd10: 0x1362023  subu        $a0, $t1, $s6
    ctx->pc = 0x1afd10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 22)));
    // 0x1afd14: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFD14u;
    {
        const bool branch_taken_0x1afd14 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1AFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD14u;
        // 0x1afd18: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd14) {
            ctx->pc = 0x1AFD24u;
            return;
        }
    }
    ctx->pc = 0x1AFD1Cu;
    // 0x1afd1c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1afd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1afd20: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1afd20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    ctx->pc = 0x1afd24u;
}
