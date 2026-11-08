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

// Function: entry_001689a4
// Address: 0x1689a4 - 0x1689c4
void entry_001689a4_0x1689a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001689a4_0x1689a4");
#endif

    ctx->pc = 0x1689a4u;

    // 0x1689a4: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x1689a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x1689a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1689a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1689ac: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1689ACu;
    {
        const bool branch_taken_0x1689ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1689ac) {
            ctx->pc = 0x1689C4u;
            return;
        }
    }
    ctx->pc = 0x1689B4u;
    // 0x1689b4: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x1689B4u;
    {
        const bool branch_taken_0x1689b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689B4u;
        // 0x1689b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689b4) {
            ctx->pc = 0x168AACu;
            return;
        }
    }
    ctx->pc = 0x1689BCu;
    // 0x1689bc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1689BCu;
    {
        const bool branch_taken_0x1689bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689BCu;
        // 0x1689c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689bc) {
            ctx->pc = 0x168A60u;
            return;
        }
    }
    ctx->pc = 0x1689C4u;
}
