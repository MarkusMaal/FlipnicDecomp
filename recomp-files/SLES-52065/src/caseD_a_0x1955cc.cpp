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

// Function: caseD_a
// Address: 0x1955cc - 0x195618
void caseD_a_0x1955cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1955cc");
#endif

    switch (ctx->pc) {
        case 0x1955e8u: goto label_1955e8;
        case 0x195610u: goto label_195610;
        default: break;
    }

    ctx->pc = 0x1955ccu;

    // 0x1955cc: 0x0  nop
    ctx->pc = 0x1955ccu;
    // NOP
    // 0x1955d0: 0x8e12002c  lw          $s2, 0x2C($s0)
    ctx->pc = 0x1955d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1955d4: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x1955d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1955d8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1955d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1955dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1955dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955e0: 0xc05746c  jal         func_15D1B0
    ctx->pc = 0x1955E0u;
    SET_GPR_U32(ctx, 31, 0x1955E8u);
    ctx->pc = 0x1955E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955E0u;
    // 0x1955e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D1B0u, 0x1955E0u, 0x1955E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955E8u;
label_1955e8:
    // 0x1955e8: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1955e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1955ec: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1955ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1955f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1955f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1955f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1955f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1955f8: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x1955f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
    // 0x1955fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1955fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195600: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x195600u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x195604: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x195604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x195608: 0xc05fb2c  jal         func_17ECB0
    ctx->pc = 0x195608u;
    SET_GPR_U32(ctx, 31, 0x195610u);
    ctx->pc = 0x19560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195608u;
    // 0x19560c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ECB0u, 0x195608u, 0x195610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195610u;
label_195610:
    // 0x195610: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x195610u;
    {
        const bool branch_taken_0x195610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195610) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195618u;
}
