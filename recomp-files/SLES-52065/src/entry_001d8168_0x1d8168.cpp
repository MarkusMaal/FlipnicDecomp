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

// Function: entry_001d8168
// Address: 0x1d8168 - 0x1d8188
void entry_001d8168_0x1d8168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8168_0x1d8168");
#endif

    ctx->pc = 0x1d8168u;

    // 0x1d8168: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d816c: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D816Cu;
    {
        const bool branch_taken_0x1d816c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d816c) {
            ctx->pc = 0x1D8170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D816Cu;
            // 0x1d8170: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8188u;
            return;
        }
    }
    ctx->pc = 0x1D8174u;
    // 0x1d8174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8178: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d8178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d817c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D817Cu;
    {
        const bool branch_taken_0x1d817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D817Cu;
        // 0x1d8180: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d817c) {
            ctx->pc = 0x1D81A0u;
            return;
        }
    }
    ctx->pc = 0x1D8184u;
    // 0x1d8184: 0x0  nop
    ctx->pc = 0x1d8184u;
    // NOP
    ctx->pc = 0x1d8188u;
}
