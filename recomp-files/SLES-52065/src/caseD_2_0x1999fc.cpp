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

// Function: caseD_2
// Address: 0x1999fc - 0x199a80
void caseD_2_0x1999fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1999fc");
#endif

    switch (ctx->pc) {
        case 0x1999fcu: goto label_1999fc;
        case 0x199a00u: goto label_199a00;
        case 0x199a04u: goto label_199a04;
        case 0x199a08u: goto label_199a08;
        case 0x199a0cu: goto label_199a0c;
        case 0x199a10u: goto label_199a10;
        case 0x199a14u: goto label_199a14;
        case 0x199a18u: goto label_199a18;
        case 0x199a1cu: goto label_199a1c;
        case 0x199a20u: goto label_199a20;
        case 0x199a24u: goto label_199a24;
        case 0x199a28u: goto label_199a28;
        case 0x199a2cu: goto label_199a2c;
        case 0x199a30u: goto label_199a30;
        case 0x199a34u: goto label_199a34;
        case 0x199a38u: goto label_199a38;
        case 0x199a3cu: goto label_199a3c;
        case 0x199a40u: goto label_199a40;
        case 0x199a44u: goto label_199a44;
        case 0x199a48u: goto label_199a48;
        case 0x199a4cu: goto label_199a4c;
        case 0x199a50u: goto label_199a50;
        case 0x199a54u: goto label_199a54;
        case 0x199a58u: goto label_199a58;
        case 0x199a5cu: goto label_199a5c;
        case 0x199a60u: goto label_199a60;
        case 0x199a64u: goto label_199a64;
        case 0x199a68u: goto label_199a68;
        case 0x199a6cu: goto label_199a6c;
        case 0x199a70u: goto label_199a70;
        case 0x199a74u: goto label_199a74;
        case 0x199a78u: goto label_199a78;
        case 0x199a7cu: goto label_199a7c;
        default: break;
    }

    ctx->pc = 0x1999fcu;

label_1999fc:
    // 0x1999fc: 0x0  nop
    ctx->pc = 0x1999fcu;
    // NOP
label_199a00:
    // 0x199a00: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199a00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199a04:
    // 0x199a04: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x199a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_199a08:
    // 0x199a08: 0x320f809  jalr        $t9
label_199a0c:
    if (ctx->pc == 0x199A0Cu) {
        ctx->pc = 0x199A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A08u;
        // 0x199a0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A10u;
        goto label_199a10;
    }
    ctx->pc = 0x199A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199A10u);
        ctx->pc = 0x199A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A08u;
        // 0x199a0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199A08u, 0x199A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199A10u;
label_199a10:
    // 0x199a10: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199a14:
    // 0x199a14: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x199a14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_199a18:
    // 0x199a18: 0x8f390098  lw          $t9, 0x98($t9)
    ctx->pc = 0x199a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 152)));
label_199a1c:
    // 0x199a1c: 0x320f809  jalr        $t9
label_199a20:
    if (ctx->pc == 0x199A20u) {
        ctx->pc = 0x199A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A1Cu;
        // 0x199a20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A24u;
        goto label_199a24;
    }
    ctx->pc = 0x199A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199A24u);
        ctx->pc = 0x199A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A1Cu;
        // 0x199a20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199A1Cu, 0x199A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199A24u;
label_199a24:
    // 0x199a24: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x199a24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_199a28:
    // 0x199a28: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x199a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
label_199a2c:
    // 0x199a2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x199a2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199a30:
    // 0x199a30: 0x0  nop
    ctx->pc = 0x199a30u;
    // NOP
label_199a34:
    // 0x199a34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199a34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199a38:
    // 0x199a38: 0x0  nop
    ctx->pc = 0x199a38u;
    // NOP
label_199a3c:
    // 0x199a3c: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
label_199a40:
    if (ctx->pc == 0x199A40u) {
        ctx->pc = 0x199A44u;
        goto label_199a44;
    }
    ctx->pc = 0x199A3Cu;
    {
        const bool branch_taken_0x199a3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199a3c) {
            ctx->pc = 0x199BA8u;
            return;
        }
    }
    ctx->pc = 0x199A44u;
label_199a44:
    // 0x199a44: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199a44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199a48:
    // 0x199a48: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x199a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_199a4c:
    // 0x199a4c: 0x320f809  jalr        $t9
label_199a50:
    if (ctx->pc == 0x199A50u) {
        ctx->pc = 0x199A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A4Cu;
        // 0x199a50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A54u;
        goto label_199a54;
    }
    ctx->pc = 0x199A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199A54u);
        ctx->pc = 0x199A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A4Cu;
        // 0x199a50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199A4Cu, 0x199A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199A54u;
label_199a54:
    // 0x199a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199a58:
    // 0x199a58: 0x14430053  bne         $v0, $v1, . + 4 + (0x53 << 2)
label_199a5c:
    if (ctx->pc == 0x199A5Cu) {
        ctx->pc = 0x199A60u;
        goto label_199a60;
    }
    ctx->pc = 0x199A58u;
    {
        const bool branch_taken_0x199a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199a58) {
            ctx->pc = 0x199BA8u;
            return;
        }
    }
    ctx->pc = 0x199A60u;
label_199a60:
    // 0x199a60: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x199a60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_199a64:
    // 0x199a64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_199a68:
    // 0x199a68: 0xc064c20  jal         func_193080
label_199a6c:
    if (ctx->pc == 0x199A6Cu) {
        ctx->pc = 0x199A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A68u;
        // 0x199a6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A70u;
        goto label_199a70;
    }
    ctx->pc = 0x199A68u;
    SET_GPR_U32(ctx, 31, 0x199A70u);
    ctx->pc = 0x199A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199A68u;
    // 0x199a6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x199A68u, 0x199A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A70u;
label_199a70:
    // 0x199a70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x199a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199a74:
    // 0x199a74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_199a78:
    // 0x199a78: 0x1000004b  b           . + 4 + (0x4B << 2)
label_199a7c:
    if (ctx->pc == 0x199A7Cu) {
        ctx->pc = 0x199A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A78u;
        // 0x199a7c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A80u;
        goto label_fallthrough_0x199a78;
    }
    ctx->pc = 0x199A78u;
    {
        const bool branch_taken_0x199a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A78u;
        // 0x199a7c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a78) {
            ctx->pc = 0x199BA8u;
            return;
        }
    }
label_fallthrough_0x199a78:
    ctx->pc = 0x199A80u;
}
