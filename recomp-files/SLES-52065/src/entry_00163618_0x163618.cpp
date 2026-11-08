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

// Function: entry_00163618
// Address: 0x163618 - 0x163658
void entry_00163618_0x163618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163618_0x163618");
#endif

    ctx->pc = 0x163618u;

    // 0x163618: 0x14c20010  bne         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x163618u;
    {
        const bool branch_taken_0x163618 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x16361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163618u;
        // 0x16361c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163618) {
            ctx->pc = 0x16365Cu;
            return;
        }
    }
    ctx->pc = 0x163620u;
    // 0x163620: 0x8623021a  lh          $v1, 0x21A($s1)
    ctx->pc = 0x163620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x163624: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x163624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x163628: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x163628u;
    {
        const bool branch_taken_0x163628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163628) {
            ctx->pc = 0x163658u;
            return;
        }
    }
    ctx->pc = 0x163630u;
    // 0x163630: 0xc601026c  lwc1        $f1, 0x26C($s0)
    ctx->pc = 0x163630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163634: 0x3c023d1e  lui         $v0, 0x3D1E
    ctx->pc = 0x163634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15646 << 16));
    // 0x163638: 0x3442611c  ori         $v0, $v0, 0x611C
    ctx->pc = 0x163638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24860);
    // 0x16363c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16363cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x163640: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x163640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163644: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x163644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x163648: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x163648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16364c: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x16364cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x163650: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x163650u;
    {
        const bool branch_taken_0x163650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163650u;
        // 0x163654: 0xae000280  sw          $zero, 0x280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163650) {
            ctx->pc = 0x1636ACu;
            return;
        }
    }
    ctx->pc = 0x163658u;
}
