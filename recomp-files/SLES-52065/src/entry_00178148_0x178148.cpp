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

// Function: entry_00178148
// Address: 0x178148 - 0x178184
void entry_00178148_0x178148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178148_0x178148");
#endif

    ctx->pc = 0x178148u;

    // 0x178148: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x178148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17814c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x17814cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x178150: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x178154: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x178154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x178158: 0x0  nop
    ctx->pc = 0x178158u;
    // NOP
    // 0x17815c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178160: 0x2c420200  sltiu       $v0, $v0, 0x200
    ctx->pc = 0x178160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x178164: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x178164u;
    {
        const bool branch_taken_0x178164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178164u;
        // 0x178168: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178164) {
            ctx->pc = 0x1781A8u;
            return;
        }
    }
    ctx->pc = 0x17816Cu;
    // 0x17816c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17816cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178170: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x178170u;
    {
        const bool branch_taken_0x178170 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x178170) {
            ctx->pc = 0x178184u;
            return;
        }
    }
    ctx->pc = 0x178178u;
    // 0x178178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17817c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17817Cu;
    {
        const bool branch_taken_0x17817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17817Cu;
        // 0x178180: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17817c) {
            ctx->pc = 0x1781A0u;
            return;
        }
    }
    ctx->pc = 0x178184u;
}
