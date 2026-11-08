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

// Function: entry_001fa490
// Address: 0x1fa490 - 0x1fa4b4
void entry_001fa490_0x1fa490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa490_0x1fa490");
#endif

    ctx->pc = 0x1fa490u;

label_1fa490:
    // 0x1fa490: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1fa490u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fa494: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1fa494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1fa498: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1fa498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1fa49c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fa49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fa4a0: 0x0  nop
    ctx->pc = 0x1fa4a0u;
    // NOP
    // 0x1fa4a4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FA4A4u;
    {
        const bool branch_taken_0x1fa4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa4a4) {
            ctx->pc = 0x1FA490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa490;
        }
    }
    ctx->pc = 0x1FA4ACu;
    // 0x1fa4ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA4ACu;
    {
        const bool branch_taken_0x1fa4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4ACu;
        // 0x1fa4b0: 0x643023  subu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4ac) {
            ctx->pc = 0x1FA4BCu;
            return;
        }
    }
    ctx->pc = 0x1FA4B4u;
}
