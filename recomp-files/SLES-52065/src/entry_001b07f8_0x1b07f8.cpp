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

// Function: entry_001b07f8
// Address: 0x1b07f8 - 0x1b0824
void entry_001b07f8_0x1b07f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b07f8_0x1b07f8");
#endif

    ctx->pc = 0x1b07f8u;

    // 0x1b07f8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b07fc: 0xdc462818  ld          $a2, 0x2818($v0)
    ctx->pc = 0x1b07fcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 10264)));
    // 0x1b0800: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b0800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0804: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b0804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0808: 0x3c02540b  lui         $v0, 0x540B
    ctx->pc = 0x1b0808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21515 << 16));
    // 0x1b080c: 0x3442e3ff  ori         $v0, $v0, 0xE3FF
    ctx->pc = 0x1b080cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58367);
    // 0x1b0810: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b0810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b0814: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x1b0814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b0818: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0818u;
    {
        const bool branch_taken_0x1b0818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0818u;
        // 0x1b081c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0818) {
            ctx->pc = 0x1B0824u;
            return;
        }
    }
    ctx->pc = 0x1B0820u;
    // 0x1b0820: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b0820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b0824u;
}
