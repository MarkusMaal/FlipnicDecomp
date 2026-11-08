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

// Function: entry_0013f3c4
// Address: 0x13f3c4 - 0x13f3e8
void entry_0013f3c4_0x13f3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f3c4_0x13f3c4");
#endif

    switch (ctx->pc) {
        case 0x13f3dcu: goto label_13f3dc;
        default: break;
    }

    ctx->pc = 0x13f3c4u;

    // 0x13f3c4: 0x0  nop
    ctx->pc = 0x13f3c4u;
    // NOP
    // 0x13f3c8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13f3cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f3d0: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x13f3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f3d4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13F3D4u;
    SET_GPR_U32(ctx, 31, 0x13F3DCu);
    ctx->pc = 0x13F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F3D4u;
    // 0x13f3d8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13F3D4u, 0x13F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F3DCu;
label_13f3dc:
    // 0x13f3dc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x13f3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x13f3e0: 0x1600ffec  bnez        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13F3E0u;
    {
        const bool branch_taken_0x13f3e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F3E0u;
        // 0x13f3e4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3e0) {
            ctx->pc = 0x13F394u;
            return;
        }
    }
    ctx->pc = 0x13F3E8u;
}
