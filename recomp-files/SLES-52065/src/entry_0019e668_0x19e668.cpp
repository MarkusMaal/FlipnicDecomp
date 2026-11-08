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

// Function: entry_0019e668
// Address: 0x19e668 - 0x19e694
void entry_0019e668_0x19e668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e668_0x19e668");
#endif

    switch (ctx->pc) {
        case 0x19e688u: goto label_19e688;
        default: break;
    }

    ctx->pc = 0x19e668u;

    // 0x19e668: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x19e668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x19e66c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x19e66cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19e670: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x19E670u;
    {
        const bool branch_taken_0x19e670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E670u;
        // 0x19e674: 0x2322821  addu        $a1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e670) {
            ctx->pc = 0x19E5DCu;
            return;
        }
    }
    ctx->pc = 0x19E678u;
    // 0x19e678: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x19E678u;
    {
        const bool branch_taken_0x19e678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e678) {
            ctx->pc = 0x19E778u;
            return;
        }
    }
    ctx->pc = 0x19E680u;
    // 0x19e680: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19E680u;
    SET_GPR_U32(ctx, 31, 0x19E688u);
    ctx->pc = 0x19E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E680u;
    // 0x19e684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19E680u, 0x19E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E688u;
label_19e688:
    // 0x19e688: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x19E688u;
    {
        const bool branch_taken_0x19e688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e688) {
            ctx->pc = 0x19E778u;
            return;
        }
    }
    ctx->pc = 0x19E690u;
    // 0x19e690: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x19e690u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19e694u;
}
