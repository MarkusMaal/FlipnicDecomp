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

// Function: entry_00112640
// Address: 0x112640 - 0x112680
void entry_00112640_0x112640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112640_0x112640");
#endif

    ctx->pc = 0x112640u;

    // 0x112640: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x112640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x112644: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x112644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x112648: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x112648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11264c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x112650: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x112654: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112658: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x112658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11265c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11265cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x112660: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x112660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x112664: 0x0  nop
    ctx->pc = 0x112664u;
    // NOP
    // 0x112668: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x112668u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11266c: 0x10200159  beqz        $at, . + 4 + (0x159 << 2)
    ctx->pc = 0x11266Cu;
    {
        const bool branch_taken_0x11266c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x112670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11266Cu;
        // 0x112670: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11266c) {
            ctx->pc = 0x112BD4u;
            return;
        }
    }
    ctx->pc = 0x112674u;
    // 0x112674: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x112674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112678: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x112678u;
    {
        const bool branch_taken_0x112678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112678u;
        // 0x11267c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112678) {
            ctx->pc = 0x1126B0u;
            return;
        }
    }
    ctx->pc = 0x112680u;
}
