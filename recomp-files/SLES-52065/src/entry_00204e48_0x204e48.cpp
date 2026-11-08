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

// Function: entry_00204e48
// Address: 0x204e48 - 0x204e68
void entry_00204e48_0x204e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204e48_0x204e48");
#endif

    ctx->pc = 0x204e48u;

    // 0x204e48: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x204E48u;
    {
        const bool branch_taken_0x204e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E48u;
        // 0x204e4c: 0x8fa501f4  lw          $a1, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e48) {
            ctx->pc = 0x204F10u;
            return;
        }
    }
    ctx->pc = 0x204E50u;
    // 0x204e50: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x204e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x204e54: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x204e54u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x204e58: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x204E58u;
    {
        const bool branch_taken_0x204e58 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x204E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E58u;
        // 0x204e5c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e58) {
            ctx->pc = 0x204F10u;
            return;
        }
    }
    ctx->pc = 0x204E60u;
    // 0x204e60: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x204E60u;
    {
        const bool branch_taken_0x204e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E60u;
        // 0x204e64: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e60) {
            ctx->pc = 0x204ED0u;
            return;
        }
    }
    ctx->pc = 0x204E68u;
}
