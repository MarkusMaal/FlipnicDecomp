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

// Function: entry_001ffad8
// Address: 0x1ffad8 - 0x1ffafc
void entry_001ffad8_0x1ffad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffad8_0x1ffad8");
#endif

    switch (ctx->pc) {
        case 0x1ffaf0u: goto label_1ffaf0;
        default: break;
    }

    ctx->pc = 0x1ffad8u;

    // 0x1ffad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ffad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffadc: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x1ffadcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x1ffae0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ffae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffae4: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x1ffae4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ffae8: 0xc07efb8  jal         func_1FBEE0
    ctx->pc = 0x1FFAE8u;
    SET_GPR_U32(ctx, 31, 0x1FFAF0u);
    ctx->pc = 0x1FFAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFAE8u;
    // 0x1ffaec: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEE0u, 0x1FFAE8u, 0x1FFAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFAF0u;
label_1ffaf0:
    // 0x1ffaf0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ffaf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffaf4: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFAF4u;
    {
        const bool branch_taken_0x1ffaf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffaf4) {
            ctx->pc = 0x1FFAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFAF4u;
            // 0x1ffaf8: 0xac710004  sw          $s1, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFB04u;
            return;
        }
    }
    ctx->pc = 0x1FFAFCu;
}
