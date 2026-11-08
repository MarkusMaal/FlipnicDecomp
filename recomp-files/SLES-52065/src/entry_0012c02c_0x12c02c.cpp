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

// Function: entry_0012c02c
// Address: 0x12c02c - 0x12c054
void entry_0012c02c_0x12c02c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c02c_0x12c02c");
#endif

    ctx->pc = 0x12c02cu;

    // 0x12c02c: 0x0  nop
    ctx->pc = 0x12c02cu;
    // NOP
    // 0x12c030: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12c030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12c034: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x12c034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c03c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x12c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x12c040: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12c040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12c044: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x12c044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12c048: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C048u;
    {
        const bool branch_taken_0x12c048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C048u;
        // 0x12c04c: 0x46010003  div.s       $f0, $f0, $f1 (Delay Slot)
        { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c048) {
            ctx->pc = 0x12C054u;
            return;
        }
    }
    ctx->pc = 0x12C050u;
    // 0x12c050: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12c050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x12c054u;
}
