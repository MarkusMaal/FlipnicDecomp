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

// Function: entry_00108a54
// Address: 0x108a54 - 0x108a70
void entry_00108a54_0x108a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108a54_0x108a54");
#endif

    ctx->pc = 0x108a54u;

    // 0x108a54: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x108a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108a58: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x108a58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108a5c: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x108A5Cu;
    {
        const bool branch_taken_0x108a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x108a5c) {
            ctx->pc = 0x108A70u;
            return;
        }
    }
    ctx->pc = 0x108A64u;
    // 0x108a64: 0x84d10004  lh          $s1, 0x4($a2)
    ctx->pc = 0x108a64u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x108a68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x108A68u;
    {
        const bool branch_taken_0x108a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A68u;
        // 0x108a6c: 0x84d20002  lh          $s2, 0x2($a2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a68) {
            ctx->pc = 0x108A80u;
            return;
        }
    }
    ctx->pc = 0x108A70u;
}
