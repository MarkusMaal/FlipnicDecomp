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

// Function: entry_001ff198
// Address: 0x1ff198 - 0x1ff1a8
void entry_001ff198_0x1ff198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff198_0x1ff198");
#endif

    ctx->pc = 0x1ff198u;

    // 0x1ff198: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF198u;
    {
        const bool branch_taken_0x1ff198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF198u;
        // 0x1ff19c: 0x81182  srl         $v0, $t0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff198) {
            ctx->pc = 0x1FF1A8u;
            return;
        }
    }
    ctx->pc = 0x1FF1A0u;
    // 0x1ff1a0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FF1A0u;
    {
        const bool branch_taken_0x1ff1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1A0u;
        // 0x1ff1a4: 0x24460038  addiu       $a2, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1a0) {
            ctx->pc = 0x1FF1F4u;
            return;
        }
    }
    ctx->pc = 0x1FF1A8u;
}
