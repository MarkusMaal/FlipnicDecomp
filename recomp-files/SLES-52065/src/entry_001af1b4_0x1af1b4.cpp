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

// Function: entry_001af1b4
// Address: 0x1af1b4 - 0x1af1e0
void entry_001af1b4_0x1af1b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af1b4_0x1af1b4");
#endif

    ctx->pc = 0x1af1b4u;

    // 0x1af1b4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1af1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1af1b8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1af1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1af1bc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1af1bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af1c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1af1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1af1c4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1af1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1af1c8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1af1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1af1cc: 0x8c4201fc  lw          $v0, 0x1FC($v0)
    ctx->pc = 0x1af1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x1af1d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF1D0u;
    {
        const bool branch_taken_0x1af1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1D0u;
        // 0x1af1d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1d0) {
            ctx->pc = 0x1AF1E0u;
            return;
        }
    }
    ctx->pc = 0x1AF1D8u;
    // 0x1af1d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF1D8u;
    {
        const bool branch_taken_0x1af1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af1d8) {
            ctx->pc = 0x1AF1F4u;
            return;
        }
    }
    ctx->pc = 0x1AF1E0u;
}
