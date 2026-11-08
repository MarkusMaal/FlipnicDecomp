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

// Function: caseD_20
// Address: 0x1c2b80 - 0x1c2bb8
void caseD_20_0x1c2b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_20_0x1c2b80");
#endif

    switch (ctx->pc) {
        case 0x1c2b88u: goto label_1c2b88;
        case 0x1c2bacu: goto label_1c2bac;
        default: break;
    }

    ctx->pc = 0x1c2b80u;

    // 0x1c2b80: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1C2B80u;
    SET_GPR_U32(ctx, 31, 0x1C2B88u);
    ctx->pc = 0x1C2B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B80u;
    // 0x1c2b84: 0x24042780  addiu       $a0, $zero, 0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1C2B80u, 0x1C2B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B88u;
label_1c2b88:
    // 0x1c2b88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2b8c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2b90: 0xac22f5d0  sw          $v0, -0xA30($at)
    ctx->pc = 0x1c2b90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5D0u, _value); } while (0);
    // 0x1c2b94: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c2b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2b98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2b9c: 0x24a51a50  addiu       $a1, $a1, 0x1A50
    ctx->pc = 0x1c2b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6736));
    // 0x1c2ba0: 0x8c26f5d0  lw          $a2, -0xA30($at)
    ctx->pc = 0x1c2ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F5D0u));
    // 0x1c2ba4: 0xc074a3c  jal         func_1D28F0
    ctx->pc = 0x1C2BA4u;
    SET_GPR_U32(ctx, 31, 0x1C2BACu);
    ctx->pc = 0x1C2BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BA4u;
    // 0x1c2ba8: 0x24072780  addiu       $a3, $zero, 0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D28F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D28F0u, 0x1C2BA4u, 0x1C2BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BACu;
label_1c2bac:
    // 0x1c2bac: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x1c2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1c2bb0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1C2BB0u;
    {
        const bool branch_taken_0x1c2bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BB0u;
        // 0x1c2bb4: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bb0) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2BB8u;
}
