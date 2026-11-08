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

// Function: entry_001a9bf4
// Address: 0x1a9bf4 - 0x1a9c5c
void entry_001a9bf4_0x1a9bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9bf4_0x1a9bf4");
#endif

    switch (ctx->pc) {
        case 0x1a9c54u: goto label_1a9c54;
        default: break;
    }

    ctx->pc = 0x1a9bf4u;

    // 0x1a9bf4: 0x0  nop
    ctx->pc = 0x1a9bf4u;
    // NOP
    // 0x1a9bf8: 0x8ea206c4  lw          $v0, 0x6C4($s5)
    ctx->pc = 0x1a9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1732)));
    // 0x1a9bfc: 0x4410017  bgez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A9BFCu;
    {
        const bool branch_taken_0x1a9bfc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a9bfc) {
            ctx->pc = 0x1A9C5Cu;
            return;
        }
    }
    ctx->pc = 0x1A9C04u;
    // 0x1a9c04: 0x8e830674  lw          $v1, 0x674($s4)
    ctx->pc = 0x1a9c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1652)));
    // 0x1a9c08: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a9c0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9c10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9c14: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a9c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1a9c18: 0x8c4201fc  lw          $v0, 0x1FC($v0)
    ctx->pc = 0x1a9c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x1a9c1c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A9C1Cu;
    {
        const bool branch_taken_0x1a9c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c1c) {
            ctx->pc = 0x1A9C5Cu;
            return;
        }
    }
    ctx->pc = 0x1A9C24u;
    // 0x1a9c24: 0xaeb006c4  sw          $s0, 0x6C4($s5)
    ctx->pc = 0x1a9c24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1732), GPR_U32(ctx, 16));
    // 0x1a9c28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9c2c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a9c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9c30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a9c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a9c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9c38: 0x0  nop
    ctx->pc = 0x1a9c38u;
    // NOP
    // 0x1a9c3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a9c3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a9c40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a9c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a9c44: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a9c44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a9c48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a9c48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a9c4c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A9C4Cu;
    SET_GPR_U32(ctx, 31, 0x1A9C54u);
    ctx->pc = 0x1A9C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C4Cu;
    // 0x1a9c50: 0xaea206c8  sw          $v0, 0x6C8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1736), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A9C4Cu, 0x1A9C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9C54u;
label_1a9c54:
    // 0x1a9c54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9C54u;
    {
        const bool branch_taken_0x1a9c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c54) {
            ctx->pc = 0x1A9C6Cu;
            return;
        }
    }
    ctx->pc = 0x1A9C5Cu;
}
