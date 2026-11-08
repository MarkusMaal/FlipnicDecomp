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

// Function: entry_001029d0
// Address: 0x1029d0 - 0x102ad4
void entry_001029d0_0x1029d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001029d0_0x1029d0");
#endif

    switch (ctx->pc) {
        case 0x102a04u: goto label_102a04;
        case 0x102a3cu: goto label_102a3c;
        case 0x102a5cu: goto label_102a5c;
        case 0x102a64u: goto label_102a64;
        case 0x102a78u: goto label_102a78;
        case 0x102a9cu: goto label_102a9c;
        case 0x102aa8u: goto label_102aa8;
        case 0x102accu: goto label_102acc;
        default: break;
    }

    ctx->pc = 0x1029d0u;

label_1029d0:
    // 0x1029d0: 0x8f838388  lw          $v1, -0x7C78($gp)
    ctx->pc = 0x1029d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1029d4:
    // 0x1029d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1029d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1029d8:
    // 0x1029d8: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x1029d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1029dc:
    // 0x1029dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1029dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1029e0:
    // 0x1029e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1029e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1029e4:
    // 0x1029e4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1029e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1029e8:
    // 0x1029e8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1029e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1029ec:
    // 0x1029ec: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1029ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1029f0:
    // 0x1029f0: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1029f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1029f4:
    // 0x1029f4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1029f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1029f8:
    // 0x1029f8: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x1029f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1029fc:
    // 0x1029fc: 0xc05719c  jal         func_15C670
label_102a00:
    if (ctx->pc == 0x102A00u) {
        ctx->pc = 0x102A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1029FCu;
        // 0x102a00: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A04u;
        goto label_102a04;
    }
    ctx->pc = 0x1029FCu;
    SET_GPR_U32(ctx, 31, 0x102A04u);
    ctx->pc = 0x102A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1029FCu;
    // 0x102a00: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C670u, 0x1029FCu, 0x102A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A04u;
label_102a04:
    // 0x102a04: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x102a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102a08:
    // 0x102a08: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x102a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_102a0c:
    // 0x102a0c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x102a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_102a10:
    // 0x102a10: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x102a10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_102a14:
    // 0x102a14: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x102a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_102a18:
    // 0x102a18: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x102a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_102a1c:
    // 0x102a1c: 0xac622cd8  sw          $v0, 0x2CD8($v1)
    ctx->pc = 0x102a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 2));
label_102a20:
    // 0x102a20: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102a24:
    // 0x102a24: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x102a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_102a28:
    // 0x102a28: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x102a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
label_102a2c:
    // 0x102a2c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x102a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_102a30:
    // 0x102a30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_102a34:
    // 0x102a34: 0xc05f58c  jal         func_17D630
label_102a38:
    if (ctx->pc == 0x102A38u) {
        ctx->pc = 0x102A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A34u;
        // 0x102a38: 0xac4301d8  sw          $v1, 0x1D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A3Cu;
        goto label_102a3c;
    }
    ctx->pc = 0x102A34u;
    SET_GPR_U32(ctx, 31, 0x102A3Cu);
    ctx->pc = 0x102A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A34u;
    // 0x102a38: 0xac4301d8  sw          $v1, 0x1D8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x102A34u, 0x102A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A3Cu;
label_102a3c:
    // 0x102a3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x102a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_102a40:
    // 0x102a40: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x102a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
label_102a44:
    // 0x102a44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x102a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_102a48:
    // 0x102a48: 0x2463e160  addiu       $v1, $v1, -0x1EA0
    ctx->pc = 0x102a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959456));
label_102a4c:
    // 0x102a4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102a50:
    // 0x102a50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x102a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_102a54:
    // 0x102a54: 0x60f809  jalr        $v1
label_102a58:
    if (ctx->pc == 0x102A58u) {
        ctx->pc = 0x102A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A54u;
        // 0x102a58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A5Cu;
        goto label_102a5c;
    }
    ctx->pc = 0x102A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102A5Cu);
        ctx->pc = 0x102A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A54u;
        // 0x102a58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102A54u, 0x102A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102A5Cu;
label_102a5c:
    // 0x102a5c: 0xc05f58c  jal         func_17D630
label_102a60:
    if (ctx->pc == 0x102A60u) {
        ctx->pc = 0x102A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A5Cu;
        // 0x102a60: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A64u;
        goto label_102a64;
    }
    ctx->pc = 0x102A5Cu;
    SET_GPR_U32(ctx, 31, 0x102A64u);
    ctx->pc = 0x102A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A5Cu;
    // 0x102a60: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x102A5Cu, 0x102A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A64u;
label_102a64:
    // 0x102a64: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x102a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_102a68:
    // 0x102a68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102a6c:
    // 0x102a6c: 0x2442e1a0  addiu       $v0, $v0, -0x1E60
    ctx->pc = 0x102a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959520));
label_102a70:
    // 0x102a70: 0x40f809  jalr        $v0
label_102a74:
    if (ctx->pc == 0x102A74u) {
        ctx->pc = 0x102A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A70u;
        // 0x102a74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A78u;
        goto label_102a78;
    }
    ctx->pc = 0x102A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x102A78u);
        ctx->pc = 0x102A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A70u;
        // 0x102a74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102A70u, 0x102A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102A78u;
label_102a78:
    // 0x102a78: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102a7c:
    // 0x102a7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x102a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102a80:
    // 0x102a80: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x102a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_102a84:
    // 0x102a84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_102a88:
    // 0x102a88: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x102a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_102a8c:
    // 0x102a8c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x102a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_102a90:
    // 0x102a90: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x102a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_102a94:
    // 0x102a94: 0x320f809  jalr        $t9
label_102a98:
    if (ctx->pc == 0x102A98u) {
        ctx->pc = 0x102A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A94u;
        // 0x102a98: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A9Cu;
        goto label_102a9c;
    }
    ctx->pc = 0x102A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102A9Cu);
        ctx->pc = 0x102A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A94u;
        // 0x102a98: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102A94u, 0x102A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102A9Cu;
label_102a9c:
    // 0x102a9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102aa0:
    // 0x102aa0: 0xc05f860  jal         func_17E180
label_102aa4:
    if (ctx->pc == 0x102AA4u) {
        ctx->pc = 0x102AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AA0u;
        // 0x102aa4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102AA8u;
        goto label_102aa8;
    }
    ctx->pc = 0x102AA0u;
    SET_GPR_U32(ctx, 31, 0x102AA8u);
    ctx->pc = 0x102AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AA0u;
    // 0x102aa4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E180u, 0x102AA0u, 0x102AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AA8u;
label_102aa8:
    // 0x102aa8: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102aac:
    // 0x102aac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x102aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102ab0:
    // 0x102ab0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x102ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_102ab4:
    // 0x102ab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_102ab8:
    // 0x102ab8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x102ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_102abc:
    // 0x102abc: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x102abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_102ac0:
    // 0x102ac0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x102ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_102ac4:
    // 0x102ac4: 0x320f809  jalr        $t9
label_102ac8:
    if (ctx->pc == 0x102AC8u) {
        ctx->pc = 0x102ACCu;
        goto label_102acc;
    }
    ctx->pc = 0x102AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102ACCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102AC4u, 0x102ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102ACCu;
label_102acc:
    // 0x102acc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x102accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_102ad0:
    // 0x102ad0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x102ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x102ad4u;
}
