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

// Function: entry_00208e34
// Address: 0x208e34 - 0x208e4c
void entry_00208e34_0x208e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208e34_0x208e34");
#endif

    ctx->pc = 0x208e34u;

    // 0x208e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e38: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x208e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x208e3c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x208e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x208e40: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x208e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x208e44: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x208E44u;
    {
        const bool branch_taken_0x208e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E44u;
        // 0x208e48: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e44) {
            ctx->pc = 0x208F54u;
            return;
        }
    }
    ctx->pc = 0x208E4Cu;
}
