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

// Function: entry_00113b6c
// Address: 0x113b6c - 0x113cc4
void entry_00113b6c_0x113b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113b6c_0x113b6c");
#endif

    switch (ctx->pc) {
        case 0x113b80u: goto label_113b80;
        case 0x113b90u: goto label_113b90;
        case 0x113ba0u: goto label_113ba0;
        case 0x113bf0u: goto label_113bf0;
        case 0x113c00u: goto label_113c00;
        case 0x113c08u: goto label_113c08;
        case 0x113c18u: goto label_113c18;
        case 0x113c20u: goto label_113c20;
        case 0x113c30u: goto label_113c30;
        case 0x113c70u: goto label_113c70;
        case 0x113c80u: goto label_113c80;
        default: break;
    }

    ctx->pc = 0x113b6cu;

    // 0x113b6c: 0x0  nop
    ctx->pc = 0x113b6cu;
    // NOP
    // 0x113b70: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x113b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x113b74: 0x2484e368  addiu       $a0, $a0, -0x1C98
    ctx->pc = 0x113b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959976));
    // 0x113b78: 0xc046458  jal         func_119160
    ctx->pc = 0x113B78u;
    SET_GPR_U32(ctx, 31, 0x113B80u);
    ctx->pc = 0x113B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B78u;
    // 0x113b7c: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x113B78u, 0x113B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B80u;
label_113b80:
    // 0x113b80: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x113b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x113b84: 0xae020224  sw          $v0, 0x224($s0)
    ctx->pc = 0x113b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
    // 0x113b88: 0xc046458  jal         func_119160
    ctx->pc = 0x113B88u;
    SET_GPR_U32(ctx, 31, 0x113B90u);
    ctx->pc = 0x113B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B88u;
    // 0x113b8c: 0x2484e378  addiu       $a0, $a0, -0x1C88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x113B88u, 0x113B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B90u;
label_113b90:
    // 0x113b90: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x113b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x113b94: 0xae020228  sw          $v0, 0x228($s0)
    ctx->pc = 0x113b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 2));
    // 0x113b98: 0xc046458  jal         func_119160
    ctx->pc = 0x113B98u;
    SET_GPR_U32(ctx, 31, 0x113BA0u);
    ctx->pc = 0x113B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B98u;
    // 0x113b9c: 0x2484e4c0  addiu       $a0, $a0, -0x1B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x113B98u, 0x113BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113BA0u;
label_113ba0:
    // 0x113ba0: 0xae02022c  sw          $v0, 0x22C($s0)
    ctx->pc = 0x113ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
    // 0x113ba4: 0x8e030224  lw          $v1, 0x224($s0)
    ctx->pc = 0x113ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x113ba8: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113bac: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x113bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x113bb0: 0x8e030224  lw          $v1, 0x224($s0)
    ctx->pc = 0x113bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x113bb4: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113bb8: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x113bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x113bbc: 0x8e030224  lw          $v1, 0x224($s0)
    ctx->pc = 0x113bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x113bc0: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113bc4: 0xac430094  sw          $v1, 0x94($v0)
    ctx->pc = 0x113bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 3));
    // 0x113bc8: 0x8e030228  lw          $v1, 0x228($s0)
    ctx->pc = 0x113bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x113bcc: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113bd0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x113bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x113bd4: 0x8e030228  lw          $v1, 0x228($s0)
    ctx->pc = 0x113bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x113bd8: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113bdc: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x113bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x113be0: 0x8e030228  lw          $v1, 0x228($s0)
    ctx->pc = 0x113be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x113be4: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113be8: 0xc064228  jal         func_1908A0
    ctx->pc = 0x113BE8u;
    SET_GPR_U32(ctx, 31, 0x113BF0u);
    ctx->pc = 0x113BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113BE8u;
    // 0x113bec: 0xac430098  sw          $v1, 0x98($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x113BE8u, 0x113BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113BF0u;
label_113bf0:
    // 0x113bf0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113bf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x113bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113bf8: 0xc0642e0  jal         func_190B80
    ctx->pc = 0x113BF8u;
    SET_GPR_U32(ctx, 31, 0x113C00u);
    ctx->pc = 0x113BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113BF8u;
    // 0x113bfc: 0x24a5e4d0  addiu       $a1, $a1, -0x1B30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x113BF8u, 0x113C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C00u;
label_113c00:
    // 0x113c00: 0xc064228  jal         func_1908A0
    ctx->pc = 0x113C00u;
    SET_GPR_U32(ctx, 31, 0x113C08u);
    ctx->pc = 0x113C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C00u;
    // 0x113c04: 0xae020230  sw          $v0, 0x230($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x113C00u, 0x113C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C08u;
label_113c08:
    // 0x113c08: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113c0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x113c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c10: 0xc0642e0  jal         func_190B80
    ctx->pc = 0x113C10u;
    SET_GPR_U32(ctx, 31, 0x113C18u);
    ctx->pc = 0x113C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C10u;
    // 0x113c14: 0x24a5e4d8  addiu       $a1, $a1, -0x1B28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x113C10u, 0x113C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C18u;
label_113c18:
    // 0x113c18: 0xc064228  jal         func_1908A0
    ctx->pc = 0x113C18u;
    SET_GPR_U32(ctx, 31, 0x113C20u);
    ctx->pc = 0x113C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C18u;
    // 0x113c1c: 0xae020234  sw          $v0, 0x234($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x113C18u, 0x113C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C20u;
label_113c20:
    // 0x113c20: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113c24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x113c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c28: 0xc0642e0  jal         func_190B80
    ctx->pc = 0x113C28u;
    SET_GPR_U32(ctx, 31, 0x113C30u);
    ctx->pc = 0x113C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C28u;
    // 0x113c2c: 0x24a5e4e0  addiu       $a1, $a1, -0x1B20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x113C28u, 0x113C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C30u;
label_113c30:
    // 0x113c30: 0xae020238  sw          $v0, 0x238($s0)
    ctx->pc = 0x113c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 2));
    // 0x113c34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x113c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113c38: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113c3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x113c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x113c40: 0xac50001c  sw          $s0, 0x1C($v0)
    ctx->pc = 0x113c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 16));
    // 0x113c44: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113c48: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x113c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x113c4c: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113c50: 0xac500060  sw          $s0, 0x60($v0)
    ctx->pc = 0x113c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 16));
    // 0x113c54: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113c58: 0xac440064  sw          $a0, 0x64($v0)
    ctx->pc = 0x113c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
    // 0x113c5c: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113c60: 0xac5000a4  sw          $s0, 0xA4($v0)
    ctx->pc = 0x113c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 16));
    // 0x113c64: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113c68: 0xc064228  jal         func_1908A0
    ctx->pc = 0x113C68u;
    SET_GPR_U32(ctx, 31, 0x113C70u);
    ctx->pc = 0x113C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C68u;
    // 0x113c6c: 0xac4300a8  sw          $v1, 0xA8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x113C68u, 0x113C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C70u;
label_113c70:
    // 0x113c70: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113c74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x113c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c78: 0xc0642e0  jal         func_190B80
    ctx->pc = 0x113C78u;
    SET_GPR_U32(ctx, 31, 0x113C80u);
    ctx->pc = 0x113C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C78u;
    // 0x113c7c: 0x24a5e4e8  addiu       $a1, $a1, -0x1B18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x113C78u, 0x113C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C80u;
label_113c80:
    // 0x113c80: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x113c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x113c84: 0xaf828240  sw          $v0, -0x7DC0($gp)
    ctx->pc = 0x113c84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935104), GPR_U32(ctx, 2));
    // 0x113c88: 0xaf838248  sw          $v1, -0x7DB8($gp)
    ctx->pc = 0x113c88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935112), GPR_U32(ctx, 3));
    // 0x113c8c: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x113c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x113c90: 0xaf808244  sw          $zero, -0x7DBC($gp)
    ctx->pc = 0x113c90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935108), GPR_U32(ctx, 0));
    // 0x113c94: 0xaf83824c  sw          $v1, -0x7DB4($gp)
    ctx->pc = 0x113c94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935116), GPR_U32(ctx, 3));
    // 0x113c98: 0xa3808250  sb          $zero, -0x7DB0($gp)
    ctx->pc = 0x113c98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935120), (uint8_t)GPR_U32(ctx, 0));
    // 0x113c9c: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x113c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x113ca0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x113ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113ca4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x113ca4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113ca8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x113ca8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113cac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x113cacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113cb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x113cb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113cb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x113cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x113cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x113CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CBCu;
        // 0x113cc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113CC4u;
}
