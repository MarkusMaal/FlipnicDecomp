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

// Function: entry_00163b6c
// Address: 0x163b6c - 0x163bac
void entry_00163b6c_0x163b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163b6c_0x163b6c");
#endif

    ctx->pc = 0x163b6cu;

    // 0x163b6c: 0x8e630350  lw          $v1, 0x350($s3)
    ctx->pc = 0x163b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 848)));
    // 0x163b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163b74: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x163B74u;
    {
        const bool branch_taken_0x163b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B74u;
        // 0x163b78: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b74) {
            ctx->pc = 0x163C5Cu;
            return;
        }
    }
    ctx->pc = 0x163B7Cu;
    // 0x163b7c: 0x86830218  lh          $v1, 0x218($s4)
    ctx->pc = 0x163b7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 536)));
    // 0x163b80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163b84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x163b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x163b88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x163b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x163b8c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163B8Cu;
    {
        const bool branch_taken_0x163b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B8Cu;
        // 0x163b90: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b8c) {
            ctx->pc = 0x163BACu;
            return;
        }
    }
    ctx->pc = 0x163B94u;
    // 0x163b94: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x163b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x163b98: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x163b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163b9c: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x163b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163ba0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x163ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x163ba4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x163BA4u;
    {
        const bool branch_taken_0x163ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BA4u;
        // 0x163ba8: 0xe66002f0  swc1        $f0, 0x2F0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ba4) {
            ctx->pc = 0x163C1Cu;
            return;
        }
    }
    ctx->pc = 0x163BACu;
}
