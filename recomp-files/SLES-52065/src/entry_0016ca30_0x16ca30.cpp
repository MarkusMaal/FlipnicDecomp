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

// Function: entry_0016ca30
// Address: 0x16ca30 - 0x16ca70
void entry_0016ca30_0x16ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ca30_0x16ca30");
#endif

    ctx->pc = 0x16ca30u;

    // 0x16ca30: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x16ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x16ca34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16ca38: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16CA38u;
    {
        const bool branch_taken_0x16ca38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA38u;
        // 0x16ca3c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca38) {
            ctx->pc = 0x16CA70u;
            return;
        }
    }
    ctx->pc = 0x16CA40u;
    // 0x16ca40: 0xc6220210  lwc1        $f2, 0x210($s1)
    ctx->pc = 0x16ca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ca44: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x16ca48: 0xc6210224  lwc1        $f1, 0x224($s1)
    ctx->pc = 0x16ca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ca4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16ca4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16ca50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ca50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ca54: 0x0  nop
    ctx->pc = 0x16ca54u;
    // NOP
    // 0x16ca58: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x16ca58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x16ca5c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16ca5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16ca60: 0x0  nop
    ctx->pc = 0x16ca60u;
    // NOP
    // 0x16ca64: 0x0  nop
    ctx->pc = 0x16ca64u;
    // NOP
    // 0x16ca68: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16CA68u;
    {
        const bool branch_taken_0x16ca68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA68u;
        // 0x16ca6c: 0xe620022c  swc1        $f0, 0x22C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca68) {
            ctx->pc = 0x16CAA4u;
            return;
        }
    }
    ctx->pc = 0x16CA70u;
}
