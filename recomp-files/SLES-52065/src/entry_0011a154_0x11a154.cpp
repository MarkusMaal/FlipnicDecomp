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

// Function: entry_0011a154
// Address: 0x11a154 - 0x11a184
void entry_0011a154_0x11a154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a154_0x11a154");
#endif

    ctx->pc = 0x11a154u;

    // 0x11a154: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x11a154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11a158: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11a158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11a15c: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x11A15Cu;
    {
        const bool branch_taken_0x11a15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11a15c) {
            ctx->pc = 0x11A234u;
            return;
        }
    }
    ctx->pc = 0x11A164u;
    // 0x11a164: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x11A164u;
    {
        const bool branch_taken_0x11a164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x11A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A164u;
        // 0x11a168: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a164) {
            ctx->pc = 0x11A1A4u;
            return;
        }
    }
    ctx->pc = 0x11A16Cu;
    // 0x11a16c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A16Cu;
    {
        const bool branch_taken_0x11a16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11a16c) {
            ctx->pc = 0x11A184u;
            return;
        }
    }
    ctx->pc = 0x11A174u;
    // 0x11a174: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A174u;
    {
        const bool branch_taken_0x11a174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x11a174) {
            ctx->pc = 0x11A184u;
            return;
        }
    }
    ctx->pc = 0x11A17Cu;
    // 0x11a17c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x11A17Cu;
    {
        const bool branch_taken_0x11a17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a17c) {
            ctx->pc = 0x11A2C0u;
            return;
        }
    }
    ctx->pc = 0x11A184u;
}
