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

// Function: entry_00126f38
// Address: 0x126f38 - 0x126f60
void entry_00126f38_0x126f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126f38_0x126f38");
#endif

    ctx->pc = 0x126f38u;

    // 0x126f38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x126f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126f3c: 0x0  nop
    ctx->pc = 0x126f3cu;
    // NOP
    // 0x126f40: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x126f40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126f44: 0x0  nop
    ctx->pc = 0x126f44u;
    // NOP
    // 0x126f48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x126F48u;
    {
        const bool branch_taken_0x126f48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x126F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F48u;
        // 0x126f4c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f48) {
            ctx->pc = 0x126F60u;
            return;
        }
    }
    ctx->pc = 0x126F50u;
    // 0x126f50: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x126f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x126f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126f58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x126F58u;
    {
        const bool branch_taken_0x126f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F58u;
        // 0x126f5c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f58) {
            ctx->pc = 0x126F74u;
            return;
        }
    }
    ctx->pc = 0x126F60u;
}
