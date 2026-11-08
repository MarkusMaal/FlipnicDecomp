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

// Function: entry_0011d324
// Address: 0x11d324 - 0x11d340
void entry_0011d324_0x11d324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d324_0x11d324");
#endif

    ctx->pc = 0x11d324u;

    // 0x11d324: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d328: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D328u;
    {
        const bool branch_taken_0x11d328 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x11D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D328u;
        // 0x11d32c: 0x24170080  addiu       $s7, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d328) {
            ctx->pc = 0x11D340u;
            return;
        }
    }
    ctx->pc = 0x11D330u;
    // 0x11d330: 0x8e110078  lw          $s1, 0x78($s0)
    ctx->pc = 0x11d330u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x11d334: 0x3903c  dsll32      $s2, $v1, 0
    ctx->pc = 0x11d334u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d338: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x11D338u;
    {
        const bool branch_taken_0x11d338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D338u;
        // 0x11d33c: 0x12903f  dsra32      $s2, $s2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d338) {
            ctx->pc = 0x11D3E8u;
            return;
        }
    }
    ctx->pc = 0x11D340u;
}
