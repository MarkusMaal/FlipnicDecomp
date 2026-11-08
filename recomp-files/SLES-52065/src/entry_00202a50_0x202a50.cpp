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

// Function: entry_00202a50
// Address: 0x202a50 - 0x202a68
void entry_00202a50_0x202a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202a50_0x202a50");
#endif

    ctx->pc = 0x202a50u;

    // 0x202a50: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x202a50u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x202a54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202a58: 0x14600195  bnez        $v1, . + 4 + (0x195 << 2)
    ctx->pc = 0x202A58u;
    {
        const bool branch_taken_0x202a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A58u;
        // 0x202a5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a58) {
            ctx->pc = 0x2030B0u;
            return;
        }
    }
    ctx->pc = 0x202A60u;
    // 0x202a60: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x202A60u;
    {
        const bool branch_taken_0x202a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A60u;
        // 0x202a64: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a60) {
            ctx->pc = 0x2030F0u;
            return;
        }
    }
    ctx->pc = 0x202A68u;
}
