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

// Function: entry_00208144
// Address: 0x208144 - 0x208154
void entry_00208144_0x208144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208144_0x208144");
#endif

    ctx->pc = 0x208144u;

    // 0x208144: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208144u;
    {
        const bool branch_taken_0x208144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208144u;
        // 0x208148: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208144) {
            ctx->pc = 0x208160u;
            return;
        }
    }
    ctx->pc = 0x20814Cu;
    // 0x20814c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20814Cu;
    {
        const bool branch_taken_0x20814c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20814Cu;
        // 0x208150: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20814c) {
            ctx->pc = 0x208190u;
            return;
        }
    }
    ctx->pc = 0x208154u;
}
