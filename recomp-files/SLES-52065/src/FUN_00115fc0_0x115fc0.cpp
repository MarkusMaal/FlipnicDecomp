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

// Function: FUN_00115fc0
// Address: 0x115fc0 - 0x116010
void FUN_00115fc0_0x115fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00115fc0_0x115fc0");
#endif

    switch (ctx->pc) {
        case 0x115fd0u: goto label_115fd0;
        case 0x115fd8u: goto label_115fd8;
        case 0x115fe0u: goto label_115fe0;
        case 0x115ff0u: goto label_115ff0;
        case 0x116004u: goto label_116004;
        default: break;
    }

    ctx->pc = 0x115fc0u;

    // 0x115fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115fc8: 0xc062d50  jal         func_18B540
    ctx->pc = 0x115FC8u;
    SET_GPR_U32(ctx, 31, 0x115FD0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x115FC8u, 0x115FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FD0u;
label_115fd0:
    // 0x115fd0: 0xc062b80  jal         func_18AE00
    ctx->pc = 0x115FD0u;
    SET_GPR_U32(ctx, 31, 0x115FD8u);
    ctx->pc = 0x115FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FD0u;
    // 0x115fd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE00u, 0x115FD0u, 0x115FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FD8u;
label_115fd8:
    // 0x115fd8: 0xc064228  jal         func_1908A0
    ctx->pc = 0x115FD8u;
    SET_GPR_U32(ctx, 31, 0x115FE0u);
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x115FD8u, 0x115FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FE0u;
label_115fe0:
    // 0x115fe0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x115fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x115fe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x115fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115fe8: 0xc0642e0  jal         func_190B80
    ctx->pc = 0x115FE8u;
    SET_GPR_U32(ctx, 31, 0x115FF0u);
    ctx->pc = 0x115FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FE8u;
    // 0x115fec: 0x24a5e560  addiu       $a1, $a1, -0x1AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x115FE8u, 0x115FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FF0u;
label_115ff0:
    // 0x115ff0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x115ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ff4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115FF4u;
    {
        const bool branch_taken_0x115ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x115ff4) {
            ctx->pc = 0x116004u;
            goto label_116004;
        }
    }
    ctx->pc = 0x115FFCu;
    // 0x115ffc: 0xc064fec  jal         func_193FB0
    ctx->pc = 0x115FFCu;
    SET_GPR_U32(ctx, 31, 0x116004u);
    ctx->pc = 0x193FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FB0u, 0x115FFCu, 0x116004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116004u;
label_116004:
    // 0x116004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116008: 0x3e00008  jr          $ra
    ctx->pc = 0x116008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116008u;
        // 0x11600c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116010u;
}
