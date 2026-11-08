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

// Function: entry_0018d81c
// Address: 0x18d81c - 0x18d878
void entry_0018d81c_0x18d81c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d81c_0x18d81c");
#endif

    ctx->pc = 0x18d81cu;

    // 0x18d81c: 0x8e230540  lw          $v1, 0x540($s1)
    ctx->pc = 0x18d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1344)));
    // 0x18d820: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18D820u;
    {
        const bool branch_taken_0x18d820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D820u;
        // 0x18d824: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d820) {
            ctx->pc = 0x18D87Cu;
            return;
        }
    }
    ctx->pc = 0x18D828u;
    // 0x18d828: 0xc62104d0  lwc1        $f1, 0x4D0($s1)
    ctx->pc = 0x18d828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d82c: 0xc6200550  lwc1        $f0, 0x550($s1)
    ctx->pc = 0x18d82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d830: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18d830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18d834: 0xe62004d0  swc1        $f0, 0x4D0($s1)
    ctx->pc = 0x18d834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1232), bits); }
    // 0x18d838: 0xc62104d4  lwc1        $f1, 0x4D4($s1)
    ctx->pc = 0x18d838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d83c: 0xc6200554  lwc1        $f0, 0x554($s1)
    ctx->pc = 0x18d83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d840: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18d840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18d844: 0xe62004d4  swc1        $f0, 0x4D4($s1)
    ctx->pc = 0x18d844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1236), bits); }
    // 0x18d848: 0xc62104d8  lwc1        $f1, 0x4D8($s1)
    ctx->pc = 0x18d848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d84c: 0xc6200558  lwc1        $f0, 0x558($s1)
    ctx->pc = 0x18d84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d850: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18d850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18d854: 0xe62004d8  swc1        $f0, 0x4D8($s1)
    ctx->pc = 0x18d854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1240), bits); }
    // 0x18d858: 0x8e230540  lw          $v1, 0x540($s1)
    ctx->pc = 0x18d858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1344)));
    // 0x18d85c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18d860: 0xae230540  sw          $v1, 0x540($s1)
    ctx->pc = 0x18d860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1344), GPR_U32(ctx, 3));
    // 0x18d864: 0x8e230540  lw          $v1, 0x540($s1)
    ctx->pc = 0x18d864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1344)));
    // 0x18d868: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D868u;
    {
        const bool branch_taken_0x18d868 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D868u;
        // 0x18d86c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d868) {
            ctx->pc = 0x18D878u;
            return;
        }
    }
    ctx->pc = 0x18D870u;
    // 0x18d870: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D870u;
    {
        const bool branch_taken_0x18d870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d870) {
            ctx->pc = 0x18D87Cu;
            return;
        }
    }
    ctx->pc = 0x18D878u;
}
