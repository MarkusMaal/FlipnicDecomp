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

// Function: entry_0016f04c
// Address: 0x16f04c - 0x16f064
void entry_0016f04c_0x16f04c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f04c_0x16f04c");
#endif

    ctx->pc = 0x16f04cu;

    // 0x16f04c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F04Cu;
    {
        const bool branch_taken_0x16f04c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F04Cu;
        // 0x16f050: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f04c) {
            ctx->pc = 0x16F064u;
            return;
        }
    }
    ctx->pc = 0x16F054u;
    // 0x16f054: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16f054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16f058: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x16f058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x16f05c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x16f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x16f060: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x16f060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    ctx->pc = 0x16f064u;
}
