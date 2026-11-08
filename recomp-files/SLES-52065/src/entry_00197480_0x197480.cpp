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

// Function: entry_00197480
// Address: 0x197480 - 0x1974c0
void entry_00197480_0x197480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197480_0x197480");
#endif

    switch (ctx->pc) {
        case 0x197488u: goto label_197488;
        case 0x197490u: goto label_197490;
        case 0x1974a4u: goto label_1974a4;
        default: break;
    }

    ctx->pc = 0x197480u;

    // 0x197480: 0xc042688  jal         func_109A20
    ctx->pc = 0x197480u;
    SET_GPR_U32(ctx, 31, 0x197488u);
    ctx->pc = 0x197484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197480u;
    // 0x197484: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A20u, 0x197480u, 0x197488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197488u;
label_197488:
    // 0x197488: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x197488u;
    SET_GPR_U32(ctx, 31, 0x197490u);
    ctx->pc = 0x19748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197488u;
    // 0x19748c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x197488u, 0x197490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197490u;
label_197490:
    // 0x197490: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x197490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x197494: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x197494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x197498: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x197498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x19749c: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x19749Cu;
    SET_GPR_U32(ctx, 31, 0x1974A4u);
    ctx->pc = 0x1974A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19749Cu;
    // 0x1974a0: 0x8e4506b0  lw          $a1, 0x6B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1712)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x19749Cu, 0x1974A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974A4u;
label_1974a4:
    // 0x1974a4: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1974a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1974a8: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1974a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x1974ac: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1974ACu;
    {
        const bool branch_taken_0x1974ac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1974B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974ACu;
        // 0x1974b0: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974ac) {
            ctx->pc = 0x1974C0u;
            return;
        }
    }
    ctx->pc = 0x1974B4u;
    // 0x1974b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1974B4u;
    {
        const bool branch_taken_0x1974b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1974B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974B4u;
        // 0x1974b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974b4) {
            ctx->pc = 0x1974D8u;
            return;
        }
    }
    ctx->pc = 0x1974BCu;
    // 0x1974bc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1974bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x1974c0u;
}
