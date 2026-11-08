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

// Function: FUN_001b4af0
// Address: 0x1b4af0 - 0x1b4b54
void FUN_001b4af0_0x1b4af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4af0_0x1b4af0");
#endif

    switch (ctx->pc) {
        case 0x1b4b10u: goto label_1b4b10;
        case 0x1b4b1cu: goto label_1b4b1c;
        case 0x1b4b34u: goto label_1b4b34;
        case 0x1b4b3cu: goto label_1b4b3c;
        case 0x1b4b44u: goto label_1b4b44;
        default: break;
    }

    ctx->pc = 0x1b4af0u;

    // 0x1b4af0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b4af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b4af4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b4af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1b4af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4afc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4b00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b04: 0xa020c7f8  sb          $zero, -0x3808($at)
    ctx->pc = 0x1b4b04u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x22C7F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x22C7F8u, _value); } while (0);
    // 0x1b4b08: 0xc071554  jal         func_1C5550
    ctx->pc = 0x1B4B08u;
    SET_GPR_U32(ctx, 31, 0x1B4B10u);
    ctx->pc = 0x1B4B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B08u;
    // 0x1b4b0c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5550u, 0x1B4B08u, 0x1B4B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B10u;
label_1b4b10:
    // 0x1b4b10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b4b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b14: 0xc054660  jal         func_151980
    ctx->pc = 0x1B4B14u;
    SET_GPR_U32(ctx, 31, 0x1B4B1Cu);
    ctx->pc = 0x1B4B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B14u;
    // 0x1b4b18: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1B4B14u, 0x1B4B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B1Cu;
label_1b4b1c:
    // 0x1b4b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4b20: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b4b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1b4b24: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b4b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4b28: 0xa022c7f8  sb          $v0, -0x3808($at)
    ctx->pc = 0x1b4b28u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x22C7F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x22C7F8u, _value); } while (0);
    // 0x1b4b2c: 0xc071630  jal         func_1C58C0
    ctx->pc = 0x1B4B2Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B34u);
    ctx->pc = 0x1B4B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B2Cu;
    // 0x1b4b30: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C58C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C58C0u, 0x1B4B2Cu, 0x1B4B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B34u;
label_1b4b34:
    // 0x1b4b34: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B4B34u;
    SET_GPR_U32(ctx, 31, 0x1B4B3Cu);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B4B34u, 0x1B4B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B3Cu;
label_1b4b3c:
    // 0x1b4b3c: 0xc0485a4  jal         func_121690
    ctx->pc = 0x1B4B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B44u);
    ctx->pc = 0x1B4B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B3Cu;
    // 0x1b4b40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121690u, 0x1B4B3Cu, 0x1B4B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B44u;
label_1b4b44:
    // 0x1b4b44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4b48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B4Cu;
        // 0x1b4b50: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4B54u;
}
