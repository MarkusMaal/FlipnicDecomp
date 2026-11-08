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

// Function: entry_0011d28c
// Address: 0x11d28c - 0x11d2a8
void entry_0011d28c_0x11d28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d28c_0x11d28c");
#endif

    ctx->pc = 0x11d28cu;

    // 0x11d28c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d290: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D290u;
    {
        const bool branch_taken_0x11d290 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x11D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D290u;
        // 0x11d294: 0x24170100  addiu       $s7, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d290) {
            ctx->pc = 0x11D2A8u;
            return;
        }
    }
    ctx->pc = 0x11D298u;
    // 0x11d298: 0x8e110078  lw          $s1, 0x78($s0)
    ctx->pc = 0x11d298u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x11d29c: 0x3903c  dsll32      $s2, $v1, 0
    ctx->pc = 0x11d29cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d2a0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x11D2A0u;
    {
        const bool branch_taken_0x11d2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2A0u;
        // 0x11d2a4: 0x12903f  dsra32      $s2, $s2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2a0) {
            ctx->pc = 0x11D3E8u;
            return;
        }
    }
    ctx->pc = 0x11D2A8u;
}
