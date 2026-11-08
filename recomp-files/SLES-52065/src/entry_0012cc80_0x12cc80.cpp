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

// Function: entry_0012cc80
// Address: 0x12cc80 - 0x12cd58
void entry_0012cc80_0x12cc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cc80_0x12cc80");
#endif

    switch (ctx->pc) {
        case 0x12cc8cu: goto label_12cc8c;
        case 0x12cca4u: goto label_12cca4;
        case 0x12cd2cu: goto label_12cd2c;
        default: break;
    }

    ctx->pc = 0x12cc80u;

label_12cc80:
    // 0x12cc80: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x12cc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_12cc84:
    // 0x12cc84: 0xc0485c8  jal         func_121720
label_12cc88:
    if (ctx->pc == 0x12CC88u) {
        ctx->pc = 0x12CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC84u;
        // 0x12cc88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CC8Cu;
        goto label_12cc8c;
    }
    ctx->pc = 0x12CC84u;
    SET_GPR_U32(ctx, 31, 0x12CC8Cu);
    ctx->pc = 0x12CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC84u;
    // 0x12cc88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121720u, 0x12CC84u, 0x12CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC8Cu;
label_12cc8c:
    // 0x12cc8c: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x12cc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_12cc90:
    // 0x12cc90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12cc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12cc94:
    // 0x12cc94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12cc94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12cc98:
    // 0x12cc98: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x12cc98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_12cc9c:
    // 0x12cc9c: 0x320f809  jalr        $t9
label_12cca0:
    if (ctx->pc == 0x12CCA0u) {
        ctx->pc = 0x12CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC9Cu;
        // 0x12cca0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CCA4u;
        goto label_12cca4;
    }
    ctx->pc = 0x12CC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12CCA4u);
        ctx->pc = 0x12CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC9Cu;
        // 0x12cca0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CC9Cu, 0x12CCA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12CCA4u;
label_12cca4:
    // 0x12cca4: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x12cca4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12cca8:
    // 0x12cca8: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x12cca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_12ccac:
    // 0x12ccac: 0x3c07002b  lui         $a3, 0x2B
    ctx->pc = 0x12ccacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)43 << 16));
label_12ccb0:
    // 0x12ccb0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x12ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_12ccb4:
    // 0x12ccb4: 0x34430005  ori         $v1, $v0, 0x5
    ctx->pc = 0x12ccb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
label_12ccb8:
    // 0x12ccb8: 0x24e72f10  addiu       $a3, $a3, 0x2F10
    ctx->pc = 0x12ccb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12048));
label_12ccbc:
    // 0x12ccbc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x12ccbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_12ccc0:
    // 0x12ccc0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x12ccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_12ccc4:
    // 0x12ccc4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x12ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_12ccc8:
    // 0x12ccc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ccc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12cccc:
    // 0x12cccc: 0xa1280003  sb          $t0, 0x3($t1)
    ctx->pc = 0x12ccccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 8));
label_12ccd0:
    // 0x12ccd0: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x12ccd0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
label_12ccd4:
    // 0x12ccd4: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x12ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_12ccd8:
    // 0x12ccd8: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x12ccd8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
label_12ccdc:
    // 0x12ccdc: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x12ccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
label_12cce0:
    // 0x12cce0: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x12cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_12cce4:
    // 0x12cce4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x12cce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12cce8:
    // 0x12cce8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_12ccec:
    // 0x12ccec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x12ccecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_12ccf0:
    // 0x12ccf0: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x12ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_12ccf4:
    // 0x12ccf4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x12ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12ccf8:
    // 0x12ccf8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12ccfc:
    // 0x12ccfc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x12ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_12cd00:
    // 0x12cd00: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x12cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_12cd04:
    // 0x12cd04: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x12cd04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_12cd08:
    // 0x12cd08: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x12cd08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
label_12cd0c:
    // 0x12cd0c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x12cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_12cd10:
    // 0x12cd10: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x12cd10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
label_12cd14:
    // 0x12cd14: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x12cd14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_12cd18:
    // 0x12cd18: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x12cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_12cd1c:
    // 0x12cd1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12cd20:
    // 0x12cd20: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_12cd24:
    // 0x12cd24: 0xc04b67c  jal         func_12D9F0
label_12cd28:
    if (ctx->pc == 0x12CD28u) {
        ctx->pc = 0x12CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD24u;
        // 0x12cd28: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CD2Cu;
        goto label_12cd2c;
    }
    ctx->pc = 0x12CD24u;
    SET_GPR_U32(ctx, 31, 0x12CD2Cu);
    ctx->pc = 0x12CD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD24u;
    // 0x12cd28: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D9F0u, 0x12CD24u, 0x12CD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD2Cu;
label_12cd2c:
    // 0x12cd2c: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x12cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_12cd30:
    // 0x12cd30: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x12cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_12cd34:
    // 0x12cd34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12cd34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12cd38:
    // 0x12cd38: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x12cd38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_12cd3c:
    // 0x12cd3c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12cd40:
    // 0x12cd40: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x12cd40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_12cd44:
    // 0x12cd44: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x12cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_12cd48:
    // 0x12cd48: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x12cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_12cd4c:
    // 0x12cd4c: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x12cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_12cd50:
    // 0x12cd50: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_12cd54:
    // 0x12cd54: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x12cd54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    ctx->pc = 0x12cd58u;
}
