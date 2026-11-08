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

// Function: entry_0016b74c
// Address: 0x16b74c - 0x16b778
void entry_0016b74c_0x16b74c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b74c_0x16b74c");
#endif

    ctx->pc = 0x16b74cu;

    // 0x16b74c: 0xc6210298  lwc1        $f1, 0x298($s1)
    ctx->pc = 0x16b74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16b750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b754: 0x0  nop
    ctx->pc = 0x16b754u;
    // NOP
    // 0x16b758: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16b758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b75c: 0x0  nop
    ctx->pc = 0x16b75cu;
    // NOP
    // 0x16b760: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16B760u;
    {
        const bool branch_taken_0x16b760 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B760u;
        // 0x16b764: 0x3c023f35  lui         $v0, 0x3F35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16181 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b760) {
            ctx->pc = 0x16B778u;
            return;
        }
    }
    ctx->pc = 0x16B768u;
    // 0x16b768: 0x3c02bf35  lui         $v0, 0xBF35
    ctx->pc = 0x16b768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48949 << 16));
    // 0x16b76c: 0x344204f3  ori         $v0, $v0, 0x4F3
    ctx->pc = 0x16b76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1267);
    // 0x16b770: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B770u;
    {
        const bool branch_taken_0x16b770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B770u;
        // 0x16b774: 0xae220298  sw          $v0, 0x298($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b770) {
            ctx->pc = 0x16B780u;
            return;
        }
    }
    ctx->pc = 0x16B778u;
}
