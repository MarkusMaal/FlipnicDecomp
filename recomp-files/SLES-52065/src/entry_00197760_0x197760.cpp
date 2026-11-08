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

// Function: entry_00197760
// Address: 0x197760 - 0x19779c
void entry_00197760_0x197760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197760_0x197760");
#endif

    switch (ctx->pc) {
        case 0x197790u: goto label_197790;
        default: break;
    }

    ctx->pc = 0x197760u;

    // 0x197760: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x197760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x197764: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x197764u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x197768: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x197768u;
    {
        const bool branch_taken_0x197768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197768u;
        // 0x19776c: 0x2b01821  addu        $v1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197768) {
            ctx->pc = 0x1976B8u;
            return;
        }
    }
    ctx->pc = 0x197770u;
    // 0x197770: 0x12e000e9  beqz        $s7, . + 4 + (0xE9 << 2)
    ctx->pc = 0x197770u;
    {
        const bool branch_taken_0x197770 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x197770) {
            ctx->pc = 0x197B18u;
            return;
        }
    }
    ctx->pc = 0x197778u;
    // 0x197778: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x197778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x19777c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19777cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x197780: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x197780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197784: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x197784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x197788: 0xc064a88  jal         func_192A20
    ctx->pc = 0x197788u;
    SET_GPR_U32(ctx, 31, 0x197790u);
    ctx->pc = 0x19778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197788u;
    // 0x19778c: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x197788u, 0x197790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197790u;
label_197790:
    // 0x197790: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x197790u;
    {
        const bool branch_taken_0x197790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197790) {
            ctx->pc = 0x197B18u;
            return;
        }
    }
    ctx->pc = 0x197798u;
    // 0x197798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19779cu;
}
