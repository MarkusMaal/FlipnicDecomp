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

// Function: entry_0020a7e8
// Address: 0x20a7e8 - 0x20a804
void entry_0020a7e8_0x20a7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a7e8_0x20a7e8");
#endif

    ctx->pc = 0x20a7e8u;

label_20a7e8:
    // 0x20a7e8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x20a7e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20a7ec: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20A7ECu;
    {
        const bool branch_taken_0x20a7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7ECu;
        // 0x20a7f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7ec) {
            ctx->pc = 0x20A850u;
            return;
        }
    }
    ctx->pc = 0x20A7F4u;
    // 0x20a7f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20a7f8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20a7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20a7fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20A7FCu;
    {
        const bool branch_taken_0x20a7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7FCu;
        // 0x20a800: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7fc) {
            ctx->pc = 0x20A7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a7e8;
        }
    }
    ctx->pc = 0x20A804u;
}
