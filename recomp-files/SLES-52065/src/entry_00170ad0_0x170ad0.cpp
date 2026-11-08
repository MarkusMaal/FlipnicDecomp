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

// Function: entry_00170ad0
// Address: 0x170ad0 - 0x170aec
void entry_00170ad0_0x170ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170ad0_0x170ad0");
#endif

    ctx->pc = 0x170ad0u;

    // 0x170ad0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x170ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170ad8: 0xac207500  sw          $zero, 0x7500($at)
    ctx->pc = 0x170ad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x367500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367500u, _value); } while (0);
    // 0x170adc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x170ae0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x170ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x170ae4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x170AE4u;
    {
        const bool branch_taken_0x170ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AE4u;
        // 0x170ae8: 0xe4207508  swc1        $f0, 0x7508($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 29960), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ae4) {
            ctx->pc = 0x170B10u;
            return;
        }
    }
    ctx->pc = 0x170AECu;
}
