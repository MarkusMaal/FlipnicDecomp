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

// Function: FUN_001b2c60
// Address: 0x1b2c60 - 0x1b2cc8
void FUN_001b2c60_0x1b2c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b2c60_0x1b2c60");
#endif

    switch (ctx->pc) {
        case 0x1b2c8cu: goto label_1b2c8c;
        case 0x1b2ca8u: goto label_1b2ca8;
        case 0x1b2cb4u: goto label_1b2cb4;
        default: break;
    }

    ctx->pc = 0x1b2c60u;

    // 0x1b2c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b2c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b2c6c: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x1b2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x1b2c70: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2C70u;
    {
        const bool branch_taken_0x1b2c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C70u;
        // 0x1b2c74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c70) {
            ctx->pc = 0x1B2C94u;
            goto label_1b2c94;
        }
    }
    ctx->pc = 0x1B2C78u;
    // 0x1b2c78: 0xc60c00b0  lwc1        $f12, 0xB0($s0)
    ctx->pc = 0x1b2c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2c7c: 0xc60d00b4  lwc1        $f13, 0xB4($s0)
    ctx->pc = 0x1b2c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b2c80: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1b2c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b2c84: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1B2C84u;
    SET_GPR_U32(ctx, 31, 0x1B2C8Cu);
    ctx->pc = 0x1B2C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C84u;
    // 0x1b2c88: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1B2C84u, 0x1B2C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C8Cu;
label_1b2c8c:
    // 0x1b2c8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2C8Cu;
    {
        const bool branch_taken_0x1b2c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C8Cu;
        // 0x1b2c90: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c8c) {
            ctx->pc = 0x1B2CACu;
            goto label_1b2cac;
        }
    }
    ctx->pc = 0x1B2C94u;
label_1b2c94:
    // 0x1b2c94: 0xc60c00b0  lwc1        $f12, 0xB0($s0)
    ctx->pc = 0x1b2c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2c98: 0xc60d00b4  lwc1        $f13, 0xB4($s0)
    ctx->pc = 0x1b2c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b2c9c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1b2c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b2ca0: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1B2CA0u;
    SET_GPR_U32(ctx, 31, 0x1B2CA8u);
    ctx->pc = 0x1B2CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2CA0u;
    // 0x1b2ca4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1B2CA0u, 0x1B2CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2CA8u;
label_1b2ca8:
    // 0x1b2ca8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b2ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1b2cac:
    // 0x1b2cac: 0xc0627e0  jal         func_189F80
    ctx->pc = 0x1B2CACu;
    SET_GPR_U32(ctx, 31, 0x1B2CB4u);
    ctx->pc = 0x1B2CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2CACu;
    // 0x1b2cb0: 0x260500bc  addiu       $a1, $s0, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F80u, 0x1B2CACu, 0x1B2CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2CB4u;
label_1b2cb4:
    // 0x1b2cb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2cb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b2cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2cbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b2cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CC0u;
        // 0x1b2cc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2CC8u;
}
