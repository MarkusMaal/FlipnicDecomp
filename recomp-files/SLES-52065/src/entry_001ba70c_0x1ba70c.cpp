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

// Function: entry_001ba70c
// Address: 0x1ba70c - 0x1ba734
void entry_001ba70c_0x1ba70c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba70c_0x1ba70c");
#endif

    ctx->pc = 0x1ba70cu;

    // 0x1ba70c: 0x1472823  subu        $a1, $t2, $a3
    ctx->pc = 0x1ba70cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1ba710: 0xc71823  subu        $v1, $a2, $a3
    ctx->pc = 0x1ba710u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1ba714: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1ba714u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba71c: 0x0  nop
    ctx->pc = 0x1ba71cu;
    // NOP
    // 0x1ba720: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ba724: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba728: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x1ba728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ba72c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BA72Cu;
    {
        const bool branch_taken_0x1ba72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA72Cu;
        // 0x1ba730: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba72c) {
            ctx->pc = 0x1BA758u;
            return;
        }
    }
    ctx->pc = 0x1BA734u;
}
