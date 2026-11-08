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

// Function: entry_0012bc08
// Address: 0x12bc08 - 0x12bc34
void entry_0012bc08_0x12bc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bc08_0x12bc08");
#endif

    ctx->pc = 0x12bc08u;

    // 0x12bc08: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x12bc08u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12bc0c: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x12bc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12bc10: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x12bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12bc14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12bc14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc18: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x12bc18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x12bc1c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x12bc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x12bc20: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x12bc20u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12bc24: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x12bc24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x12bc28: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x12bc28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12bc2c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x12BC2Cu;
    {
        const bool branch_taken_0x12bc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC2Cu;
        // 0x12bc30: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc2c) {
            ctx->pc = 0x12BC98u;
            return;
        }
    }
    ctx->pc = 0x12BC34u;
}
