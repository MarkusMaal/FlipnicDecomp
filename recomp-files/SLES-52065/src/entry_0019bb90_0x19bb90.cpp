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

// Function: entry_0019bb90
// Address: 0x19bb90 - 0x19bc6c
void entry_0019bb90_0x19bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bb90_0x19bb90");
#endif

    switch (ctx->pc) {
        case 0x19bba0u: goto label_19bba0;
        case 0x19bbc4u: goto label_19bbc4;
        case 0x19bbe8u: goto label_19bbe8;
        case 0x19bc10u: goto label_19bc10;
        case 0x19bc1cu: goto label_19bc1c;
        case 0x19bc3cu: goto label_19bc3c;
        case 0x19bc50u: goto label_19bc50;
        default: break;
    }

    ctx->pc = 0x19bb90u;

label_19bb90:
    // 0x19bb90: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x19bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_19bb94:
    // 0x19bb94: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x19bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_19bb98:
    // 0x19bb98: 0xc06bd9c  jal         func_1AF670
label_19bb9c:
    if (ctx->pc == 0x19BB9Cu) {
        ctx->pc = 0x19BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB98u;
        // 0x19bb9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BBA0u;
        goto label_19bba0;
    }
    ctx->pc = 0x19BB98u;
    SET_GPR_U32(ctx, 31, 0x19BBA0u);
    ctx->pc = 0x19BB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB98u;
    // 0x19bb9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x19BB98u, 0x19BBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BBA0u;
label_19bba0:
    // 0x19bba0: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x19bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_19bba4:
    // 0x19bba4: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x19bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_19bba8:
    // 0x19bba8: 0x8c4202f4  lw          $v0, 0x2F4($v0)
    ctx->pc = 0x19bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 756)));
label_19bbac:
    // 0x19bbac: 0xae220bd0  sw          $v0, 0xBD0($s1)
    ctx->pc = 0x19bbacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3024), GPR_U32(ctx, 2));
label_19bbb0:
    // 0x19bbb0: 0x8e240bd0  lw          $a0, 0xBD0($s1)
    ctx->pc = 0x19bbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3024)));
label_19bbb4:
    // 0x19bbb4: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x19bbb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19bbb8:
    // 0x19bbb8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19bbb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19bbbc:
    // 0x19bbbc: 0x320f809  jalr        $t9
label_19bbc0:
    if (ctx->pc == 0x19BBC0u) {
        ctx->pc = 0x19BBC4u;
        goto label_19bbc4;
    }
    ctx->pc = 0x19BBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19BBC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BBBCu, 0x19BBC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19BBC4u;
label_19bbc4:
    // 0x19bbc4: 0x8e220bd0  lw          $v0, 0xBD0($s1)
    ctx->pc = 0x19bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3024)));
label_19bbc8:
    // 0x19bbc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19bbcc:
    // 0x19bbcc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x19bbccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_19bbd0:
    // 0x19bbd0: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19bbd4:
    // 0x19bbd4: 0xa04328f5  sb          $v1, 0x28F5($v0)
    ctx->pc = 0x19bbd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10485), (uint8_t)GPR_U32(ctx, 3));
label_19bbd8:
    // 0x19bbd8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19bbdc:
    // 0x19bbdc: 0xa043002d  sb          $v1, 0x2D($v0)
    ctx->pc = 0x19bbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 3));
label_19bbe0:
    // 0x19bbe0: 0xc046458  jal         func_119160
label_19bbe4:
    if (ctx->pc == 0x19BBE4u) {
        ctx->pc = 0x19BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BBE0u;
        // 0x19bbe4: 0x8f8480e0  lw          $a0, -0x7F20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BBE8u;
        goto label_19bbe8;
    }
    ctx->pc = 0x19BBE0u;
    SET_GPR_U32(ctx, 31, 0x19BBE8u);
    ctx->pc = 0x19BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BBE0u;
    // 0x19bbe4: 0x8f8480e0  lw          $a0, -0x7F20($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x19BBE0u, 0x19BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BBE8u;
label_19bbe8:
    // 0x19bbe8: 0xae220908  sw          $v0, 0x908($s1)
    ctx->pc = 0x19bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2312), GPR_U32(ctx, 2));
label_19bbec:
    // 0x19bbec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19bbecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19bbf0:
    // 0x19bbf0: 0xae200aa4  sw          $zero, 0xAA4($s1)
    ctx->pc = 0x19bbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2724), GPR_U32(ctx, 0));
label_19bbf4:
    // 0x19bbf4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x19bbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
label_19bbf8:
    // 0x19bbf8: 0xa2200aac  sb          $zero, 0xAAC($s1)
    ctx->pc = 0x19bbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2732), (uint8_t)GPR_U32(ctx, 0));
label_19bbfc:
    // 0x19bbfc: 0x24a50208  addiu       $a1, $a1, 0x208
    ctx->pc = 0x19bbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 520));
label_19bc00:
    // 0x19bc00: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x19bc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_19bc04:
    // 0x19bc04: 0x24c60210  addiu       $a2, $a2, 0x210
    ctx->pc = 0x19bc04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 528));
label_19bc08:
    // 0x19bc08: 0xc06cf34  jal         func_1B3CD0
label_19bc0c:
    if (ctx->pc == 0x19BC0Cu) {
        ctx->pc = 0x19BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC08u;
        // 0x19bc0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC10u;
        goto label_19bc10;
    }
    ctx->pc = 0x19BC08u;
    SET_GPR_U32(ctx, 31, 0x19BC10u);
    ctx->pc = 0x19BC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC08u;
    // 0x19bc0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x19BC08u, 0x19BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC10u;
label_19bc10:
    // 0x19bc10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19bc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19bc14:
    // 0x19bc14: 0xc0699f0  jal         func_1A67C0
label_19bc18:
    if (ctx->pc == 0x19BC18u) {
        ctx->pc = 0x19BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC14u;
        // 0x19bc18: 0x26240aa0  addiu       $a0, $s1, 0xAA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC1Cu;
        goto label_19bc1c;
    }
    ctx->pc = 0x19BC14u;
    SET_GPR_U32(ctx, 31, 0x19BC1Cu);
    ctx->pc = 0x19BC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC14u;
    // 0x19bc18: 0x26240aa0  addiu       $a0, $s1, 0xAA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A67C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A67C0u, 0x19BC14u, 0x19BC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC1Cu;
label_19bc1c:
    // 0x19bc1c: 0xa2200938  sb          $zero, 0x938($s1)
    ctx->pc = 0x19bc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2360), (uint8_t)GPR_U32(ctx, 0));
label_19bc20:
    // 0x19bc20: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19bc20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19bc24:
    // 0x19bc24: 0xae200928  sw          $zero, 0x928($s1)
    ctx->pc = 0x19bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2344), GPR_U32(ctx, 0));
label_19bc28:
    // 0x19bc28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19bc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19bc2c:
    // 0x19bc2c: 0x24a50228  addiu       $a1, $a1, 0x228
    ctx->pc = 0x19bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 552));
label_19bc30:
    // 0x19bc30: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x19bc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19bc34:
    // 0x19bc34: 0xc064a88  jal         func_192A20
label_19bc38:
    if (ctx->pc == 0x19BC38u) {
        ctx->pc = 0x19BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC34u;
        // 0x19bc38: 0xae20090c  sw          $zero, 0x90C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC3Cu;
        goto label_19bc3c;
    }
    ctx->pc = 0x19BC34u;
    SET_GPR_U32(ctx, 31, 0x19BC3Cu);
    ctx->pc = 0x19BC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC34u;
    // 0x19bc38: 0xae20090c  sw          $zero, 0x90C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2316), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x19BC34u, 0x19BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC3Cu;
label_19bc3c:
    // 0x19bc3c: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x19bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_19bc40:
    // 0x19bc40: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x19bc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_19bc44:
    // 0x19bc44: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x19bc44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_19bc48:
    // 0x19bc48: 0xc057040  jal         func_15C100
label_19bc4c:
    if (ctx->pc == 0x19BC4Cu) {
        ctx->pc = 0x19BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC48u;
        // 0x19bc4c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BC50u;
        goto label_19bc50;
    }
    ctx->pc = 0x19BC48u;
    SET_GPR_U32(ctx, 31, 0x19BC50u);
    ctx->pc = 0x19BC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC48u;
    // 0x19bc4c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19BC48u, 0x19BC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC50u;
label_19bc50:
    // 0x19bc50: 0xae2208e8  sw          $v0, 0x8E8($s1)
    ctx->pc = 0x19bc50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2280), GPR_U32(ctx, 2));
label_19bc54:
    // 0x19bc54: 0xae20069c  sw          $zero, 0x69C($s1)
    ctx->pc = 0x19bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 0));
label_19bc58:
    // 0x19bc58: 0xae200760  sw          $zero, 0x760($s1)
    ctx->pc = 0x19bc58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1888), GPR_U32(ctx, 0));
label_19bc5c:
    // 0x19bc5c: 0xae200824  sw          $zero, 0x824($s1)
    ctx->pc = 0x19bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2084), GPR_U32(ctx, 0));
label_19bc60:
    // 0x19bc60: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x19bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_19bc64:
    // 0x19bc64: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x19bc64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_19bc68:
    // 0x19bc68: 0xae20093c  sw          $zero, 0x93C($s1)
    ctx->pc = 0x19bc68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2364), GPR_U32(ctx, 0));
    ctx->pc = 0x19bc6cu;
}
