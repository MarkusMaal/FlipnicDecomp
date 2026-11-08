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

// Function: entry_0011aa60
// Address: 0x11aa60 - 0x11aa80
void entry_0011aa60_0x11aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aa60_0x11aa60");
#endif

    ctx->pc = 0x11aa60u;

    // 0x11aa60: 0xdd2021  addu        $a0, $a2, $sp
    ctx->pc = 0x11aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x11aa64: 0x80a20104  lb          $v0, 0x104($a1)
    ctx->pc = 0x11aa64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x11aa68: 0xa0820050  sb          $v0, 0x50($a0)
    ctx->pc = 0x11aa68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x11aa6c: 0x80a20104  lb          $v0, 0x104($a1)
    ctx->pc = 0x11aa6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x11aa70: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AA70u;
    {
        const bool branch_taken_0x11aa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11aa70) {
            ctx->pc = 0x11AA80u;
            return;
        }
    }
    ctx->pc = 0x11AA78u;
    // 0x11aa78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11AA78u;
    {
        const bool branch_taken_0x11aa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA78u;
        // 0x11aa7c: 0xa0800051  sb          $zero, 0x51($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa78) {
            ctx->pc = 0x11AA90u;
            return;
        }
    }
    ctx->pc = 0x11AA80u;
}
