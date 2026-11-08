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

// Function: entry_001e27bc
// Address: 0x1e27bc - 0x1e27dc
void entry_001e27bc_0x1e27bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e27bc_0x1e27bc");
#endif

    ctx->pc = 0x1e27bcu;

    // 0x1e27bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e27bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e27c0: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e27c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e27c4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e27c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e27c8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e27c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e27cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E27CCu;
    {
        const bool branch_taken_0x1e27cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27CCu;
        // 0x1e27d0: 0xffa30048  sd          $v1, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27cc) {
            ctx->pc = 0x1E27DCu;
            return;
        }
    }
    ctx->pc = 0x1E27D4u;
    // 0x1e27d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E27D4u;
    {
        const bool branch_taken_0x1e27d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27D4u;
        // 0x1e27d8: 0x27a20048  addiu       $v0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27d4) {
            ctx->pc = 0x1E27E0u;
            return;
        }
    }
    ctx->pc = 0x1E27DCu;
}
