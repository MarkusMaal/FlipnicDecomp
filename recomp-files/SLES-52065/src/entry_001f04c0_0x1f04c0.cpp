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

// Function: entry_001f04c0
// Address: 0x1f04c0 - 0x1f04e0
void entry_001f04c0_0x1f04c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f04c0_0x1f04c0");
#endif

    ctx->pc = 0x1f04c0u;

    // 0x1f04c0: 0xae710010  sw          $s1, 0x10($s3)
    ctx->pc = 0x1f04c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
    // 0x1f04c4: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F04C4u;
    {
        const bool branch_taken_0x1f04c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04C4u;
        // 0x1f04c8: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04c4) {
            ctx->pc = 0x1F04E0u;
            return;
        }
    }
    ctx->pc = 0x1F04CCu;
    // 0x1f04cc: 0xae60041c  sw          $zero, 0x41C($s3)
    ctx->pc = 0x1f04ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1052), GPR_U32(ctx, 0));
    // 0x1f04d0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1f04d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f04d4: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f04d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f04d8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1F04D8u;
    {
        const bool branch_taken_0x1f04d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04D8u;
        // 0x1f04dc: 0x3c110039  lui         $s1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04d8) {
            ctx->pc = 0x1F05ACu;
            return;
        }
    }
    ctx->pc = 0x1F04E0u;
}
