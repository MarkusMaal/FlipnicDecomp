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

// Function: FUN_001d38d8
// Address: 0x1d38d8 - 0x1d391c
void FUN_001d38d8_0x1d38d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d38d8_0x1d38d8");
#endif

    switch (ctx->pc) {
        case 0x1d38fcu: goto label_1d38fc;
        default: break;
    }

    ctx->pc = 0x1d38d8u;

    // 0x1d38d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d38d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d38dc: 0x240602e0  addiu       $a2, $zero, 0x2E0
    ctx->pc = 0x1d38dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    // 0x1d38e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d38e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d38e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d38e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d38e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d38ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d38f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d38f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d38f4: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1D38F4u;
    SET_GPR_U32(ctx, 31, 0x1D38FCu);
    ctx->pc = 0x1D38F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38F4u;
    // 0x1d38f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1D38F4u, 0x1D38FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38FCu;
label_1d38fc:
    // 0x1d38fc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1d38fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1d3900: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1d3900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1d3904: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1d3904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x1d3908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d390c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d390cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3910: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3914: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3914u;
        // 0x1d3918: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D391Cu;
}
