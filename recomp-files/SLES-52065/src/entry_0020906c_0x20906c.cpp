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

// Function: entry_0020906c
// Address: 0x20906c - 0x209080
void entry_0020906c_0x20906c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020906c_0x20906c");
#endif

    ctx->pc = 0x20906cu;

    // 0x20906c: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20906Cu;
    {
        const bool branch_taken_0x20906c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x20906c) {
            ctx->pc = 0x209070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20906Cu;
            // 0x209070: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209080u;
            return;
        }
    }
    ctx->pc = 0x209074u;
    // 0x209074: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x209074u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x209078: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x209078u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x20907c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x20907cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x209080u;
}
