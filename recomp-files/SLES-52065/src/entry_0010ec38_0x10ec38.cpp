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

// Function: entry_0010ec38
// Address: 0x10ec38 - 0x10ecdc
void entry_0010ec38_0x10ec38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ec38_0x10ec38");
#endif

    switch (ctx->pc) {
        case 0x10ec7cu: goto label_10ec7c;
        case 0x10ecd0u: goto label_10ecd0;
        default: break;
    }

    ctx->pc = 0x10ec38u;

label_10ec38:
    // 0x10ec38: 0x8e460220  lw          $a2, 0x220($s2)
    ctx->pc = 0x10ec38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_10ec3c:
    // 0x10ec3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ec40:
    // 0x10ec40: 0x8e440224  lw          $a0, 0x224($s2)
    ctx->pc = 0x10ec40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_10ec44:
    // 0x10ec44: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x10ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
label_10ec48:
    // 0x10ec48: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10ec4c:
    // 0x10ec4c: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x10ec4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_10ec50:
    // 0x10ec50: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x10ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_10ec54:
    // 0x10ec54: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10ec58:
    // 0x10ec58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10ec5c:
    // 0x10ec5c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10ec5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10ec60:
    // 0x10ec60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10ec64:
    // 0x10ec64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10ec68:
    // 0x10ec68: 0x8c512cd8  lw          $s1, 0x2CD8($v0)
    ctx->pc = 0x10ec68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10ec6c:
    // 0x10ec6c: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x10ec6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10ec70:
    // 0x10ec70: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10ec70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10ec74:
    // 0x10ec74: 0x320f809  jalr        $t9
label_10ec78:
    if (ctx->pc == 0x10EC78u) {
        ctx->pc = 0x10EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC74u;
        // 0x10ec78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC7Cu;
        goto label_10ec7c;
    }
    ctx->pc = 0x10EC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10EC7Cu);
        ctx->pc = 0x10EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC74u;
        // 0x10ec78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EC74u, 0x10EC7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EC7Cu;
label_10ec7c:
    // 0x10ec7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ec80:
    // 0x10ec80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10ec80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ec84:
    // 0x10ec84: 0xa22201d3  sb          $v0, 0x1D3($s1)
    ctx->pc = 0x10ec84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 2));
label_10ec88:
    // 0x10ec88: 0x8e470220  lw          $a3, 0x220($s2)
    ctx->pc = 0x10ec88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_10ec8c:
    // 0x10ec8c: 0x8e460224  lw          $a2, 0x224($s2)
    ctx->pc = 0x10ec8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_10ec90:
    // 0x10ec90: 0x8e440228  lw          $a0, 0x228($s2)
    ctx->pc = 0x10ec90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
label_10ec94:
    // 0x10ec94: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x10ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
label_10ec98:
    // 0x10ec98: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10ec9c:
    // 0x10ec9c: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x10ec9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_10eca0:
    // 0x10eca0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x10eca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_10eca4:
    // 0x10eca4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x10eca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_10eca8:
    // 0x10eca8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10ecac:
    // 0x10ecac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10ecb0:
    // 0x10ecb0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10ecb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10ecb4:
    // 0x10ecb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10ecb8:
    // 0x10ecb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10ecbc:
    // 0x10ecbc: 0x8c512cd8  lw          $s1, 0x2CD8($v0)
    ctx->pc = 0x10ecbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10ecc0:
    // 0x10ecc0: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x10ecc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10ecc4:
    // 0x10ecc4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10ecc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10ecc8:
    // 0x10ecc8: 0x320f809  jalr        $t9
label_10eccc:
    if (ctx->pc == 0x10ECCCu) {
        ctx->pc = 0x10ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECC8u;
        // 0x10eccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ECD0u;
        goto label_10ecd0;
    }
    ctx->pc = 0x10ECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10ECD0u);
        ctx->pc = 0x10ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECC8u;
        // 0x10eccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ECC8u, 0x10ECD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10ECD0u;
label_10ecd0:
    // 0x10ecd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ecd4:
    // 0x10ecd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10ecd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10ecd8:
    // 0x10ecd8: 0xa22301d3  sb          $v1, 0x1D3($s1)
    ctx->pc = 0x10ecd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x10ecdcu;
}
