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

// Function: entry_00126d14
// Address: 0x126d14 - 0x126d2c
void entry_00126d14_0x126d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126d14_0x126d14");
#endif

    ctx->pc = 0x126d14u;

    // 0x126d14: 0x0  nop
    ctx->pc = 0x126d14u;
    // NOP
    // 0x126d18: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x126D18u;
    {
        const bool branch_taken_0x126d18 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x126D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D18u;
        // 0x126d1c: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d18) {
            ctx->pc = 0x126D2Cu;
            return;
        }
    }
    ctx->pc = 0x126D20u;
    // 0x126d20: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x126d20u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126d24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x126D24u;
    {
        const bool branch_taken_0x126d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D24u;
        // 0x126d28: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d24) {
            ctx->pc = 0x126D44u;
            return;
        }
    }
    ctx->pc = 0x126D2Cu;
}
