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

// Function: entry_0017092c
// Address: 0x17092c - 0x170954
void entry_0017092c_0x17092c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017092c_0x17092c");
#endif

    ctx->pc = 0x17092cu;

    // 0x17092c: 0xc601024c  lwc1        $f1, 0x24C($s0)
    ctx->pc = 0x17092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170930: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x170930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x170934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170938: 0x0  nop
    ctx->pc = 0x170938u;
    // NOP
    // 0x17093c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17093cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170940: 0x0  nop
    ctx->pc = 0x170940u;
    // NOP
    // 0x170944: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x170944u;
    {
        const bool branch_taken_0x170944 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x170948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170944u;
        // 0x170948: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170944) {
            ctx->pc = 0x17097Cu;
            return;
        }
    }
    ctx->pc = 0x17094Cu;
    // 0x17094c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17094Cu;
    {
        const bool branch_taken_0x17094c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17094Cu;
        // 0x170950: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17094c) {
            ctx->pc = 0x17097Cu;
            return;
        }
    }
    ctx->pc = 0x170954u;
}
