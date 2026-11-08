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

// Function: entry_00165f14
// Address: 0x165f14 - 0x165f34
void entry_00165f14_0x165f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165f14_0x165f14");
#endif

    ctx->pc = 0x165f14u;

    // 0x165f14: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x165f14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x165f18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x165f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165f1c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x165f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x165f20: 0x84a50004  lh          $a1, 0x4($a1)
    ctx->pc = 0x165f20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x165f24: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x165F24u;
    {
        const bool branch_taken_0x165f24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x165F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F24u;
        // 0x165f28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f24) {
            ctx->pc = 0x165F34u;
            return;
        }
    }
    ctx->pc = 0x165F2Cu;
    // 0x165f2c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x165F2Cu;
    {
        const bool branch_taken_0x165f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F2Cu;
        // 0x165f30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f2c) {
            ctx->pc = 0x165F34u;
            return;
        }
    }
    ctx->pc = 0x165F34u;
}
