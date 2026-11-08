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

// Function: entry_0016f600
// Address: 0x16f600 - 0x16f640
void entry_0016f600_0x16f600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f600_0x16f600");
#endif

    ctx->pc = 0x16f600u;

    // 0x16f600: 0x14850016  bne         $a0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x16F600u;
    {
        const bool branch_taken_0x16f600 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x16F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F600u;
        // 0x16f604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f600) {
            ctx->pc = 0x16F65Cu;
            return;
        }
    }
    ctx->pc = 0x16F608u;
    // 0x16f608: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x16f608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f60c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x16f60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f610: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f614: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f614u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f618: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f61c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f624: 0x0  nop
    ctx->pc = 0x16f624u;
    // NOP
    // 0x16f628: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f62c: 0x0  nop
    ctx->pc = 0x16f62cu;
    // NOP
    // 0x16f630: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16F630u;
    {
        const bool branch_taken_0x16f630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f630) {
            ctx->pc = 0x16F640u;
            return;
        }
    }
    ctx->pc = 0x16F638u;
    // 0x16f638: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F638u;
    {
        const bool branch_taken_0x16f638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F638u;
        // 0x16f63c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f638) {
            ctx->pc = 0x16F648u;
            return;
        }
    }
    ctx->pc = 0x16F640u;
}
