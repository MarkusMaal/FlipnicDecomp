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

// Function: entry_00102b68
// Address: 0x102b68 - 0x102c6c
void entry_00102b68_0x102b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102b68_0x102b68");
#endif

    switch (ctx->pc) {
        case 0x102b9cu: goto label_102b9c;
        case 0x102bd4u: goto label_102bd4;
        case 0x102bf4u: goto label_102bf4;
        case 0x102bfcu: goto label_102bfc;
        case 0x102c10u: goto label_102c10;
        case 0x102c34u: goto label_102c34;
        case 0x102c40u: goto label_102c40;
        case 0x102c64u: goto label_102c64;
        default: break;
    }

    ctx->pc = 0x102b68u;

label_102b68:
    // 0x102b68: 0x8f838388  lw          $v1, -0x7C78($gp)
    ctx->pc = 0x102b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_102b6c:
    // 0x102b6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_102b70:
    // 0x102b70: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x102b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102b74:
    // 0x102b74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_102b78:
    // 0x102b78: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x102b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_102b7c:
    // 0x102b7c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x102b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_102b80:
    // 0x102b80: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x102b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_102b84:
    // 0x102b84: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x102b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_102b88:
    // 0x102b88: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x102b88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_102b8c:
    // 0x102b8c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x102b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_102b90:
    // 0x102b90: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x102b90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_102b94:
    // 0x102b94: 0xc05719c  jal         func_15C670
label_102b98:
    if (ctx->pc == 0x102B98u) {
        ctx->pc = 0x102B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B94u;
        // 0x102b98: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B9Cu;
        goto label_102b9c;
    }
    ctx->pc = 0x102B94u;
    SET_GPR_U32(ctx, 31, 0x102B9Cu);
    ctx->pc = 0x102B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B94u;
    // 0x102b98: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C670u, 0x102B94u, 0x102B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B9Cu;
label_102b9c:
    // 0x102b9c: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x102b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102ba0:
    // 0x102ba0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x102ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_102ba4:
    // 0x102ba4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x102ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_102ba8:
    // 0x102ba8: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x102ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_102bac:
    // 0x102bac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x102bacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_102bb0:
    // 0x102bb0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x102bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_102bb4:
    // 0x102bb4: 0xac622cd8  sw          $v0, 0x2CD8($v1)
    ctx->pc = 0x102bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 2));
label_102bb8:
    // 0x102bb8: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102bbc:
    // 0x102bbc: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x102bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_102bc0:
    // 0x102bc0: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x102bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
label_102bc4:
    // 0x102bc4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x102bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_102bc8:
    // 0x102bc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_102bcc:
    // 0x102bcc: 0xc05f58c  jal         func_17D630
label_102bd0:
    if (ctx->pc == 0x102BD0u) {
        ctx->pc = 0x102BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BCCu;
        // 0x102bd0: 0xac4301d8  sw          $v1, 0x1D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BD4u;
        goto label_102bd4;
    }
    ctx->pc = 0x102BCCu;
    SET_GPR_U32(ctx, 31, 0x102BD4u);
    ctx->pc = 0x102BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BCCu;
    // 0x102bd0: 0xac4301d8  sw          $v1, 0x1D8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x102BCCu, 0x102BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BD4u;
label_102bd4:
    // 0x102bd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x102bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_102bd8:
    // 0x102bd8: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x102bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
label_102bdc:
    // 0x102bdc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x102bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_102be0:
    // 0x102be0: 0x2463e160  addiu       $v1, $v1, -0x1EA0
    ctx->pc = 0x102be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959456));
label_102be4:
    // 0x102be4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x102be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102be8:
    // 0x102be8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x102be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_102bec:
    // 0x102bec: 0x60f809  jalr        $v1
label_102bf0:
    if (ctx->pc == 0x102BF0u) {
        ctx->pc = 0x102BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BECu;
        // 0x102bf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BF4u;
        goto label_102bf4;
    }
    ctx->pc = 0x102BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102BF4u);
        ctx->pc = 0x102BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BECu;
        // 0x102bf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102BECu, 0x102BF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102BF4u;
label_102bf4:
    // 0x102bf4: 0xc05f58c  jal         func_17D630
label_102bf8:
    if (ctx->pc == 0x102BF8u) {
        ctx->pc = 0x102BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BF4u;
        // 0x102bf8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BFCu;
        goto label_102bfc;
    }
    ctx->pc = 0x102BF4u;
    SET_GPR_U32(ctx, 31, 0x102BFCu);
    ctx->pc = 0x102BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BF4u;
    // 0x102bf8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x102BF4u, 0x102BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BFCu;
label_102bfc:
    // 0x102bfc: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x102bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_102c00:
    // 0x102c00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x102c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102c04:
    // 0x102c04: 0x2442e1a0  addiu       $v0, $v0, -0x1E60
    ctx->pc = 0x102c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959520));
label_102c08:
    // 0x102c08: 0x40f809  jalr        $v0
label_102c0c:
    if (ctx->pc == 0x102C0Cu) {
        ctx->pc = 0x102C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C08u;
        // 0x102c0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C10u;
        goto label_102c10;
    }
    ctx->pc = 0x102C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x102C10u);
        ctx->pc = 0x102C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C08u;
        // 0x102c0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102C08u, 0x102C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102C10u;
label_102c10:
    // 0x102c10: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102c14:
    // 0x102c14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x102c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102c18:
    // 0x102c18: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x102c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_102c1c:
    // 0x102c1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_102c20:
    // 0x102c20: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x102c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_102c24:
    // 0x102c24: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x102c24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_102c28:
    // 0x102c28: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x102c28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_102c2c:
    // 0x102c2c: 0x320f809  jalr        $t9
label_102c30:
    if (ctx->pc == 0x102C30u) {
        ctx->pc = 0x102C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C2Cu;
        // 0x102c30: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C34u;
        goto label_102c34;
    }
    ctx->pc = 0x102C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102C34u);
        ctx->pc = 0x102C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C2Cu;
        // 0x102c30: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102C2Cu, 0x102C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102C34u;
label_102c34:
    // 0x102c34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x102c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102c38:
    // 0x102c38: 0xc05f860  jal         func_17E180
label_102c3c:
    if (ctx->pc == 0x102C3Cu) {
        ctx->pc = 0x102C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C38u;
        // 0x102c3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C40u;
        goto label_102c40;
    }
    ctx->pc = 0x102C38u;
    SET_GPR_U32(ctx, 31, 0x102C40u);
    ctx->pc = 0x102C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C38u;
    // 0x102c3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E180u, 0x102C38u, 0x102C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C40u;
label_102c40:
    // 0x102c40: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102c44:
    // 0x102c44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x102c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102c48:
    // 0x102c48: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x102c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_102c4c:
    // 0x102c4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_102c50:
    // 0x102c50: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x102c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_102c54:
    // 0x102c54: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x102c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_102c58:
    // 0x102c58: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x102c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_102c5c:
    // 0x102c5c: 0x320f809  jalr        $t9
label_102c60:
    if (ctx->pc == 0x102C60u) {
        ctx->pc = 0x102C64u;
        goto label_102c64;
    }
    ctx->pc = 0x102C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102C64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102C5Cu, 0x102C64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102C64u;
label_102c64:
    // 0x102c64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x102c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_102c68:
    // 0x102c68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x102c68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x102c6cu;
}
