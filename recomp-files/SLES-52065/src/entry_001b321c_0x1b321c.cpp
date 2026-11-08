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

// Function: entry_001b321c
// Address: 0x1b321c - 0x1b3284
void entry_001b321c_0x1b321c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b321c_0x1b321c");
#endif

    ctx->pc = 0x1b321cu;

    // 0x1b321c: 0x2508821  addu        $s1, $s2, $s0
    ctx->pc = 0x1b321cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1b3220: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1b3220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1b3224: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1B3224u;
    {
        const bool branch_taken_0x1b3224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3224) {
            ctx->pc = 0x1B3310u;
            return;
        }
    }
    ctx->pc = 0x1B322Cu;
    // 0x1b322c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1b322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3230: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b3230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3234: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b3234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1b3238: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1b3238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b323c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1b323cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1b3240: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b3240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1b3244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3248: 0x0  nop
    ctx->pc = 0x1b3248u;
    // NOP
    // 0x1b324c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b324cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3250: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b3250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3254: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b3254u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b3258: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b3258u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b325c: 0x0  nop
    ctx->pc = 0x1b325cu;
    // NOP
    // 0x1b3260: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x1b3260u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b3264: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3264u;
    {
        const bool branch_taken_0x1b3264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3264u;
        // 0x1b3268: 0x8e330010  lw          $s3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3264) {
            ctx->pc = 0x1B3284u;
            return;
        }
    }
    ctx->pc = 0x1B326Cu;
    // 0x1b326c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b326cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3274: 0x0  nop
    ctx->pc = 0x1b3274u;
    // NOP
    // 0x1b3278: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b3278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b327c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b327cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3280: 0x46000bc3  div.s       $f15, $f1, $f0
    ctx->pc = 0x1b3280u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    ctx->pc = 0x1b3284u;
}
