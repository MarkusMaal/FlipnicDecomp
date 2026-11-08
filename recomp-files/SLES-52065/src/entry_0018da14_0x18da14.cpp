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

// Function: entry_0018da14
// Address: 0x18da14 - 0x18dabc
void entry_0018da14_0x18da14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018da14_0x18da14");
#endif

    switch (ctx->pc) {
        case 0x18da9cu: goto label_18da9c;
        case 0x18daa4u: goto label_18daa4;
        case 0x18dab4u: goto label_18dab4;
        default: break;
    }

    ctx->pc = 0x18da14u;

    // 0x18da14: 0x8e230478  lw          $v1, 0x478($s1)
    ctx->pc = 0x18da14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1144)));
    // 0x18da18: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x18da18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x18da1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18da1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x18da20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18da20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18da24: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x18da24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18da28: 0xae220478  sw          $v0, 0x478($s1)
    ctx->pc = 0x18da28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1144), GPR_U32(ctx, 2));
    // 0x18da2c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x18da2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18da30: 0x8e230478  lw          $v1, 0x478($s1)
    ctx->pc = 0x18da30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1144)));
    // 0x18da34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18da34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18da38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18da38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18da3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18da3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18da40: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18da40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18da44: 0x0  nop
    ctx->pc = 0x18da44u;
    // NOP
    // 0x18da48: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x18da48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18da4c: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x18DA4Cu;
    {
        const bool branch_taken_0x18da4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA4Cu;
        // 0x18da50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da4c) {
            ctx->pc = 0x18DB50u;
            return;
        }
    }
    ctx->pc = 0x18DA54u;
    // 0x18da54: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18da54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
    // 0x18da58: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18da58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18da5c: 0x8e25047c  lw          $a1, 0x47C($s1)
    ctx->pc = 0x18da5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1148)));
    // 0x18da60: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18da60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18da64: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18da64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18da68: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18da68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18da6c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18da70: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18da70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18da74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18da74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18da78: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x18da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x18da7c: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x18da7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18da80: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x18DA80u;
    {
        const bool branch_taken_0x18da80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA80u;
        // 0x18da84: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da80) {
            ctx->pc = 0x18DABCu;
            return;
        }
    }
    ctx->pc = 0x18DA88u;
    // 0x18da88: 0x26240610  addiu       $a0, $s1, 0x610
    ctx->pc = 0x18da88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    // 0x18da8c: 0xae22047c  sw          $v0, 0x47C($s1)
    ctx->pc = 0x18da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1148), GPR_U32(ctx, 2));
    // 0x18da90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18da90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da94: 0xc063d00  jal         func_18F400
    ctx->pc = 0x18DA94u;
    SET_GPR_U32(ctx, 31, 0x18DA9Cu);
    ctx->pc = 0x18DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA94u;
    // 0x18da98: 0xae200478  sw          $zero, 0x478($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F400u, 0x18DA94u, 0x18DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA9Cu;
label_18da9c:
    // 0x18da9c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x18DA9Cu;
    SET_GPR_U32(ctx, 31, 0x18DAA4u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18DA9Cu, 0x18DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DAA4u;
label_18daa4:
    // 0x18daa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18daa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18daa8: 0x240500e4  addiu       $a1, $zero, 0xE4
    ctx->pc = 0x18daa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
    // 0x18daac: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x18DAACu;
    SET_GPR_U32(ctx, 31, 0x18DAB4u);
    ctx->pc = 0x18DAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAACu;
    // 0x18dab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18DAACu, 0x18DAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DAB4u;
label_18dab4:
    // 0x18dab4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x18DAB4u;
    {
        const bool branch_taken_0x18dab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dab4) {
            ctx->pc = 0x18DB4Cu;
            return;
        }
    }
    ctx->pc = 0x18DABCu;
}
