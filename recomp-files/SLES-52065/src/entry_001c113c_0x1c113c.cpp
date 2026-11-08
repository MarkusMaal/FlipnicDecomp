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

// Function: entry_001c113c
// Address: 0x1c113c - 0x1c1154
void entry_001c113c_0x1c113c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c113c_0x1c113c");
#endif

    ctx->pc = 0x1c113cu;

    // 0x1c113c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c113cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c1140: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x1c1140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
    // 0x1c1144: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1144u;
    {
        const bool branch_taken_0x1c1144 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1144u;
        // 0x1c1148: 0x210ff  dsra32      $v0, $v0, 3 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1144) {
            ctx->pc = 0x1C1154u;
            return;
        }
    }
    ctx->pc = 0x1C114Cu;
    // 0x1c114c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1c114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1c1150: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1c1150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    ctx->pc = 0x1c1154u;
}
