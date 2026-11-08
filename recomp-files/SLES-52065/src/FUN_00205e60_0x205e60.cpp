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

// Function: FUN_00205e60
// Address: 0x205e60 - 0x205eb4
void FUN_00205e60_0x205e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00205e60_0x205e60");
#endif

    switch (ctx->pc) {
        case 0x205ea0u: goto label_205ea0;
        default: break;
    }

    ctx->pc = 0x205e60u;

    // 0x205e60: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x205e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x205e64: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x205e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x205e68: 0x8c48d9ac  lw          $t0, -0x2654($v0)
    ctx->pc = 0x205e68u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x205e6c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x205e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x205e70: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x205e70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x205e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x205e78: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x205e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x205e7c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x205e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x205e80: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x205e80u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x205e84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x205e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e88: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x205e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x205e8c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x205e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x205e90: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x205e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x205e94: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x205e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x205e98: 0xc080e8c  jal         func_203A30
    ctx->pc = 0x205E98u;
    SET_GPR_U32(ctx, 31, 0x205EA0u);
    ctx->pc = 0x205E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E98u;
    // 0x205e9c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A30u, 0x205E98u, 0x205EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205EA0u;
label_205ea0:
    // 0x205ea0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x205ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205ea4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x205ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x205ea8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x205ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x205eac: 0x3e00008  jr          $ra
    ctx->pc = 0x205EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EACu;
        // 0x205eb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205EB4u;
}
