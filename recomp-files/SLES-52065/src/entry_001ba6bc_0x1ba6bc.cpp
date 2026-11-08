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

// Function: entry_001ba6bc
// Address: 0x1ba6bc - 0x1ba6e4
void entry_001ba6bc_0x1ba6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba6bc_0x1ba6bc");
#endif

    ctx->pc = 0x1ba6bcu;

    // 0x1ba6bc: 0x1272823  subu        $a1, $t1, $a3
    ctx->pc = 0x1ba6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1ba6c0: 0x1071823  subu        $v1, $t0, $a3
    ctx->pc = 0x1ba6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1ba6c4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1ba6c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba6c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba6c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba6cc: 0x0  nop
    ctx->pc = 0x1ba6ccu;
    // NOP
    // 0x1ba6d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba6d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ba6d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba6d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba6d8: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x1ba6d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1ba6dc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1BA6DCu;
    {
        const bool branch_taken_0x1ba6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6DCu;
        // 0x1ba6e0: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6dc) {
            ctx->pc = 0x1BA758u;
            return;
        }
    }
    ctx->pc = 0x1BA6E4u;
}
