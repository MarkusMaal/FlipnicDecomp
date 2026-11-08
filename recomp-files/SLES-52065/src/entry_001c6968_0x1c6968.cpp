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

// Function: entry_001c6968
// Address: 0x1c6968 - 0x1c6988
void entry_001c6968_0x1c6968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6968_0x1c6968");
#endif

    ctx->pc = 0x1c6968u;

    // 0x1c6968: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c6968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c696c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c6970: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6970u;
    {
        const bool branch_taken_0x1c6970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6970u;
        // 0x1c6974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6970) {
            ctx->pc = 0x1C69B8u;
            return;
        }
    }
    ctx->pc = 0x1C6978u;
    // 0x1c6978: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6978u;
    {
        const bool branch_taken_0x1c6978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6978u;
        // 0x1c697c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6978) {
            ctx->pc = 0x1C6988u;
            return;
        }
    }
    ctx->pc = 0x1C6980u;
    // 0x1c6980: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C6980u;
    {
        const bool branch_taken_0x1c6980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6980u;
        // 0x1c6984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6980) {
            ctx->pc = 0x1C69D0u;
            return;
        }
    }
    ctx->pc = 0x1C6988u;
}
