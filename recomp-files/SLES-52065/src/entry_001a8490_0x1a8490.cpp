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

// Function: entry_001a8490
// Address: 0x1a8490 - 0x1a84bc
void entry_001a8490_0x1a8490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8490_0x1a8490");
#endif

    ctx->pc = 0x1a8490u;

    // 0x1a8490: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a8490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
    // 0x1a8494: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8498: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a8498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a849c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a849cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1a84a0: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1a84a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1a84a4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A84A4u;
    {
        const bool branch_taken_0x1a84a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a84a4) {
            ctx->pc = 0x1A8548u;
            return;
        }
    }
    ctx->pc = 0x1A84ACu;
    // 0x1a84ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a84acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a84b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A84B0u;
    {
        const bool branch_taken_0x1a84b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84B0u;
        // 0x1a84b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84b0) {
            ctx->pc = 0x1A8500u;
            return;
        }
    }
    ctx->pc = 0x1A84B8u;
    // 0x1a84b8: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x1a84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    ctx->pc = 0x1a84bcu;
}
