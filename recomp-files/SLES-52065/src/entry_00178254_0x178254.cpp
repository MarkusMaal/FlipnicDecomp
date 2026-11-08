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

// Function: entry_00178254
// Address: 0x178254 - 0x1782a4
void entry_00178254_0x178254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178254_0x178254");
#endif

    switch (ctx->pc) {
        case 0x17829cu: goto label_17829c;
        default: break;
    }

    ctx->pc = 0x178254u;

    // 0x178254: 0x0  nop
    ctx->pc = 0x178254u;
    // NOP
    // 0x178258: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x178258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17825c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17825cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x178260: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x178260u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x178264: 0x0  nop
    ctx->pc = 0x178264u;
    // NOP
    // 0x178268: 0x1602ffdf  bne         $s0, $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x178268u;
    {
        const bool branch_taken_0x178268 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178268u;
        // 0x17826c: 0x202082a  slt         $at, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178268) {
            ctx->pc = 0x1781E8u;
            return;
        }
    }
    ctx->pc = 0x178270u;
    // 0x178270: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x178270u;
    {
        const bool branch_taken_0x178270 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x178270) {
            ctx->pc = 0x1782BCu;
            return;
        }
    }
    ctx->pc = 0x178278u;
    // 0x178278: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x178278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x17827c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17827Cu;
    {
        const bool branch_taken_0x17827c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17827c) {
            ctx->pc = 0x1782A4u;
            return;
        }
    }
    ctx->pc = 0x178284u;
    // 0x178284: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x178284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178288: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x178288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x17828c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17828cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178294: 0xc05dfe8  jal         func_177FA0
    ctx->pc = 0x178294u;
    SET_GPR_U32(ctx, 31, 0x17829Cu);
    ctx->pc = 0x178298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178294u;
    // 0x178298: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x177FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177FA0u, 0x178294u, 0x17829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17829Cu;
label_17829c:
    // 0x17829c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17829Cu;
    {
        const bool branch_taken_0x17829c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1782A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17829Cu;
        // 0x1782a0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17829c) {
            ctx->pc = 0x1782C0u;
            return;
        }
    }
    ctx->pc = 0x1782A4u;
}
