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

// Function: FUN_0012dc20
// Address: 0x12dc20 - 0x12decc
void FUN_0012dc20_0x12dc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012dc20_0x12dc20");
#endif

    switch (ctx->pc) {
        case 0x12dc4cu: goto label_12dc4c;
        case 0x12dc58u: goto label_12dc58;
        case 0x12dc68u: goto label_12dc68;
        case 0x12dc74u: goto label_12dc74;
        case 0x12dc7cu: goto label_12dc7c;
        case 0x12dc84u: goto label_12dc84;
        case 0x12dca8u: goto label_12dca8;
        case 0x12dcbcu: goto label_12dcbc;
        case 0x12dcd8u: goto label_12dcd8;
        case 0x12dce0u: goto label_12dce0;
        case 0x12dcf0u: goto label_12dcf0;
        case 0x12dd04u: goto label_12dd04;
        case 0x12dd7cu: goto label_12dd7c;
        case 0x12de60u: goto label_12de60;
        case 0x12de6cu: goto label_12de6c;
        case 0x12de90u: goto label_12de90;
        case 0x12de98u: goto label_12de98;
        case 0x12dea0u: goto label_12dea0;
        default: break;
    }

    ctx->pc = 0x12dc20u;

    // 0x12dc20: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x12dc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x12dc24: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12dc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x12dc28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x12dc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x12dc2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12dc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12dc30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12dc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12dc34: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12dc34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12dc3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12dc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12dc40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12dc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12dc44: 0xc04b680  jal         func_12DA00
    ctx->pc = 0x12DC44u;
    SET_GPR_U32(ctx, 31, 0x12DC4Cu);
    ctx->pc = 0x12DC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC44u;
    // 0x12dc48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DA00u, 0x12DC44u, 0x12DC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC4Cu;
label_12dc4c:
    // 0x12dc4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12dc4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc50: 0xc0485a4  jal         func_121690
    ctx->pc = 0x12DC50u;
    SET_GPR_U32(ctx, 31, 0x12DC58u);
    ctx->pc = 0x12DC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC50u;
    // 0x12dc54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121690u, 0x12DC50u, 0x12DC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC58u;
label_12dc58:
    // 0x12dc58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12dc58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12dc5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12dc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc60: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x12DC60u;
    SET_GPR_U32(ctx, 31, 0x12DC68u);
    ctx->pc = 0x12DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC60u;
    // 0x12dc64: 0x24a5eca0  addiu       $a1, $a1, -0x1360 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x12DC60u, 0x12DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC68u;
label_12dc68:
    // 0x12dc68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12dc68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc6c: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x12DC6Cu;
    SET_GPR_U32(ctx, 31, 0x12DC74u);
    ctx->pc = 0x12DC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC6Cu;
    // 0x12dc70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x12DC6Cu, 0x12DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC74u;
label_12dc74:
    // 0x12dc74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12DC74u;
    {
        const bool branch_taken_0x12dc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dc74) {
            ctx->pc = 0x12DC98u;
            goto label_12dc98;
        }
    }
    ctx->pc = 0x12DC7Cu;
label_12dc7c:
    // 0x12dc7c: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x12DC7Cu;
    SET_GPR_U32(ctx, 31, 0x12DC84u);
    ctx->pc = 0x12DC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC7Cu;
    // 0x12dc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x12DC7Cu, 0x12DC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC84u;
label_12dc84:
    // 0x12dc84: 0x0  nop
    ctx->pc = 0x12dc84u;
    // NOP
    // 0x12dc88: 0x0  nop
    ctx->pc = 0x12dc88u;
    // NOP
    // 0x12dc8c: 0x0  nop
    ctx->pc = 0x12dc8cu;
    // NOP
    // 0x12dc90: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12DC90u;
    {
        const bool branch_taken_0x12dc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dc90) {
            ctx->pc = 0x12DC7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12dc7c;
        }
    }
    ctx->pc = 0x12DC98u;
label_12dc98:
    // 0x12dc98: 0x26a40034  addiu       $a0, $s5, 0x34
    ctx->pc = 0x12dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
    // 0x12dc9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12dc9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dca0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x12DCA0u;
    SET_GPR_U32(ctx, 31, 0x12DCA8u);
    ctx->pc = 0x12DCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCA0u;
    // 0x12dca4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x12DCA0u, 0x12DCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCA8u;
label_12dca8:
    // 0x12dca8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x12dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dcac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12dcacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12dcb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcb4: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x12DCB4u;
    {
        const bool branch_taken_0x12dcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCB4u;
        // 0x12dcb8: 0xaea20030  sw          $v0, 0x30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcb4) {
            ctx->pc = 0x12DE74u;
            goto label_12de74;
        }
    }
    ctx->pc = 0x12DCBCu;
label_12dcbc:
    // 0x12dcbc: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x12dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x12dcc0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12dcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12dcc4: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x12dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x12dcc8: 0x24a5ecb8  addiu       $a1, $a1, -0x1348
    ctx->pc = 0x12dcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962360));
    // 0x12dccc: 0x27a6010c  addiu       $a2, $sp, 0x10C
    ctx->pc = 0x12dcccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x12dcd0: 0xc04889c  jal         func_122270
    ctx->pc = 0x12DCD0u;
    SET_GPR_U32(ctx, 31, 0x12DCD8u);
    ctx->pc = 0x12DCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCD0u;
    // 0x12dcd4: 0x549021  addu        $s2, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x12DCD0u, 0x12DCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCD8u;
label_12dcd8:
    // 0x12dcd8: 0xc080748  jal         func_201D20
    ctx->pc = 0x12DCD8u;
    SET_GPR_U32(ctx, 31, 0x12DCE0u);
    ctx->pc = 0x12DCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCD8u;
    // 0x12dcdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x12DCD8u, 0x12DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCE0u;
label_12dce0:
    // 0x12dce0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12dce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dce4: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x12dce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x12dce8: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x12DCE8u;
    SET_GPR_U32(ctx, 31, 0x12DCF0u);
    ctx->pc = 0x12DCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCE8u;
    // 0x12dcec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x12DCE8u, 0x12DCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCF0u;
label_12dcf0:
    // 0x12dcf0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x12dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x12dcf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12dcf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcf8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12dcfc: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x12DCFCu;
    SET_GPR_U32(ctx, 31, 0x12DD04u);
    ctx->pc = 0x12DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCFCu;
    // 0x12dd00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x12DCFCu, 0x12DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD04u;
label_12dd04:
    // 0x12dd04: 0xc642001c  lwc1        $f2, 0x1C($s2)
    ctx->pc = 0x12dd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12dd08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12dd08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd0c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x12dd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dd10: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x12dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x12dd14: 0x27b60084  addiu       $s6, $sp, 0x84
    ctx->pc = 0x12dd14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x12dd18: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12dd18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12dd1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12dd1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12dd20: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x12dd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x12dd24: 0x24a5ecc8  addiu       $a1, $a1, -0x1338
    ctx->pc = 0x12dd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962376));
    // 0x12dd28: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x12dd28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd2c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12dd2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12dd30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12dd30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12dd34: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x12dd34u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x12dd38: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x12dd38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x12dd3c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x12dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dd40: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x12dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12dd44: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x12dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12dd48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12dd48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12dd4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12dd50: 0xafb20080  sw          $s2, 0x80($sp)
    ctx->pc = 0x12dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 18));
    // 0x12dd54: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12dd54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12dd58: 0x0  nop
    ctx->pc = 0x12dd58u;
    // NOP
    // 0x12dd5c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12dd5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12dd60: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x12dd60u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x12dd64: 0x0  nop
    ctx->pc = 0x12dd64u;
    // NOP
    // 0x12dd68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x12dd68u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x12dd6c: 0x0  nop
    ctx->pc = 0x12dd6cu;
    // NOP
    // 0x12dd70: 0x0  nop
    ctx->pc = 0x12dd70u;
    // NOP
    // 0x12dd74: 0xc0805e6  jal         func_201798
    ctx->pc = 0x12DD74u;
    SET_GPR_U32(ctx, 31, 0x12DD7Cu);
    ctx->pc = 0x12DD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD74u;
    // 0x12dd78: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201798u, 0x12DD74u, 0x12DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD7Cu;
label_12dd7c:
    // 0x12dd7c: 0xafb30088  sw          $s3, 0x88($sp)
    ctx->pc = 0x12dd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 19));
    // 0x12dd80: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x12dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x12dd84: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x12dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x12dd88: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x12dd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
    // 0x12dd8c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x12dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12dd90: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x12dd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x12dd94: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x12dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12dd98: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x12dd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    // 0x12dd9c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x12dd9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12dda0: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x12DDA0u;
    {
        const bool branch_taken_0x12dda0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12dda0) {
            ctx->pc = 0x12DE60u;
            goto label_12de60;
        }
    }
    ctx->pc = 0x12DDA8u;
    // 0x12dda8: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x12dda8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x12ddac: 0x2442ffbf  addiu       $v0, $v0, -0x41
    ctx->pc = 0x12ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967231));
    // 0x12ddb0: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x12ddb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12ddb4: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x12DDB4u;
    {
        const bool branch_taken_0x12ddb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDB4u;
        // 0x12ddb8: 0x27a30080  addiu       $v1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ddb4) {
            ctx->pc = 0x12DE60u;
            goto label_12de60;
        }
    }
    ctx->pc = 0x12DDBCu;
    // 0x12ddbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12ddc0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x12ddc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12ddc4: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x12ddc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x12ddc8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x12ddc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ddcc: 0x27a700d4  addiu       $a3, $sp, 0xD4
    ctx->pc = 0x12ddccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x12ddd0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x12ddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ddd4: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x12ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x12ddd8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x12ddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dddc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x12dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x12dde0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x12dde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12dde4: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x12dde4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x12dde8: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x12dde8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x12ddec: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x12ddecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x12ddf0: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x12ddf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x12ddf4: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x12ddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12ddf8: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x12ddf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ddfc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x12ddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12de00: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x12de00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12de04: 0xe4e30010  swc1        $f3, 0x10($a3)
    ctx->pc = 0x12de04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x12de08: 0xe4e20014  swc1        $f2, 0x14($a3)
    ctx->pc = 0x12de08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x12de0c: 0xe4e10018  swc1        $f1, 0x18($a3)
    ctx->pc = 0x12de0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x12de10: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x12de10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x12de14: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x12de14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12de18: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x12de18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x12de1c: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x12de1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12de20: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x12de20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12de24: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x12de24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12de28: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x12de28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12de2c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x12de2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12de30: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x12de30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12de34: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x12de34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12de38: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x12de38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x12de3c: 0xc4e30010  lwc1        $f3, 0x10($a3)
    ctx->pc = 0x12de3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12de40: 0xc4e20014  lwc1        $f2, 0x14($a3)
    ctx->pc = 0x12de40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12de44: 0xc4e10018  lwc1        $f1, 0x18($a3)
    ctx->pc = 0x12de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12de48: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x12de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12de4c: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x12de4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x12de50: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x12de50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x12de54: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x12de54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x12de58: 0xc04bba4  jal         func_12EE90
    ctx->pc = 0x12DE58u;
    SET_GPR_U32(ctx, 31, 0x12DE60u);
    ctx->pc = 0x12DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE58u;
    // 0x12de5c: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE90u, 0x12DE58u, 0x12DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE60u;
label_12de60:
    // 0x12de60: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x12de60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x12de64: 0xc04619c  jal         func_118670
    ctx->pc = 0x12DE64u;
    SET_GPR_U32(ctx, 31, 0x12DE6Cu);
    ctx->pc = 0x12DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE64u;
    // 0x12de68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x12DE64u, 0x12DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE6Cu;
label_12de6c:
    // 0x12de6c: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x12de6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x12de70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12de70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12de74:
    // 0x12de74: 0x0  nop
    ctx->pc = 0x12de74u;
    // NOP
    // 0x12de78: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x12de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x12de7c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x12de7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12de80: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x12DE80u;
    {
        const bool branch_taken_0x12de80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE80u;
        // 0x12de84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de80) {
            ctx->pc = 0x12DCBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12dcbc;
        }
    }
    ctx->pc = 0x12DE88u;
    // 0x12de88: 0xc047a38  jal         func_11E8E0
    ctx->pc = 0x12DE88u;
    SET_GPR_U32(ctx, 31, 0x12DE90u);
    ctx->pc = 0x11E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8E0u, 0x12DE88u, 0x12DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE90u;
label_12de90:
    // 0x12de90: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x12DE90u;
    SET_GPR_U32(ctx, 31, 0x12DE98u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x12DE90u, 0x12DE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE98u;
label_12de98:
    // 0x12de98: 0xc0485a4  jal         func_121690
    ctx->pc = 0x12DE98u;
    SET_GPR_U32(ctx, 31, 0x12DEA0u);
    ctx->pc = 0x12DE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE98u;
    // 0x12de9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121690u, 0x12DE98u, 0x12DEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DEA0u;
label_12dea0:
    // 0x12dea0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12dea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12dea4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12dea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dea8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12dea8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12deac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12deacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12deb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12deb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12deb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12deb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12deb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12deb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12debc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12debcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12dec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dec4: 0x3e00008  jr          $ra
    ctx->pc = 0x12DEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEC4u;
        // 0x12dec8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DECCu;
}
