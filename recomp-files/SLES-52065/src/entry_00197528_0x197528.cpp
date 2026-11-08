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

// Function: entry_00197528
// Address: 0x197528 - 0x197594
void entry_00197528_0x197528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197528_0x197528");
#endif

    switch (ctx->pc) {
        case 0x197564u: goto label_197564;
        case 0x19758cu: goto label_19758c;
        default: break;
    }

    ctx->pc = 0x197528u;

    // 0x197528: 0x8ea206ac  lw          $v0, 0x6AC($s5)
    ctx->pc = 0x197528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1708)));
    // 0x19752c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19752cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x197530: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x197530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x197534: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x197534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x197538: 0x8c4206b0  lw          $v0, 0x6B0($v0)
    ctx->pc = 0x197538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
    // 0x19753c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19753cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x197540: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x197540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x197544: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x197544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x197548: 0x8c4201fc  lw          $v0, 0x1FC($v0)
    ctx->pc = 0x197548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x19754c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19754Cu;
    {
        const bool branch_taken_0x19754c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19754c) {
            ctx->pc = 0x197594u;
            return;
        }
    }
    ctx->pc = 0x197554u;
    // 0x197554: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197558: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19755c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19755Cu;
    SET_GPR_U32(ctx, 31, 0x197564u);
    ctx->pc = 0x197560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19755Cu;
    // 0x197560: 0xaea006a8  sw          $zero, 0x6A8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1704), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19755Cu, 0x197564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197564u;
label_197564:
    // 0x197564: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x197564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197568: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x197568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19756c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19756cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197570: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197574: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x197574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x197578: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x197578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19757c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19757cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x197580: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x197580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x197584: 0xc063de0  jal         func_18F780
    ctx->pc = 0x197584u;
    SET_GPR_U32(ctx, 31, 0x19758Cu);
    ctx->pc = 0x197588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197584u;
    // 0x197588: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x197584u, 0x19758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19758Cu;
label_19758c:
    // 0x19758c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x19758Cu;
    {
        const bool branch_taken_0x19758c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19758c) {
            ctx->pc = 0x197660u;
            return;
        }
    }
    ctx->pc = 0x197594u;
}
