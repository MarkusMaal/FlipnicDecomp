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

// Function: entry_001fa474
// Address: 0x1fa474 - 0x1fa490
void entry_001fa474_0x1fa474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa474_0x1fa474");
#endif

    ctx->pc = 0x1fa474u;

    // 0x1fa474: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FA474u;
    {
        const bool branch_taken_0x1fa474 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA474u;
        // 0x1fa478: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa474) {
            ctx->pc = 0x1FA4C0u;
            return;
        }
    }
    ctx->pc = 0x1FA47Cu;
    // 0x1fa47c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1fa47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1fa480: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1fa480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1fa484: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FA484u;
    {
        const bool branch_taken_0x1fa484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA484u;
        // 0x1fa488: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa484) {
            ctx->pc = 0x1FA4B4u;
            return;
        }
    }
    ctx->pc = 0x1FA48Cu;
    // 0x1fa48c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1fa490u;
}
