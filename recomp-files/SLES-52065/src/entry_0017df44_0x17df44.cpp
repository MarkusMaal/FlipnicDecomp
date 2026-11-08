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

// Function: entry_0017df44
// Address: 0x17df44 - 0x17dfb4
void entry_0017df44_0x17df44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017df44_0x17df44");
#endif

    switch (ctx->pc) {
        case 0x17df58u: goto label_17df58;
        case 0x17df88u: goto label_17df88;
        default: break;
    }

    ctx->pc = 0x17df44u;

    // 0x17df44: 0x0  nop
    ctx->pc = 0x17df44u;
    // NOP
    // 0x17df48: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x17df48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x17df4c: 0x2333021  addu        $a2, $s1, $s3
    ctx->pc = 0x17df4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x17df50: 0xc05faf8  jal         func_17EBE0
    ctx->pc = 0x17DF50u;
    SET_GPR_U32(ctx, 31, 0x17DF58u);
    ctx->pc = 0x17DF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF50u;
    // 0x17df54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EBE0u, 0x17DF50u, 0x17DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF58u;
label_17df58:
    // 0x17df58: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17df58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df5c: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x17DF5Cu;
    {
        const bool branch_taken_0x17df5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x17df5c) {
            ctx->pc = 0x17DFB4u;
            return;
        }
    }
    ctx->pc = 0x17DF64u;
    // 0x17df64: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x17df64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x17df68: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17DF68u;
    {
        const bool branch_taken_0x17df68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17df68) {
            ctx->pc = 0x17DFB4u;
            return;
        }
    }
    ctx->pc = 0x17DF70u;
    // 0x17df70: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x17df70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x17df74: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17df74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17df78: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17DF78u;
    {
        const bool branch_taken_0x17df78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF78u;
        // 0x17df7c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df78) {
            ctx->pc = 0x17DFB4u;
            return;
        }
    }
    ctx->pc = 0x17DF80u;
    // 0x17df80: 0xc05f570  jal         func_17D5C0
    ctx->pc = 0x17DF80u;
    SET_GPR_U32(ctx, 31, 0x17DF88u);
    ctx->pc = 0x17D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D5C0u, 0x17DF80u, 0x17DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF88u;
label_17df88:
    // 0x17df88: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17DF88u;
    {
        const bool branch_taken_0x17df88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17df88) {
            ctx->pc = 0x17DFB4u;
            return;
        }
    }
    ctx->pc = 0x17DF90u;
    // 0x17df90: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x17df90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x17df94: 0x212f021  addu        $fp, $s0, $s2
    ctx->pc = 0x17df94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x17df98: 0x233b821  addu        $s7, $s1, $s3
    ctx->pc = 0x17df98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x17df9c: 0xc455001c  lwc1        $f21, 0x1C($v0)
    ctx->pc = 0x17df9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17dfa0: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x17dfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17dfa4: 0xc4560024  lwc1        $f22, 0x24($v0)
    ctx->pc = 0x17dfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17dfa8: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x17dfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17dfac: 0x46150dc1  sub.s       $f23, $f1, $f21
    ctx->pc = 0x17dfacu;
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x17dfb0: 0x46160501  sub.s       $f20, $f0, $f22
    ctx->pc = 0x17dfb0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    ctx->pc = 0x17dfb4u;
}
