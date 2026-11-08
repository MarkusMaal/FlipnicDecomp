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

// Function: FUN_001bac40
// Address: 0x1bac40 - 0x1bacb8
void FUN_001bac40_0x1bac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bac40_0x1bac40");
#endif

    switch (ctx->pc) {
        case 0x1bac7cu: goto label_1bac7c;
        case 0x1bac8cu: goto label_1bac8c;
        default: break;
    }

    ctx->pc = 0x1bac40u;

    // 0x1bac40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bac44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bac44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bac48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bac4c: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x1bac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x1bac50: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAC50u;
    {
        const bool branch_taken_0x1bac50 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BAC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC50u;
        // 0x1bac54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac50) {
            ctx->pc = 0x1BAC64u;
            goto label_1bac64;
        }
    }
    ctx->pc = 0x1BAC58u;
    // 0x1bac58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bac58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bac5c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BAC5Cu;
    {
        const bool branch_taken_0x1bac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC5Cu;
        // 0x1bac60: 0xae030100  sw          $v1, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac5c) {
            ctx->pc = 0x1BACA8u;
            goto label_1baca8;
        }
    }
    ctx->pc = 0x1BAC64u;
label_1bac64:
    // 0x1bac64: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x1bac64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x1bac68: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1BAC68u;
    {
        const bool branch_taken_0x1bac68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC68u;
        // 0x1bac6c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac68) {
            ctx->pc = 0x1BACA8u;
            goto label_1baca8;
        }
    }
    ctx->pc = 0x1BAC70u;
    // 0x1bac70: 0x26060110  addiu       $a2, $s0, 0x110
    ctx->pc = 0x1bac70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1bac74: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1BAC74u;
    SET_GPR_U32(ctx, 31, 0x1BAC7Cu);
    ctx->pc = 0x1BAC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC74u;
    // 0x1bac78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1BAC74u, 0x1BAC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC7Cu;
label_1bac7c:
    // 0x1bac7c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1bac7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1bac80: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x1bac80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1bac84: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1BAC84u;
    SET_GPR_U32(ctx, 31, 0x1BAC8Cu);
    ctx->pc = 0x1BAC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC84u;
    // 0x1bac88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1BAC84u, 0x1BAC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC8Cu;
label_1bac8c:
    // 0x1bac8c: 0x8e0300fc  lw          $v1, 0xFC($s0)
    ctx->pc = 0x1bac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x1bac90: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bac94: 0xae0300fc  sw          $v1, 0xFC($s0)
    ctx->pc = 0x1bac94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
    // 0x1bac98: 0x8e0300fc  lw          $v1, 0xFC($s0)
    ctx->pc = 0x1bac98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x1bac9c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BAC9Cu;
    {
        const bool branch_taken_0x1bac9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bac9c) {
            ctx->pc = 0x1BACA8u;
            goto label_1baca8;
        }
    }
    ctx->pc = 0x1BACA4u;
    // 0x1baca4: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x1baca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_1baca8:
    // 0x1baca8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1baca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bacac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bacacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bacb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BACB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACB0u;
        // 0x1bacb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BACB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BACB8u;
}
