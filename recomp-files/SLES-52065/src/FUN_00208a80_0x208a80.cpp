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

// Function: FUN_00208a80
// Address: 0x208a80 - 0x208cb4
void FUN_00208a80_0x208a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00208a80_0x208a80");
#endif

    switch (ctx->pc) {
        case 0x208a94u: goto label_208a94;
        case 0x208aa8u: goto label_208aa8;
        case 0x208b68u: goto label_208b68;
        case 0x208ba0u: goto label_208ba0;
        case 0x208c48u: goto label_208c48;
        default: break;
    }

    ctx->pc = 0x208a80u;

    // 0x208a80: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x208a80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a84: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x208a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x208a88: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x208a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x208a8c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x208A8Cu;
    {
        const bool branch_taken_0x208a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208a8c) {
            ctx->pc = 0x208A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208A8Cu;
            // 0x208a90: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208A9Cu;
            goto label_208a9c;
        }
    }
    ctx->pc = 0x208A94u;
label_208a94:
    // 0x208a94: 0x3e00008  jr          $ra
    ctx->pc = 0x208A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A94u;
        // 0x208a98: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208A9Cu;
label_208a9c:
    // 0x208a9c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x208a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x208aa0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208AA0u;
    {
        const bool branch_taken_0x208aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AA0u;
        // 0x208aa4: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208aa0) {
            ctx->pc = 0x208AB0u;
            goto label_208ab0;
        }
    }
    ctx->pc = 0x208AA8u;
label_208aa8:
    // 0x208aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x208AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AA8u;
        // 0x208aac: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208AB0u;
label_208ab0:
    // 0x208ab0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x208AB0u;
    {
        const bool branch_taken_0x208ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AB0u;
        // 0x208ab4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ab0) {
            ctx->pc = 0x208AD8u;
            goto label_208ad8;
        }
    }
    ctx->pc = 0x208AB8u;
    // 0x208ab8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x208AB8u;
    {
        const bool branch_taken_0x208ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208ab8) {
            ctx->pc = 0x208A94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208a94;
        }
    }
    ctx->pc = 0x208AC0u;
    // 0x208ac0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x208ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x208ac4: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x208ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x208ac8: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x208AC8u;
    {
        const bool branch_taken_0x208ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x208ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AC8u;
        // 0x208acc: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ac8) {
            ctx->pc = 0x208A94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208a94;
        }
    }
    ctx->pc = 0x208AD0u;
    // 0x208ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x208AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AD0u;
        // 0x208ad4: 0x24422c18  addiu       $v0, $v0, 0x2C18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208AD8u;
label_208ad8:
    // 0x208ad8: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x208AD8u;
    {
        const bool branch_taken_0x208ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AD8u;
        // 0x208adc: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ad8) {
            ctx->pc = 0x208AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208aa8;
        }
    }
    ctx->pc = 0x208AE0u;
    // 0x208ae0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x208AE0u;
    {
        const bool branch_taken_0x208ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AE0u;
        // 0x208ae4: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ae0) {
            ctx->pc = 0x208B28u;
            goto label_208b28;
        }
    }
    ctx->pc = 0x208AE8u;
    // 0x208ae8: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x208AE8u;
    {
        const bool branch_taken_0x208ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208ae8) {
            ctx->pc = 0x208A94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208a94;
        }
    }
    ctx->pc = 0x208AF0u;
    // 0x208af0: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x208af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x208af4: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x208af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x208af8: 0x6923000f  ldl         $v1, 0xF($t1)
    ctx->pc = 0x208af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x208afc: 0x6d230008  ldr         $v1, 0x8($t1)
    ctx->pc = 0x208afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x208b00: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x208b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x208b04: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x208b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x208b08: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x208b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x208b0c: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x208b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x208b10: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x208b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x208b14: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x208b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208b18: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x208b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x208b1c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x208b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x208b20: 0x3e00008  jr          $ra
    ctx->pc = 0x208B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B20u;
        // 0x208b24: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208B28u;
label_208b28:
    // 0x208b28: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x208B28u;
    {
        const bool branch_taken_0x208b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B28u;
        // 0x208b2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b28) {
            ctx->pc = 0x208AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208aa8;
        }
    }
    ctx->pc = 0x208B30u;
    // 0x208b30: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x208b30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x208b34: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x208b34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x208b38: 0x8d2b000c  lw          $t3, 0xC($t1)
    ctx->pc = 0x208b38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x208b3c: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x208b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x208b40: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x208b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x208b44: 0x32023  negu        $a0, $v1
    ctx->pc = 0x208b44u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x208b48: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x208b48u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x208b4c: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x208b4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x208b50: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x208B50u;
    {
        const bool branch_taken_0x208b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B50u;
        // 0x208b54: 0x8caa000c  lw          $t2, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b50) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208B58u;
    // 0x208b58: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x208b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x208b5c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x208B5Cu;
    {
        const bool branch_taken_0x208b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B5Cu;
        // 0x208b60: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b5c) {
            ctx->pc = 0x208B8Cu;
            goto label_208b8c;
        }
    }
    ctx->pc = 0x208B64u;
    // 0x208b64: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x208b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_208b68:
    // 0x208b68: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x208b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x208b6c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x208b6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x208b70: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x208b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x208b74: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x208b74u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x208b78: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x208b78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x208b7c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x208B7Cu;
    {
        const bool branch_taken_0x208b7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x208b7c) {
            ctx->pc = 0x208B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208b68;
        }
    }
    ctx->pc = 0x208B84u;
    // 0x208b84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x208B84u;
    {
        const bool branch_taken_0x208b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B84u;
        // 0x208b88: 0xe8102a  slt         $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b84) {
            ctx->pc = 0x208B94u;
            goto label_208b94;
        }
    }
    ctx->pc = 0x208B8Cu;
label_208b8c:
    // 0x208b8c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x208b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x208b90: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x208b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_208b94:
    // 0x208b94: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x208B94u;
    {
        const bool branch_taken_0x208b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b94) {
            ctx->pc = 0x208BE8u;
            goto label_208be8;
        }
    }
    ctx->pc = 0x208B9Cu;
    // 0x208b9c: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x208b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_208ba0:
    // 0x208ba0: 0xb1842  srl         $v1, $t3, 1
    ctx->pc = 0x208ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x208ba4: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x208ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x208ba8: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x208ba8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x208bac: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x208bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x208bb0: 0x0  nop
    ctx->pc = 0x208bb0u;
    // NOP
    // 0x208bb4: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x208BB4u;
    {
        const bool branch_taken_0x208bb4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x208bb4) {
            ctx->pc = 0x208BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208ba0;
        }
    }
    ctx->pc = 0x208BBCu;
    // 0x208bbc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x208BBCu;
    {
        const bool branch_taken_0x208bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BBCu;
        // 0x208bc0: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bbc) {
            ctx->pc = 0x208BE8u;
            goto label_208be8;
        }
    }
    ctx->pc = 0x208BC4u;
label_208bc4:
    // 0x208bc4: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x208bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x208bc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208BC8u;
    {
        const bool branch_taken_0x208bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BC8u;
        // 0x208bcc: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bc8) {
            ctx->pc = 0x208BDCu;
            goto label_208bdc;
        }
    }
    ctx->pc = 0x208BD0u;
    // 0x208bd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x208bd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208bd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x208BD4u;
    {
        const bool branch_taken_0x208bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BD4u;
        // 0x208bd8: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bd4) {
            ctx->pc = 0x208BE8u;
            goto label_208be8;
        }
    }
    ctx->pc = 0x208BDCu;
label_208bdc:
    // 0x208bdc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x208bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208be0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x208be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x208be4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x208be4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208be8:
    // 0x208be8: 0x11250022  beq         $t1, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x208BE8u;
    {
        const bool branch_taken_0x208be8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x208BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BE8u;
        // 0x208bec: 0x16a1021  addu        $v0, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208be8) {
            ctx->pc = 0x208C74u;
            goto label_208c74;
        }
    }
    ctx->pc = 0x208BF0u;
    // 0x208bf0: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x208BF0u;
    {
        const bool branch_taken_0x208bf0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x208BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BF0u;
        // 0x208bf4: 0x14b1023  subu        $v0, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bf0) {
            ctx->pc = 0x208BFCu;
            goto label_208bfc;
        }
    }
    ctx->pc = 0x208BF8u;
    // 0x208bf8: 0x16a1023  subu        $v0, $t3, $t2
    ctx->pc = 0x208bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_208bfc:
    // 0x208bfc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208BFCu;
    {
        const bool branch_taken_0x208bfc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x208C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BFCu;
        // 0x208c00: 0x21823  negu        $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bfc) {
            ctx->pc = 0x208C14u;
            goto label_208c14;
        }
    }
    ctx->pc = 0x208C04u;
    // 0x208c04: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x208c04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x208c08: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x208c08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x208c0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x208C0Cu;
    {
        const bool branch_taken_0x208c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C0Cu;
        // 0x208c10: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c0c) {
            ctx->pc = 0x208C24u;
            goto label_208c24;
        }
    }
    ctx->pc = 0x208C14u;
label_208c14:
    // 0x208c14: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x208c14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x208c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208c1c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x208c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x208c20: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x208c20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_208c24:
    // 0x208c24: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x208c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x208c28: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x208c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x208c2c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x208c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x208c30: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x208c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x208c34: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x208c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x208c38: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x208C38u;
    {
        const bool branch_taken_0x208c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C38u;
        // 0x208c3c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c38) {
            ctx->pc = 0x208C84u;
            goto label_208c84;
        }
    }
    ctx->pc = 0x208C40u;
    // 0x208c40: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x208c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x208c44: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x208c44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
label_208c48:
    // 0x208c48: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x208c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x208c4c: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x208c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x208c50: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x208c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x208c54: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x208c54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x208c58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x208c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x208c5c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x208c5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x208c60: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x208c60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x208c64: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x208C64u;
    {
        const bool branch_taken_0x208c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C64u;
        // 0x208c68: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c64) {
            ctx->pc = 0x208C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208c48;
        }
    }
    ctx->pc = 0x208C6Cu;
    // 0x208c6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x208C6Cu;
    {
        const bool branch_taken_0x208c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C6Cu;
        // 0x208c70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c6c) {
            ctx->pc = 0x208C84u;
            goto label_208c84;
        }
    }
    ctx->pc = 0x208C74u;
label_208c74:
    // 0x208c74: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x208c74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x208c78: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x208c78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x208c7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x208c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c80: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x208c80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_208c84:
    // 0x208c84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x208c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208c88: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x208C88u;
    {
        const bool branch_taken_0x208c88 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x208C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C88u;
        // 0x208c8c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c88) {
            ctx->pc = 0x208CACu;
            goto label_208cac;
        }
    }
    ctx->pc = 0x208C90u;
    // 0x208c90: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x208c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x208c94: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x208c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x208c98: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x208c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x208c9c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x208c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x208ca0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x208ca4: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x208ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x208ca8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x208ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_208cac:
    // 0x208cac: 0x3e00008  jr          $ra
    ctx->pc = 0x208CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CACu;
        // 0x208cb0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208CB4u;
}
