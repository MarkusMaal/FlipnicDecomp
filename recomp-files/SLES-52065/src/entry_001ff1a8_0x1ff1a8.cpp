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

// Function: entry_001ff1a8
// Address: 0x1ff1a8 - 0x1ff1c8
void entry_001ff1a8_0x1ff1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff1a8_0x1ff1a8");
#endif

    ctx->pc = 0x1ff1a8u;

    // 0x1ff1a8: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x1ff1a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1ff1ac: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FF1ACu;
    {
        const bool branch_taken_0x1ff1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1ACu;
        // 0x1ff1b0: 0x2466005b  addiu       $a2, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1ac) {
            ctx->pc = 0x1FF1F4u;
            return;
        }
    }
    ctx->pc = 0x1FF1B4u;
    // 0x1ff1b4: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x1ff1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x1ff1b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF1B8u;
    {
        const bool branch_taken_0x1ff1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1B8u;
        // 0x1ff1bc: 0x81302  srl         $v0, $t0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1b8) {
            ctx->pc = 0x1FF1C8u;
            return;
        }
    }
    ctx->pc = 0x1FF1C0u;
    // 0x1ff1c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FF1C0u;
    {
        const bool branch_taken_0x1ff1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1C0u;
        // 0x1ff1c4: 0x2446006e  addiu       $a2, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1c0) {
            ctx->pc = 0x1FF1F4u;
            return;
        }
    }
    ctx->pc = 0x1FF1C8u;
}
