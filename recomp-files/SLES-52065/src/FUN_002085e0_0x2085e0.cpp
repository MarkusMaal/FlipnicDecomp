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

// Function: FUN_002085e0
// Address: 0x2085e0 - 0x20862c
void FUN_002085e0_0x2085e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002085e0_0x2085e0");
#endif

    switch (ctx->pc) {
        case 0x208600u: goto label_208600;
        case 0x208610u: goto label_208610;
        case 0x20861cu: goto label_20861c;
        default: break;
    }

    ctx->pc = 0x2085e0u;

    // 0x2085e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2085e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2085e4: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x2085e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x2085e8: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x2085e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x2085ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2085ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2085f0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2085f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2085f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2085f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2085f8: 0xc081f46  jal         func_207D18
    ctx->pc = 0x2085F8u;
    SET_GPR_U32(ctx, 31, 0x208600u);
    ctx->pc = 0x2085FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2085F8u;
    // 0x2085fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207D18u, 0x2085F8u, 0x208600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208600u;
label_208600:
    // 0x208600: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x208600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x208604: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x208604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x208608: 0xc081f46  jal         func_207D18
    ctx->pc = 0x208608u;
    SET_GPR_U32(ctx, 31, 0x208610u);
    ctx->pc = 0x20860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208608u;
    // 0x20860c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207D18u, 0x208608u, 0x208610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208610u;
label_208610:
    // 0x208610: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208614: 0xc082132  jal         func_2084C8
    ctx->pc = 0x208614u;
    SET_GPR_U32(ctx, 31, 0x20861Cu);
    ctx->pc = 0x208618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208614u;
    // 0x208618: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2084C8u, 0x208614u, 0x20861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20861Cu;
label_20861c:
    // 0x20861c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20861cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x208620: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x208620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x208624: 0x3e00008  jr          $ra
    ctx->pc = 0x208624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208624u;
        // 0x208628: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20862Cu;
}
