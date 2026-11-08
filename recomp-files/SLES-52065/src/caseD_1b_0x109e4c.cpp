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

// Function: caseD_1b
// Address: 0x109e4c - 0x109e8c
void caseD_1b_0x109e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1b_0x109e4c");
#endif

    switch (ctx->pc) {
        case 0x109e5cu: goto label_109e5c;
        case 0x109e68u: goto label_109e68;
        default: break;
    }

    ctx->pc = 0x109e4cu;

    // 0x109e4c: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x109e4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x109e50: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109e54: 0xc057040  jal         func_15C100
    ctx->pc = 0x109E54u;
    SET_GPR_U32(ctx, 31, 0x109E5Cu);
    ctx->pc = 0x109E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E54u;
    // 0x109e58: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x109E54u, 0x109E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E5Cu;
label_109e5c:
    // 0x109e5c: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109e60: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x109E60u;
    SET_GPR_U32(ctx, 31, 0x109E68u);
    ctx->pc = 0x109E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E60u;
    // 0x109e64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x109E60u, 0x109E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E68u;
label_109e68:
    // 0x109e68: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x109e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x109e6c: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x109E6Cu;
    {
        const bool branch_taken_0x109e6c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x109e6c) {
            ctx->pc = 0x109E8Cu;
            return;
        }
    }
    ctx->pc = 0x109E74u;
    // 0x109e74: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109e78: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x109e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x109e7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x109e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x109e80: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x109e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x109e84: 0x846301f4  lh          $v1, 0x1F4($v1)
    ctx->pc = 0x109e84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 500)));
    // 0x109e88: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x109e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    ctx->pc = 0x109e8cu;
}
