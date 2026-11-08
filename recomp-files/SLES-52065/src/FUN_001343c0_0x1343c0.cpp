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

// Function: FUN_001343c0
// Address: 0x1343c0 - 0x13441c
void FUN_001343c0_0x1343c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001343c0_0x1343c0");
#endif

    switch (ctx->pc) {
        case 0x1343d4u: goto label_1343d4;
        default: break;
    }

    ctx->pc = 0x1343c0u;

    // 0x1343c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1343c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1343c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1343c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1343c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1343c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1343cc: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x1343CCu;
    SET_GPR_U32(ctx, 31, 0x1343D4u);
    ctx->pc = 0x1343D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343CCu;
    // 0x1343d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131300u, 0x1343CCu, 0x1343D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1343D4u;
label_1343d4:
    // 0x1343d4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1343d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1343d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1343d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343dc: 0x24638e00  addiu       $v1, $v1, -0x7200
    ctx->pc = 0x1343dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938112));
    // 0x1343e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1343e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1343e4: 0xa2000090  sb          $zero, 0x90($s0)
    ctx->pc = 0x1343e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x1343e8: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x1343e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x1343ec: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1343ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1343f0: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1343f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x1343f4: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1343f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1343f8: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1343f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1343fc: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1343fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x134400: 0xa2000093  sb          $zero, 0x93($s0)
    ctx->pc = 0x134400u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 147), (uint8_t)GPR_U32(ctx, 0));
    // 0x134404: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x134404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x134408: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x134408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x13440c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13440cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134414: 0x3e00008  jr          $ra
    ctx->pc = 0x134414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134414u;
        // 0x134418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13441Cu;
}
