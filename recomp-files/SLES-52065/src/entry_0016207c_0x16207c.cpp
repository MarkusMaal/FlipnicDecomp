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

// Function: entry_0016207c
// Address: 0x16207c - 0x1620c0
void entry_0016207c_0x16207c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016207c_0x16207c");
#endif

    ctx->pc = 0x16207cu;

    // 0x16207c: 0x2662fffe  addiu       $v0, $s3, -0x2
    ctx->pc = 0x16207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x162080: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x162080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x162084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162088: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x162088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16208c: 0x0  nop
    ctx->pc = 0x16208cu;
    // NOP
    // 0x162090: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x162094: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x162094u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x162098: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x162098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16209c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16209cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1620a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1620a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1620a4: 0x0  nop
    ctx->pc = 0x1620a4u;
    // NOP
    // 0x1620a8: 0x24530002  addiu       $s3, $v0, 0x2
    ctx->pc = 0x1620a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1620ac: 0x2a61000a  slti        $at, $s3, 0xA
    ctx->pc = 0x1620acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1620b0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1620B0u;
    {
        const bool branch_taken_0x1620b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1620B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620B0u;
        // 0x1620b4: 0x2a610002  slti        $at, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620b0) {
            ctx->pc = 0x1620C0u;
            return;
        }
    }
    ctx->pc = 0x1620B8u;
    // 0x1620b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1620B8u;
    {
        const bool branch_taken_0x1620b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620B8u;
        // 0x1620bc: 0x24130009  addiu       $s3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620b8) {
            ctx->pc = 0x1620CCu;
            return;
        }
    }
    ctx->pc = 0x1620C0u;
}
