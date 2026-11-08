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

// Function: entry_00137de4
// Address: 0x137de4 - 0x137e08
void entry_00137de4_0x137de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137de4_0x137de4");
#endif

    ctx->pc = 0x137de4u;

    // 0x137de4: 0x0  nop
    ctx->pc = 0x137de4u;
    // NOP
    // 0x137de8: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x137de8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x137dec: 0x14e80006  bne         $a3, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137DECu;
    {
        const bool branch_taken_0x137dec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x137DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DECu;
        // 0x137df0: 0x252b0004  addiu       $t3, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137dec) {
            ctx->pc = 0x137E08u;
            return;
        }
    }
    ctx->pc = 0x137DF4u;
    // 0x137df4: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x137df4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x137df8: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x137df8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137dfc: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x137dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x137e00: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x137E00u;
    {
        const bool branch_taken_0x137e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E00u;
        // 0x137e04: 0xe4e1000c  swc1        $f1, 0xC($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e00) {
            ctx->pc = 0x137EA8u;
            return;
        }
    }
    ctx->pc = 0x137E08u;
}
