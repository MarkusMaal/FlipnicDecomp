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

// Function: entry_001aa924
// Address: 0x1aa924 - 0x1aa984
void entry_001aa924_0x1aa924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa924_0x1aa924");
#endif

    switch (ctx->pc) {
        case 0x1aa97cu: goto label_1aa97c;
        default: break;
    }

    ctx->pc = 0x1aa924u;

    // 0x1aa924: 0x0  nop
    ctx->pc = 0x1aa924u;
    // NOP
    // 0x1aa928: 0x8ea4070c  lw          $a0, 0x70C($s5)
    ctx->pc = 0x1aa928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1804)));
    // 0x1aa92c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1aa92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1aa930: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1aa930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1aa934: 0x8c63067c  lw          $v1, 0x67C($v1)
    ctx->pc = 0x1aa934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1660)));
    // 0x1aa938: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1aa938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1aa93c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1AA93Cu;
    {
        const bool branch_taken_0x1aa93c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa93c) {
            ctx->pc = 0x1AA910u;
            return;
        }
    }
    ctx->pc = 0x1AA944u;
    // 0x1aa944: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1aa944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1aa948: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1aa948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1aa94c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1AA94Cu;
    {
        const bool branch_taken_0x1aa94c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA94Cu;
        // 0x1aa950: 0xaea3070c  sw          $v1, 0x70C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1804), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa94c) {
            ctx->pc = 0x1AA984u;
            return;
        }
    }
    ctx->pc = 0x1AA954u;
    // 0x1aa954: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1aa954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa958: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1aa958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1aa95c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aa95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aa960: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1aa960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa964: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aa964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aa968: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aa968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aa96c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aa96cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1aa970: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1aa970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1aa974: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AA974u;
    SET_GPR_U32(ctx, 31, 0x1AA97Cu);
    ctx->pc = 0x1AA978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA974u;
    // 0x1aa978: 0xaea20710  sw          $v0, 0x710($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1808), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AA974u, 0x1AA97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA97Cu;
label_1aa97c:
    // 0x1aa97c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AA97Cu;
    {
        const bool branch_taken_0x1aa97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa97c) {
            ctx->pc = 0x1AA9C4u;
            return;
        }
    }
    ctx->pc = 0x1AA984u;
}
