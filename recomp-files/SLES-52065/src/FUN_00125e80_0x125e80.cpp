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

// Function: FUN_00125e80
// Address: 0x125e80 - 0x125f04
void FUN_00125e80_0x125e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125e80_0x125e80");
#endif

    switch (ctx->pc) {
        case 0x125e94u: goto label_125e94;
        default: break;
    }

    ctx->pc = 0x125e80u;

    // 0x125e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x125e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x125e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x125e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x125e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x125e8c: 0xc049704  jal         func_125C10
    ctx->pc = 0x125E8Cu;
    SET_GPR_U32(ctx, 31, 0x125E94u);
    ctx->pc = 0x125E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E8Cu;
    // 0x125e90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C10u, 0x125E8Cu, 0x125E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E94u;
label_125e94:
    // 0x125e94: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x125e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x125e98: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x125e98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x125e9c: 0x24428960  addiu       $v0, $v0, -0x76A0
    ctx->pc = 0x125e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936928));
    // 0x125ea0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x125ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x125ea4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x125ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x125ea8: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x125ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x125eac: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x125eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x125eb0: 0x3c024226  lui         $v0, 0x4226
    ctx->pc = 0x125eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16934 << 16));
    // 0x125eb4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x125eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x125eb8: 0x344327f0  ori         $v1, $v0, 0x27F0
    ctx->pc = 0x125eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10224);
    // 0x125ebc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x125ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x125ec0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x125ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x125ec4: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x125ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
    // 0x125ec8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x125ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ecc: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x125eccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x125ed0: 0x7e060070  sq          $a2, 0x70($s0)
    ctx->pc = 0x125ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 6));
    // 0x125ed4: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x125ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x125ed8: 0xafa7003c  sw          $a3, 0x3C($sp)
    ctx->pc = 0x125ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 7));
    // 0x125edc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x125edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x125ee0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x125ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x125ee4: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x125ee4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x125ee8: 0x7e040080  sq          $a0, 0x80($s0)
    ctx->pc = 0x125ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 4));
    // 0x125eec: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x125eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x125ef0: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x125ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x125ef4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x125ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x125ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125efc: 0x3e00008  jr          $ra
    ctx->pc = 0x125EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EFCu;
        // 0x125f00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125F04u;
}
