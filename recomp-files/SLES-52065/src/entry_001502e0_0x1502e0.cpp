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

// Function: entry_001502e0
// Address: 0x1502e0 - 0x1502f8
void entry_001502e0_0x1502e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001502e0_0x1502e0");
#endif

    ctx->pc = 0x1502e0u;

    // 0x1502e0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1502e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1502e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1502e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1502e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1502e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1502ec: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1502ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1502f0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1502f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1502f4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1502f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->pc = 0x1502f8u;
}
