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

// Function: entry_0011a184
// Address: 0x11a184 - 0x11a1a4
void entry_0011a184_0x11a184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a184_0x11a184");
#endif

    ctx->pc = 0x11a184u;

    // 0x11a184: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x11a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x11a188: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x11a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x11a18c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a190: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x11a190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x11a194: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A194u;
    {
        const bool branch_taken_0x11a194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A194u;
        // 0x11a198: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a194) {
            ctx->pc = 0x11A1A4u;
            return;
        }
    }
    ctx->pc = 0x11A19Cu;
    // 0x11a19c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x11A19Cu;
    {
        const bool branch_taken_0x11a19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a19c) {
            ctx->pc = 0x11A2C0u;
            return;
        }
    }
    ctx->pc = 0x11A1A4u;
}
