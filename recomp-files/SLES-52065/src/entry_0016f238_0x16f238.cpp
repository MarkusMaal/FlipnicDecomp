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

// Function: entry_0016f238
// Address: 0x16f238 - 0x16f278
void entry_0016f238_0x16f238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f238_0x16f238");
#endif

    ctx->pc = 0x16f238u;

    // 0x16f238: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x16F238u;
    {
        const bool branch_taken_0x16f238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f238) {
            ctx->pc = 0x16F3F0u;
            return;
        }
    }
    ctx->pc = 0x16F240u;
    // 0x16f240: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x16f240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16f244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f248: 0x0  nop
    ctx->pc = 0x16f248u;
    // NOP
    // 0x16f24c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16f24cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16f250: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f250u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f254: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f258: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f25c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f260: 0x0  nop
    ctx->pc = 0x16f260u;
    // NOP
    // 0x16f264: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f268: 0x0  nop
    ctx->pc = 0x16f268u;
    // NOP
    // 0x16f26c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F26Cu;
    {
        const bool branch_taken_0x16f26c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F26Cu;
        // 0x16f270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f26c) {
            ctx->pc = 0x16F278u;
            return;
        }
    }
    ctx->pc = 0x16F274u;
    // 0x16f274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16f278u;
}
