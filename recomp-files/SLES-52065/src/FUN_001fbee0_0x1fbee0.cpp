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

// Function: FUN_001fbee0
// Address: 0x1fbee0 - 0x1fbf9c
void FUN_001fbee0_0x1fbee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fbee0_0x1fbee0");
#endif

    switch (ctx->pc) {
        case 0x1fbefcu: goto label_1fbefc;
        case 0x1fbf88u: goto label_1fbf88;
        default: break;
    }

    ctx->pc = 0x1fbee0u;

    // 0x1fbee0: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1fbee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1fbee4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fbee8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fbeec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fbeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fbef0: 0x2812  mflo        $a1
    ctx->pc = 0x1fbef0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1fbef4: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x1FBEF4u;
    SET_GPR_U32(ctx, 31, 0x1FBEFCu);
    ctx->pc = 0x1FEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEC8u, 0x1FBEF4u, 0x1FBEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBEFCu;
label_1fbefc:
    // 0x1fbefc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fbefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf00: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBF00u;
    {
        const bool branch_taken_0x1fbf00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbf00) {
            ctx->pc = 0x1FBF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBF00u;
            // 0x1fbf04: 0x8e03fffc  lw          $v1, -0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBF10u;
            goto label_1fbf10;
        }
    }
    ctx->pc = 0x1FBF08u;
    // 0x1fbf08: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1FBF08u;
    {
        const bool branch_taken_0x1fbf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF08u;
        // 0x1fbf0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf08) {
            ctx->pc = 0x1FBF8Cu;
            goto label_1fbf8c;
        }
    }
    ctx->pc = 0x1FBF10u;
label_1fbf10:
    // 0x1fbf10: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fbf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fbf14: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1fbf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1fbf18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1fbf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fbf1c: 0x2466fffc  addiu       $a2, $v1, -0x4
    ctx->pc = 0x1fbf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1fbf20: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x1fbf20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x1fbf24: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FBF24u;
    {
        const bool branch_taken_0x1fbf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF24u;
        // 0x1fbf28: 0x2cc20014  sltiu       $v0, $a2, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf24) {
            ctx->pc = 0x1FBF7Cu;
            goto label_1fbf7c;
        }
    }
    ctx->pc = 0x1FBF2Cu;
    // 0x1fbf2c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FBF2Cu;
    {
        const bool branch_taken_0x1fbf2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF2Cu;
        // 0x1fbf30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf2c) {
            ctx->pc = 0x1FBF68u;
            goto label_1fbf68;
        }
    }
    ctx->pc = 0x1FBF34u;
    // 0x1fbf34: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1fbf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1fbf38: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1fbf38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1fbf3c: 0x2cc2001c  sltiu       $v0, $a2, 0x1C
    ctx->pc = 0x1fbf3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x1fbf40: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FBF40u;
    {
        const bool branch_taken_0x1fbf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF40u;
        // 0x1fbf44: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf40) {
            ctx->pc = 0x1FBF68u;
            goto label_1fbf68;
        }
    }
    ctx->pc = 0x1FBF48u;
    // 0x1fbf48: 0x2cc20024  sltiu       $v0, $a2, 0x24
    ctx->pc = 0x1fbf48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x1fbf4c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1fbf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1fbf50: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1fbf50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1fbf54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBF54u;
    {
        const bool branch_taken_0x1fbf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF54u;
        // 0x1fbf58: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf54) {
            ctx->pc = 0x1FBF68u;
            goto label_1fbf68;
        }
    }
    ctx->pc = 0x1FBF5Cu;
    // 0x1fbf5c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1fbf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1fbf60: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1fbf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1fbf64: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1fbf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1fbf68:
    // 0x1fbf68: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1fbf68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1fbf6c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1fbf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1fbf70: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1fbf70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1fbf74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBF74u;
    {
        const bool branch_taken_0x1fbf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF74u;
        // 0x1fbf78: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf74) {
            ctx->pc = 0x1FBF88u;
            goto label_1fbf88;
        }
    }
    ctx->pc = 0x1FBF7Cu;
label_1fbf7c:
    // 0x1fbf7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fbf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf80: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1FBF80u;
    SET_GPR_U32(ctx, 31, 0x1FBF88u);
    ctx->pc = 0x1FBF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBF80u;
    // 0x1fbf84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1FBF80u, 0x1FBF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBF88u;
label_1fbf88:
    // 0x1fbf88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fbf88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf8c:
    // 0x1fbf8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fbf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbf90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbf90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbf94: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF94u;
        // 0x1fbf98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBF9Cu;
}
