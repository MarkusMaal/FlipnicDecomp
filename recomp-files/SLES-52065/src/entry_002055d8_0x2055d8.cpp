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

// Function: entry_002055d8
// Address: 0x2055d8 - 0x2055f4
void entry_002055d8_0x2055d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002055d8_0x2055d8");
#endif

    ctx->pc = 0x2055d8u;

    // 0x2055d8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2055d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2055dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2055dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2055e0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2055E0u;
    {
        const bool branch_taken_0x2055e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2055E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055E0u;
        // 0x2055e4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055e0) {
            ctx->pc = 0x2055F4u;
            return;
        }
    }
    ctx->pc = 0x2055E8u;
    // 0x2055e8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2055e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2055ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2055ECu;
    {
        const bool branch_taken_0x2055ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055ECu;
        // 0x2055f0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055ec) {
            ctx->pc = 0x205604u;
            return;
        }
    }
    ctx->pc = 0x2055F4u;
}
