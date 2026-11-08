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

// Function: entry_00163ca4
// Address: 0x163ca4 - 0x163cd8
void entry_00163ca4_0x163ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163ca4_0x163ca4");
#endif

    ctx->pc = 0x163ca4u;

    // 0x163ca4: 0x8e630340  lw          $v1, 0x340($s3)
    ctx->pc = 0x163ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163ca8: 0x8e82021c  lw          $v0, 0x21C($s4)
    ctx->pc = 0x163ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x163cac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163cb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163cb4: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x163CB4u;
    {
        const bool branch_taken_0x163cb4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x163CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CB4u;
        // 0x163cb8: 0xc4440000  lwc1        $f4, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cb4) {
            ctx->pc = 0x163CD8u;
            return;
        }
    }
    ctx->pc = 0x163CBCu;
    // 0x163cbc: 0xc6610344  lwc1        $f1, 0x344($s3)
    ctx->pc = 0x163cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163cc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163cc8: 0x0  nop
    ctx->pc = 0x163cc8u;
    // NOP
    // 0x163ccc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x163cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x163cd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163CD0u;
    {
        const bool branch_taken_0x163cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CD0u;
        // 0x163cd4: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cd0) {
            ctx->pc = 0x163CE0u;
            return;
        }
    }
    ctx->pc = 0x163CD8u;
}
