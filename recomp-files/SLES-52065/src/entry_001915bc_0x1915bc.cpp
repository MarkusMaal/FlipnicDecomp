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

// Function: entry_001915bc
// Address: 0x1915bc - 0x1915e8
void entry_001915bc_0x1915bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001915bc_0x1915bc");
#endif

    ctx->pc = 0x1915bcu;

    // 0x1915bc: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x1915bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1915c0: 0x24670040  addiu       $a3, $v1, 0x40
    ctx->pc = 0x1915c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1915c4: 0x8463022c  lh          $v1, 0x22C($v1)
    ctx->pc = 0x1915c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 556)));
    // 0x1915c8: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1915C8u;
    {
        const bool branch_taken_0x1915c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1915c8) {
            ctx->pc = 0x1915F8u;
            return;
        }
    }
    ctx->pc = 0x1915D0u;
    // 0x1915d0: 0x84e301e8  lh          $v1, 0x1E8($a3)
    ctx->pc = 0x1915d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x1915d4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1915D4u;
    {
        const bool branch_taken_0x1915d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1915D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915D4u;
        // 0x1915d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915d4) {
            ctx->pc = 0x1915E8u;
            return;
        }
    }
    ctx->pc = 0x1915DCu;
    // 0x1915dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1915DCu;
    {
        const bool branch_taken_0x1915dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1915E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915DCu;
        // 0x1915e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915dc) {
            ctx->pc = 0x1915E8u;
            return;
        }
    }
    ctx->pc = 0x1915E4u;
    // 0x1915e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1915e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1915e8u;
}
