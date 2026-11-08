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

// Function: FUN_001d12b0
// Address: 0x1d12b0 - 0x1d12f4
void FUN_001d12b0_0x1d12b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d12b0_0x1d12b0");
#endif

    switch (ctx->pc) {
        case 0x1d12c4u: goto label_1d12c4;
        default: break;
    }

    ctx->pc = 0x1d12b0u;

    // 0x1d12b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d12b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d12b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d12b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d12b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d12b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d12bc: 0xc045c98  jal         func_117260
    ctx->pc = 0x1D12BCu;
    SET_GPR_U32(ctx, 31, 0x1D12C4u);
    ctx->pc = 0x1D12C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D12BCu;
    // 0x1d12c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1D12BCu, 0x1D12C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D12C4u;
label_1d12c4:
    // 0x1d12c4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1d12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1d12c8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1d12c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1d12cc: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1d12ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1d12d0: 0x2463bfe0  addiu       $v1, $v1, -0x4020
    ctx->pc = 0x1d12d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950880));
    // 0x1d12d4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1d12d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d12d8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d12d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1d12dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d12dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d12e0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1d12e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1d12e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d12e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d12e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d12e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d12ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D12ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12ECu;
        // 0x1d12f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D12ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D12F4u;
}
