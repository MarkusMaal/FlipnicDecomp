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

// Function: entry_00153590
// Address: 0x153590 - 0x1535c4
void entry_00153590_0x153590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153590_0x153590");
#endif

    ctx->pc = 0x153590u;

    // 0x153590: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x153590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153594: 0x0  nop
    ctx->pc = 0x153594u;
    // NOP
    // 0x153598: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153598u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15359c: 0x0  nop
    ctx->pc = 0x15359cu;
    // NOP
    // 0x1535a0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1535A0u;
    {
        const bool branch_taken_0x1535a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1535A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535A0u;
        // 0x1535a4: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535a0) {
            ctx->pc = 0x1535C8u;
            return;
        }
    }
    ctx->pc = 0x1535A8u;
    // 0x1535a8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1535a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1535ac: 0x0  nop
    ctx->pc = 0x1535acu;
    // NOP
    // 0x1535b0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1535B0u;
    {
        const bool branch_taken_0x1535b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1535B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535B0u;
        // 0x1535b4: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535b0) {
            ctx->pc = 0x1535C4u;
            return;
        }
    }
    ctx->pc = 0x1535B8u;
    // 0x1535b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1535b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1535bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1535BCu;
    {
        const bool branch_taken_0x1535bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1535bc) {
            ctx->pc = 0x1535CCu;
            return;
        }
    }
    ctx->pc = 0x1535C4u;
}
