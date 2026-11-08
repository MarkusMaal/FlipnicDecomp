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

// Function: FUN_001ecf30
// Address: 0x1ecf30 - 0x1ed098
void FUN_001ecf30_0x1ecf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ecf30_0x1ecf30");
#endif

    switch (ctx->pc) {
        case 0x1ecf30u: goto label_1ecf30;
        case 0x1ecf34u: goto label_1ecf34;
        case 0x1ecf38u: goto label_1ecf38;
        case 0x1ecf3cu: goto label_1ecf3c;
        case 0x1ecf40u: goto label_1ecf40;
        case 0x1ecf44u: goto label_1ecf44;
        case 0x1ecf48u: goto label_1ecf48;
        case 0x1ecf4cu: goto label_1ecf4c;
        case 0x1ecf50u: goto label_1ecf50;
        case 0x1ecf54u: goto label_1ecf54;
        case 0x1ecf58u: goto label_1ecf58;
        case 0x1ecf5cu: goto label_1ecf5c;
        case 0x1ecf60u: goto label_1ecf60;
        case 0x1ecf64u: goto label_1ecf64;
        case 0x1ecf68u: goto label_1ecf68;
        case 0x1ecf6cu: goto label_1ecf6c;
        case 0x1ecf70u: goto label_1ecf70;
        case 0x1ecf74u: goto label_1ecf74;
        case 0x1ecf78u: goto label_1ecf78;
        case 0x1ecf7cu: goto label_1ecf7c;
        case 0x1ecf80u: goto label_1ecf80;
        case 0x1ecf84u: goto label_1ecf84;
        case 0x1ecf88u: goto label_1ecf88;
        case 0x1ecf8cu: goto label_1ecf8c;
        case 0x1ecf90u: goto label_1ecf90;
        case 0x1ecf94u: goto label_1ecf94;
        case 0x1ecf98u: goto label_1ecf98;
        case 0x1ecf9cu: goto label_1ecf9c;
        case 0x1ecfa0u: goto label_1ecfa0;
        case 0x1ecfa4u: goto label_1ecfa4;
        case 0x1ecfa8u: goto label_1ecfa8;
        case 0x1ecfacu: goto label_1ecfac;
        case 0x1ecfb0u: goto label_1ecfb0;
        case 0x1ecfb4u: goto label_1ecfb4;
        case 0x1ecfb8u: goto label_1ecfb8;
        case 0x1ecfbcu: goto label_1ecfbc;
        case 0x1ecfc0u: goto label_1ecfc0;
        case 0x1ecfc4u: goto label_1ecfc4;
        case 0x1ecfc8u: goto label_1ecfc8;
        case 0x1ecfccu: goto label_1ecfcc;
        case 0x1ecfd0u: goto label_1ecfd0;
        case 0x1ecfd4u: goto label_1ecfd4;
        case 0x1ecfd8u: goto label_1ecfd8;
        case 0x1ecfdcu: goto label_1ecfdc;
        case 0x1ecfe0u: goto label_1ecfe0;
        case 0x1ecfe4u: goto label_1ecfe4;
        case 0x1ecfe8u: goto label_1ecfe8;
        case 0x1ecfecu: goto label_1ecfec;
        case 0x1ecff0u: goto label_1ecff0;
        case 0x1ecff4u: goto label_1ecff4;
        case 0x1ecff8u: goto label_1ecff8;
        case 0x1ecffcu: goto label_1ecffc;
        case 0x1ed000u: goto label_1ed000;
        case 0x1ed004u: goto label_1ed004;
        case 0x1ed008u: goto label_1ed008;
        case 0x1ed00cu: goto label_1ed00c;
        case 0x1ed010u: goto label_1ed010;
        case 0x1ed014u: goto label_1ed014;
        case 0x1ed018u: goto label_1ed018;
        case 0x1ed01cu: goto label_1ed01c;
        case 0x1ed020u: goto label_1ed020;
        case 0x1ed024u: goto label_1ed024;
        case 0x1ed028u: goto label_1ed028;
        case 0x1ed02cu: goto label_1ed02c;
        case 0x1ed030u: goto label_1ed030;
        case 0x1ed034u: goto label_1ed034;
        case 0x1ed038u: goto label_1ed038;
        case 0x1ed03cu: goto label_1ed03c;
        case 0x1ed040u: goto label_1ed040;
        case 0x1ed044u: goto label_1ed044;
        case 0x1ed048u: goto label_1ed048;
        case 0x1ed04cu: goto label_1ed04c;
        case 0x1ed050u: goto label_1ed050;
        case 0x1ed054u: goto label_1ed054;
        case 0x1ed058u: goto label_1ed058;
        case 0x1ed05cu: goto label_1ed05c;
        case 0x1ed060u: goto label_1ed060;
        case 0x1ed064u: goto label_1ed064;
        case 0x1ed068u: goto label_1ed068;
        case 0x1ed06cu: goto label_1ed06c;
        case 0x1ed070u: goto label_1ed070;
        case 0x1ed074u: goto label_1ed074;
        case 0x1ed078u: goto label_1ed078;
        case 0x1ed07cu: goto label_1ed07c;
        case 0x1ed080u: goto label_1ed080;
        case 0x1ed084u: goto label_1ed084;
        case 0x1ed088u: goto label_1ed088;
        case 0x1ed08cu: goto label_1ed08c;
        case 0x1ed090u: goto label_1ed090;
        case 0x1ed094u: goto label_1ed094;
        default: break;
    }

    ctx->pc = 0x1ecf30u;

label_1ecf30:
    // 0x1ecf30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ecf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ecf34:
    // 0x1ecf34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ecf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1ecf38:
    // 0x1ecf38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ecf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ecf3c:
    // 0x1ecf3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ecf3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecf40:
    // 0x1ecf40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ecf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1ecf44:
    // 0x1ecf44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ecf44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ecf48:
    // 0x1ecf48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ecf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ecf4c:
    // 0x1ecf4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ecf4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecf50:
    // 0x1ecf50: 0xc082178  jal         func_2085E0
label_1ecf54:
    if (ctx->pc == 0x1ECF54u) {
        ctx->pc = 0x1ECF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF50u;
        // 0x1ecf54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECF58u;
        goto label_1ecf58;
    }
    ctx->pc = 0x1ECF50u;
    SET_GPR_U32(ctx, 31, 0x1ECF58u);
    ctx->pc = 0x1ECF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF50u;
    // 0x1ecf54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1ECF50u, 0x1ECF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECF58u;
label_1ecf58:
    // 0x1ecf58: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_1ecf5c:
    if (ctx->pc == 0x1ECF5Cu) {
        ctx->pc = 0x1ECF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF58u;
        // 0x1ecf5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECF60u;
        goto label_1ecf60;
    }
    ctx->pc = 0x1ECF58u;
    {
        const bool branch_taken_0x1ecf58 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ECF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF58u;
        // 0x1ecf5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecf58) {
            ctx->pc = 0x1ECF7Cu;
            goto label_1ecf7c;
        }
    }
    ctx->pc = 0x1ECF60u;
label_1ecf60:
    // 0x1ecf60: 0xc082014  jal         func_208050
label_1ecf64:
    if (ctx->pc == 0x1ECF64u) {
        ctx->pc = 0x1ECF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF60u;
        // 0x1ecf64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECF68u;
        goto label_1ecf68;
    }
    ctx->pc = 0x1ECF60u;
    SET_GPR_U32(ctx, 31, 0x1ECF68u);
    ctx->pc = 0x1ECF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF60u;
    // 0x1ecf64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1ECF60u, 0x1ECF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECF68u;
label_1ecf68:
    // 0x1ecf68: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1ecf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_1ecf6c:
    // 0x1ecf6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ecf6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ecf70:
    // 0x1ecf70: 0x8c62a3c4  lw          $v0, -0x5C3C($v1)
    ctx->pc = 0x1ecf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943684)));
label_1ecf74:
    // 0x1ecf74: 0x40f809  jalr        $v0
label_1ecf78:
    if (ctx->pc == 0x1ECF78u) {
        ctx->pc = 0x1ECF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF74u;
        // 0x1ecf78: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECF7Cu;
        goto label_1ecf7c;
    }
    ctx->pc = 0x1ECF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ECF7Cu);
        ctx->pc = 0x1ECF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF74u;
        // 0x1ecf78: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECF74u, 0x1ECF7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ECF7Cu;
label_1ecf7c:
    // 0x1ecf7c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ecf7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1ecf80:
    // 0x1ecf80: 0xdc254288  ld          $a1, 0x4288($at)
    ctx->pc = 0x1ecf80u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 17032)));
label_1ecf84:
    // 0x1ecf84: 0xc082178  jal         func_2085E0
label_1ecf88:
    if (ctx->pc == 0x1ECF88u) {
        ctx->pc = 0x1ECF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF84u;
        // 0x1ecf88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECF8Cu;
        goto label_1ecf8c;
    }
    ctx->pc = 0x1ECF84u;
    SET_GPR_U32(ctx, 31, 0x1ECF8Cu);
    ctx->pc = 0x1ECF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF84u;
    // 0x1ecf88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1ECF84u, 0x1ECF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECF8Cu;
label_1ecf8c:
    // 0x1ecf8c: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
label_1ecf90:
    if (ctx->pc == 0x1ECF90u) {
        ctx->pc = 0x1ECF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF8Cu;
        // 0x1ecf90: 0x3c120022  lui         $s2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECF94u;
        goto label_1ecf94;
    }
    ctx->pc = 0x1ECF8Cu;
    {
        const bool branch_taken_0x1ecf8c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ECF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF8Cu;
        // 0x1ecf90: 0x3c120022  lui         $s2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecf8c) {
            ctx->pc = 0x1ECFD4u;
            goto label_1ecfd4;
        }
    }
    ctx->pc = 0x1ECF94u;
label_1ecf94:
    // 0x1ecf94: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ecf98:
    if (ctx->pc == 0x1ECF98u) {
        ctx->pc = 0x1ECF9Cu;
        goto label_1ecf9c;
    }
    ctx->pc = 0x1ECF94u;
    {
        const bool branch_taken_0x1ecf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecf94) {
            ctx->pc = 0x1ECFB4u;
            goto label_1ecfb4;
        }
    }
    ctx->pc = 0x1ECF9Cu;
label_1ecf9c:
    // 0x1ecf9c: 0x0  nop
    ctx->pc = 0x1ecf9cu;
    // NOP
label_1ecfa0:
    // 0x1ecfa0: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x1ecfa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_1ecfa4:
    // 0x1ecfa4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1ecfa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_1ecfa8:
    // 0x1ecfa8: 0xc08202e  jal         func_2080B8
label_1ecfac:
    if (ctx->pc == 0x1ECFACu) {
        ctx->pc = 0x1ECFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFA8u;
        // 0x1ecfac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECFB0u;
        goto label_1ecfb0;
    }
    ctx->pc = 0x1ECFA8u;
    SET_GPR_U32(ctx, 31, 0x1ECFB0u);
    ctx->pc = 0x1ECFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECFA8u;
    // 0x1ecfac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1ECFA8u, 0x1ECFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECFB0u;
label_1ecfb0:
    // 0x1ecfb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ecfb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ecfb4:
    // 0x1ecfb4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ecfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1ecfb8:
    // 0x1ecfb8: 0xdc254290  ld          $a1, 0x4290($at)
    ctx->pc = 0x1ecfb8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 17040)));
label_1ecfbc:
    // 0x1ecfbc: 0xc082178  jal         func_2085E0
label_1ecfc0:
    if (ctx->pc == 0x1ECFC0u) {
        ctx->pc = 0x1ECFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFBCu;
        // 0x1ecfc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECFC4u;
        goto label_1ecfc4;
    }
    ctx->pc = 0x1ECFBCu;
    SET_GPR_U32(ctx, 31, 0x1ECFC4u);
    ctx->pc = 0x1ECFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECFBCu;
    // 0x1ecfc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1ECFBCu, 0x1ECFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECFC4u;
label_1ecfc4:
    // 0x1ecfc4: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
label_1ecfc8:
    if (ctx->pc == 0x1ECFC8u) {
        ctx->pc = 0x1ECFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFC4u;
        // 0x1ecfc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECFCCu;
        goto label_1ecfcc;
    }
    ctx->pc = 0x1ECFC4u;
    {
        const bool branch_taken_0x1ecfc4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1ECFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFC4u;
        // 0x1ecfc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecfc4) {
            ctx->pc = 0x1ECFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecfa0;
        }
    }
    ctx->pc = 0x1ECFCCu;
label_1ecfcc:
    // 0x1ecfcc: 0x10000015  b           . + 4 + (0x15 << 2)
label_1ecfd0:
    if (ctx->pc == 0x1ECFD0u) {
        ctx->pc = 0x1ECFD4u;
        goto label_1ecfd4;
    }
    ctx->pc = 0x1ECFCCu;
    {
        const bool branch_taken_0x1ecfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecfcc) {
            ctx->pc = 0x1ED024u;
            goto label_1ed024;
        }
    }
    ctx->pc = 0x1ECFD4u;
label_1ecfd4:
    // 0x1ecfd4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1ecfd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_1ecfd8:
    // 0x1ecfd8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1ecfd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_1ecfdc:
    // 0x1ecfdc: 0xc082178  jal         func_2085E0
label_1ecfe0:
    if (ctx->pc == 0x1ECFE0u) {
        ctx->pc = 0x1ECFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFDCu;
        // 0x1ecfe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECFE4u;
        goto label_1ecfe4;
    }
    ctx->pc = 0x1ECFDCu;
    SET_GPR_U32(ctx, 31, 0x1ECFE4u);
    ctx->pc = 0x1ECFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECFDCu;
    // 0x1ecfe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1ECFDCu, 0x1ECFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECFE4u;
label_1ecfe4:
    // 0x1ecfe4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_1ecfe8:
    if (ctx->pc == 0x1ECFE8u) {
        ctx->pc = 0x1ECFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFE4u;
        // 0x1ecfe8: 0x3c120022  lui         $s2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECFECu;
        goto label_1ecfec;
    }
    ctx->pc = 0x1ECFE4u;
    {
        const bool branch_taken_0x1ecfe4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1ECFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFE4u;
        // 0x1ecfe8: 0x3c120022  lui         $s2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecfe4) {
            ctx->pc = 0x1ED024u;
            goto label_1ed024;
        }
    }
    ctx->pc = 0x1ECFECu;
label_1ecfec:
    // 0x1ecfec: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ecff0:
    if (ctx->pc == 0x1ECFF0u) {
        ctx->pc = 0x1ECFF4u;
        goto label_1ecff4;
    }
    ctx->pc = 0x1ECFECu;
    {
        const bool branch_taken_0x1ecfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecfec) {
            ctx->pc = 0x1ED00Cu;
            goto label_1ed00c;
        }
    }
    ctx->pc = 0x1ECFF4u;
label_1ecff4:
    // 0x1ecff4: 0x0  nop
    ctx->pc = 0x1ecff4u;
    // NOP
label_1ecff8:
    // 0x1ecff8: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x1ecff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_1ecffc:
    // 0x1ecffc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1ecffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_1ed000:
    // 0x1ed000: 0xc0820d8  jal         func_208360
label_1ed004:
    if (ctx->pc == 0x1ED004u) {
        ctx->pc = 0x1ED004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED000u;
        // 0x1ed004: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED008u;
        goto label_1ed008;
    }
    ctx->pc = 0x1ED000u;
    SET_GPR_U32(ctx, 31, 0x1ED008u);
    ctx->pc = 0x1ED004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED000u;
    // 0x1ed004: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1ED000u, 0x1ED008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED008u;
label_1ed008:
    // 0x1ed008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ed008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ed00c:
    // 0x1ed00c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1ed00cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_1ed010:
    // 0x1ed010: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1ed010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_1ed014:
    // 0x1ed014: 0xc082178  jal         func_2085E0
label_1ed018:
    if (ctx->pc == 0x1ED018u) {
        ctx->pc = 0x1ED018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED014u;
        // 0x1ed018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED01Cu;
        goto label_1ed01c;
    }
    ctx->pc = 0x1ED014u;
    SET_GPR_U32(ctx, 31, 0x1ED01Cu);
    ctx->pc = 0x1ED018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED014u;
    // 0x1ed018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1ED014u, 0x1ED01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED01Cu;
label_1ed01c:
    // 0x1ed01c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
label_1ed020:
    if (ctx->pc == 0x1ED020u) {
        ctx->pc = 0x1ED020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED01Cu;
        // 0x1ed020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED024u;
        goto label_1ed024;
    }
    ctx->pc = 0x1ED01Cu;
    {
        const bool branch_taken_0x1ed01c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ED020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED01Cu;
        // 0x1ed020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed01c) {
            ctx->pc = 0x1ECFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecff8;
        }
    }
    ctx->pc = 0x1ED024u;
label_1ed024:
    // 0x1ed024: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ed024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1ed028:
    // 0x1ed028: 0xdc254298  ld          $a1, 0x4298($at)
    ctx->pc = 0x1ed028u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 17048)));
label_1ed02c:
    // 0x1ed02c: 0xc08202e  jal         func_2080B8
label_1ed030:
    if (ctx->pc == 0x1ED030u) {
        ctx->pc = 0x1ED030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED02Cu;
        // 0x1ed030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED034u;
        goto label_1ed034;
    }
    ctx->pc = 0x1ED02Cu;
    SET_GPR_U32(ctx, 31, 0x1ED034u);
    ctx->pc = 0x1ED030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED02Cu;
    // 0x1ed030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1ED02Cu, 0x1ED034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED034u;
label_1ed034:
    // 0x1ed034: 0xc081a24  jal         func_206890
label_1ed038:
    if (ctx->pc == 0x1ED038u) {
        ctx->pc = 0x1ED038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED034u;
        // 0x1ed038: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED03Cu;
        goto label_1ed03c;
    }
    ctx->pc = 0x1ED034u;
    SET_GPR_U32(ctx, 31, 0x1ED03Cu);
    ctx->pc = 0x1ED038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED034u;
    // 0x1ed038: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206890u, 0x1ED034u, 0x1ED03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED03Cu;
label_1ed03c:
    // 0x1ed03c: 0xc07b3a8  jal         func_1ECEA0
label_1ed040:
    if (ctx->pc == 0x1ED040u) {
        ctx->pc = 0x1ED040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED03Cu;
        // 0x1ed040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED044u;
        goto label_1ed044;
    }
    ctx->pc = 0x1ED03Cu;
    SET_GPR_U32(ctx, 31, 0x1ED044u);
    ctx->pc = 0x1ED040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED03Cu;
    // 0x1ed040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECEA0u, 0x1ED03Cu, 0x1ED044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED044u;
label_1ed044:
    // 0x1ed044: 0x26444270  addiu       $a0, $s2, 0x4270
    ctx->pc = 0x1ed044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17008));
label_1ed048:
    // 0x1ed048: 0xc07b5a2  jal         func_1ED688
label_1ed04c:
    if (ctx->pc == 0x1ED04Cu) {
        ctx->pc = 0x1ED04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED048u;
        // 0x1ed04c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED050u;
        goto label_1ed050;
    }
    ctx->pc = 0x1ED048u;
    SET_GPR_U32(ctx, 31, 0x1ED050u);
    ctx->pc = 0x1ED04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED048u;
    // 0x1ed04c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1ED048u, 0x1ED050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED050u;
label_1ed050:
    // 0x1ed050: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
label_1ed054:
    if (ctx->pc == 0x1ED054u) {
        ctx->pc = 0x1ED054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED050u;
        // 0x1ed054: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED058u;
        goto label_1ed058;
    }
    ctx->pc = 0x1ED050u;
    {
        const bool branch_taken_0x1ed050 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1ED054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED050u;
        // 0x1ed054: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed050) {
            ctx->pc = 0x1ED078u;
            goto label_1ed078;
        }
    }
    ctx->pc = 0x1ED058u;
label_1ed058:
    // 0x1ed058: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1ed058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_1ed05c:
    // 0x1ed05c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ed05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ed060:
    // 0x1ed060: 0x24844278  addiu       $a0, $a0, 0x4278
    ctx->pc = 0x1ed060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17016));
label_1ed064:
    // 0x1ed064: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ed064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ed068:
    // 0x1ed068: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ed068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ed06c:
    // 0x1ed06c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed070:
    // 0x1ed070: 0x807b5a2  j           func_1ED688
label_1ed074:
    if (ctx->pc == 0x1ED074u) {
        ctx->pc = 0x1ED074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED070u;
        // 0x1ed074: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED078u;
        goto label_1ed078;
    }
    ctx->pc = 0x1ED070u;
    ctx->pc = 0x1ED074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED070u;
    // 0x1ed074: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    FUN_001ed688_0x1ed688(rdram, ctx, runtime); return;
    ctx->pc = 0x1ED078u;
label_1ed078:
    // 0x1ed078: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1ed078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_1ed07c:
    // 0x1ed07c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ed07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ed080:
    // 0x1ed080: 0x24844280  addiu       $a0, $a0, 0x4280
    ctx->pc = 0x1ed080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17024));
label_1ed084:
    // 0x1ed084: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ed084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ed088:
    // 0x1ed088: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ed088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ed08c:
    // 0x1ed08c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed090:
    // 0x1ed090: 0x807b5a2  j           func_1ED688
label_1ed094:
    if (ctx->pc == 0x1ED094u) {
        ctx->pc = 0x1ED094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED090u;
        // 0x1ed094: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED098u;
        goto label_fallthrough_0x1ed090;
    }
    ctx->pc = 0x1ED090u;
    ctx->pc = 0x1ED094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED090u;
    // 0x1ed094: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    FUN_001ed688_0x1ed688(rdram, ctx, runtime); return;
label_fallthrough_0x1ed090:
    ctx->pc = 0x1ED098u;
}
