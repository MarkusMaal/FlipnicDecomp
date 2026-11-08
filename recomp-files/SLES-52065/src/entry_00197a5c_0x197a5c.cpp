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

// Function: entry_00197a5c
// Address: 0x197a5c - 0x197ab4
void entry_00197a5c_0x197a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197a5c_0x197a5c");
#endif

    ctx->pc = 0x197a5cu;

    // 0x197a5c: 0x0  nop
    ctx->pc = 0x197a5cu;
    // NOP
    // 0x197a60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x197a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x197a64: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x197a64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x197a68: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x197A68u;
    {
        const bool branch_taken_0x197a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A68u;
        // 0x197a6c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a68) {
            ctx->pc = 0x197954u;
            return;
        }
    }
    ctx->pc = 0x197A70u;
    // 0x197a70: 0x8ea40324  lw          $a0, 0x324($s5)
    ctx->pc = 0x197a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
    // 0x197a74: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x197a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x197a78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x197a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197a7c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x197a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x197a80: 0xaea30324  sw          $v1, 0x324($s5)
    ctx->pc = 0x197a80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 3));
    // 0x197a84: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x197a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197a88: 0x8ea40324  lw          $a0, 0x324($s5)
    ctx->pc = 0x197a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
    // 0x197a8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x197a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x197a90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x197a90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x197a94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x197a94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x197a98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x197a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x197a9c: 0x0  nop
    ctx->pc = 0x197a9cu;
    // NOP
    // 0x197aa0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x197aa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x197aa4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x197AA4u;
    {
        const bool branch_taken_0x197aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x197aa4) {
            ctx->pc = 0x197B18u;
            return;
        }
    }
    ctx->pc = 0x197AACu;
    // 0x197aac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x197aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ab0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x197ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197ab4u;
}
