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

// Function: FUN_001b4b60
// Address: 0x1b4b60 - 0x1b4bc4
void FUN_001b4b60_0x1b4b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4b60_0x1b4b60");
#endif

    switch (ctx->pc) {
        case 0x1b4b80u: goto label_1b4b80;
        case 0x1b4b8cu: goto label_1b4b8c;
        case 0x1b4ba4u: goto label_1b4ba4;
        case 0x1b4bacu: goto label_1b4bac;
        case 0x1b4bb4u: goto label_1b4bb4;
        default: break;
    }

    ctx->pc = 0x1b4b60u;

    // 0x1b4b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b4b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b4b64: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b4b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1b4b68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b74: 0xa020c7f8  sb          $zero, -0x3808($at)
    ctx->pc = 0x1b4b74u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x22C7F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x22C7F8u, _value); } while (0);
    // 0x1b4b78: 0xc0744ac  jal         func_1D12B0
    ctx->pc = 0x1B4B78u;
    SET_GPR_U32(ctx, 31, 0x1B4B80u);
    ctx->pc = 0x1B4B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B78u;
    // 0x1b4b7c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D12B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D12B0u, 0x1B4B78u, 0x1B4B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B80u;
label_1b4b80:
    // 0x1b4b80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b4b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b84: 0xc054660  jal         func_151980
    ctx->pc = 0x1B4B84u;
    SET_GPR_U32(ctx, 31, 0x1B4B8Cu);
    ctx->pc = 0x1B4B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B84u;
    // 0x1b4b88: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1B4B84u, 0x1B4B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B8Cu;
label_1b4b8c:
    // 0x1b4b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4b90: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b4b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1b4b94: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b4b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4b98: 0xa022c7f8  sb          $v0, -0x3808($at)
    ctx->pc = 0x1b4b98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x22C7F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x22C7F8u, _value); } while (0);
    // 0x1b4b9c: 0xc0744c0  jal         func_1D1300
    ctx->pc = 0x1B4B9Cu;
    SET_GPR_U32(ctx, 31, 0x1B4BA4u);
    ctx->pc = 0x1B4BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B9Cu;
    // 0x1b4ba0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1300u, 0x1B4B9Cu, 0x1B4BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4BA4u;
label_1b4ba4:
    // 0x1b4ba4: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B4BA4u;
    SET_GPR_U32(ctx, 31, 0x1B4BACu);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B4BA4u, 0x1B4BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4BACu;
label_1b4bac:
    // 0x1b4bac: 0xc0485a4  jal         func_121690
    ctx->pc = 0x1B4BACu;
    SET_GPR_U32(ctx, 31, 0x1B4BB4u);
    ctx->pc = 0x1B4BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4BACu;
    // 0x1b4bb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121690u, 0x1B4BACu, 0x1B4BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4BB4u;
label_1b4bb4:
    // 0x1b4bb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4bb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4BBCu;
        // 0x1b4bc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4BC4u;
}
