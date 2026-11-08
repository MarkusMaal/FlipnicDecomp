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

// Function: entry_00138c2c
// Address: 0x138c2c - 0x138c4c
void entry_00138c2c_0x138c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138c2c_0x138c2c");
#endif

    ctx->pc = 0x138c2cu;

    // 0x138c2c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x138C2Cu;
    {
        const bool branch_taken_0x138c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C2Cu;
        // 0x138c30: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c2c) {
            ctx->pc = 0x138C5Cu;
            return;
        }
    }
    ctx->pc = 0x138C34u;
    // 0x138c34: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x138C34u;
    {
        const bool branch_taken_0x138c34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x138c34) {
            ctx->pc = 0x138C4Cu;
            return;
        }
    }
    ctx->pc = 0x138C3Cu;
    // 0x138c3c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x138c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x138c40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x138c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x138c44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x138C44u;
    {
        const bool branch_taken_0x138c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C44u;
        // 0x138c48: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c44) {
            ctx->pc = 0x138C58u;
            return;
        }
    }
    ctx->pc = 0x138C4Cu;
}
