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

// Function: caseD_5
// Address: 0x172e0c - 0x172ed0
void caseD_5_0x172e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x172e0c");
#endif

    switch (ctx->pc) {
        case 0x172e0cu: goto label_172e0c;
        case 0x172e10u: goto label_172e10;
        case 0x172e14u: goto label_172e14;
        case 0x172e18u: goto label_172e18;
        case 0x172e1cu: goto label_172e1c;
        case 0x172e20u: goto label_172e20;
        case 0x172e24u: goto label_172e24;
        case 0x172e28u: goto label_172e28;
        case 0x172e2cu: goto label_172e2c;
        case 0x172e30u: goto label_172e30;
        case 0x172e34u: goto label_172e34;
        case 0x172e38u: goto label_172e38;
        case 0x172e3cu: goto label_172e3c;
        case 0x172e40u: goto label_172e40;
        case 0x172e44u: goto label_172e44;
        case 0x172e48u: goto label_172e48;
        case 0x172e4cu: goto label_172e4c;
        case 0x172e50u: goto label_172e50;
        case 0x172e54u: goto label_172e54;
        case 0x172e58u: goto label_172e58;
        case 0x172e5cu: goto label_172e5c;
        case 0x172e60u: goto label_172e60;
        case 0x172e64u: goto label_172e64;
        case 0x172e68u: goto label_172e68;
        case 0x172e6cu: goto label_172e6c;
        case 0x172e70u: goto label_172e70;
        case 0x172e74u: goto label_172e74;
        case 0x172e78u: goto label_172e78;
        case 0x172e7cu: goto label_172e7c;
        case 0x172e80u: goto label_172e80;
        case 0x172e84u: goto label_172e84;
        case 0x172e88u: goto label_172e88;
        case 0x172e8cu: goto label_172e8c;
        case 0x172e90u: goto label_172e90;
        case 0x172e94u: goto label_172e94;
        case 0x172e98u: goto label_172e98;
        case 0x172e9cu: goto label_172e9c;
        case 0x172ea0u: goto label_172ea0;
        case 0x172ea4u: goto label_172ea4;
        case 0x172ea8u: goto label_172ea8;
        case 0x172eacu: goto label_172eac;
        case 0x172eb0u: goto label_172eb0;
        case 0x172eb4u: goto label_172eb4;
        case 0x172eb8u: goto label_172eb8;
        case 0x172ebcu: goto label_172ebc;
        case 0x172ec0u: goto label_172ec0;
        case 0x172ec4u: goto label_172ec4;
        case 0x172ec8u: goto label_172ec8;
        case 0x172eccu: goto label_172ecc;
        default: break;
    }

    ctx->pc = 0x172e0cu;

label_172e0c:
    // 0x172e0c: 0x8e3937b0  lw          $t9, 0x37B0($s1)
    ctx->pc = 0x172e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14256)));
label_172e10:
    // 0x172e10: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x172e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_172e14:
    // 0x172e14: 0x320f809  jalr        $t9
label_172e18:
    if (ctx->pc == 0x172E18u) {
        ctx->pc = 0x172E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E14u;
        // 0x172e18: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172E1Cu;
        goto label_172e1c;
    }
    ctx->pc = 0x172E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172E1Cu);
        ctx->pc = 0x172E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E14u;
        // 0x172e18: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172E14u, 0x172E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172E1Cu;
label_172e1c:
    // 0x172e1c: 0x8e3937b0  lw          $t9, 0x37B0($s1)
    ctx->pc = 0x172e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14256)));
label_172e20:
    // 0x172e20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x172e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172e24:
    // 0x172e24: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x172e24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_172e28:
    // 0x172e28: 0x320f809  jalr        $t9
label_172e2c:
    if (ctx->pc == 0x172E2Cu) {
        ctx->pc = 0x172E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E28u;
        // 0x172e2c: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172E30u;
        goto label_172e30;
    }
    ctx->pc = 0x172E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172E30u);
        ctx->pc = 0x172E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E28u;
        // 0x172e2c: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172E28u, 0x172E30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172E30u;
label_172e30:
    // 0x172e30: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x172e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172e34:
    // 0x172e34: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x172e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_172e38:
    // 0x172e38: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x172e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_172e3c:
    // 0x172e3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x172e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172e40:
    // 0x172e40: 0x8e226008  lw          $v0, 0x6008($s1)
    ctx->pc = 0x172e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24584)));
label_172e44:
    // 0x172e44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_172e48:
    // 0x172e48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_172e4c:
    // 0x172e4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172e4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_172e50:
    // 0x172e50: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x172e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_172e54:
    // 0x172e54: 0x0  nop
    ctx->pc = 0x172e54u;
    // NOP
label_172e58:
    // 0x172e58: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x172e58u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_172e5c:
    // 0x172e5c: 0x0  nop
    ctx->pc = 0x172e5cu;
    // NOP
label_172e60:
    // 0x172e60: 0x0  nop
    ctx->pc = 0x172e60u;
    // NOP
label_172e64:
    // 0x172e64: 0x1010  mfhi        $v0
    ctx->pc = 0x172e64u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_172e68:
    // 0x172e68: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_172e6c:
    if (ctx->pc == 0x172E6Cu) {
        ctx->pc = 0x172E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E68u;
        // 0x172e6c: 0x2624402c  addiu       $a0, $s1, 0x402C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16428));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172E70u;
        goto label_172e70;
    }
    ctx->pc = 0x172E68u;
    {
        const bool branch_taken_0x172e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E68u;
        // 0x172e6c: 0x2624402c  addiu       $a0, $s1, 0x402C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e68) {
            ctx->pc = 0x172F58u;
            return;
        }
    }
    ctx->pc = 0x172E70u;
label_172e70:
    // 0x172e70: 0xc05e638  jal         func_1798E0
label_172e74:
    if (ctx->pc == 0x172E74u) {
        ctx->pc = 0x172E78u;
        goto label_172e78;
    }
    ctx->pc = 0x172E70u;
    SET_GPR_U32(ctx, 31, 0x172E78u);
    ctx->pc = 0x1798E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1798E0u, 0x172E70u, 0x172E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172E78u;
label_172e78:
    // 0x172e78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x172e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172e7c:
    // 0x172e7c: 0x6000014  bltz        $s0, . + 4 + (0x14 << 2)
label_172e80:
    if (ctx->pc == 0x172E80u) {
        ctx->pc = 0x172E84u;
        goto label_172e84;
    }
    ctx->pc = 0x172E7Cu;
    {
        const bool branch_taken_0x172e7c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x172e7c) {
            ctx->pc = 0x172ED0u;
            return;
        }
    }
    ctx->pc = 0x172E84u;
label_172e84:
    // 0x172e84: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x172e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_172e88:
    // 0x172e88: 0x262437a0  addiu       $a0, $s1, 0x37A0
    ctx->pc = 0x172e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
label_172e8c:
    // 0x172e8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x172e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_172e90:
    // 0x172e90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x172e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172e94:
    // 0x172e94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x172e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_172e98:
    // 0x172e98: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x172e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_172e9c:
    // 0x172e9c: 0xc05e5e0  jal         func_179780
label_172ea0:
    if (ctx->pc == 0x172EA0u) {
        ctx->pc = 0x172EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E9Cu;
        // 0x172ea0: 0x24460060  addiu       $a2, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172EA4u;
        goto label_172ea4;
    }
    ctx->pc = 0x172E9Cu;
    SET_GPR_U32(ctx, 31, 0x172EA4u);
    ctx->pc = 0x172EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E9Cu;
    // 0x172ea0: 0x24460060  addiu       $a2, $v0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179780u, 0x172E9Cu, 0x172EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172EA4u;
label_172ea4:
    // 0x172ea4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x172ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_172ea8:
    // 0x172ea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x172ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172eac:
    // 0x172eac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x172eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_172eb0:
    // 0x172eb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x172eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_172eb4:
    // 0x172eb4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x172eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_172eb8:
    // 0x172eb8: 0xac4300a4  sw          $v1, 0xA4($v0)
    ctx->pc = 0x172eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 3));
label_172ebc:
    // 0x172ebc: 0x8e244024  lw          $a0, 0x4024($s1)
    ctx->pc = 0x172ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16420)));
label_172ec0:
    // 0x172ec0: 0xc042118  jal         func_108460
label_172ec4:
    if (ctx->pc == 0x172EC4u) {
        ctx->pc = 0x172EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172EC0u;
        // 0x172ec4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172EC8u;
        goto label_172ec8;
    }
    ctx->pc = 0x172EC0u;
    SET_GPR_U32(ctx, 31, 0x172EC8u);
    ctx->pc = 0x172EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172EC0u;
    // 0x172ec4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x172EC0u, 0x172EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172EC8u;
label_172ec8:
    // 0x172ec8: 0x10000023  b           . + 4 + (0x23 << 2)
label_172ecc:
    if (ctx->pc == 0x172ECCu) {
        ctx->pc = 0x172ED0u;
        goto label_fallthrough_0x172ec8;
    }
    ctx->pc = 0x172EC8u;
    {
        const bool branch_taken_0x172ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ec8) {
            ctx->pc = 0x172F58u;
            return;
        }
    }
label_fallthrough_0x172ec8:
    ctx->pc = 0x172ED0u;
}
