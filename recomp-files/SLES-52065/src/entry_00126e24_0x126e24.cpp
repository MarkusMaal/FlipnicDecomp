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

// Function: entry_00126e24
// Address: 0x126e24 - 0x126e4c
void entry_00126e24_0x126e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126e24_0x126e24");
#endif

    ctx->pc = 0x126e24u;

    // 0x126e24: 0x0  nop
    ctx->pc = 0x126e24u;
    // NOP
    // 0x126e28: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x126e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x126e2c: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x126e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x126e30: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x126e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x126e34: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x126e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x126e38: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126E38u;
    {
        const bool branch_taken_0x126e38 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x126E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E38u;
        // 0x126e3c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e38) {
            ctx->pc = 0x126E4Cu;
            return;
        }
    }
    ctx->pc = 0x126E40u;
    // 0x126e40: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x126e40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126e44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x126E44u;
    {
        const bool branch_taken_0x126e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E44u;
        // 0x126e48: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e44) {
            ctx->pc = 0x126E64u;
            return;
        }
    }
    ctx->pc = 0x126E4Cu;
}
