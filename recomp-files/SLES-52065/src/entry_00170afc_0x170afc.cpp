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

// Function: entry_00170afc
// Address: 0x170afc - 0x170b10
void entry_00170afc_0x170afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170afc_0x170afc");
#endif

    ctx->pc = 0x170afcu;

    // 0x170afc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x170b00: 0xac207508  sw          $zero, 0x7508($at)
    ctx->pc = 0x170b00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x367508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367508u, _value); } while (0);
    // 0x170b04: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x170b04u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x170b08: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x170b0c: 0xe4207500  swc1        $f0, 0x7500($at)
    ctx->pc = 0x170b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x367500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367500u, _value); } while (0); }
    ctx->pc = 0x170b10u;
}
