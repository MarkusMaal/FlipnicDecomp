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

// Function: entry_001da688
// Address: 0x1da688 - 0x1da698
void entry_001da688_0x1da688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da688_0x1da688");
#endif

    ctx->pc = 0x1da688u;

    // 0x1da688: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1da688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da68c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA68Cu;
    {
        const bool branch_taken_0x1da68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA68Cu;
        // 0x1da690: 0x24110030  addiu       $s1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da68c) {
            ctx->pc = 0x1DA6B0u;
            return;
        }
    }
    ctx->pc = 0x1DA694u;
    // 0x1da694: 0x0  nop
    ctx->pc = 0x1da694u;
    // NOP
    ctx->pc = 0x1da698u;
}
