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

// Function: entry_0013ada0
// Address: 0x13ada0 - 0x13adbc
void entry_0013ada0_0x13ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ada0_0x13ada0");
#endif

    ctx->pc = 0x13ada0u;

    // 0x13ada0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x13ada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ada4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x13ada4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ada8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13ada8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13adac: 0x0  nop
    ctx->pc = 0x13adacu;
    // NOP
    // 0x13adb0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13ADB0u;
    {
        const bool branch_taken_0x13adb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADB0u;
        // 0x13adb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13adb0) {
            ctx->pc = 0x13ADBCu;
            return;
        }
    }
    ctx->pc = 0x13ADB8u;
    // 0x13adb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13adb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13adbcu;
}
