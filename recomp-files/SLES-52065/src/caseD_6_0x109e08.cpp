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

// Function: caseD_6
// Address: 0x109e08 - 0x109e4c
void caseD_6_0x109e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x109e08");
#endif

    switch (ctx->pc) {
        case 0x109e14u: goto label_109e14;
        case 0x109e20u: goto label_109e20;
        case 0x109e44u: goto label_109e44;
        default: break;
    }

    ctx->pc = 0x109e08u;

    // 0x109e08: 0x86300002  lh          $s0, 0x2($s1)
    ctx->pc = 0x109e08u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x109e0c: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x109E0Cu;
    SET_GPR_U32(ctx, 31, 0x109E14u);
    ctx->pc = 0x109E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E0Cu;
    // 0x109e10: 0x86310004  lh          $s1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x109E0Cu, 0x109E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E14u;
label_109e14:
    // 0x109e14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e18: 0xc05fec0  jal         func_17FB00
    ctx->pc = 0x109E18u;
    SET_GPR_U32(ctx, 31, 0x109E20u);
    ctx->pc = 0x109E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E18u;
    // 0x109e1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x109E18u, 0x109E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E20u;
label_109e20:
    // 0x109e20: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x109e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x109e24: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109e28: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x109e28u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x109e2c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x109e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x109e30: 0x0  nop
    ctx->pc = 0x109e30u;
    // NOP
    // 0x109e34: 0x1810  mfhi        $v1
    ctx->pc = 0x109e34u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x109e38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x109e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x109e3c: 0xc057f4c  jal         func_15FD30
    ctx->pc = 0x109E3Cu;
    SET_GPR_U32(ctx, 31, 0x109E44u);
    ctx->pc = 0x109E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E3Cu;
    // 0x109e40: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FD30u, 0x109E3Cu, 0x109E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E44u;
label_109e44:
    // 0x109e44: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x109E44u;
    {
        const bool branch_taken_0x109e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109e44) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x109E4Cu;
}
