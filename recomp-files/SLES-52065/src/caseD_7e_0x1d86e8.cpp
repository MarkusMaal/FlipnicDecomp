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

// Function: caseD_7e
// Address: 0x1d86e8 - 0x1d8730
void caseD_7e_0x1d86e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7e_0x1d86e8");
#endif

    switch (ctx->pc) {
        case 0x1d870cu: goto label_1d870c;
        case 0x1d8718u: goto label_1d8718;
        default: break;
    }

    ctx->pc = 0x1d86e8u;

    // 0x1d86e8: 0x8c82054c  lw          $v0, 0x54C($a0)
    ctx->pc = 0x1d86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1356)));
    // 0x1d86ec: 0x90550009  lbu         $s5, 0x9($v0)
    ctx->pc = 0x1d86ecu;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1d86f0: 0x90520003  lbu         $s2, 0x3($v0)
    ctx->pc = 0x1d86f0u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1d86f4: 0x90510004  lbu         $s1, 0x4($v0)
    ctx->pc = 0x1d86f4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d86f8: 0x90570005  lbu         $s7, 0x5($v0)
    ctx->pc = 0x1d86f8u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x1d86fc: 0x90530006  lbu         $s3, 0x6($v0)
    ctx->pc = 0x1d86fcu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d8700: 0x90560007  lbu         $s6, 0x7($v0)
    ctx->pc = 0x1d8700u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1d8704: 0xc074c4c  jal         func_1D3130
    ctx->pc = 0x1D8704u;
    SET_GPR_U32(ctx, 31, 0x1D870Cu);
    ctx->pc = 0x1D8708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8704u;
    // 0x1d8708: 0x90540008  lbu         $s4, 0x8($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3130u, 0x1D8704u, 0x1D870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D870Cu;
label_1d870c:
    // 0x1d870c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d870cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8710: 0xc08218c  jal         func_208630
    ctx->pc = 0x1D8710u;
    SET_GPR_U32(ctx, 31, 0x1D8718u);
    ctx->pc = 0x1D8714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8710u;
    // 0x1d8714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1D8710u, 0x1D8718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8718u;
label_1d8718:
    // 0x1d8718: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8718u;
    {
        const bool branch_taken_0x1d8718 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d8718) {
            ctx->pc = 0x1D8730u;
            return;
        }
    }
    ctx->pc = 0x1D8720u;
    // 0x1d8720: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1d8720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1d8724: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1d8724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1d8728: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1D8728u;
    SET_GPR_U32(ctx, 31, 0x1D8730u);
    ctx->pc = 0x1D872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8728u;
    // 0x1d872c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1D8728u, 0x1D8730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8730u;
}
