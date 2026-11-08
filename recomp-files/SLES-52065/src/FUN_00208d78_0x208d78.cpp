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

// Function: FUN_00208d78
// Address: 0x208d78 - 0x208f6c
void FUN_00208d78_0x208d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00208d78_0x208d78");
#endif

    switch (ctx->pc) {
        case 0x208d98u: goto label_208d98;
        case 0x208da8u: goto label_208da8;
        case 0x208eb0u: goto label_208eb0;
        case 0x208ef8u: goto label_208ef8;
        case 0x208f5cu: goto label_208f5c;
        default: break;
    }

    ctx->pc = 0x208d78u;

    // 0x208d78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x208d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x208d7c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x208d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x208d80: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x208d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x208d84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x208d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x208d88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x208d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d8c: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x208d8cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x208d90: 0xc08227c  jal         func_2089F0
    ctx->pc = 0x208D90u;
    SET_GPR_U32(ctx, 31, 0x208D98u);
    ctx->pc = 0x208D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D90u;
    // 0x208d94: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2089F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2089F0u, 0x208D90u, 0x208D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D98u;
label_208d98:
    // 0x208d98: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x208d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x208d9c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x208d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x208da0: 0xc08227c  jal         func_2089F0
    ctx->pc = 0x208DA0u;
    SET_GPR_U32(ctx, 31, 0x208DA8u);
    ctx->pc = 0x208DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208DA0u;
    // 0x208da4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2089F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2089F0u, 0x208DA0u, 0x208DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DA8u;
label_208da8:
    // 0x208da8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x208da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208dac: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x208dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x208db0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x208DB0u;
    {
        const bool branch_taken_0x208db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DB0u;
        // 0x208db4: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208db0) {
            ctx->pc = 0x208E0Cu;
            goto label_208e0c;
        }
    }
    ctx->pc = 0x208DB8u;
    // 0x208db8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x208db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208dbc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x208dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x208dc0: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x208DC0u;
    {
        const bool branch_taken_0x208dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208dc0) {
            ctx->pc = 0x208DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208DC0u;
            // 0x208dc4: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208E34u;
            goto label_208e34;
        }
    }
    ctx->pc = 0x208DC8u;
    // 0x208dc8: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x208dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x208dcc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208DCCu;
    {
        const bool branch_taken_0x208dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DCCu;
        // 0x208dd0: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208dcc) {
            ctx->pc = 0x208DE8u;
            goto label_208de8;
        }
    }
    ctx->pc = 0x208DD4u;
    // 0x208dd4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x208dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x208dd8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208DD8u;
    {
        const bool branch_taken_0x208dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DD8u;
        // 0x208ddc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208dd8) {
            ctx->pc = 0x208DF8u;
            goto label_208df8;
        }
    }
    ctx->pc = 0x208DE0u;
    // 0x208de0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x208DE0u;
    {
        const bool branch_taken_0x208de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DE0u;
        // 0x208de4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208de0) {
            ctx->pc = 0x208E14u;
            goto label_208e14;
        }
    }
    ctx->pc = 0x208DE8u;
label_208de8:
    // 0x208de8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208DE8u;
    {
        const bool branch_taken_0x208de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DE8u;
        // 0x208dec: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208de8) {
            ctx->pc = 0x208E04u;
            goto label_208e04;
        }
    }
    ctx->pc = 0x208DF0u;
    // 0x208df0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x208DF0u;
    {
        const bool branch_taken_0x208df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DF0u;
        // 0x208df4: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208df0) {
            ctx->pc = 0x208E34u;
            goto label_208e34;
        }
    }
    ctx->pc = 0x208DF8u;
label_208df8:
    // 0x208df8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x208df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x208dfc: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x208DFCu;
    {
        const bool branch_taken_0x208dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DFCu;
        // 0x208e00: 0x24442c18  addiu       $a0, $v0, 0x2C18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208dfc) {
            ctx->pc = 0x208F54u;
            goto label_208f54;
        }
    }
    ctx->pc = 0x208E04u;
label_208e04:
    // 0x208e04: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208E04u;
    {
        const bool branch_taken_0x208e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E04u;
        // 0x208e08: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e04) {
            ctx->pc = 0x208E28u;
            goto label_208e28;
        }
    }
    ctx->pc = 0x208E0Cu;
label_208e0c:
    // 0x208e0c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x208e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x208e10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x208e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_208e14:
    // 0x208e14: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x208e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x208e18: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x208e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x208e1c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x208e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x208e20: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x208E20u;
    {
        const bool branch_taken_0x208e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E20u;
        // 0x208e24: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e20) {
            ctx->pc = 0x208F54u;
            goto label_208f54;
        }
    }
    ctx->pc = 0x208E28u;
label_208e28:
    // 0x208e28: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208E28u;
    {
        const bool branch_taken_0x208e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E28u;
        // 0x208e2c: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e28) {
            ctx->pc = 0x208E4Cu;
            goto label_208e4c;
        }
    }
    ctx->pc = 0x208E30u;
    // 0x208e30: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x208e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_208e34:
    // 0x208e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e38: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x208e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x208e3c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x208e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x208e40: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x208e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x208e44: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x208E44u;
    {
        const bool branch_taken_0x208e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E44u;
        // 0x208e48: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e44) {
            ctx->pc = 0x208F54u;
            goto label_208f54;
        }
    }
    ctx->pc = 0x208E4Cu;
label_208e4c:
    // 0x208e4c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x208e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x208e50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x208e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208e54: 0x820019  multu       $a0, $v0
    ctx->pc = 0x208e54u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x208e58: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x208e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x208e5c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x208e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x208e60: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x208e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x208e64: 0x2812  mflo        $a1
    ctx->pc = 0x208e64u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x208e68: 0x2010  mfhi        $a0
    ctx->pc = 0x208e68u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x208e6c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x208e6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x208e70: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x208e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x208e74: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x208e74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x208e78: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x208e78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x208e7c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x208e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x208e80: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x208e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x208e84: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x208e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x208e88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x208e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x208e8c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x208e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x208e90: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x208e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x208e94: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x208e94u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x208e98: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x208e98u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x208e9c: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x208E9Cu;
    {
        const bool branch_taken_0x208e9c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x208EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E9Cu;
        // 0x208ea0: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e9c) {
            ctx->pc = 0x208ED0u;
            goto label_208ed0;
        }
    }
    ctx->pc = 0x208EA4u;
    // 0x208ea4: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x208ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x208ea8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x208ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x208eac: 0x0  nop
    ctx->pc = 0x208eacu;
    // NOP
label_208eb0:
    // 0x208eb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208EB0u;
    {
        const bool branch_taken_0x208eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EB0u;
        // 0x208eb4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208eb0) {
            ctx->pc = 0x208EC0u;
            goto label_208ec0;
        }
    }
    ctx->pc = 0x208EB8u;
    // 0x208eb8: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x208eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x208ebc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x208ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_208ec0:
    // 0x208ec0: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x208ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x208ec4: 0x480fffa  bltz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x208EC4u;
    {
        const bool branch_taken_0x208ec4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x208EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EC4u;
        // 0x208ec8: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ec4) {
            ctx->pc = 0x208EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208eb0;
        }
    }
    ctx->pc = 0x208ECCu;
    // 0x208ecc: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x208eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_208ed0:
    // 0x208ed0: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x208ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x208ed4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x208ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x208ed8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x208ed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x208edc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x208EDCu;
    {
        const bool branch_taken_0x208edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EDCu;
        // 0x208ee0: 0x3083007f  andi        $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208edc) {
            ctx->pc = 0x208F20u;
            goto label_208f20;
        }
    }
    ctx->pc = 0x208EE4u;
    // 0x208ee4: 0x3c073fff  lui         $a3, 0x3FFF
    ctx->pc = 0x208ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16383 << 16));
    // 0x208ee8: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x208ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x208eec: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x208eecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x208ef0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x208ef0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x208ef4: 0x0  nop
    ctx->pc = 0x208ef4u;
    // NOP
label_208ef8:
    // 0x208ef8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x208ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x208efc: 0xa81824  and         $v1, $a1, $t0
    ctx->pc = 0x208efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x208f00: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x208f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x208f04: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x208f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x208f08: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x208f08u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x208f0c: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x208f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x208f10: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x208F10u;
    {
        const bool branch_taken_0x208f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F10u;
        // 0x208f14: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f10) {
            ctx->pc = 0x208EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208ef8;
        }
    }
    ctx->pc = 0x208F18u;
    // 0x208f18: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x208f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x208f1c: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x208f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
label_208f20:
    // 0x208f20: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x208f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x208f24: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208F24u;
    {
        const bool branch_taken_0x208f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x208f24) {
            ctx->pc = 0x208F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208F24u;
            // 0x208f28: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208F48u;
            goto label_208f48;
        }
    }
    ctx->pc = 0x208F2Cu;
    // 0x208f2c: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x208f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x208f30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208F30u;
    {
        const bool branch_taken_0x208f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F30u;
        // 0x208f34: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f30) {
            ctx->pc = 0x208F40u;
            goto label_208f40;
        }
    }
    ctx->pc = 0x208F38u;
    // 0x208f38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x208F38u;
    {
        const bool branch_taken_0x208f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F38u;
        // 0x208f3c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f38) {
            ctx->pc = 0x208F44u;
            goto label_208f44;
        }
    }
    ctx->pc = 0x208F40u;
label_208f40:
    // 0x208f40: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x208f40u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_208f44:
    // 0x208f44: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x208f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_208f48:
    // 0x208f48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x208f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208f4c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x208f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x208f50: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x208f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_208f54:
    // 0x208f54: 0xc082238  jal         func_2088E0
    ctx->pc = 0x208F54u;
    SET_GPR_U32(ctx, 31, 0x208F5Cu);
    ctx->pc = 0x2088E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2088E0u, 0x208F54u, 0x208F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F5Cu;
label_208f5c:
    // 0x208f5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x208f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x208f60: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x208f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x208f64: 0x3e00008  jr          $ra
    ctx->pc = 0x208F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F64u;
        // 0x208f68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208F6Cu;
}
