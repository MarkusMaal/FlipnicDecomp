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

// Function: entry_001f0a9c
// Address: 0x1f0a9c - 0x1f0ac0
void entry_001f0a9c_0x1f0a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0a9c_0x1f0a9c");
#endif

    ctx->pc = 0x1f0a9cu;

    // 0x1f0a9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f0a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0aa0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f0aa4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F0AA4u;
    {
        const bool branch_taken_0x1f0aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AA4u;
        // 0x1f0aa8: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0aa4) {
            ctx->pc = 0x1F0AECu;
            return;
        }
    }
    ctx->pc = 0x1F0AACu;
    // 0x1f0aac: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f0aacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0ab0: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f0ab0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f0ab4: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f0ab4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f0ab8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f0ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f0abc: 0x0  nop
    ctx->pc = 0x1f0abcu;
    // NOP
    ctx->pc = 0x1f0ac0u;
}
