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

// Function: caseD_3
// Address: 0x111674 - 0x1116ac
void caseD_3_0x111674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x111674");
#endif

    ctx->pc = 0x111674u;

    // 0x111674: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x111674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111678: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x111678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x11167c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11167cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111680: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x111680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x111684: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x111684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x111688: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x111688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11168c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11168cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x111690: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x111690u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x111694: 0x0  nop
    ctx->pc = 0x111694u;
    // NOP
    // 0x111698: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x111698u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11169c: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x11169Cu;
    {
        const bool branch_taken_0x11169c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11169Cu;
        // 0x1116a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11169c) {
            ctx->pc = 0x11176Cu;
            return;
        }
    }
    ctx->pc = 0x1116A4u;
    // 0x1116a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1116A4u;
    {
        const bool branch_taken_0x1116a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116A4u;
        // 0x1116a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116a4) {
            ctx->pc = 0x1116DCu;
            return;
        }
    }
    ctx->pc = 0x1116ACu;
}
