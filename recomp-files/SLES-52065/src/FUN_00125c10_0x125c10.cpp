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

// Function: FUN_00125c10
// Address: 0x125c10 - 0x125c64
void FUN_00125c10_0x125c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125c10_0x125c10");
#endif

    switch (ctx->pc) {
        case 0x125c34u: goto label_125c34;
        default: break;
    }

    ctx->pc = 0x125c10u;

    // 0x125c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x125c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x125c14: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x125c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x125c18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x125c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x125c1c: 0x24428930  addiu       $v0, $v0, -0x76D0
    ctx->pc = 0x125c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936880));
    // 0x125c20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x125c24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c28: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x125c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x125c2c: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x125C2Cu;
    SET_GPR_U32(ctx, 31, 0x125C34u);
    ctx->pc = 0x125C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125C2Cu;
    // 0x125c30: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x125C2Cu, 0x125C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C34u;
label_125c34:
    // 0x125c34: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x125c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x125c38: 0x3c024226  lui         $v0, 0x4226
    ctx->pc = 0x125c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16934 << 16));
    // 0x125c3c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x125c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x125c40: 0x344327f0  ori         $v1, $v0, 0x27F0
    ctx->pc = 0x125c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10224);
    // 0x125c44: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x125c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x125c48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x125c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c4c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x125c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x125c50: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x125c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x125c54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x125c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125c58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x125c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x125C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C5Cu;
        // 0x125c60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125C64u;
}
