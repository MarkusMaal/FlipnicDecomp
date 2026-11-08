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

// Function: entry_00202500
// Address: 0x202500 - 0x202514
void entry_00202500_0x202500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202500_0x202500");
#endif

    ctx->pc = 0x202500u;

    // 0x202500: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x202500u;
    {
        const bool branch_taken_0x202500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x202504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202500u;
        // 0x202504: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202500) {
            ctx->pc = 0x202514u;
            return;
        }
    }
    ctx->pc = 0x202508u;
    // 0x202508: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x202508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x20250c: 0x14820048  bne         $a0, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x20250Cu;
    {
        const bool branch_taken_0x20250c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20250c) {
            ctx->pc = 0x202630u;
            return;
        }
    }
    ctx->pc = 0x202514u;
}
