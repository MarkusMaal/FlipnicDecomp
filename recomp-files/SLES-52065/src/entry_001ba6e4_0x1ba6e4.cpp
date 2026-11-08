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

// Function: entry_001ba6e4
// Address: 0x1ba6e4 - 0x1ba70c
void entry_001ba6e4_0x1ba6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba6e4_0x1ba6e4");
#endif

    ctx->pc = 0x1ba6e4u;

    // 0x1ba6e4: 0x1272821  addu        $a1, $t1, $a3
    ctx->pc = 0x1ba6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1ba6e8: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x1ba6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1ba6ec: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1ba6ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba6f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba6f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba6f4: 0x0  nop
    ctx->pc = 0x1ba6f4u;
    // NOP
    // 0x1ba6f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba6f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ba6fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba6fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba700: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x1ba700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1ba704: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1BA704u;
    {
        const bool branch_taken_0x1ba704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA704u;
        // 0x1ba708: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba704) {
            ctx->pc = 0x1BA758u;
            return;
        }
    }
    ctx->pc = 0x1BA70Cu;
}
