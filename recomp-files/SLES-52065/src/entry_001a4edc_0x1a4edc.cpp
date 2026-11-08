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

// Function: entry_001a4edc
// Address: 0x1a4edc - 0x1a4fa0
void entry_001a4edc_0x1a4edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4edc_0x1a4edc");
#endif

    switch (ctx->pc) {
        case 0x1a4eecu: goto label_1a4eec;
        case 0x1a4f10u: goto label_1a4f10;
        case 0x1a4f40u: goto label_1a4f40;
        case 0x1a4f68u: goto label_1a4f68;
        case 0x1a4f74u: goto label_1a4f74;
        case 0x1a4f88u: goto label_1a4f88;
        default: break;
    }

    ctx->pc = 0x1a4edcu;

label_1a4edc:
    // 0x1a4edc: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a4ee0:
    // 0x1a4ee0: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1a4ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a4ee4:
    // 0x1a4ee4: 0xc06bd9c  jal         func_1AF670
label_1a4ee8:
    if (ctx->pc == 0x1A4EE8u) {
        ctx->pc = 0x1A4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EE4u;
        // 0x1a4ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4EECu;
        goto label_1a4eec;
    }
    ctx->pc = 0x1A4EE4u;
    SET_GPR_U32(ctx, 31, 0x1A4EECu);
    ctx->pc = 0x1A4EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4EE4u;
    // 0x1a4ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x1A4EE4u, 0x1A4EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EECu;
label_1a4eec:
    // 0x1a4eec: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a4ef0:
    // 0x1a4ef0: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1a4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a4ef4:
    // 0x1a4ef4: 0x8c420308  lw          $v0, 0x308($v0)
    ctx->pc = 0x1a4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 776)));
label_1a4ef8:
    // 0x1a4ef8: 0xae620a60  sw          $v0, 0xA60($s3)
    ctx->pc = 0x1a4ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2656), GPR_U32(ctx, 2));
label_1a4efc:
    // 0x1a4efc: 0x8e640a60  lw          $a0, 0xA60($s3)
    ctx->pc = 0x1a4efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2656)));
label_1a4f00:
    // 0x1a4f00: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1a4f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a4f04:
    // 0x1a4f04: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a4f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a4f08:
    // 0x1a4f08: 0x320f809  jalr        $t9
label_1a4f0c:
    if (ctx->pc == 0x1A4F0Cu) {
        ctx->pc = 0x1A4F10u;
        goto label_1a4f10;
    }
    ctx->pc = 0x1A4F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4F10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F08u, 0x1A4F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4F10u;
label_1a4f10:
    // 0x1a4f10: 0x8e620a60  lw          $v0, 0xA60($s3)
    ctx->pc = 0x1a4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2656)));
label_1a4f14:
    // 0x1a4f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4f18:
    // 0x1a4f18: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a4f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a4f1c:
    // 0x1a4f1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a4f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f20:
    // 0x1a4f20: 0x24a504f8  addiu       $a1, $a1, 0x4F8
    ctx->pc = 0x1a4f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1272));
label_1a4f24:
    // 0x1a4f24: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1a4f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a4f28:
    // 0x1a4f28: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1a4f28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a4f2c:
    // 0x1a4f2c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1a4f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a4f30:
    // 0x1a4f30: 0xa04328f5  sb          $v1, 0x28F5($v0)
    ctx->pc = 0x1a4f30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10485), (uint8_t)GPR_U32(ctx, 3));
label_1a4f34:
    // 0x1a4f34: 0xa260075c  sb          $zero, 0x75C($s3)
    ctx->pc = 0x1a4f34u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1884), (uint8_t)GPR_U32(ctx, 0));
label_1a4f38:
    // 0x1a4f38: 0xc064a88  jal         func_192A20
label_1a4f3c:
    if (ctx->pc == 0x1A4F3Cu) {
        ctx->pc = 0x1A4F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F38u;
        // 0x1a4f3c: 0xfe600780  sd          $zero, 0x780($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 1920), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F40u;
        goto label_1a4f40;
    }
    ctx->pc = 0x1A4F38u;
    SET_GPR_U32(ctx, 31, 0x1A4F40u);
    ctx->pc = 0x1A4F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F38u;
    // 0x1a4f3c: 0xfe600780  sd          $zero, 0x780($s3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 19), 1920), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x1A4F38u, 0x1A4F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F40u;
label_1a4f40:
    // 0x1a4f40: 0xae6007c0  sw          $zero, 0x7C0($s3)
    ctx->pc = 0x1a4f40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1984), GPR_U32(ctx, 0));
label_1a4f44:
    // 0x1a4f44: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a4f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a4f48:
    // 0x1a4f48: 0xae600934  sw          $zero, 0x934($s3)
    ctx->pc = 0x1a4f48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2356), GPR_U32(ctx, 0));
label_1a4f4c:
    // 0x1a4f4c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1a4f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
label_1a4f50:
    // 0x1a4f50: 0xa260093c  sb          $zero, 0x93C($s3)
    ctx->pc = 0x1a4f50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2364), (uint8_t)GPR_U32(ctx, 0));
label_1a4f54:
    // 0x1a4f54: 0x24a50500  addiu       $a1, $a1, 0x500
    ctx->pc = 0x1a4f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1280));
label_1a4f58:
    // 0x1a4f58: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1a4f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1a4f5c:
    // 0x1a4f5c: 0x24c60510  addiu       $a2, $a2, 0x510
    ctx->pc = 0x1a4f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1296));
label_1a4f60:
    // 0x1a4f60: 0xc06cf34  jal         func_1B3CD0
label_1a4f64:
    if (ctx->pc == 0x1A4F64u) {
        ctx->pc = 0x1A4F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F60u;
        // 0x1a4f64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F68u;
        goto label_1a4f68;
    }
    ctx->pc = 0x1A4F60u;
    SET_GPR_U32(ctx, 31, 0x1A4F68u);
    ctx->pc = 0x1A4F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F60u;
    // 0x1a4f64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1A4F60u, 0x1A4F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F68u;
label_1a4f68:
    // 0x1a4f68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a4f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f6c:
    // 0x1a4f6c: 0xc0699f0  jal         func_1A67C0
label_1a4f70:
    if (ctx->pc == 0x1A4F70u) {
        ctx->pc = 0x1A4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F6Cu;
        // 0x1a4f70: 0x26640930  addiu       $a0, $s3, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F74u;
        goto label_1a4f74;
    }
    ctx->pc = 0x1A4F6Cu;
    SET_GPR_U32(ctx, 31, 0x1A4F74u);
    ctx->pc = 0x1A4F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F6Cu;
    // 0x1a4f70: 0x26640930  addiu       $a0, $s3, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A67C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A67C0u, 0x1A4F6Cu, 0x1A4F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F74u;
label_1a4f74:
    // 0x1a4f74: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a4f78:
    // 0x1a4f78: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1a4f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a4f7c:
    // 0x1a4f7c: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x1a4f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a4f80:
    // 0x1a4f80: 0xc057040  jal         func_15C100
label_1a4f84:
    if (ctx->pc == 0x1A4F84u) {
        ctx->pc = 0x1A4F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F80u;
        // 0x1a4f84: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F88u;
        goto label_1a4f88;
    }
    ctx->pc = 0x1A4F80u;
    SET_GPR_U32(ctx, 31, 0x1A4F88u);
    ctx->pc = 0x1A4F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F80u;
    // 0x1a4f84: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A4F80u, 0x1A4F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F88u;
label_1a4f88:
    // 0x1a4f88: 0xae620738  sw          $v0, 0x738($s3)
    ctx->pc = 0x1a4f88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1848), GPR_U32(ctx, 2));
label_1a4f8c:
    // 0x1a4f8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a4f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a4f90:
    // 0x1a4f90: 0xae620754  sw          $v0, 0x754($s3)
    ctx->pc = 0x1a4f90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1876), GPR_U32(ctx, 2));
label_1a4f94:
    // 0x1a4f94: 0xae600680  sw          $zero, 0x680($s3)
    ctx->pc = 0x1a4f94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1664), GPR_U32(ctx, 0));
label_1a4f98:
    // 0x1a4f98: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a4f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a4f9c:
    // 0x1a4f9c: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x1a4f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1a4fa0u;
}
