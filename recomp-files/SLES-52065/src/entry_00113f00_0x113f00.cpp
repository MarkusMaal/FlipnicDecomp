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

// Function: entry_00113f00
// Address: 0x113f00 - 0x113fac
void entry_00113f00_0x113f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113f00_0x113f00");
#endif

    switch (ctx->pc) {
        case 0x113f28u: goto label_113f28;
        case 0x113f50u: goto label_113f50;
        case 0x113f78u: goto label_113f78;
        case 0x113f8cu: goto label_113f8c;
        case 0x113f98u: goto label_113f98;
        default: break;
    }

    ctx->pc = 0x113f00u;

label_113f00:
    // 0x113f00: 0x8e4202a4  lw          $v0, 0x2A4($s2)
    ctx->pc = 0x113f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 676)));
label_113f04:
    // 0x113f04: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x113f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_113f08:
    // 0x113f08: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_113f0c:
    if (ctx->pc == 0x113F0Cu) {
        ctx->pc = 0x113F10u;
        goto label_113f10;
    }
    ctx->pc = 0x113F08u;
    {
        const bool branch_taken_0x113f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113f08) {
            ctx->pc = 0x113ED8u;
            return;
        }
    }
    ctx->pc = 0x113F10u;
label_113f10:
    // 0x113f10: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x113f10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_113f14:
    // 0x113f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113f18:
    // 0x113f18: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x113f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_113f1c:
    // 0x113f1c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x113f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_113f20:
    // 0x113f20: 0x320f809  jalr        $t9
label_113f24:
    if (ctx->pc == 0x113F24u) {
        ctx->pc = 0x113F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F20u;
        // 0x113f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113F28u;
        goto label_113f28;
    }
    ctx->pc = 0x113F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x113F28u);
        ctx->pc = 0x113F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F20u;
        // 0x113f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113F20u, 0x113F28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113F28u;
label_113f28:
    // 0x113f28: 0x8f83824c  lw          $v1, -0x7DB4($gp)
    ctx->pc = 0x113f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935116)));
label_113f2c:
    // 0x113f2c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_113f30:
    if (ctx->pc == 0x113F30u) {
        ctx->pc = 0x113F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F2Cu;
        // 0x113f30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113F34u;
        goto label_113f34;
    }
    ctx->pc = 0x113F2Cu;
    {
        const bool branch_taken_0x113f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F2Cu;
        // 0x113f30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f2c) {
            ctx->pc = 0x113FACu;
            return;
        }
    }
    ctx->pc = 0x113F34u;
label_113f34:
    // 0x113f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_113f38:
    // 0x113f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113f3c:
    // 0x113f3c: 0xa242007a  sb          $v0, 0x7A($s2)
    ctx->pc = 0x113f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 122), (uint8_t)GPR_U32(ctx, 2));
label_113f40:
    // 0x113f40: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x113f40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_113f44:
    // 0x113f44: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x113f44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_113f48:
    // 0x113f48: 0x320f809  jalr        $t9
label_113f4c:
    if (ctx->pc == 0x113F4Cu) {
        ctx->pc = 0x113F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F48u;
        // 0x113f4c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113F50u;
        goto label_113f50;
    }
    ctx->pc = 0x113F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x113F50u);
        ctx->pc = 0x113F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F48u;
        // 0x113f4c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113F48u, 0x113F50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113F50u;
label_113f50:
    // 0x113f50: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x113f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_113f54:
    // 0x113f54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_113f58:
    // 0x113f58: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x113f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_113f5c:
    // 0x113f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113f60:
    // 0x113f60: 0x8f82824c  lw          $v0, -0x7DB4($gp)
    ctx->pc = 0x113f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935116)));
label_113f64:
    // 0x113f64: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x113f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_113f68:
    // 0x113f68: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x113f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_113f6c:
    // 0x113f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x113f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_113f70:
    // 0x113f70: 0x320f809  jalr        $t9
label_113f74:
    if (ctx->pc == 0x113F74u) {
        ctx->pc = 0x113F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F70u;
        // 0x113f74: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x113F78u;
        goto label_113f78;
    }
    ctx->pc = 0x113F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x113F78u);
        ctx->pc = 0x113F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F70u;
        // 0x113f74: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113F70u, 0x113F78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113F78u;
label_113f78:
    // 0x113f78: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x113f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_113f7c:
    // 0x113f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113f80:
    // 0x113f80: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x113f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_113f84:
    // 0x113f84: 0x320f809  jalr        $t9
label_113f88:
    if (ctx->pc == 0x113F88u) {
        ctx->pc = 0x113F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F84u;
        // 0x113f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113F8Cu;
        goto label_113f8c;
    }
    ctx->pc = 0x113F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x113F8Cu);
        ctx->pc = 0x113F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F84u;
        // 0x113f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113F84u, 0x113F8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113F8Cu;
label_113f8c:
    // 0x113f8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x113f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_113f90:
    // 0x113f90: 0xc045004  jal         func_114010
label_113f94:
    if (ctx->pc == 0x113F94u) {
        ctx->pc = 0x113F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F90u;
        // 0x113f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113F98u;
        goto label_113f98;
    }
    ctx->pc = 0x113F90u;
    SET_GPR_U32(ctx, 31, 0x113F98u);
    ctx->pc = 0x113F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F90u;
    // 0x113f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114010u, 0x113F90u, 0x113F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F98u;
label_113f98:
    // 0x113f98: 0xc780824c  lwc1        $f0, -0x7DB4($gp)
    ctx->pc = 0x113f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_113f9c:
    // 0x113f9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113f9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_113fa0:
    // 0x113fa0: 0xe6400280  swc1        $f0, 0x280($s2)
    ctx->pc = 0x113fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 640), bits); }
label_113fa4:
    // 0x113fa4: 0x10000002  b           . + 4 + (0x2 << 2)
label_113fa8:
    if (ctx->pc == 0x113FA8u) {
        ctx->pc = 0x113FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FA4u;
        // 0x113fa8: 0xae400270  sw          $zero, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113FACu;
        goto label_fallthrough_0x113fa4;
    }
    ctx->pc = 0x113FA4u;
    {
        const bool branch_taken_0x113fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FA4u;
        // 0x113fa8: 0xae400270  sw          $zero, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fa4) {
            ctx->pc = 0x113FB0u;
            return;
        }
    }
label_fallthrough_0x113fa4:
    ctx->pc = 0x113FACu;
}
