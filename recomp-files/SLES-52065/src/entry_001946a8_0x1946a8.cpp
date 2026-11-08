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

// Function: entry_001946a8
// Address: 0x1946a8 - 0x1946c0
void entry_001946a8_0x1946a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001946a8_0x1946a8");
#endif

    ctx->pc = 0x1946a8u;

    // 0x1946a8: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x1946a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1946ac: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1946ACu;
    {
        const bool branch_taken_0x1946ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1946B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946ACu;
        // 0x1946b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1946ac) {
            ctx->pc = 0x194678u;
            return;
        }
    }
    ctx->pc = 0x1946B4u;
    // 0x1946b4: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1946b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1946b8: 0x100005ae  b           . + 4 + (0x5AE << 2)
    ctx->pc = 0x1946B8u;
    {
        const bool branch_taken_0x1946b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1946BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946B8u;
        // 0x1946bc: 0xae83032c  sw          $v1, 0x32C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1946b8) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x1946C0u;
}
