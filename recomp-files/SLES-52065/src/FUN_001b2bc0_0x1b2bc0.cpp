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

// Function: FUN_001b2bc0
// Address: 0x1b2bc0 - 0x1b2c28
void FUN_001b2bc0_0x1b2bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b2bc0_0x1b2bc0");
#endif

    switch (ctx->pc) {
        case 0x1b2becu: goto label_1b2bec;
        case 0x1b2c08u: goto label_1b2c08;
        case 0x1b2c14u: goto label_1b2c14;
        default: break;
    }

    ctx->pc = 0x1b2bc0u;

    // 0x1b2bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b2bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b2bcc: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x1b2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x1b2bd0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2BD0u;
    {
        const bool branch_taken_0x1b2bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2BD0u;
        // 0x1b2bd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2bd0) {
            ctx->pc = 0x1B2BF4u;
            goto label_1b2bf4;
        }
    }
    ctx->pc = 0x1B2BD8u;
    // 0x1b2bd8: 0xc60c00b0  lwc1        $f12, 0xB0($s0)
    ctx->pc = 0x1b2bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2bdc: 0xc60d00b4  lwc1        $f13, 0xB4($s0)
    ctx->pc = 0x1b2bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b2be0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1b2be0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b2be4: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1B2BE4u;
    SET_GPR_U32(ctx, 31, 0x1B2BECu);
    ctx->pc = 0x1B2BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2BE4u;
    // 0x1b2be8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1B2BE4u, 0x1B2BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2BECu;
label_1b2bec:
    // 0x1b2bec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2BECu;
    {
        const bool branch_taken_0x1b2bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2BECu;
        // 0x1b2bf0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2bec) {
            ctx->pc = 0x1B2C0Cu;
            goto label_1b2c0c;
        }
    }
    ctx->pc = 0x1B2BF4u;
label_1b2bf4:
    // 0x1b2bf4: 0xc60c00b0  lwc1        $f12, 0xB0($s0)
    ctx->pc = 0x1b2bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2bf8: 0xc60d00b4  lwc1        $f13, 0xB4($s0)
    ctx->pc = 0x1b2bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b2bfc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1b2bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b2c00: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1B2C00u;
    SET_GPR_U32(ctx, 31, 0x1B2C08u);
    ctx->pc = 0x1B2C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C00u;
    // 0x1b2c04: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1B2C00u, 0x1B2C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C08u;
label_1b2c08:
    // 0x1b2c08: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b2c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1b2c0c:
    // 0x1b2c0c: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1B2C0Cu;
    SET_GPR_U32(ctx, 31, 0x1B2C14u);
    ctx->pc = 0x1B2C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C0Cu;
    // 0x1b2c10: 0x260500bc  addiu       $a1, $s0, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1B2C0Cu, 0x1B2C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C14u;
label_1b2c14:
    // 0x1b2c14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2c18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b2c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b2c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2c20: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C20u;
        // 0x1b2c24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2C28u;
}
