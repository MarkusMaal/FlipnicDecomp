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

// Function: entry_001951a4
// Address: 0x1951a4 - 0x1951ec
void entry_001951a4_0x1951a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001951a4_0x1951a4");
#endif

    switch (ctx->pc) {
        case 0x1951bcu: goto label_1951bc;
        case 0x1951e4u: goto label_1951e4;
        default: break;
    }

    ctx->pc = 0x1951a4u;

label_1951a4:
    // 0x1951a4: 0x0  nop
    ctx->pc = 0x1951a4u;
    // NOP
    // 0x1951a8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1951a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1951ac: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1951acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1951b0: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x1951b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1951b4: 0xc05704c  jal         func_15C130
    ctx->pc = 0x1951B4u;
    SET_GPR_U32(ctx, 31, 0x1951BCu);
    ctx->pc = 0x1951B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1951B4u;
    // 0x1951b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C130u, 0x1951B4u, 0x1951BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1951BCu;
label_1951bc:
    // 0x1951bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1951bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951c0: 0x620000a  bltz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1951C0u;
    {
        const bool branch_taken_0x1951c0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1951c0) {
            ctx->pc = 0x1951ECu;
            return;
        }
    }
    ctx->pc = 0x1951C8u;
    // 0x1951c8: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x1951c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1951cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1951ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951d0: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x1951d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1951d4: 0x8e080034  lw          $t0, 0x34($s0)
    ctx->pc = 0x1951d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1951d8: 0x8e090038  lw          $t1, 0x38($s0)
    ctx->pc = 0x1951d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1951dc: 0xc064d84  jal         func_193610
    ctx->pc = 0x1951DCu;
    SET_GPR_U32(ctx, 31, 0x1951E4u);
    ctx->pc = 0x1951E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1951DCu;
    // 0x1951e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193610u, 0x1951DCu, 0x1951E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1951E4u;
label_1951e4:
    // 0x1951e4: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x1951E4u;
    {
        const bool branch_taken_0x1951e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1951E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951E4u;
        // 0x1951e8: 0x26270001  addiu       $a3, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951e4) {
            ctx->pc = 0x1951A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1951a4;
        }
    }
    ctx->pc = 0x1951ECu;
}
